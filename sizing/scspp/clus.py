import re,sys,collections
agg=collections.Counter();reg=collections.Counter()
def cl(n):
    n=n.replace('SCSPP:scsp|','')
    m=re.search(r'SCSPP_\w+:(\w+)\|(?:altsyncram|altdpram)',n)
    if m: n='RAM '+m.group(1)
    if re.match(r'RAM (MEMS|TEMP|MIXS|EFREG|COEF|MADRS|MPRO|STACK)',n) or re.match(r'(SFT_REG|DSP_|INPUTS|Y_REG|FRC_REG|ADRS_REG|MDEC_CT|MPRO|MEMS|TEMP|MIXS|EFREG|EXTS|COEF|SOUSX|SOUSY|MADRS)',n): return 'DSP+stack'
    if re.match(r'(DIR_ACC|EFF_ACC|SUM_|SOUND|OP7\.SD|OP6\.LEVEL|OP5\.EVOL|OP5\.WD|OP6\.WD|DSEL|MV_T|<port>)',n): return 'mix/out/<port>'
    if re.match(r'(MEM_|REG_|DMA_|SCU_|SCPU_|A$|DO|SCDO|DQM|WE_N|SCDTACK|IO_ST|CE_|CLK_DIV|WD_READ)',n) or n.startswith('RAM SCR_MIR'): return 'bus/dma'
    if re.match(r'(CR\d|TMR|CNT)',n): return 'CR/timers/irq'
    if n.startswith('RAM '): return 'RAM-if slot'
    return 'slot pipeline'
for l in open(sys.argv[1]).read().split('\n')[3:]:
    m=re.match(r'(.*?)\s+([\d.]+)\s+(\d+)$',l)
    if not m: continue
    c=cl(m.group(1)); agg[c]+=float(m.group(2)); reg[c]+=int(m.group(3))
for k,v in agg.most_common(): print('%-20s %7.0f ALUT %5d regs'%(k,v,reg[k]))
