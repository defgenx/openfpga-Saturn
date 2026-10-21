#!/usr/bin/env python3
"""Compare the LLE and HLE logs of the same script, line by line. Usage: compare.py lle.log hle.log [--verbose]"""
import sys

def load(p):
    return [l.rstrip("\n") for l in open(p)]

def main():
    a, b = load(sys.argv[1]), load(sys.argv[2])
    n = max(len(a), len(b))
    diffs = 0
    for i in range(n):
        x = a[i] if i < len(a) else "<missing>"
        y = b[i] if i < len(b) else "<missing>"
        if x != y:
            diffs += 1
            print("%4d LLE %s" % (i, x[:240]))
            print("     HLE %s" % y[:240])
    print("%d lines, %d differ" % (n, diffs))

main()
