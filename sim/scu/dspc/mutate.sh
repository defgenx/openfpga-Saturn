#!/bin/sh
# Mutation check: each sed expression breaks SCUP2_DSPC; the bench must FAIL on all of them.
F=../../../src/fpga/saturn/Saturn/SCUP2/SCUP2_DSPC.sv
cp $F $F.orig
n=0; miss=0
while IFS= read -r m; do
  [ -z "$m" ] && continue
  n=$((n+1)); cp $F.orig $F; perl -0pi -e "$m" $F
  cmp -s $F $F.orig && { echo "no-op mutation: $m"; continue; }
  rm -rf build; if make run SEEDS=1 >/dev/null 2>&1; then echo "SURVIVED: $m"; miss=$((miss+1)); fi
done <<'M'
s/V <= V \| UNF31;/V <= V | OVF31;/
s/\(yr & IC\[15:14\] == hb\)/(yr \& IC[15:14] != hb)/
s/if \(d_p  & ~\(cA & IC\[24\]\)\)/if (d_p)/
s/if \(en2 && ph < 3'd2\) nxt = 3'd2;/if (0) nxt = 3'd2;/
s/if \(IC\[19\]\) RY <= RAMQ;/if (IC[19] \& 0) RY <= RAMQ;/
s/if \(d_ctw\[2\]\) CT2 <= D1T\[5:0\];/if (d_ctw[2]) CT2 <= D1T[4:0];/
s/dma_ct = \{4\{~DS\[2\]\}\}/dma_ct = {4{1'b1}}/
s/if \(LOP != 12'd0\) PC <= TOP;/if (LOP != 12'd1) PC <= TOP;/
s/\(ALU_SUB = IC\[29:26\] == 4'b0101\)/(ALU_SUB = 1'b0)/
s/assign DMAC = IC\[17:14\];/assign DMAC = IC[16:13];/
s/if \(cL & IC\[27\]\) begin/if (cL \& ~IC[27]) begin/
s/\(DMA_EN & CE_R\) begin\n\t\t\t\tif \(dma_ct\[0\]\)/(DMA_EN \& CE_R \& 1'b0) begin\n\t\t\t\tif (dma_ct[0])/
M
cp $F.orig $F; rm -f $F.orig; rm -rf build
echo "mutations: $n, survived: $miss"
