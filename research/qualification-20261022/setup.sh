#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/../.."
if [[ ! -x .venv/bin/python ]]; then
    uv venv .venv --python 3.12
fi
uv pip install --python .venv/bin/python -r research/qualification-20261022/requirements.txt
mkdir -p build
# Compile the frozen source; do not invoke the original generator/trial writer.
clang -O3 -std=c11 -fno-fast-math -ffp-contract=off -shared -fPIC src/kernels.c -o build/kernels.dylib
.venv/bin/python research/qualification-20261022/bounds.py --verify
.venv/bin/python research/qualification-20261022/check.py
