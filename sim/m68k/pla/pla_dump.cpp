#include "Vpla_dump.h"
#include <cstdio>
int main(){ Vpla_dump m; FILE*f=fopen("pla_table.txt","w");
 for(int i=0;i<65536;i++){ m.opcode=i; m.eval();
  fprintf(f,"%04x %03x %03x %03x %x\n",i,m.a1,m.a2,m.a3,(m.isPriv<<3)|(m.isIllegal<<2)|(m.isLineA<<1)|m.isLineF);} fclose(f); return 0;}
