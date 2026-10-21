# Print VIRTUAL_PIN assignments for every port of mem_pocket except dram_clk (DDIO output needs a real pin).
import re, sys
t = open(sys.argv[1]).read()
t = t[t.index(') (') + 3:]
t = t[:t.index('\n);')]
t = re.sub(r'//.*', '', t)
t = re.sub(r'\[[^\]]*\]', '', t)
for d in t.split(','):
    m = re.findall(r'[A-Za-z_]\w*', d)
    if m and m[-1] not in ('dram_clk',):
        print('set_instance_assignment -name VIRTUAL_PIN ON -to %s' % m[-1])
