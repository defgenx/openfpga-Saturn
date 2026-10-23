#!/usr/bin/env python3
"""Prefix every module, typedef and file-scope localparam of FX68K sources so two copies can share a build.
usage: rename.py <prefix> <out_dir> <file>...   (the top module fx68k becomes <prefix>fx68k)"""
import re, sys, os
prefix, outdir, files = sys.argv[1], sys.argv[2], sys.argv[3:]
src = {f: open(f).read() for f in files}
names = set()
for t in src.values():
    names |= set(re.findall(r'^\s*module\s+(\w+)', t, re.M))
    names |= set(re.findall(r'^\s*\}\s*(\w+)\s*;', t, re.M))              # typedef struct {...} name;
    for m in re.finditer(r'^localparam\b(.*?);', t, re.M | re.S):         # file-scope localparams
        names |= set(re.findall(r'(\w+)\s*=', m.group(1)))
names -= {'fx68kTop'}
pat = re.compile(r'\b(' + '|'.join(sorted(names, key=len, reverse=True)) + r')\b')
macros = set()
for t in src.values():
    macros |= set(re.findall(r'^`define\s+(\w+)', t, re.M))
mpat = re.compile(r'`(define\s+|undef\s+|)(' + '|'.join(sorted(macros, key=len, reverse=True)) + r')\b')
os.makedirs(outdir, exist_ok=True)
for f, t in src.items():
    # keep $readmemb file names and `define macros untouched
    t = pat.sub(lambda m: prefix + m.group(1), t)
    t = mpat.sub(lambda m: '`' + m.group(1) + prefix + m.group(2), t)
    open(os.path.join(outdir, os.path.basename(f)), 'w').write(t)
print(len(names), 'identifiers prefixed')
