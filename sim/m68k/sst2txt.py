#!/usr/bin/env python3
"""Convert SingleStepTests 68000 .json.gz to the flat text format read by tb_sst.cpp.
usage: sst2txt.py <out.txt> <count_per_file> <file.json.gz>...    (first N tests of each file)"""
import gzip, json, sys
out, n, files = sys.argv[1], int(sys.argv[2]), sys.argv[3:]
R = ['d%d' % i for i in range(8)] + ['a%d' % i for i in range(7)] + ['usp', 'ssp', 'sr', 'pc']
with open(out, 'w') as o:
    for f in files:
        for t in json.load(gzip.open(f))[:n]:
            i, fi = t['initial'], t['final']
            o.write('T %s\n' % t['name'].replace(' ', '_'))
            o.write('I ' + ' '.join('%x' % i[k] for k in R) + ' %x %x\n' % tuple(i['prefetch']))
            o.write('M %d ' % len(i['ram']) + ' '.join('%x:%x' % (a, b) for a, b in i['ram']) + '\n')
            o.write('L %d\n' % t['length'])
            tx = t['transactions']
            o.write('X %d ' % len(tx) + ' '.join(
                ('n %d' % e[1]) if e[0] == 'n' else
                ('%s %d %d %x %s %x' % (e[0], e[1], e[2], e[3], 'w' if e[4] == '.w' else 'b', e[5])) for e in tx) + '\n')
            o.write('F ' + ' '.join('%x' % fi[k] for k in R[:-1]) + '\n')
            o.write('G %d ' % len(fi['ram']) + ' '.join('%x:%x' % (a, b) for a, b in fi['ram']) + '\n')
