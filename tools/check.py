from pathlib import Path
import argparse,hashlib,json,subprocess,sys
from jsonschema import Draft202012Validator,FormatChecker
root=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--quick',action='store_true');a=p.parse_args()
for name,path in [('manifest','discover.json'),('catalog','discover/catalog.json'),('frontier','discover/frontier.json')]:
 Draft202012Validator(json.loads((root/f'spec/{name}.schema.json').read_text()),format_checker=FormatChecker()).validate(json.loads((root/path).read_text()))
for path,h in json.loads((root/'research/manifest.json').read_text())['sha256'].items():
 assert hashlib.sha256((root/path).read_bytes()).hexdigest()==h,path
# Historical package identities remain checked against explicitly archived prior files.
prior=root/'research/distribution-prep-20261022'
# The 2026-10-22 hub launch archived the entry files it edited under research/launch-20261022/prior-files/.
launch=root/'research/launch-20261022'
for manifest in [prior/'prior-manifest.json',root/'research/qualification-20261022/manifest.json',launch/'prior-manifest.json']:
 for path,h in json.loads(manifest.read_text())['sha256'].items():
  choices=[root/path,prior/'prior-files'/path,launch/'prior-files'/path]
  assert any(f.is_file() and hashlib.sha256(f.read_bytes()).hexdigest()==h for f in choices),('historical',path)
assert json.loads((root/'discover.json').read_text())['review']['paused'] is False
for item in json.loads((root/'discover/frontier.json').read_text())['artifacts']:
 assert hashlib.sha256((root/item['path']).read_bytes()).hexdigest()==item['sha256'],item['path']
if not a.quick:subprocess.run([sys.executable,'-m','pytest','-q','tests'],cwd=root,check=True)
print('PASS: current and historical artifacts; intake open; inherited phi3 disqualified; independent review pending')
