"""Scalar phi_1/phi_2/phi_3 accuracy-cost calibration; not a full integrator."""
from pathlib import Path
from decimal import Decimal, localcontext
import argparse, ctypes as C, json, math, platform, random, statistics, subprocess, time
import mpmath as mp
import numpy as np
ROOT=Path(__file__).resolve().parents[1]
DEGREES=[4,6,8,10,12,14,16,18]
THRESHOLDS=[0.015625,0.0625,0.25,0.5,1.,2.]
CONFIGS=[{'name':'stable_baseline','degree':18,'threshold':1.}, {'name':'naive_negative_control','degree':-1,'threshold':0.}, {'name':'expm1_control','degree':-2,'threshold':0.}]+[{'name':f'd{d}_t{t}','degree':d,'threshold':t} for d in DEGREES for t in THRESHOLDS]

def generate():
    parts=['#include <math.h>\n#include <stddef.h>\n']
    for order in [1,2,3]:
        for idx,cfg in enumerate(CONFIGS):
            parts.append(f'static double f{order}_{idx}(double x) {{ if(x==0.) return {float(1/math.factorial(order)).hex()};\n')
            d=cfg['degree']; t=cfg['threshold']
            if d>=0:
                parts.append(f'if(fabs(x)<={t.hex()}) {{ double p={float(1/math.factorial(d+order)).hex()};\n')
                for k in range(d-1,-1,-1):parts.append(f'p=p*x+{float(1/math.factorial(k+order)).hex()};\n')
                parts.append('return p;}\n')
            exp='(exp(x)-1.)' if d==-1 else 'expm1(x)'
            expr=[None,f'{exp}/x',f'({exp}-x)/(x*x)',f'({exp}-x-0.5*x*x)/(x*x*x)'][order]
            parts.append('return '+expr+';}\n')
    parts.append('double run(const double*x,size_t n,int order,int mode,int reps,double*out){ double (*f)(double)=0;\n')
    for order in [1,2,3]:
        parts.append(f'if(order=={order})switch(mode){{\n')
        for idx in range(len(CONFIGS)):parts.append(f'case {idx}:f=f{order}_{idx};break;\n')
        parts.append('}\n')
    parts.append('if(!f)return NAN;double s=0.; for(int r=0;r<reps;r++)for(size_t i=0;i<n;i++){out[i]=f(x[i]);s+=out[i];}return s;}\n')
    (ROOT/'src/kernels.c').write_text(''.join(parts))
    (ROOT/'build').mkdir(exist_ok=True)
    subprocess.run(['clang','-O3','-std=c11','-fno-fast-math','-ffp-contract=off','-shared','-fPIC',str(ROOT/'src/kernels.c'),'-o',str(ROOT/'build/kernels.dylib')],check=True)

def libload():
    lib=C.CDLL(str(ROOT/'build/kernels.dylib'));lib.run.argtypes=[C.c_void_p,C.c_size_t,C.c_int,C.c_int,C.c_int,C.c_void_p];lib.run.restype=C.c_double;return lib

def values(seed,n=900):
    r=random.Random(seed)
    x=[0.,-0.,-4.,4.]+[r.uniform(-4,4) for _ in range(n)]
    x += [r.choice([-1,1])*2.**r.uniform(-100,2) for _ in range(n)]
    for t in THRESHOLDS:
        for s in [-1,1]:
            a=s*t;x.extend([math.nextafter(a,-math.inf),a,math.nextafter(a,math.inf)])
    return np.array(x,dtype=np.float64)

def mpref(x,k,dps=100):
    with mp.workdps(dps):
        z=mp.mpf(float(x))
        if abs(z)<mp.mpf('0.25'):
            # Entire series avoids cancellation even at subnormal-sized arguments.
            return float(mp.fsum(z**j/mp.factorial(j+k) for j in range(90)))
        return float((mp.exp(z)-mp.fsum(z**j/mp.factorial(j) for j in range(k)))/z**k)

def decref(x,k):
    with localcontext() as ctx:
        ctx.prec=110;z=Decimal.from_float(float(x))
        if abs(z)<Decimal('0.25'):
            term=Decimal(1)/math.factorial(k);total=term
            for j in range(1,100):term*=z/Decimal(j+k);total+=term
            return float(total)
        return float((z.exp()-sum(z**j/Decimal(math.factorial(j)) for j in range(k)))/z**k)

def evaluate(lib,x,k,mode,reps=1):
    out=np.empty_like(x);t=time.perf_counter();lib.run(x.ctypes.data,len(x),k,mode,reps,out.ctypes.data)
    return out,(time.perf_counter()-t)/(len(x)*reps)*1e9

def errors(y,ref):
    # Integer ULP distance from the rounded high-precision reference. All phi values positive.
    if not np.all(np.isfinite(y)) or np.any(y<0):return {'max_ulp':10**30,'over_16_ulp':int(len(y)),'max_relative':1e300}
    dist=np.abs(y.view(np.int64)-ref.view(np.int64))
    return {'max_ulp':int(max(dist)),'over_16_ulp':int(sum(dist>16)),'max_relative':float(max(abs((y-ref)/ref)))}

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--verify-only',action='store_true');args=ap.parse_args()
    started=time.time(); generate();lib=libload();x=values(2026102211);h=values(2026102212)
    refs={k:np.array([mpref(z,k) for z in x]) for k in [1,2,3]}
    h_ref={k:np.array([mpref(z,k) for z in h]) for k in [1,2,3]}
    disagreement=[]
    for k in refs:
        for panel,rr in [(x,refs[k]),(h,h_ref[k])]:
            for i,z in enumerate(panel):
                if decref(z,k)!=rr[i]:disagreement.append([k,float(z).hex()])
    assert not disagreement,disagreement[:3]
    rows=[]; selected={};held={}; raw={};rng=random.Random(550)
    for k in refs:
        panel=[]
        for i,cfg in enumerate(CONFIGS):
            out,_=evaluate(lib,x,k,i);e=errors(out,refs[k]);panel.append({'order':k,'mode':i,**cfg,**e})
        feasible=[r for r in panel if r['max_ulp']<=16 and r['degree']!=-1]
        for r in panel:r['timings_ns']=[]
        # Same compiled-loop ABI, randomized order, three development measurements.
        for _ in range(3 if not args.verify_only else 0):
            order=feasible.copy();rng.shuffle(order)
            for row in order:row['timings_ns'].append(evaluate(lib,x,k,row['mode'],64)[1])
        if args.verify_only:
            old=json.loads((ROOT/'results/trial.json').read_text());choice=old['selected'][str(k)]['mode']
        else:choice=min(feasible,key=lambda r:statistics.median(r['timings_ns']))['mode']
        selected[k]={'mode':choice,**CONFIGS[choice]}
        if not args.verify_only:(ROOT/'results/selection.json').write_text(json.dumps(selected,indent=2)+'\n')
        hh=[]
        for i in sorted({0,1,2,choice}):
            out,_=evaluate(lib,h,k,i);e=errors(out,h_ref[k]);worst=int(np.argmax(abs(out-h_ref[k])))
            hh.append({'mode':i,**CONFIGS[i],**e,'worst_absolute_input_hex':float(h[worst]).hex(),'worst_absolute_output_hex':float(out[worst]).hex(),'reference_hex':float(h_ref[k][worst]).hex()})
        held[k]=hh;rows+=panel
        if not args.verify_only:
            samples={'baseline':[],'baseline_AA':[],'selected':[]}
            for _ in range(11):
                order=list(samples);rng.shuffle(order)
                for name in order:samples[name].append(evaluate(lib,h,k,choice if name=='selected' else 0,128)[1])
            raw[k]={key:{'median_ns':statistics.median(v),'samples_ns':v} for key,v in samples.items()}
    assert any(r['over_16_ulp'] for panel in held.values() for r in panel if r['degree']==-1)
    if args.verify_only:
        assert all(r['over_16_ulp']==0 for k,panel in held.items() for r in panel if r['mode']==selected[k]['mode'])
        print(json.dumps({'oracle_agreement':True,'reference_values':3*(len(x)+len(h)),'selected_holdout_accuracy_pass':True}));return
    result={'kind':'author-run scalar-kernel calibration','machine':platform.platform(),'elapsed_seconds':time.time()-started,'accuracy_ceiling_ulp':16,'domain':'finite binary64 x in [-4,4]; phi_k(0)=1/k!; tests sampled, no all-input proof','development_seed':2026102211,'heldout_seed':2026102212,'samples_per_panel':len(x),'oracle_agreement':{'mpmath_dps':100,'decimal_digits':110,'checked_values':3*(len(x)+len(h)),'disagreements':disagreement},'development':rows,'selected':selected,'heldout':held,'timings':raw,'interpretation':'Known Taylor/expm1 tuning, not novel numerical analysis; no comparison with optimized production phi library or end-to-end ODE solver yet.'}
    (ROOT/'results/trial.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({'selected':selected,'heldout':held,'elapsed_seconds':result['elapsed_seconds']}))
if __name__=='__main__':main()
