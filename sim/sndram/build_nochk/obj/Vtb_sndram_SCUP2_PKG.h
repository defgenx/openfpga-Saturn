// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sndram.h for the primary calling header

#ifndef VERILATED_VTB_SNDRAM_SCUP2_PKG_H_
#define VERILATED_VTB_SNDRAM_SCUP2_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sndram__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sndram_SCUP2_PKG final {
  public:

    // INTERNAL VARIABLES
    Vtb_sndram__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*19:0*/, 3> DMA_TN_MASK = {{
        0x000fffffU, 0x00000fffU, 0x00000fffU
    }};

    // CONSTRUCTORS
    Vtb_sndram_SCUP2_PKG();
    ~Vtb_sndram_SCUP2_PKG();
    void ctor(Vtb_sndram__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_sndram_SCUP2_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
