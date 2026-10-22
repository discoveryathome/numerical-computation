from pathlib import Path
import argparse,json,math,struct,sys
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'src'))
from trial import mpref,decref
p=argparse.ArgumentParser();p.add_argument('candidate');a=p.parse_args()
r=json.loads(Path(a.candidate).read_text());k=r['order'];assert k in (1,2,3);assert r['cases'],'Empty certificate'
worst=0
for row in r['cases']:
 x=float.fromhex(row['x_hex']);y=float.fromhex(row['y_hex'])
 assert math.isfinite(x) and -4<=x<=4 and math.isfinite(y) and y>0,'Outside domain or invalid phi value'
 ref=mpref(x,k);assert ref==decref(x,k),'Independent reference disagreement'
 dist=abs(struct.unpack('>Q',struct.pack('>d',y))[0]-struct.unpack('>Q',struct.pack('>d',ref))[0]);worst=max(worst,dist)
 assert dist<=16,('Sample exceeds fixed 16-ULP gate',row,dist)
print(f'PASS: {len(r["cases"])} samples, worst {worst} ULP; sampled evidence, not an all-input proof')
