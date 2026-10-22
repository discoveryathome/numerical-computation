"""Post-selection accuracy probe; never retunes the selected candidate."""
from pathlib import Path
import json,math,sys,random,time
import numpy as np
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'src'))
import trial
r=json.loads((ROOT/'results/trial.json').read_text());lib=trial.libload();rng=random.Random(2026102299);start=time.time();report={}
for k in [1,2,3]:
 c=r['selected'][str(k)];t=c['threshold']
 x=list(trial.values(2026102299+k,n=2048))
 # Explicit stress immediately above/below selected threshold and its negative.
 for sign in [-1,1]:
  for side in [-math.inf,math.inf]:
   v=sign*t
   for j in range(1000):v=math.nextafter(v,side);x.append(v)
 x=np.array(x);y,_=trial.evaluate(lib,x,k,c['mode']);reference=np.array([trial.mpref(z,k) for z in x])
 error=trial.errors(y,reference);dist=np.abs(y.view(np.int64)-reference.view(np.int64));bad=np.flatnonzero(dist>16)
 witnesses=[]
 for i in bad[:10]:
  assert trial.decref(x[i],k)==reference[i]
  witnesses.append({'x_hex':float(x[i]).hex(),'y_hex':float(y[i]).hex(),'reference_hex':float(reference[i]).hex(),'ulp':int(dist[i])})
 report[k]={'samples':len(x),'candidate':c,**error,'witnesses':witnesses}
result={'kind':'post-selection fresh-seed and dense branch-boundary probe','seed':2026102299,'elapsed_seconds':time.time()-start,'selection_changed':False,'results':report,'passes_sampled_gate':all(x['over_16_ulp']==0 for x in report.values())}
(ROOT/'results/robustness.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result))
