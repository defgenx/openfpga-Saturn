// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdiff_top.h for the primary calling header

#ifndef VERILATED_VDIFF_TOP_VDP1_PKG_H_
#define VERILATED_VDIFF_TOP_VDP1_PKG_H_  // guard

#include "verilated.h"


class Vdiff_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdiff_top_VDP1_PKG final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ GetPattern__Vstatic__TP;
    CData/*0:0*/ GetPattern__Vstatic__EC;
    CData/*6:0*/ GouraudAdd__Vstatic__SUMR;
    CData/*6:0*/ GouraudAdd__Vstatic__SUMG;
    CData/*6:0*/ GouraudAdd__Vstatic__SUMB;
    CData/*0:0*/ ColorCalc__Vstatic__MSB;
    SData/*15:0*/ GetSprData__Vstatic__D;
    SData/*15:0*/ GetPattern__Vstatic__C;
    SData/*14:0*/ RGBFtoI__Vstatic__CI;
    SData/*14:0*/ ColorHalf__Vstatic__CH;
    SData/*14:0*/ ColorAdd__Vstatic__CR;
    SData/*14:0*/ GouraudAdd__Vstatic__CR;
    SData/*14:0*/ ColorCalc__Vstatic__GOUR;
    SData/*14:0*/ ColorCalc__Vstatic__ORIG_HALF;
    SData/*14:0*/ ColorCalc__Vstatic__ORIG_ONE;
    SData/*14:0*/ ColorCalc__Vstatic__GOUR_HALF;
    SData/*14:0*/ ColorCalc__Vstatic__GOUR_ONE;
    SData/*14:0*/ ColorCalc__Vstatic__BACK_HALF;
    SData/*14:0*/ ColorCalc__Vstatic__BACK_ONE;
    SData/*14:0*/ ColorCalc__Vstatic__A;
    SData/*14:0*/ ColorCalc__Vstatic__B;
    SData/*14:0*/ ColorCalc__Vstatic__S;
    SData/*12:0*/ Abs__Vstatic__abs;
    IData/*17:0*/ SprAddr__Vstatic__ADDR;
    QData/*53:0*/ RGBItoF__Vstatic__CF;

    // INTERNAL VARIABLES
    Vdiff_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*3:0*/ CMD_NSPR = 0U;
    static constexpr CData/*3:0*/ CMD_SSPR = 1U;
    static constexpr CData/*3:0*/ CMD_DSPR = 2U;
    static constexpr CData/*3:0*/ CMD_POLY = 4U;
    static constexpr CData/*3:0*/ CMD_PLIN = 5U;
    static constexpr CData/*3:0*/ CMD_LINE = 6U;
    static constexpr CData/*3:0*/ CMD_UCLIP = 8U;
    static constexpr CData/*3:0*/ CMD_SCLIP = 9U;
    static constexpr CData/*3:0*/ CMD_LCORD = 0x0aU;
    static constexpr SData/*15:0*/ TVMR_MASK = 0x000fU;
    static constexpr SData/*15:0*/ FBCR_MASK = 0x001fU;
    static constexpr SData/*15:0*/ PTMR_MASK = 3U;
    static constexpr SData/*15:0*/ EWDR_MASK = 0xffffU;
    static constexpr SData/*15:0*/ EWLR_MASK = 0x7fffU;
    static constexpr SData/*15:0*/ EWRR_MASK = 0xffffU;
    static constexpr SData/*15:0*/ ENDR_MASK = 0U;
    static constexpr SData/*15:0*/ EDSR_MASK = 3U;
    static constexpr SData/*15:0*/ LOPR_MASK = 0xfffcU;
    static constexpr SData/*15:0*/ COPR_MASK = 0xfffcU;
    static constexpr SData/*15:0*/ MODR_MASK = 0xf1ffU;
    static constexpr SData/*15:0*/ CMDCTRL_MASK = 0xff3fU;
    static constexpr SData/*15:0*/ CMDLINK_MASK = 0xfffcU;
    static constexpr SData/*15:0*/ CMDPMOD_MASK = 0x9fffU;
    static constexpr SData/*15:0*/ CMDCOLR_MASK = 0xffffU;
    static constexpr SData/*15:0*/ CMDSRCA_MASK = 0xffffU;
    static constexpr SData/*15:0*/ CMDSIZE_MASK = 0x3fffU;
    static constexpr SData/*15:0*/ CMDCRD_MASK = 0xffffU;
    static constexpr SData/*15:0*/ CMDGRDA_MASK = 0xffffU;
    static constexpr IData/*23:0*/ COORD_NULL = 0U;
    static constexpr IData/*25:0*/ VERT_NULL = 0U;
    static constexpr IData/*31:0*/ SCNST_NULL = 0U;
    static constexpr IData/*31:0*/ SCNINC_NULL = 0U;
    static constexpr IData/*31:0*/ RC_NULL = 0U;
    static constexpr IData/*31:0*/ RC_ONE = 0x00010000U;
    static constexpr IData/*17:0*/ PATTERN_NULL = 0U;
    static constexpr QData/*43:0*/ CLIP_NULL = 0ULL;

    // CONSTRUCTORS
    Vdiff_top_VDP1_PKG();
    ~Vdiff_top_VDP1_PKG();
    void ctor(Vdiff_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdiff_top_VDP1_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
