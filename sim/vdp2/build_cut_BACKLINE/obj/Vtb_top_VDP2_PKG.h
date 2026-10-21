// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_VDP2_PKG_H_
#define VERILATED_VTB_TOP_VDP2_PKG_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_VDP2_PKG final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_VDP2_PKG();
    ~Vtb_top_VDP2_PKG();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top_VDP2_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
