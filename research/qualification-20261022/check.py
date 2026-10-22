"""Integrity and focused qualification checks; no benchmark or result rewriting."""
from pathlib import Path
import hashlib
import json
import subprocess
import sys

import numpy as np

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
manifest = json.loads((HERE/"manifest.json").read_text())
for name, expected in manifest["sha256"].items():
    assert hashlib.sha256((ROOT/name).read_bytes()).hexdigest() == expected, name
results = json.loads((HERE/"run-01/results.json").read_text())
for name, expected in results["source_sha256"].items():
    assert hashlib.sha256((ROOT/name).read_bytes()).hexdigest() == expected, name
inputs = np.load(HERE/"run-01/inputs.npy", allow_pickle=False)
assert hashlib.sha256(inputs.astype("<f8").tobytes()).hexdigest() == results["accuracy"]["input_sha256_le_f64"]
assert len(inputs) == results["accuracy"]["points_per_order"]
assert results["accuracy"]["oracle_disagreements"] == []
subprocess.run([sys.executable, "tools/check.py"], cwd=ROOT, check=True)
subprocess.run([sys.executable, "-m", "pytest", "-q", str(HERE/"test_qualification.py")], cwd=ROOT, check=True)
print("PASS: qualification artifacts; inherited phi3 disqualified; independent review pending; intake open")
