// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT_H_
#define VERILATED_VTB_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024unit();
    ~Vtb_top___024unit();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
