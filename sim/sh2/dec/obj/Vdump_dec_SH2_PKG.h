// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdump_dec.h for the primary calling header

#ifndef VERILATED_VDUMP_DEC_SH2_PKG_H_
#define VERILATED_VDUMP_DEC_SH2_PKG_H_  // guard

#include "verilated.h"


class Vdump_dec__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdump_dec_SH2_PKG final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ Decode__Vstatic__RAN;
    CData/*4:0*/ Decode__Vstatic__RBN;
    CData/*0:0*/ Decode__Vstatic__BC;
    VlWide<3>/*79:0*/ Decode__Vstatic__DECI;

    // INTERNAL VARIABLES
    Vdump_dec__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdump_dec_SH2_PKG();
    ~Vdump_dec_SH2_PKG();
    void ctor(Vdump_dec__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdump_dec_SH2_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
