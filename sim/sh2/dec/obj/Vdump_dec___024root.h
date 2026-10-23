// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdump_dec.h for the primary calling header

#ifndef VERILATED_VDUMP_DEC___024ROOT_H_
#define VERILATED_VDUMP_DEC___024ROOT_H_  // guard

#include "verilated.h"
class Vdump_dec_SH2_PKG;


class Vdump_dec__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdump_dec___024root final {
  public:
    // CELLS
    Vdump_dec_SH2_PKG* __PVT__SH2_PKG;

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ dump_dec__DOT__f;
    IData/*31:0*/ dump_dec__DOT__unnamedblk1__DOT__unnamedblk2__DOT__st;
    IData/*31:0*/ dump_dec__DOT__unnamedblk5__DOT__mode;
    IData/*31:0*/ dump_dec__DOT__unnamedblk5__DOT__unnamedblk6__DOT__st;
    IData/*31:0*/ dump_dec__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__ir;
    VlWide<3>/*79:0*/ dump_dec__DOT__D;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vdump_dec__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdump_dec___024root(Vdump_dec__Syms* symsp, const char* namep);
    ~Vdump_dec___024root();
    VL_UNCOPYABLE(Vdump_dec___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
