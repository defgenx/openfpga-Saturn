#!/bin/bash
# Stimulus-quality check: apply single-line mutations to a copy of the golden RTL and make sure
# the differential bench catches each. usage: ./mutate.sh   (prints caught/SURVIVED per mutation)
cd "$(dirname "$0")"
ORIG=$PWD/../../ref/Saturn_MiSTer/rtl/Saturn/SCU
T=$(mktemp -d)
i=0
while IFS='|' read -r f sub; do
  [ -z "$f" ] && continue
  i=$((i+1)); D=$T/m$i; mkdir -p $D; cp $ORIG/*.sv $D/
  perl -0pi -e "$sub" "$D/$f"
  cmp -s "$D/$f" "$ORIG/$f" && { echo "mut $i: NOT APPLIED"; continue; }
  make B=$T/b$i SRC=$D $T/b$i/slow0/Vtb_scu $T/b$i/dsp/Vtb_dsp >/dev/null 2>&1
  res=SURVIVED
  for s in 1 2 3 4 5 6; do
    o=$($T/b$i/slow0/Vtb_scu $s 3000000 2>&1 | grep -E "^MISMATCH" | head -1); [ -n "$o" ] && { res="caught(scu $s: $o)"; break; }
    o=$($T/b$i/dsp/Vtb_dsp $s 3000000 2>&1 | grep -E "^MISMATCH" | head -1); [ -n "$o" ] && { res="caught(dsp $s: $o)"; break; }
  done
  echo "mut $i: $res  <$sub>"
done <<'LIST'
SCU.sv|s/DMA_BUF_SIZE < 3'd4 && !DMA_DSP/DMA_BUF_SIZE <= 3'd4 \&\& !DMA_DSP/
SCU.sv|s/if \(CBUS_IND_POS == 3'd3\) begin/if (CBUS_IND_POS == 3'd4) begin/
SCU.sv|s/4'hB: if \(TM1_INT\) TM1_INT <= 0;/4'hB: if (TM1_INT) TM1_INT <= TM1_INT;/
SCU.sv|s/ABUS_RFS_CNT == 10'd750/ABUS_RFS_CNT == 10'd751/
DSP.sv|s/4'b1011: \{ALU_C,ALU_Q.L\} = \{AC.L,AC.L\[31\]\};/4'b1011: {ALU_C,ALU_Q.L} = {AC.L,AC.L[0]};/
DSP.sv|s/OVF47 = \(~\(AC\[47\] \^ P\[47\]\)\)/OVF47 = (~(AC[46] ^ P[46]))/
DSP.sv|s/HOOK2 <= 1;/HOOK2 <= 0;/
DSP.sv|s/PAUSED <= T0;/PAUSED <= 1'b0;/
SCU.sv|s/DMA_WA_NEW = DMA_WA \+ \(DMA_WTN_DEC < 3'd4/DMA_WA_NEW = DMA_WA + (DMA_WTN_DEC < 3'd3/
SCU.sv|s/if \(REG_WREN\[1\] && !REG_WDI\[11\] && IST.D0EI \)/if (REG_WREN[1] \&\& !REG_WDI[11] \&\& IST.D1EI )/
SCU.sv|s/ABUS_WAIT_CNT <= !DMA_WA\[26\] \? ASR0.A0NW \+ 5'd2/ABUS_WAIT_CNT <= !DMA_WA[26] ? ASR0.A0NW + 5'd3/
SCU.sv|s/CBUS_RFS == 4'd15\) CBUS_RFS_PEND <= 0/CBUS_RFS == 4'd14) CBUS_RFS_PEND <= 0/
LIST
rm -rf $T
