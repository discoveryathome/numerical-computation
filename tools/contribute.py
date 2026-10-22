"""Bounded sampled accuracy handoff; a null/improvement-free result is complete."""
from pathlib import Path
import argparse, hashlib, json, platform, random, subprocess, sys, time
ROOT=Path(__file__).resolve().parents[1]
Q=ROOT/'research/qualification-20261022'
sys.path.insert(0,str(Q))
import qualify as q

def main():
    p=argparse.ArgumentParser()
    p.add_argument('--order',type=int,choices=[1,2,3],default=3)
    p.add_argument('--seed',type=int,required=True)
    p.add_argument('--out',required=True)
    a=p.parse_args();dest=(ROOT/a.out).resolve()
    if not dest.is_relative_to(ROOT/'research') or dest.exists():
        p.error('Choose a new research/<session> output directory')
    start=time.perf_counter();rng=random.Random(a.seed);q.load()
    values=[0.,-0.,-4.,4.,float.fromhex('0x1.030438d414148p-1')]
    values += [rng.uniform(-4,4) for _ in range(128)]
    values += [rng.choice([-1,1])*2.**rng.uniform(-1074,2) for _ in range(128)]
    x=q.np.array(values);out=q.phi(x,a.order,'piecewise')
    ref=q.np.array([q.mpref(z,a.order) for z in x])
    dec=q.np.array([q.decref(z,a.order) for z in x]);assert q.np.array_equal(ref,dec)
    metrics=q.metrics(out,ref,x);assert metrics['invalid_count']==0 and metrics['max_ulp_finite_positive']<=4
    cert={'order':a.order,'cases':[{'x_hex':float(z).hex(),'y_hex':float(y).hex()} for z,y in zip(x,out)]}
    dest.mkdir();cp=dest/'candidate.json';cp.write_text(json.dumps(cert,indent=2)+'\n')
    subprocess.run([sys.executable,str(ROOT/'tools/verify_candidate.py'),str(cp)],check=True)
    handoff={'kind':'sampled accuracy replication, not a proof or novel result','seed':a.seed,
             'order':a.order,'metrics':metrics,'inputs_sha256':q.digest(x),'exposed_family':True,
             'elapsed_seconds':time.perf_counter()-start,'platform':platform.platform(),
             'sources':{str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest()
                        for p in [Q/'qualified.c',Q/'bounds.py',Q/'certificate.json',Path(__file__)]},
             'contributor_provenance':'Fill in identity/model and prior exposure',
             'independent_review':False,'improvement_required':False,
             'next_step':'Submit complete folder; for proof work audit BOUND.md; for speed work predeclare full application and strong baseline.'}
    (dest/'handoff.json').write_text(json.dumps(handoff,indent=2)+'\n')
    print(json.dumps(handoff))

if __name__=='__main__':main()
