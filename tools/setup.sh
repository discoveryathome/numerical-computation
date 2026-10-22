#!/bin/sh
set -eu
cd "$(dirname "$0")/.."
if [ ! -x .venv/bin/python ]; then uv venv .venv --python 3.12; fi
uv pip install --python .venv/bin/python -r research/qualification-20261022/requirements.txt
mkdir -p build
# Keep historical filenames; ctypes loads ELF on Linux and Mach-O on macOS.
clang -O3 -std=c11 -fno-fast-math -ffp-contract=off -shared -fPIC src/kernels.c -lm -o build/kernels.dylib
clang -O3 -std=c11 -fno-fast-math -ffp-contract=off -shared -fPIC research/qualification-20261022/qualified.c -lm -o build/qualified.dylib
.venv/bin/python tools/check.py --quick
