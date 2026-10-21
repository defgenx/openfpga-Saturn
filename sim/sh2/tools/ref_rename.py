#!/usr/bin/env python3
"""ref_rename.py <in> <out> -- copy a file with golden module/package names prefixed REF_."""
import os, re, sys
NAMES = r'\b(SH_core|SH2_regfile|SH_regram|SH7604\w*|SH2_PKG\w*|CACHE_RAM|CACHE_TAG|CACHE_VALID|CACHE_LRU|sh2_env)\b'
def rename(text):
    return re.sub(NAMES, lambda m: 'REF_' + m.group(1), text)
if __name__ == '__main__':
    open(sys.argv[2], 'w').write(rename(open(sys.argv[1]).read()))
