import sys,math
from pathlib import Path
import numpy as np
import pytest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'src'))
import trial
@pytest.mark.parametrize('k',[1,2,3])
def test_independent_references(k):
    for x in [0.,2**-100,-2**-100,-4.,4.,0.25,math.nextafter(0.5,0.)]:
        assert trial.mpref(x,k)==trial.decref(x,k)
@pytest.mark.parametrize('k',[1,2,3])
def test_stable_control(k):
    lib=trial.libload();x=trial.values(723,80);ref=np.array([trial.mpref(z,k) for z in x])
    y,_=trial.evaluate(lib,x,k,0);assert trial.errors(y,ref)['max_ulp']<=16
    bad,_=trial.evaluate(lib,x,k,1);assert trial.errors(bad,ref)['over_16_ulp']>0
def test_origin_and_threshold_neighbors():
    lib=trial.libload()
    for k in [1,2,3]:
        out,_=trial.evaluate(lib,np.array([0.,-0.]),k,0)
        assert np.all(out==1/math.factorial(k))
