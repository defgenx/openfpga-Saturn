#!/usr/bin/env python3
"""gen_env.py <template> <pair_inst.inc> <out.sv> [ref]  -- expand the env template (ref: golden names)."""
import os, sys
sys.path.insert(0, os.path.dirname(__file__))
from ref_rename import rename
tpl, inc, out = sys.argv[1:4]
s = open(tpl).read().replace('`include "SH_PAIR_INST"', open(inc).read())
if len(sys.argv) > 4 and sys.argv[4] == 'ref':
    s = rename(s)
open(out, 'w').write(s)
