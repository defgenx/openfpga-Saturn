// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__ref0__DOT__MSH(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___eval_initial__TOP__tb_top__DOT__ref0__DOT__MSH\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i;
    __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i;
    __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i;
    __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i;
    __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    IData/*31:0*/ __Vilp6;
    IData/*31:0*/ __Vilp7;
    IData/*31:0*/ __Vilp8;
    IData/*31:0*/ __Vilp9;
    IData/*31:0*/ __Vilp10;
    // Body
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__valid3__DOT__altdpram_component__DOT__mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__valid2__DOT__altdpram_component__DOT__mem[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__valid1__DOT__altdpram_component__DOT__mem[__Vilp3] = 0U;
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__valid0__DOT__altdpram_component__DOT__mem[__Vilp4] = 0U;
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__tag3__DOT__altdpram_component__DOT__mem[__Vilp5] = 0U;
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__tag2__DOT__altdpram_component__DOT__mem[__Vilp6] = 0U;
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__tag1__DOT__altdpram_component__DOT__mem[__Vilp7] = 0U;
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__tag0__DOT__altdpram_component__DOT__mem[__Vilp8] = 0U;
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.__PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)] = 0U;
        __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.__PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__ab = 0U;
    __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.__PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)] = 0U;
        __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.__PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__ab = 0U;
    __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.__PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)] = 0U;
        __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.__PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__ab = 0U;
    __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.__PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i)] = 0U;
        __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.__PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__ab = 0U;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem[__Vilp9] = 0U;
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x0000003fU)) {
        vlSelfRef.__PVT__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem[__Vilp10] = 0U;
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
}

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlyVal__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 = 0;
    IData/*18:0*/ __VdlyVal__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 = 0;
    IData/*18:0*/ __VdlyVal__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 = 0;
    IData/*18:0*/ __VdlyVal__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 = 0;
    IData/*18:0*/ __VdlyVal__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyVal__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyVal__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyVal__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0;
    __VdlyDim0__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0;
    __VdlySet__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    // Body
    __VdlySet__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 = 0U;
    __VdlySet__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CRAM_WE) 
            >> 3U))) {
        __VdlyVal__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 
            = (vlSelfRef.__PVT__cache__DOT__CRAM_D 
               >> 0x00000018U);
        __VdlyDim0__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CRAM_WRADDR;
        __VdlySet__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CRAM_WE) 
            >> 2U))) {
        __VdlyVal__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & (vlSelfRef.__PVT__cache__DOT__CRAM_D 
                              >> 0x00000010U));
        __VdlyDim0__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CRAM_WRADDR;
        __VdlySet__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CRAM_WE) 
            >> 1U))) {
        __VdlyVal__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & (vlSelfRef.__PVT__cache__DOT__CRAM_D 
                              >> 8U));
        __VdlyDim0__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CRAM_WRADDR;
        __VdlySet__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & (IData)(vlSelfRef.__PVT__cache__DOT__CRAM_WE))) {
        __VdlyVal__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 
            = (0x000000ffU & vlSelfRef.__PVT__cache__DOT__CRAM_D);
        __VdlyDim0__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CRAM_WRADDR;
        __VdlySet__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.cache__DOT____Vcellinpt__lru_a__wren__strong) {
        __VdlyVal__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__LRU_D;
        __VdlyDim0__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0 = 1U;
        __VdlyVal__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__LRU_D;
        __VdlyDim0__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CTAG_WE) 
            >> 3U))) {
        __VdlyVal__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CTAG_D;
        __VdlyDim0__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CTAG_WE) 
            >> 2U))) {
        __VdlyVal__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CTAG_D;
        __VdlyDim0__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CTAG_WE) 
            >> 1U))) {
        __VdlyVal__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CTAG_D;
        __VdlyDim0__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & (IData)(vlSelfRef.__PVT__cache__DOT__CTAG_WE))) {
        __VdlyVal__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CTAG_D;
        __VdlyDim0__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE) 
            >> 3U))) {
        __VdlyVal__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CVALID_D;
        __VdlyDim0__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE) 
            >> 2U))) {
        __VdlyVal__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CVALID_D;
        __VdlyDim0__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & ((IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE) 
            >> 1U))) {
        __VdlyVal__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CVALID_D;
        __VdlyDim0__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
         & (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE))) {
        __VdlyVal__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 
            = vlSelfRef.__PVT__cache__DOT__CVALID_D;
        __VdlyDim0__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 
            = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        __VdlySet__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__PVT__frt__DOT__FTCI_OLD = 1U;
    vlSelfRef.__PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__ab 
        = vlSelfRef.__PVT__cache__DOT__CRAM_RDADDR;
    vlSelfRef.__PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__ab 
        = vlSelfRef.__PVT__cache__DOT__CRAM_RDADDR;
    vlSelfRef.__PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__ab 
        = vlSelfRef.__PVT__cache__DOT__CRAM_RDADDR;
    vlSelfRef.__PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__ab 
        = vlSelfRef.__PVT__cache__DOT__CRAM_RDADDR;
    if (__VdlySet__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem[__VdlyDim0__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem[__VdlyDim0__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem[__VdlyDim0__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem[__VdlyDim0__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__tag3__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__tag3__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__tag2__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__tag2__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__tag1__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__tag1__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__tag0__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__tag0__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__valid3__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__valid3__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__valid2__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__valid2__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__valid1__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__valid1__DOT__altdpram_component__DOT__mem__v0;
    }
    if (__VdlySet__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.__PVT__cache__DOT__valid0__DOT__altdpram_component__DOT__mem[__VdlyDim0__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0] 
            = __VdlyVal__cache__DOT__valid0__DOT__altdpram_component__DOT__mem__v0;
    }
}

extern const VlUnpacked<SData/*8:0*/, 4> Vtb_top__ConstPool__TABLE_h9b2cab03_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_top__ConstPool__TABLE_h537cf6d2_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_top__ConstPool__TABLE_h31cf1c10_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_top__ConstPool__TABLE_h0a5b22a4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_top__ConstPool__TABLE_h1628b77a_0;

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__1(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ bsc__DOT____VCase_h9022f221__0;
    bsc__DOT____VCase_h9022f221__0 = 0;
    CData/*1:0*/ bsc__DOT____VCase_h4c865549__0;
    bsc__DOT____VCase_h4c865549__0 = 0;
    CData/*1:0*/ bsc__DOT____VCase_h19fa5323__0;
    bsc__DOT____VCase_h19fa5323__0 = 0;
    CData/*1:0*/ bsc__DOT____VCase_ha489fac9__0;
    bsc__DOT____VCase_ha489fac9__0 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__12__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaSZ__12__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__12__area;
    __Vfunc_bsc__DOT__GetAreaSZ__12__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__12__BCR1;
    __Vfunc_bsc__DOT__GetAreaSZ__12__BCR1 = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__12__BCR2;
    __Vfunc_bsc__DOT__GetAreaSZ__12__BCR2 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__12__dramsz;
    __Vfunc_bsc__DOT__GetAreaSZ__12__dramsz = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaW__13__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaW__13__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaW__13__area;
    __Vfunc_bsc__DOT__GetAreaW__13__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaW__13__WCR;
    __Vfunc_bsc__DOT__GetAreaW__13__WCR = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaLW__14__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaLW__14__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaLW__14__area;
    __Vfunc_bsc__DOT__GetAreaLW__14__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaLW__14__BCR1;
    __Vfunc_bsc__DOT__GetAreaLW__14__BCR1 = 0;
    CData/*3:0*/ __Vfunc_bsc__DOT__SDRAMAreaSel__15__Vfuncout;
    __Vfunc_bsc__DOT__SDRAMAreaSel__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMAreaSel__15__BCR1;
    __Vfunc_bsc__DOT__SDRAMAreaSel__15__BCR1 = 0;
    CData/*0:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__16__Vfuncout;
    __Vfunc_bsc__DOT__IsSDRAMArea__16__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__16__area;
    __Vfunc_bsc__DOT__IsSDRAMArea__16__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__16__BCR1;
    __Vfunc_bsc__DOT__IsSDRAMArea__16__BCR1 = 0;
    CData/*0:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__17__Vfuncout;
    __Vfunc_bsc__DOT__IsSDRAMArea__17__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__17__area;
    __Vfunc_bsc__DOT__IsSDRAMArea__17__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__17__BCR1;
    __Vfunc_bsc__DOT__IsSDRAMArea__17__BCR1 = 0;
    CData/*0:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__18__Vfuncout;
    __Vfunc_bsc__DOT__IsSDRAMArea__18__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__18__area;
    __Vfunc_bsc__DOT__IsSDRAMArea__18__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__18__BCR1;
    __Vfunc_bsc__DOT__IsSDRAMArea__18__BCR1 = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__19__A;
    __Vfunc_bsc__DOT__SDRAMBank__19__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__19__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__19__MCR = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__20__A;
    __Vfunc_bsc__DOT__SDRAMBank__20__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__20__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__20__MCR = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__21__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaSZ__21__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__21__area;
    __Vfunc_bsc__DOT__GetAreaSZ__21__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__21__BCR1;
    __Vfunc_bsc__DOT__GetAreaSZ__21__BCR1 = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__21__BCR2;
    __Vfunc_bsc__DOT__GetAreaSZ__21__BCR2 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__21__dramsz;
    __Vfunc_bsc__DOT__GetAreaSZ__21__dramsz = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__22__A;
    __Vfunc_bsc__DOT__SDRAMBank__22__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__22__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__22__MCR = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__23__A;
    __Vfunc_bsc__DOT__SDRAMBank__23__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__23__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__23__MCR = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__24__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaSZ__24__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__24__area;
    __Vfunc_bsc__DOT__GetAreaSZ__24__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__24__BCR1;
    __Vfunc_bsc__DOT__GetAreaSZ__24__BCR1 = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__24__BCR2;
    __Vfunc_bsc__DOT__GetAreaSZ__24__BCR2 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__24__dramsz;
    __Vfunc_bsc__DOT__GetAreaSZ__24__dramsz = 0;
    IData/*31:0*/ __Vfunc_dmac__DOT__GetAddrInc__25__Vfuncout;
    __Vfunc_dmac__DOT__GetAddrInc__25__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_dmac__DOT__GetAddrInc__25__sz;
    __Vfunc_dmac__DOT__GetAddrInc__25__sz = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*12:0*/ __Vdly__unnamedblk1__DOT__DIV_CNT;
    __Vdly__unnamedblk1__DOT__DIV_CNT = 0;
    IData/*31:0*/ __Vdly__core__DOT__PC;
    __Vdly__core__DOT__PC = 0;
    CData/*0:0*/ __Vdly__core__DOT__IF_ACTIVE;
    __Vdly__core__DOT__IF_ACTIVE = 0;
    CData/*0:0*/ __Vdly__core__DOT__VECT_ACTIVE;
    __Vdly__core__DOT__VECT_ACTIVE = 0;
    CData/*0:0*/ __Vdly__core__DOT__INST_SPLIT;
    __Vdly__core__DOT__INST_SPLIT = 0;
    Vtb_top_IFtoID_t__struct__0 __Vdly__core__DOT__SAVE_ID;
    __Vdly__core__DOT__SAVE_ID.__PVT__IR = 0;
    __Vdly__core__DOT__SAVE_ID.__PVT__PC = 0;
    CData/*0:0*/ __Vdly__core__DOT__RES_EXP;
    __Vdly__core__DOT__RES_EXP = 0;
    CData/*0:0*/ __Vdly__core__DOT__ILI_EXP;
    __Vdly__core__DOT__ILI_EXP = 0;
    CData/*0:0*/ __Vdly__core__DOT__INT_REQ_LATCH;
    __Vdly__core__DOT__INT_REQ_LATCH = 0;
    CData/*0:0*/ __Vdly__core__DOT__SLP;
    __Vdly__core__DOT__SLP = 0;
    CData/*0:0*/ __Vdly__MSBY_SBY;
    __Vdly__MSBY_SBY = 0;
    CData/*0:0*/ __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN;
    __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN = 0;
    CData/*0:0*/ __Vdly__WDT_OVF;
    __Vdly__WDT_OVF = 0;
    CData/*7:0*/ __Vdly__wdt__DOT__WTCNT;
    __Vdly__wdt__DOT__WTCNT = 0;
    CData/*7:0*/ __Vdly__wdt__DOT__OPEN_BUS;
    __Vdly__wdt__DOT__OPEN_BUS = 0;
    CData/*7:0*/ __Vdly__frt__DOT__FTCSR;
    __Vdly__frt__DOT__FTCSR = 0;
    CData/*0:0*/ __Vdly__frt__DOT__unnamedblk2__DOT__CAPT;
    __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = 0;
    SData/*15:0*/ __Vdly__frt__DOT__FRC;
    __Vdly__frt__DOT__FRC = 0;
    SData/*15:0*/ __Vdly__frt__DOT__OCRA;
    __Vdly__frt__DOT__OCRA = 0;
    SData/*15:0*/ __Vdly__frt__DOT__OCRB;
    __Vdly__frt__DOT__OCRB = 0;
    CData/*7:0*/ __Vdly__frt__DOT__TEMP;
    __Vdly__frt__DOT__TEMP = 0;
    CData/*0:0*/ __Vdly__intc__DOT__VBREQ;
    __Vdly__intc__DOT__VBREQ = 0;
    SData/*15:0*/ __Vdly__intc__DOT__VCRWDT;
    __Vdly__intc__DOT__VCRWDT = 0;
    SData/*15:0*/ __VdlyMask__intc__DOT__VCRWDT;
    __VdlyMask__intc__DOT__VCRWDT = 0;
    SData/*15:0*/ __Vdly__intc__DOT__VCRA;
    __Vdly__intc__DOT__VCRA = 0;
    SData/*15:0*/ __VdlyMask__intc__DOT__VCRA;
    __VdlyMask__intc__DOT__VCRA = 0;
    SData/*15:0*/ __Vdly__intc__DOT__VCRB;
    __Vdly__intc__DOT__VCRB = 0;
    SData/*15:0*/ __VdlyMask__intc__DOT__VCRB;
    __VdlyMask__intc__DOT__VCRB = 0;
    SData/*15:0*/ __Vdly__intc__DOT__VCRC;
    __Vdly__intc__DOT__VCRC = 0;
    SData/*15:0*/ __VdlyMask__intc__DOT__VCRC;
    __VdlyMask__intc__DOT__VCRC = 0;
    SData/*15:0*/ __Vdly__intc__DOT__VCRD;
    __Vdly__intc__DOT__VCRD = 0;
    SData/*15:0*/ __VdlyMask__intc__DOT__VCRD;
    __VdlyMask__intc__DOT__VCRD = 0;
    SData/*15:0*/ __Vdly__intc__DOT__ICR;
    __Vdly__intc__DOT__ICR = 0;
    SData/*15:0*/ __VdlyMask__intc__DOT__ICR;
    __VdlyMask__intc__DOT__ICR = 0;
    CData/*0:0*/ __Vdly__IRD_WR_N;
    __Vdly__IRD_WR_N = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__VBUSY;
    __Vdly__bsc__DOT__VBUSY = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__BUSY;
    __Vdly__bsc__DOT__BUSY = 0;
    CData/*1:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__DBUSY;
    __Vdly__bsc__DOT__DBUSY = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND;
    __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND = 0;
    CData/*3:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH;
    __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH = 0;
    IData/*26:0*/ __Vdly__IA;
    __Vdly__IA = 0;
    CData/*3:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA;
    __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__CBUS_ACTIVE;
    __Vdly__bsc__DOT__CBUS_ACTIVE = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__REFRESH_ACTIVE;
    __Vdly__bsc__DOT__REFRESH_ACTIVE = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ;
    __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP;
    __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0;
    CData/*0:0*/ __VdlyMask__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP;
    __VdlyMask__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT = 0;
    CData/*1:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__MST_BUS_RLS;
    __Vdly__bsc__DOT__MST_BUS_RLS = 0;
    CData/*7:0*/ __Vdly__bsc__DOT__RTCNT;
    __Vdly__bsc__DOT__RTCNT = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__RFS_REQ;
    __Vdly__bsc__DOT__RFS_REQ = 0;
    CData/*0:0*/ __Vdly__dmac__DOT__RB_PRIO;
    __Vdly__dmac__DOT__RB_PRIO = 0;
    CData/*0:0*/ __Vdly__dmac__DOT__DMA_REQ_CLR;
    __Vdly__dmac__DOT__DMA_REQ_CLR = 0;
    CData/*0:0*/ __Vdly__dmac__DOT__DMA_RD;
    __Vdly__dmac__DOT__DMA_RD = 0;
    CData/*1:0*/ __Vdly__dmac__DOT__LW_CNT;
    __Vdly__dmac__DOT__LW_CNT = 0;
    CData/*0:0*/ __Vdly__dmac__DOT__DMA_WR;
    __Vdly__dmac__DOT__DMA_WR = 0;
    CData/*0:0*/ __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH;
    __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH = 0;
    IData/*31:0*/ __Vdly__dmac__DOT__DMAOR;
    __Vdly__dmac__DOT__DMAOR = 0;
    CData/*0:0*/ __Vdly__mult__DOT__MM_DONE;
    __Vdly__mult__DOT__MM_DONE = 0;
    CData/*2:0*/ __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 0;
    CData/*0:0*/ __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC = 0;
    CData/*0:0*/ __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC = 0;
    CData/*0:0*/ __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC = 0;
    CData/*0:0*/ __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__TAG_DIRTY__v0;
    __VdlyVal__cache__DOT__TAG_DIRTY__v0 = 0;
    CData/*5:0*/ __VdlyLsb__cache__DOT__TAG_DIRTY__v0;
    __VdlyLsb__cache__DOT__TAG_DIRTY__v0 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__TAG_DIRTY__v0;
    __VdlySet__cache__DOT__TAG_DIRTY__v0 = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__TAG_DIRTY__v1;
    __VdlyVal__cache__DOT__TAG_DIRTY__v1 = 0;
    CData/*5:0*/ __VdlyLsb__cache__DOT__TAG_DIRTY__v1;
    __VdlyLsb__cache__DOT__TAG_DIRTY__v1 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__TAG_DIRTY__v1;
    __VdlySet__cache__DOT__TAG_DIRTY__v1 = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__TAG_DIRTY__v2;
    __VdlyVal__cache__DOT__TAG_DIRTY__v2 = 0;
    CData/*5:0*/ __VdlyLsb__cache__DOT__TAG_DIRTY__v2;
    __VdlyLsb__cache__DOT__TAG_DIRTY__v2 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__TAG_DIRTY__v2;
    __VdlySet__cache__DOT__TAG_DIRTY__v2 = 0;
    CData/*0:0*/ __VdlyVal__cache__DOT__TAG_DIRTY__v3;
    __VdlyVal__cache__DOT__TAG_DIRTY__v3 = 0;
    CData/*5:0*/ __VdlyLsb__cache__DOT__TAG_DIRTY__v3;
    __VdlyLsb__cache__DOT__TAG_DIRTY__v3 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__TAG_DIRTY__v3;
    __VdlySet__cache__DOT__TAG_DIRTY__v3 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__TAG_DIRTY__v4;
    __VdlySet__cache__DOT__TAG_DIRTY__v4 = 0;
    CData/*0:0*/ __VdlySet__cache__DOT__TAG_DIRTY__v8;
    __VdlySet__cache__DOT__TAG_DIRTY__v8 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__regfile__DOT__GR__v0;
    __VdlyVal__core__DOT__regfile__DOT__GR__v0 = 0;
    CData/*4:0*/ __VdlyDim0__core__DOT__regfile__DOT__GR__v0;
    __VdlyDim0__core__DOT__regfile__DOT__GR__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__regfile__DOT__GR__v0;
    __VdlySet__core__DOT__regfile__DOT__GR__v0 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__regfile__DOT__GR__v1;
    __VdlyVal__core__DOT__regfile__DOT__GR__v1 = 0;
    CData/*4:0*/ __VdlyDim0__core__DOT__regfile__DOT__GR__v1;
    __VdlyDim0__core__DOT__regfile__DOT__GR__v1 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__regfile__DOT__GR__v1;
    __VdlySet__core__DOT__regfile__DOT__GR__v1 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__regfile__DOT__GR__v2;
    __VdlySet__core__DOT__regfile__DOT__GR__v2 = 0;
    CData/*0:0*/ __VdlyVal__dmac__DOT__CH_REQ__v0;
    __VdlyVal__dmac__DOT__CH_REQ__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ__v0;
    __VdlySet__dmac__DOT__CH_REQ__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ__v1;
    __VdlySet__dmac__DOT__CH_REQ__v1 = 0;
    CData/*0:0*/ __VdlyVal__dmac__DOT__CH_REQ__v2;
    __VdlyVal__dmac__DOT__CH_REQ__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ__v2;
    __VdlySet__dmac__DOT__CH_REQ__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ__v3;
    __VdlySet__dmac__DOT__CH_REQ__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ__v4;
    __VdlySet__dmac__DOT__CH_REQ__v4 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v0;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v0 = 0;
    CData/*0:0*/ __VdlyVal__dmac__DOT__CH_REQ_CLR__v2;
    __VdlyVal__dmac__DOT__CH_REQ_CLR__v2 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__CH_REQ_CLR__v2;
    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v2;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v2 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__CH_REQ_CLR__v3;
    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v3;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v3 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__RD_BUF__v0;
    __VdlyVal__dmac__DOT__RD_BUF__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__RD_BUF__v0;
    __VdlySet__dmac__DOT__RD_BUF__v0 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__SAR__v0;
    __VdlyVal__dmac__DOT__SAR__v0 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__SAR__v0;
    __VdlyDim0__dmac__DOT__SAR__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__SAR__v0;
    __VdlySet__dmac__DOT__SAR__v0 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__SAR__v1;
    __VdlyVal__dmac__DOT__SAR__v1 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__SAR__v1;
    __VdlyDim0__dmac__DOT__SAR__v1 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__SAR__v1;
    __VdlySet__dmac__DOT__SAR__v1 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__CH_REQ_CLR__v4;
    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v4 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v4;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v4 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__CH_REQ_CLR__v5;
    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v5 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v5;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v5 = 0;
    IData/*23:0*/ __VdlyVal__dmac__DOT__TCR__v0;
    __VdlyVal__dmac__DOT__TCR__v0 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__TCR__v0;
    __VdlyDim0__dmac__DOT__TCR__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__TCR__v0;
    __VdlySet__dmac__DOT__TCR__v0 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__DAR__v0;
    __VdlyVal__dmac__DOT__DAR__v0 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__DAR__v0;
    __VdlyDim0__dmac__DOT__DAR__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DAR__v0;
    __VdlySet__dmac__DOT__DAR__v0 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__DAR__v1;
    __VdlyVal__dmac__DOT__DAR__v1 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__DAR__v1;
    __VdlyDim0__dmac__DOT__DAR__v1 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DAR__v1;
    __VdlySet__dmac__DOT__DAR__v1 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__CH_REQ_CLR__v6;
    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v6 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v6;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v6 = 0;
    IData/*23:0*/ __VdlyVal__dmac__DOT__TCR__v1;
    __VdlyVal__dmac__DOT__TCR__v1 = 0;
    CData/*0:0*/ __VdlyDim0__dmac__DOT__TCR__v1;
    __VdlyDim0__dmac__DOT__TCR__v1 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__TCR__v1;
    __VdlySet__dmac__DOT__TCR__v1 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__RD_BUF__v1;
    __VdlyVal__dmac__DOT__RD_BUF__v1 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__RD_BUF__v1;
    __VdlySet__dmac__DOT__RD_BUF__v1 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__RD_BUF__v2;
    __VdlyVal__dmac__DOT__RD_BUF__v2 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__RD_BUF__v3;
    __VdlyVal__dmac__DOT__RD_BUF__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__RD_BUF__v3;
    __VdlySet__dmac__DOT__RD_BUF__v3 = 0;
    IData/*23:0*/ __VdlyVal__dmac__DOT__TCR__v2;
    __VdlyVal__dmac__DOT__TCR__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__TCR__v2;
    __VdlySet__dmac__DOT__TCR__v2 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__DAR__v2;
    __VdlyVal__dmac__DOT__DAR__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DAR__v2;
    __VdlySet__dmac__DOT__DAR__v2 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__SAR__v2;
    __VdlyVal__dmac__DOT__SAR__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__SAR__v2;
    __VdlySet__dmac__DOT__SAR__v2 = 0;
    IData/*23:0*/ __VdlyVal__dmac__DOT__TCR__v3;
    __VdlyVal__dmac__DOT__TCR__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__TCR__v3;
    __VdlySet__dmac__DOT__TCR__v3 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__DAR__v3;
    __VdlyVal__dmac__DOT__DAR__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DAR__v3;
    __VdlySet__dmac__DOT__DAR__v3 = 0;
    IData/*31:0*/ __VdlyVal__dmac__DOT__SAR__v3;
    __VdlyVal__dmac__DOT__SAR__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__SAR__v3;
    __VdlySet__dmac__DOT__SAR__v3 = 0;
    CData/*0:0*/ __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2;
    __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2;
    __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2 = 0;
    CData/*0:0*/ __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3;
    __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3;
    __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DAR__v4;
    __VdlySet__dmac__DOT__DAR__v4 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__CH_REQ_CLR__v7;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v7 = 0;
    CData/*7:0*/ __VdlyVal__dmac__DOT__DRCR__v0;
    __VdlyVal__dmac__DOT__DRCR__v0 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DRCR__v0;
    __VdlySet__dmac__DOT__DRCR__v0 = 0;
    CData/*7:0*/ __VdlyVal__dmac__DOT__DRCR__v1;
    __VdlyVal__dmac__DOT__DRCR__v1 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DRCR__v1;
    __VdlySet__dmac__DOT__DRCR__v1 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DRCR__v2;
    __VdlySet__dmac__DOT__DRCR__v2 = 0;
    CData/*0:0*/ __VdlySet__dmac__DOT__DRCR__v4;
    __VdlySet__dmac__DOT__DRCR__v4 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    __Vdly__dmac__DOT__RB_PRIO = vlSelfRef.__PVT__dmac__DOT__RB_PRIO;
    vlSelfRef.__Vdly__divu__DOT__BUSY = vlSelfRef.__PVT__divu__DOT__BUSY;
    __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC;
    __Vdly__mult__DOT__MM_DONE = vlSelfRef.__PVT__mult__DOT__MM_DONE;
    vlSelfRef.__Vdly__bsc__DOT__BGR = vlSelfRef.__PVT__bsc__DOT__BGR;
    __Vdly__bsc__DOT__MST_BUS_RLS = vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS;
    vlSelfRef.__Vdly__intc__DOT__unnamedblk2__DOT__IRL_NORM 
        = vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_NORM;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v4 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v6 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v8 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v10 = 0U;
    __Vdly__unnamedblk1__DOT__DIV_CNT = vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT;
    __Vdly__core__DOT__SLP = vlSelfRef.__PVT__core__DOT__SLP;
    vlSelfRef.__Vdly__cache__DOT__CCR = vlSelfRef.__PVT__cache__DOT__CCR;
    __VdlySet__dmac__DOT__CH_REQ__v0 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v1 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v2 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v3 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v4 = 0U;
    vlSelfRef.__Vdly__INTC_NMI_REQ = vlSelfRef.__PVT__INTC_NMI_REQ;
    __Vdly__core__DOT__ILI_EXP = vlSelfRef.__PVT__core__DOT__ILI_EXP;
    __Vdly__core__DOT__RES_EXP = vlSelfRef.__PVT__core__DOT__RES_EXP;
    __Vdly__intc__DOT__VBREQ = vlSelfRef.__PVT__intc__DOT__VBREQ;
    __Vdly__core__DOT__PC = vlSelfRef.core__DOT__PC;
    vlSelfRef.__Vdly__cache__DOT__IBREQ = vlSelfRef.__PVT__cache__DOT__IBREQ;
    vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND = vlSelfRef.__PVT__cache__DOT__IBUS_WRITE_PEND;
    vlSelfRef.__Vdly__cache__DOT__IBUS_READ = vlSelfRef.__PVT__cache__DOT__IBUS_READ;
    vlSelfRef.__Vdly__cache__DOT__IBUS_READARRAY = vlSelfRef.__PVT__cache__DOT__IBUS_READARRAY;
    vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = vlSelfRef.__PVT__cache__DOT__IBUS_READ_PEND;
    vlSelfRef.__Vdly__cache__DOT__IBADDR = vlSelfRef.__PVT__cache__DOT__IBADDR;
    __Vdly__core__DOT__SAVE_ID = vlSelfRef.__PVT__core__DOT__SAVE_ID;
    __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC 
        = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACW_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC 
        = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MUL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC 
        = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DMUL_EXEC;
    __VdlySet__core__DOT__regfile__DOT__GR__v0 = 0U;
    __VdlySet__core__DOT__regfile__DOT__GR__v1 = 0U;
    __VdlySet__core__DOT__regfile__DOT__GR__v2 = 0U;
    __Vdly__core__DOT__VECT_ACTIVE = vlSelfRef.__PVT__core__DOT__VECT_ACTIVE;
    __Vdly__core__DOT__INST_SPLIT = vlSelfRef.__PVT__core__DOT__INST_SPLIT;
    __Vdly__core__DOT__IF_ACTIVE = vlSelfRef.__PVT__core__DOT__IF_ACTIVE;
    vlSelfRef.__Vdly__core__DOT__MAWB_STALL = vlSelfRef.__PVT__core__DOT__MAWB_STALL;
    vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = vlSelfRef.__PVT__core__DOT__MA_ACTIVE;
    __VdlySet__cache__DOT__TAG_DIRTY__v0 = 0U;
    __VdlySet__cache__DOT__TAG_DIRTY__v1 = 0U;
    __VdlySet__cache__DOT__TAG_DIRTY__v2 = 0U;
    __VdlySet__cache__DOT__TAG_DIRTY__v3 = 0U;
    __VdlySet__cache__DOT__TAG_DIRTY__v4 = 0U;
    __VdlySet__cache__DOT__TAG_DIRTY__v8 = 0U;
    __Vdly__dmac__DOT__DMAOR = vlSelfRef.__PVT__dmac__DOT__DMAOR;
    __Vdly__MSBY_SBY = vlSelfRef.__PVT__MSBY_SBY;
    __Vdly__dmac__DOT__DMA_REQ_CLR = vlSelfRef.__PVT__dmac__DOT__DMA_REQ_CLR;
    __Vdly__dmac__DOT__LW_CNT = vlSelfRef.__PVT__dmac__DOT__LW_CNT;
    __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH 
        = vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH;
    __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2 = 0U;
    __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3 = 0U;
    __VdlySet__dmac__DOT__TCR__v0 = 0U;
    __VdlySet__dmac__DOT__TCR__v1 = 0U;
    __VdlySet__dmac__DOT__TCR__v2 = 0U;
    __VdlySet__dmac__DOT__TCR__v3 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v0 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v2 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v3 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v4 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v5 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v6 = 0U;
    __VdlySet__dmac__DOT__CH_REQ_CLR__v7 = 0U;
    __VdlySet__dmac__DOT__RD_BUF__v0 = 0U;
    __VdlySet__dmac__DOT__RD_BUF__v1 = 0U;
    __VdlySet__dmac__DOT__RD_BUF__v3 = 0U;
    __VdlySet__dmac__DOT__SAR__v0 = 0U;
    __VdlySet__dmac__DOT__SAR__v1 = 0U;
    __VdlySet__dmac__DOT__SAR__v2 = 0U;
    __VdlySet__dmac__DOT__SAR__v3 = 0U;
    __VdlySet__dmac__DOT__DAR__v0 = 0U;
    __VdlySet__dmac__DOT__DAR__v1 = 0U;
    __VdlySet__dmac__DOT__DAR__v2 = 0U;
    __VdlySet__dmac__DOT__DAR__v3 = 0U;
    __Vdly__dmac__DOT__DMA_RD = vlSelfRef.__PVT__dmac__DOT__DMA_RD;
    __Vdly__dmac__DOT__DMA_WR = vlSelfRef.__PVT__dmac__DOT__DMA_WR;
    __VdlySet__dmac__DOT__DAR__v4 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v0 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v1 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v2 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v4 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v5 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v7 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v3 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v1 = 0U;
    vlSelfRef.__Vdly__divu__DOT__STEP = vlSelfRef.__PVT__divu__DOT__STEP;
    vlSelfRef.__Vdly__divu__DOT__DIV64 = vlSelfRef.__PVT__divu__DOT__DIV64;
    vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF0 
        = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF0;
    vlSelfRef.__Vdly__divu__DOT__Q = vlSelfRef.__PVT__divu__DOT__Q;
    vlSelfRef.__Vdly__divu__DOT__R_SIGN = vlSelfRef.__PVT__divu__DOT__R_SIGN;
    vlSelfRef.__Vdly__divu__DOT__D_SIGN = vlSelfRef.__PVT__divu__DOT__D_SIGN;
    vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF64_33 
        = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF64_33;
    vlSelfRef.__Vdly__divu__DOT__R[0U] = vlSelfRef.__PVT__divu__DOT__R[0U];
    vlSelfRef.__Vdly__divu__DOT__R[1U] = vlSelfRef.__PVT__divu__DOT__R[1U];
    vlSelfRef.__Vdly__divu__DOT__R[2U] = vlSelfRef.__PVT__divu__DOT__R[2U];
    vlSelfRef.__Vdly__divu__DOT__D[0U] = vlSelfRef.__PVT__divu__DOT__D[0U];
    vlSelfRef.__Vdly__divu__DOT__D[1U] = vlSelfRef.__PVT__divu__DOT__D[1U];
    vlSelfRef.__Vdly__divu__DOT__D[2U] = vlSelfRef.__PVT__divu__DOT__D[2U];
    vlSelfRef.__Vdly__divu__DOT__T64 = vlSelfRef.__PVT__divu__DOT__T64;
    vlSelfRef.__VdlySet__dmac__DOT__SAR__v5 = 0U;
    vlSelfRef.__VdlySet__dmac__DOT__SAR__v4 = 0U;
    __VdlySet__dmac__DOT__DRCR__v0 = 0U;
    __VdlySet__dmac__DOT__DRCR__v1 = 0U;
    __VdlySet__dmac__DOT__DRCR__v2 = 0U;
    __VdlySet__dmac__DOT__DRCR__v4 = 0U;
    __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__CAPT;
    __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN = vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__TM_EN;
    __Vdly__WDT_OVF = vlSelfRef.__PVT__WDT_OVF;
    __Vdly__wdt__DOT__WTCNT = vlSelfRef.__PVT__wdt__DOT__WTCNT;
    vlSelfRef.__Vdly__wdt__DOT__WTCSR = vlSelfRef.__PVT__wdt__DOT__WTCSR;
    vlSelfRef.__Vdly__wdt__DOT__BUSY = vlSelfRef.__PVT__wdt__DOT__BUSY;
    vlSelfRef.__Vdly__core__DOT__PIPE = vlSelfRef.__PVT__core__DOT__PIPE;
    __Vdly__frt__DOT__FTCSR = vlSelfRef.frt__DOT__FTCSR;
    __Vdly__wdt__DOT__OPEN_BUS = vlSelfRef.__PVT__wdt__DOT__OPEN_BUS;
    __Vdly__core__DOT__INT_REQ_LATCH = vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH;
    __Vdly__bsc__DOT__RTCNT = vlSelfRef.__PVT__bsc__DOT__RTCNT;
    __Vdly__bsc__DOT__RFS_REQ = vlSelfRef.__PVT__bsc__DOT__RFS_REQ;
    vlSelfRef.__Vdly__divu__DOT__DVDNTL = vlSelfRef.__PVT__divu__DOT__DVDNTL;
    vlSelfRef.__Vdly__divu__DOT__DVDNTH = vlSelfRef.__PVT__divu__DOT__DVDNTH;
    __Vdly__frt__DOT__FRC = vlSelfRef.frt__DOT__FRC;
    __Vdly__frt__DOT__OCRA = vlSelfRef.frt__DOT__OCRA;
    __Vdly__frt__DOT__OCRB = vlSelfRef.frt__DOT__OCRB;
    __Vdly__frt__DOT__TEMP = vlSelfRef.__PVT__frt__DOT__TEMP;
    __Vdly__bsc__DOT__BUSY = vlSelfRef.__PVT__bsc__DOT__BUSY;
    __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN;
    __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH;
    vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = vlSelfRef.__PVT__bsc__DOT__CBUSY2;
    __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA;
    __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
    __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ;
    __Vdly__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT;
    __Vdly__bsc__DOT__REFRESH_ACTIVE = vlSelfRef.__PVT__bsc__DOT__REFRESH_ACTIVE;
    __Vdly__bsc__DOT__VBUSY = vlSelfRef.__PVT__bsc__DOT__VBUSY;
    vlSelfRef.__Vdly__bsc__DOT__CBUSY = vlSelfRef.__PVT__bsc__DOT__CBUSY;
    __Vdly__bsc__DOT__DBUSY = vlSelfRef.__PVT__bsc__DOT__DBUSY;
    vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE = vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE;
    __Vdly__IRD_WR_N = vlSelfRef.__PVT__IRD_WR_N;
    __Vdly__bsc__DOT__CBUS_ACTIVE = vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE;
    __Vdly__IA = vlSelfRef.__PVT__IA;
    if (vlSymsp->TOP.tb_top__DOT__RST_N) {
        if ((((0U != (IData)(vlSelfRef.__PVT__MAC_SEL)) 
              & (IData)(vlSelfRef.__PVT__MAC_WE)) & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            __Vdly__mult__DOT__MM_DONE = 1U;
            if ((8U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__MAC_OP) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                                __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 2U;
                                __Vdly__mult__DOT__MM_DONE = 0U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                            __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 4U;
                            __Vdly__mult__DOT__MM_DONE = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                    __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 1U;
                    __Vdly__mult__DOT__MM_DONE = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 4U;
                    __Vdly__mult__DOT__MM_DONE = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 4U;
                    __Vdly__mult__DOT__MM_DONE = 0U;
                }
            }
        }
        if (((~ (IData)(vlSelfRef.__PVT__mult__DOT__MM_DONE)) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            if ((0U != (IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC))) {
                __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC 
                    = (7U & ((IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC) 
                             - (IData)(1U)));
            }
            if ((1U == (IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC))) {
                __Vdly__mult__DOT__MM_DONE = 1U;
            }
        }
        if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)))) {
                vlSelfRef.__Vdly__intc__DOT__IPRB = 0U;
                vlSelfRef.__VdlyMask__intc__DOT__IPRB = 0xffffU;
                vlSelfRef.__Vdly__intc__DOT__IPRA = 0U;
                vlSelfRef.__VdlyMask__intc__DOT__IPRA = 0xffffU;
                __Vdly__intc__DOT__VCRWDT = 0U;
                __VdlyMask__intc__DOT__VCRWDT = 0xffffU;
                __Vdly__intc__DOT__VCRA = 0U;
                __VdlyMask__intc__DOT__VCRA = 0xffffU;
                __Vdly__intc__DOT__VCRB = 0U;
                __VdlyMask__intc__DOT__VCRB = 0xffffU;
                __Vdly__intc__DOT__VCRC = 0U;
                __VdlyMask__intc__DOT__VCRC = 0xffffU;
                __Vdly__intc__DOT__VCRD = 0U;
                __VdlyMask__intc__DOT__VCRD = 0xffffU;
                __Vdly__intc__DOT__ICR = 0U;
                __VdlyMask__intc__DOT__ICR = 0xffffU;
            }
            __Vdly__intc__DOT__ICR = ((0x7fffU & (IData)(__Vdly__intc__DOT__ICR)) 
                                      | ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__nmi_cnt)) 
                                         << 0x0000000fU));
            __VdlyMask__intc__DOT__ICR = (0x00008000U 
                                          | (IData)(__VdlyMask__intc__DOT__ICR));
            if (vlSelfRef.__PVT__RES_SYNC_N) {
                if ((((IData)(vlSelfRef.__PVT__intc__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                    if (((((((((0x60U == (0x000000feU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                               | (0x62U == (0x000000feU 
                                            & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                              | (0x64U == (0x000000feU 
                                           & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                             | (0x66U == (0x000000feU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                            | (0x68U == (0x000000feU 
                                         & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                           | (0xe0U == (0x000000feU 
                                        & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                          | (0xe2U == (0x000000feU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                         | (0xe4U == (0x000000feU & vlSelfRef.__PVT__cache__DOT__IBADDR)))) {
                        if ((0x60U == (0x000000feU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                vlSelfRef.intc__DOT__IPRB 
                                    = ((0x00ffU & (IData)(vlSelfRef.intc__DOT__IPRB)) 
                                       | (0x0000ff00U 
                                          & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                             >> 0x00000010U)));
                            }
                            if ((4U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                vlSelfRef.intc__DOT__IPRB 
                                    = (0xff00U & (IData)(vlSelfRef.intc__DOT__IPRB));
                            }
                        }
                        if ((0x60U != (0x000000feU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            if ((0x62U != (0x000000feU 
                                           & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                if ((0x64U != (0x000000feU 
                                               & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                    if ((0x66U != (0x000000feU 
                                                   & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                        if ((0x68U 
                                             != (0x000000feU 
                                                 & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                            if ((0xe0U 
                                                 != 
                                                 (0x000000feU 
                                                  & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                                if (
                                                    (0xe2U 
                                                     == 
                                                     (0x000000feU 
                                                      & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                        vlSelfRef.__PVT__intc__DOT__IPRA 
                                                            = 
                                                            ((0x00ffU 
                                                              & (IData)(vlSelfRef.__PVT__intc__DOT__IPRA)) 
                                                             | (0x0000ff00U 
                                                                & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                        vlSelfRef.__PVT__intc__DOT__IPRA 
                                                            = 
                                                            ((0xff00U 
                                                              & (IData)(vlSelfRef.__PVT__intc__DOT__IPRA)) 
                                                             | (0xf0U 
                                                                & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                                    }
                                                }
                                                if (
                                                    (0xe2U 
                                                     != 
                                                     (0x000000feU 
                                                      & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                        vlSelfRef.__PVT__intc__DOT__VCRWDT 
                                                            = 
                                                            ((0x00ffU 
                                                              & (IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT)) 
                                                             | (0x00007f00U 
                                                                & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                                   >> 0x00000010U)));
                                                    }
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                        vlSelfRef.__PVT__intc__DOT__VCRWDT 
                                                            = 
                                                            ((0xff00U 
                                                              & (IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT)) 
                                                             | (0x7fU 
                                                                & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                                   >> 0x10U)));
                                                    }
                                                }
                                            }
                                            if ((0xe0U 
                                                 == 
                                                 (0x000000feU 
                                                  & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                    vlSelfRef.__PVT__intc__DOT__ICR 
                                                        = 
                                                        ((0x00ffU 
                                                          & (IData)(vlSelfRef.__PVT__intc__DOT__ICR)) 
                                                         | (0x00000100U 
                                                            & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                               >> 0x00000010U)));
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                    vlSelfRef.__PVT__intc__DOT__ICR 
                                                        = 
                                                        ((0xff00U 
                                                          & (IData)(vlSelfRef.__PVT__intc__DOT__ICR)) 
                                                         | (1U 
                                                            & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                               >> 0x10U)));
                                                }
                                            }
                                        }
                                        if ((0x68U 
                                             == (0x000000feU 
                                                 & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                            if ((8U 
                                                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                vlSelfRef.__PVT__intc__DOT__VCRD 
                                                    = 
                                                    ((0x00ffU 
                                                      & (IData)(vlSelfRef.__PVT__intc__DOT__VCRD)) 
                                                     | (0x00007f00U 
                                                        & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                           >> 0x00000010U)));
                                            }
                                            if ((4U 
                                                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                                vlSelfRef.__PVT__intc__DOT__VCRD 
                                                    = 
                                                    (0xff00U 
                                                     & (IData)(vlSelfRef.__PVT__intc__DOT__VCRD));
                                            }
                                        }
                                    }
                                    if ((0x66U == (0x000000feU 
                                                   & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                        if ((2U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                            vlSelfRef.intc__DOT__VCRC 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.intc__DOT__VCRC)) 
                                                   | (0x00007f00U 
                                                      & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                        }
                                        if ((1U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                            vlSelfRef.intc__DOT__VCRC 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.intc__DOT__VCRC)) 
                                                   | (0x7fU 
                                                      & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                        }
                                    }
                                }
                                if ((0x64U == (0x000000feU 
                                               & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                    if ((8U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                        vlSelfRef.__PVT__intc__DOT__VCRB 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__PVT__intc__DOT__VCRB)) 
                                               | (0x00007f00U 
                                                  & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                     >> 0x00000010U)));
                                    }
                                    if ((4U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                        vlSelfRef.__PVT__intc__DOT__VCRB 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__PVT__intc__DOT__VCRB)) 
                                               | (0x7fU 
                                                  & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                     >> 0x10U)));
                                    }
                                }
                            }
                            if ((0x62U == (0x000000feU 
                                           & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                    vlSelfRef.__PVT__intc__DOT__VCRA 
                                        = ((0x00ffU 
                                            & (IData)(vlSelfRef.__PVT__intc__DOT__VCRA)) 
                                           | (0x00007f00U 
                                              & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                }
                                if ((1U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                    vlSelfRef.__PVT__intc__DOT__VCRA 
                                        = ((0xff00U 
                                            & (IData)(vlSelfRef.__PVT__intc__DOT__VCRA)) 
                                           | (0x7fU 
                                              & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.__PVT__core__DOT__REGS_WAE) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            if ((0x10U >= (0x0000001fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                          .__PVT__WB
                                          .__PVT__DI[1U] 
                                          >> 8U)))) {
                __VdlyVal__core__DOT__regfile__DOT__GR__v0 
                    = vlSelfRef.__PVT__core__DOT__REGS_WAD;
                __VdlyDim0__core__DOT__regfile__DOT__GR__v0 
                    = (0x0000001fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                      .__PVT__WB.__PVT__DI[1U] 
                                      >> 8U));
                __VdlySet__core__DOT__regfile__DOT__GR__v0 = 1U;
            }
        }
        if (vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH) {
            if ((0x10U >= (IData)(vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_ADDR_LATCH))) {
                __VdlyVal__core__DOT__regfile__DOT__GR__v1 
                    = vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_D_LATCH;
                __VdlyDim0__core__DOT__regfile__DOT__GR__v1 
                    = vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_ADDR_LATCH;
                __VdlySet__core__DOT__regfile__DOT__GR__v1 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)))) {
            vlSelfRef.__PVT__sci__DOT__REG_DO = 0U;
            vlSelfRef.__PVT__UBC__DOT__REG_DO = 0U;
        }
        if ((((0U != (IData)(vlSelfRef.__PVT__MAC_SEL)) 
              & (IData)(vlSelfRef.__PVT__MAC_WE)) & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            if ((8U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__MAC_OP) 
                              >> 2U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                            vlSelfRef.__PVT__mult__DOT__SIGNED 
                                = (1U & (IData)(vlSelfRef.__PVT__MAC_OP));
                        }
                    }
                }
                if ((4U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                            vlSelfRef.__PVT__mult__DOT__MACH = 0U;
                            vlSelfRef.__PVT__mult__DOT__MACL = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                            __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                        __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC = 1U;
                    }
                } else {
                    if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                        vlSelfRef.__PVT__mult__DOT__MACL 
                            = vlSelfRef.__PVT__MULT_DI;
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                        vlSelfRef.__PVT__mult__DOT__MACH 
                            = vlSelfRef.__PVT__MULT_DI;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                    vlSelfRef.__PVT__mult__DOT__SIGNED 
                        = (1U & (IData)(vlSelfRef.__PVT__MAC_OP));
                    __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC 
                        = (1U & ((IData)(vlSelfRef.__PVT__MAC_SEL) 
                                 >> 1U));
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__MAC_OP)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                        vlSelfRef.__PVT__mult__DOT__MACL 
                            = vlSelfRef.__PVT__MULT_DI;
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                        vlSelfRef.__PVT__mult__DOT__MACH 
                            = vlSelfRef.__PVT__MULT_DI;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    vlSelfRef.__PVT__mult__DOT__SIGNED 
                        = (IData)((3U == (3U & (IData)(vlSelfRef.__PVT__MAC_OP))));
                    __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__MAC_OP) 
                                    >> 1U)));
                    __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC 
                        = (1U & ((IData)(vlSelfRef.__PVT__MAC_OP) 
                                 >> 1U));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    vlSelfRef.__PVT__mult__DOT__SIGNED 
                        = (IData)((3U == (3U & (IData)(vlSelfRef.__PVT__MAC_OP))));
                    __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__MAC_OP) 
                                    >> 1U)));
                    __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC 
                        = (1U & ((IData)(vlSelfRef.__PVT__MAC_OP) 
                                 >> 1U));
                }
            }
        }
        if (vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MUL_EXEC) {
            vlSelfRef.__PVT__mult__DOT__MACL = vlSelfRef.__PVT__mult__DOT__SRES[0U];
            __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC = 0U;
        }
        if (vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DMUL_EXEC) {
            vlSelfRef.__PVT__mult__DOT__MACH = vlSelfRef.__PVT__mult__DOT__SRES[1U];
            vlSelfRef.__PVT__mult__DOT__MACL = vlSelfRef.__PVT__mult__DOT__SRES[0U];
            __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC = 0U;
        }
        if (vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACW_EXEC) {
            if (vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__SAT) {
                if (((1U & (IData)((vlSelfRef.__PVT__mult__DOT__ACC32 
                                    >> 0x20U))) != 
                     (1U & (IData)((vlSelfRef.__PVT__mult__DOT__ACC32 
                                    >> 0x1fU))))) {
                    vlSelfRef.__PVT__mult__DOT__MACL 
                        = (((IData)((vlSelfRef.__PVT__mult__DOT__ACC32 
                                     >> 0x20U)) << 0x0000001fU) 
                           | (0x7fffffffU & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (vlSelfRef.__PVT__mult__DOT__ACC32 
                                                                      >> 0x20U))))))));
                    vlSelfRef.__PVT__mult__DOT__MACH 
                        = (1U | (IData)((vlSelfRef.__PVT__mult__DOT__ACC64 
                                         >> 0x20U)));
                } else {
                    vlSelfRef.__PVT__mult__DOT__MACL 
                        = (IData)(vlSelfRef.__PVT__mult__DOT__ACC32);
                }
            } else {
                vlSelfRef.__PVT__mult__DOT__MACH = (IData)(
                                                           (vlSelfRef.__PVT__mult__DOT__ACC64 
                                                            >> 0x00000020U));
                vlSelfRef.__PVT__mult__DOT__MACL = (IData)(vlSelfRef.__PVT__mult__DOT__ACC64);
            }
            __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC = 0U;
        }
        if (vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACL_EXEC) {
            if (vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__SAT) {
                if (((0x0000ffffU & (IData)((vlSelfRef.__PVT__mult__DOT__ACC64 
                                             >> 0x30U))) 
                     != (0x0000ffffU & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__mult__DOT__ACC64 
                                                              >> 0x2fU)))))))) {
                    vlSelfRef.__PVT__mult__DOT__MACH 
                        = (((- (IData)(((vlSelfRef.__PVT__mult__DOT__MA 
                                         ^ vlSelfRef.__PVT__mult__DOT__MB) 
                                        >> 0x1fU))) 
                            << 0x0000000fU) | (0x00007fffU 
                                               & (IData)(
                                                         (0x0000000000007fffULL 
                                                          & ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSelfRef.__PVT__mult__DOT__MA 
                                                                                ^ vlSelfRef.__PVT__mult__DOT__MB) 
                                                                                >> 0x1fU)))))) 
                                                             >> 0x00000020U)))));
                    vlSelfRef.__PVT__mult__DOT__MACL 
                        = (IData)((0x00007fffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((vlSelfRef.__PVT__mult__DOT__MA 
                                                              ^ vlSelfRef.__PVT__mult__DOT__MB) 
                                                             >> 0x1fU))))))));
                } else {
                    vlSelfRef.__PVT__mult__DOT__MACH 
                        = (IData)((vlSelfRef.__PVT__mult__DOT__ACC64 
                                   >> 0x00000020U));
                    vlSelfRef.__PVT__mult__DOT__MACL 
                        = (IData)(vlSelfRef.__PVT__mult__DOT__ACC64);
                }
            } else {
                vlSelfRef.__PVT__mult__DOT__MACH = (IData)(
                                                           (vlSelfRef.__PVT__mult__DOT__ACC64 
                                                            >> 0x00000020U));
                vlSelfRef.__PVT__mult__DOT__MACL = (IData)(vlSelfRef.__PVT__mult__DOT__ACC64);
            }
            __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC = 0U;
        }
        if ((((0U != (IData)(vlSelfRef.__PVT__MAC_SEL)) 
              & (IData)(vlSelfRef.__PVT__MAC_WE)) & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            if ((8U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__MAC_OP) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                            vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DW 
                                = (0x0000ffffU & ((2U 
                                                   & vlSelfRef.__PVT__CBUS_A)
                                                   ? vlSelfRef.__PVT__MULT_DI
                                                   : 
                                                  (vlSelfRef.__PVT__MULT_DI 
                                                   >> 0x10U)));
                            if ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                                vlSelfRef.__PVT__mult__DOT__MA 
                                    = (((- (IData)((IData)(
                                                           (((IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DW) 
                                                             >> 0x0000000fU) 
                                                            & (IData)(vlSelfRef.__PVT__MAC_OP))))) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DW));
                            }
                            if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                                vlSelfRef.__PVT__mult__DOT__MB 
                                    = (((- (IData)((IData)(
                                                           (((IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DW) 
                                                             >> 0x0000000fU) 
                                                            & (IData)(vlSelfRef.__PVT__MAC_OP))))) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DW));
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                            vlSelfRef.__PVT__mult__DOT__MA 
                                = vlSelfRef.__PVT__MULT_DI;
                        }
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                            vlSelfRef.__PVT__mult__DOT__MB 
                                = vlSelfRef.__PVT__MULT_DI;
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                            vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__SAT 
                                = (1U & (vlSelfRef.core__DOT__SR 
                                         >> 1U));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                    vlSelfRef.__PVT__mult__DOT__MA 
                        = (((- (IData)((1U & ((vlSelfRef.__PVT__MULT_DI 
                                               >> 0x0fU) 
                                              & (IData)(vlSelfRef.__PVT__MAC_OP))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.__PVT__MULT_DI));
                    vlSelfRef.__PVT__mult__DOT__MB 
                        = (((- (IData)(((vlSelfRef.__PVT__MULT_DI 
                                         >> 0x0000001fU) 
                                        & (IData)(vlSelfRef.__PVT__MAC_OP)))) 
                            << 0x00000010U) | (vlSelfRef.__PVT__MULT_DI 
                                               >> 0x10U));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    vlSelfRef.__PVT__mult__DOT__MA 
                        = vlSelfRef.__PVT__MULT_DI;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    vlSelfRef.__PVT__mult__DOT__MB 
                        = vlSelfRef.__PVT__MULT_DI;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__MAC_OP))) {
                if ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    vlSelfRef.__PVT__mult__DOT__MA 
                        = vlSelfRef.__PVT__MULT_DI;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__MAC_SEL))) {
                    vlSelfRef.__PVT__mult__DOT__MB 
                        = vlSelfRef.__PVT__MULT_DI;
                }
            }
        }
        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__LL 
            = (1U & (7U >> (3U & (vlSelfRef.__PVT__IA 
                                  >> 0x19U))));
        __Vfunc_bsc__DOT__GetAreaSZ__12__dramsz = (2U 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                         >> 6U)));
        __Vfunc_bsc__DOT__GetAreaSZ__12__BCR2 = vlSelfRef.__PVT__bsc__DOT__BCR2;
        __Vfunc_bsc__DOT__GetAreaSZ__12__BCR1 = vlSelfRef.__PVT__bsc__DOT__BCR1;
        __Vfunc_bsc__DOT__GetAreaSZ__12__area = (3U 
                                                 & (vlSelfRef.__PVT__IA 
                                                    >> 0x19U));
        vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res 
            = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__area))
                      ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__area))
                          ? ((1U & VL_REDXOR_32((3U 
                                                 & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__BCR1))))
                              ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__dramsz)
                              : ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__BCR2) 
                                 >> 6U)) : ((4U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__BCR1))
                                             ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__dramsz)
                                             : ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__BCR2) 
                                                >> 4U)))
                      : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__area))
                          ? ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__12__BCR2) 
                             >> 2U) : 2U)));
        __Vfunc_bsc__DOT__GetAreaSZ__12__Vfuncout = vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res;
        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ 
            = __Vfunc_bsc__DOT__GetAreaSZ__12__Vfuncout;
        if ((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST 
                = (0x0eU == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST 
                = (0x0cU == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
        } else if ((3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST 
                = (0x0cU == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST 
                = (8U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
        } else {
            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST 
                = (0x0fU == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST 
                = (0x0eU == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT));
        }
        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 0U;
        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
            = vlSelfRef.bsc__DOT__BUS_STATE;
        if ((8U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
            if ((4U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                if ((1U & (~ ((IData)(vlSelfRef.bsc__DOT__BUS_STATE) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.bsc__DOT__BUS_STATE)))) {
                        if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                                vlSelfRef.__PVT__IIVECF_N = 1U;
                                __Vdly__IRD_WR_N = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__bsc__DOT__VEC_BUF 
                                = (0x000000ffU & vlSelfRef.__PVT__IDI);
                            vlSelfRef.__PVT__IRD_N = 1U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                if ((1U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                    if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                        vlSelfRef.__PVT__IBS_N = 1U;
                        if (vlSelfRef.WAIT_N) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0cU;
                            __Vdly__bsc__DOT__VBUSY = 0U;
                            __Vdly__bsc__DOT__BUSY = 0U;
                        }
                    }
                } else if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                    vlSelfRef.__PVT__ICS0_N = 1U;
                    vlSelfRef.__PVT__ICS1_N = 1U;
                    vlSelfRef.__PVT__ICS2_N = 1U;
                    vlSelfRef.__PVT__ICS3_N = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                    if (((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT)) 
                         & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)))) {
                        vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT 
                            = (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT) 
                                     - (IData)(1U)));
                    } else {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0aU;
                    }
                }
            } else if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                if ((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT))) {
                    __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
                        = (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT) 
                                 - (IData)(1U)));
                } else {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
            if ((2U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                if ((1U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                    if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                                      >> 1U)))) {
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE) 
                                 & ((~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)) 
                                    | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST)))) {
                                vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
                            }
                            __Vdly__bsc__DOT__BUSY = 0U;
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE) 
                                 & ((~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)) 
                                    | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST)))) {
                                __Vdly__bsc__DOT__DBUSY = 0U;
                            }
                        }
                        if (vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                            vlSelfRef.__PVT__ICS0_N = 1U;
                            vlSelfRef.__PVT__ICS1_N = 1U;
                            vlSelfRef.__PVT__ICS2_N = 1U;
                            vlSelfRef.__PVT__ICS3_N = 1U;
                            __Vdly__IRD_WR_N = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND = 0U;
                        }
                        if ((1U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                        } else if ((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                                = (0x0000000fU & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                        } else if ((3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                                = (0x0000000fU & ((IData)(4U) 
                                                  + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                        }
                    } else {
                        if ((1U & ((0U == (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                                                 >> 2U))) 
                                   | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE))))) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 1U;
                        }
                        vlSelfRef.__PVT__IRD_N = 1U;
                    }
                } else if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                    if (((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT)) 
                         & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                            = (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT) 
                                     - (IData)(1U)));
                    } else if ((1U & ((IData)(vlSelfRef.WAIT_N) 
                                      | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__LL))))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 7U;
                        if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)))) {
                                vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
                            }
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE)))) {
                                __Vdly__bsc__DOT__DBUSY = 0U;
                            }
                            __Vdly__bsc__DOT__BUSY = 0U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
                    vlSelfRef.__PVT__IWE_N = 0x0fU;
                }
                if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 8U;
                    if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                        vlSelfRef.__PVT__ICS0_N = 1U;
                        vlSelfRef.__PVT__ICS1_N = 1U;
                        vlSelfRef.__PVT__ICS2_N = 1U;
                        vlSelfRef.__PVT__ICS3_N = 1U;
                        __Vdly__IRD_WR_N = 1U;
                    }
                    __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND = 0U;
                }
            } else if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                vlSelfRef.__PVT__IBS_N = 1U;
                if (vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH) {
                    if ((1U & ((IData)(vlSelfRef.WAIT_N) 
                               | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__LL))))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 5U;
                        if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                            __Vdly__bsc__DOT__BUSY = 0U;
                        }
                        __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 6U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
            if ((1U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
                if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                    if (((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT)) 
                         & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
                            = (7U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT) 
                                     - (IData)(1U)));
                    } else if (vlSelfRef.WAIT_N) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 2U;
                        if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                                vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
                            }
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE) 
                                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                                __Vdly__bsc__DOT__DBUSY = 0U;
                            }
                            __Vdly__bsc__DOT__BUSY = 0U;
                        }
                    }
                }
            } else if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                if (vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST) {
                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                }
                if ((1U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                } else if ((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                        = (0x0000000fU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                } else if ((3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
                        = (0x0000000fU & ((IData)(4U) 
                                          + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT)));
                }
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 1U;
                if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                    if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 1U;
                    }
                    __Vdly__IRD_WR_N = 1U;
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                               | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                    }
                }
                __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND = 0U;
            } else {
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 1U;
                vlSelfRef.__PVT__ICS0_N = 1U;
                vlSelfRef.__PVT__ICS1_N = 1U;
                vlSelfRef.__PVT__ICS2_N = 1U;
                vlSelfRef.__PVT__ICS3_N = 1U;
                vlSelfRef.__PVT__IRD_N = 1U;
                vlSelfRef.__PVT__IWE_N = 0x0fU;
            }
        } else if ((1U & (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) {
            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                __Vfunc_bsc__DOT__GetAreaW__13__WCR 
                    = vlSelfRef.__PVT__bsc__DOT__WCR;
                __Vfunc_bsc__DOT__GetAreaW__13__area 
                    = (3U & (vlSelfRef.__PVT__IA >> 0x19U));
                vlSelfRef.__PVT__IBS_N = 1U;
                vlSelfRef.__PVT__bsc__DOT__GetAreaW__Vstatic__res 
                    = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaW__13__area))
                              ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaW__13__area))
                                  ? ((IData)(__Vfunc_bsc__DOT__GetAreaW__13__WCR) 
                                     >> 6U) : ((IData)(__Vfunc_bsc__DOT__GetAreaW__13__WCR) 
                                               >> 4U))
                              : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaW__13__area))
                                  ? ((IData)(__Vfunc_bsc__DOT__GetAreaW__13__WCR) 
                                     >> 2U) : (IData)(__Vfunc_bsc__DOT__GetAreaW__13__WCR))));
                __Vfunc_bsc__DOT__GetAreaW__13__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__GetAreaW__Vstatic__res;
                bsc__DOT____VCase_ha489fac9__0 = __Vfunc_bsc__DOT__GetAreaW__13__Vfuncout;
                if ((2U & (IData)(bsc__DOT____VCase_ha489fac9__0))) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 3U;
                    if ((1U & (IData)(bsc__DOT____VCase_ha489fac9__0))) {
                        __Vfunc_bsc__DOT__GetAreaLW__14__BCR1 
                            = vlSelfRef.__PVT__bsc__DOT__BCR1;
                        __Vfunc_bsc__DOT__GetAreaLW__14__area 
                            = (3U & (vlSelfRef.__PVT__IA 
                                     >> 0x19U));
                        vlSelfRef.__PVT__bsc__DOT__GetAreaLW__Vstatic__res 
                            = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaLW__14__area))
                                      ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaLW__14__area))
                                          ? ((IData)(__Vfunc_bsc__DOT__GetAreaLW__14__BCR1) 
                                             >> 8U)
                                          : ((IData)(__Vfunc_bsc__DOT__GetAreaLW__14__BCR1) 
                                             >> 8U))
                                      : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaLW__14__area))
                                          ? ((IData)(__Vfunc_bsc__DOT__GetAreaLW__14__BCR1) 
                                             >> 6U)
                                          : ((IData)(__Vfunc_bsc__DOT__GetAreaLW__14__BCR1) 
                                             >> 4U))));
                        __Vfunc_bsc__DOT__GetAreaLW__14__Vfuncout 
                            = vlSelfRef.__PVT__bsc__DOT__GetAreaLW__Vstatic__res;
                        bsc__DOT____VCase_h19fa5323__0 
                            = __Vfunc_bsc__DOT__GetAreaLW__14__Vfuncout;
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
                            = (7U & (0x0b1aU >> ((IData)(3U) 
                                                 * (IData)(bsc__DOT____VCase_h19fa5323__0))));
                    } else {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 1U;
                    }
                } else if ((1U & (IData)(bsc__DOT____VCase_ha489fac9__0))) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 3U;
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
                } else {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 2U;
                    if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                        if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE) 
                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                            vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
                        }
                        if (((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE) 
                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)))) {
                            __Vdly__bsc__DOT__DBUSY = 0U;
                        }
                        __Vdly__bsc__DOT__BUSY = 0U;
                    }
                }
            }
        } else if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
            __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
            if (((((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                   & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                  & (0x3fU != (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) 
                 & (~ (IData)(vlSelfRef.__PVT__divu__DOT__BUSY)))) {
                vlSelfRef.__Vdly__divu__DOT__BUSY = 1U;
            } else if (((0x3fU == (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                        & (IData)(vlSelfRef.__PVT__divu__DOT__BUSY))) {
                vlSelfRef.__Vdly__divu__DOT__BUSY = 0U;
            }
            if ((((((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ) 
                    & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BGR))) 
                   & (0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                  & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_END)) 
                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS)))) {
                vlSelfRef.__Vdly__bsc__DOT__BGR = 1U;
            } else if ((((IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ) 
                         & (IData)(vlSelfRef.__PVT__bsc__DOT__BGR)) 
                        & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS)))) {
                __Vdly__bsc__DOT__MST_BUS_RLS = 1U;
            } else if (((~ (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ)) 
                        & (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS))) {
                vlSelfRef.__Vdly__bsc__DOT__BGR = 0U;
                __Vdly__bsc__DOT__MST_BUS_RLS = 0U;
            }
            if ((((IData)(vlSelfRef.__PVT__intc__DOT__REG_SEL) 
                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__intc__DOT__BUS_DO 
                    = (((((((((0x60U == (0x000000feU 
                                         & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                              | (0x62U == (0x000000feU 
                                           & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                             | (0x64U == (0x000000feU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                            | (0x66U == (0x000000feU 
                                         & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                           | (0x68U == (0x000000feU 
                                        & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                          | (0xe0U == (0x000000feU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                         | (0xe2U == (0x000000feU & vlSelfRef.__PVT__cache__DOT__IBADDR))) 
                        | (0xe4U == (0x000000feU & vlSelfRef.__PVT__cache__DOT__IBADDR)))
                        ? ((0x60U == (0x000000feU & vlSelfRef.__PVT__cache__DOT__IBADDR))
                            ? ((0xff000000U & ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                               << 0x00000010U)) 
                               | (0xff00U & (IData)(vlSelfRef.intc__DOT__IPRB)))
                            : ((0x62U == (0x000000feU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                ? ((0x7f7f0000U & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRA) 
                                                   << 0x00000010U)) 
                                   | (0x7f7fU & (IData)(vlSelfRef.__PVT__intc__DOT__VCRA)))
                                : ((0x64U == (0x000000feU 
                                              & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                    ? ((0x7f7f0000U 
                                        & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRB) 
                                           << 0x00000010U)) 
                                       | (0x7f7fU & (IData)(vlSelfRef.__PVT__intc__DOT__VCRB)))
                                    : ((0x66U == (0x000000feU 
                                                  & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                        ? ((0x7f7f0000U 
                                            & ((IData)(vlSelfRef.intc__DOT__VCRC) 
                                               << 0x00000010U)) 
                                           | (0x7f7fU 
                                              & (IData)(vlSelfRef.intc__DOT__VCRC)))
                                        : ((0x68U == 
                                            (0x000000feU 
                                             & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                            ? ((0x7f000000U 
                                                & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRD) 
                                                   << 0x00000010U)) 
                                               | (0x7f00U 
                                                  & (IData)(vlSelfRef.__PVT__intc__DOT__VCRD)))
                                            : ((0xe0U 
                                                == 
                                                (0x000000feU 
                                                 & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                                ? (
                                                   (0x81010000U 
                                                    & ((IData)(vlSelfRef.__PVT__intc__DOT__ICR) 
                                                       << 0x00000010U)) 
                                                   | (0x8101U 
                                                      & (IData)(vlSelfRef.__PVT__intc__DOT__ICR)))
                                                : (
                                                   (0xe2U 
                                                    == 
                                                    (0x000000feU 
                                                     & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                                    ? 
                                                   ((0xfff00000U 
                                                     & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                                        << 0x00000010U)) 
                                                    | (0xfff0U 
                                                       & (IData)(vlSelfRef.__PVT__intc__DOT__IPRA)))
                                                    : 
                                                   ((0x7f7f0000U 
                                                     & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT) 
                                                        << 0x00000010U)) 
                                                    | (0x7f7fU 
                                                       & (IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT))))))))))
                        : 0U);
            }
            if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG1_SEL) 
                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__dmac__DOT__REG_DO 
                    = (((3U & vlSelfRef.__PVT__dmac__DOT__DRCR[0U]) 
                        << 0x00000010U) | ((3U & vlSelfRef.__PVT__dmac__DOT__DRCR[1U]) 
                                           << 8U));
            } else if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG2_SEL) 
                         & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                        & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__dmac__DOT__REG_DO 
                    = ((0x00000020U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                        ? ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                            ? ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? 0U : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                         ? 0U : (0x0000000fU 
                                                 & vlSelfRef.__PVT__dmac__DOT__DMAOR)))
                            : ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                    ? 0U : (0x000000ffU 
                                            & vlSelfRef.__PVT__dmac__DOT__VCRDMA1))
                                : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                    ? 0U : (0x000000ffU 
                                            & vlSelfRef.__PVT__dmac__DOT__VCRDMA0))))
                        : ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                            ? ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                    ? (0x0000ffffU 
                                       & vlSelfRef.__PVT__dmac__DOT__CHCR[1U])
                                    : vlSelfRef.__PVT__dmac__DOT__TCR[1U])
                                : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                    ? vlSelfRef.__PVT__dmac__DOT__DAR[1U]
                                    : vlSelfRef.__PVT__dmac__DOT__SAR[1U]))
                            : ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                    ? (0x0000ffffU 
                                       & vlSelfRef.__PVT__dmac__DOT__CHCR[0U])
                                    : vlSelfRef.__PVT__dmac__DOT__TCR[0U])
                                : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                    ? vlSelfRef.__PVT__dmac__DOT__DAR[0U]
                                    : vlSelfRef.__PVT__dmac__DOT__SAR[0U]))));
            }
            if ((((0xffffffe0U <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__bsc__DOT__REG_DO = 
                    (0x0000ffffU & vlSelfRef.__PVT__bsc__DOT__REG_DO);
                vlSelfRef.__PVT__bsc__DOT__REG_DO = 
                    ((0xffff0000U & vlSelfRef.__PVT__bsc__DOT__REG_DO) 
                     | ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                         ? ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                             ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                 ? 0U : (0x00ffU & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCOR)))
                             : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                 ? (0x00ffU & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCNT))
                                 : (0x00f8U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))))
                         : ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                             ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                 ? (0xfefcU & (IData)(vlSelfRef.__PVT__bsc__DOT__MCR))
                                 : (IData)(vlSelfRef.__PVT__bsc__DOT__WCR))
                             : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                 ? (0x00fcU & (IData)(vlSelfRef.__PVT__bsc__DOT__BCR2))
                                 : (0x00001ff7U & (IData)(vlSelfRef.__PVT__bsc__DOT__BCR1))))));
            }
            if (vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH) {
                if ((1U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                    if ((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                        if ((2U & vlSelfRef.__PVT__IA)) {
                            if ((2U & vlSelfRef.__PVT__IA)) {
                                vlSelfRef.__PVT__bsc__DOT__DAT_BUF 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__PVT__bsc__DOT__DAT_BUF) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.__PVT__IDI));
                            }
                        } else {
                            vlSelfRef.__PVT__bsc__DOT__DAT_BUF 
                                = ((0x0000ffffU & vlSelfRef.__PVT__bsc__DOT__DAT_BUF) 
                                   | (vlSelfRef.__PVT__IDI 
                                      << 0x00000010U));
                        }
                    } else if ((3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                        vlSelfRef.__PVT__bsc__DOT__DAT_BUF 
                            = vlSelfRef.__PVT__IDI;
                    }
                }
            }
        }
        if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
            if ((((~ (IData)(vlSelfRef.__PVT__dmac__DOT__CH_REQ[0U])) 
                  & vlSelfRef.__PVT__dmac__DOT__CH_EN[0U]) 
                 & vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[0U])) {
                __VdlyVal__dmac__DOT__CH_REQ__v0 = 
                    ((1U & (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                            >> 9U)) || ((1U & (~ (vlSelfRef.__PVT__dmac__DOT__DRCR[0U] 
                                                  >> 1U))) 
                                        && ((1U & (~ vlSelfRef.__PVT__dmac__DOT__DRCR[0U])) 
                                            && (IData)(vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ))));
                __VdlySet__dmac__DOT__CH_REQ__v0 = 1U;
            } else if ((1U & (vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[0U] 
                              | (~ (IData)(vlSelfRef.__PVT__dmac__DOT__CH_EN[0U]))))) {
                __VdlySet__dmac__DOT__CH_REQ__v1 = 1U;
            }
            if ((((~ (IData)(vlSelfRef.__PVT__dmac__DOT__CH_REQ[1U])) 
                  & vlSelfRef.__PVT__dmac__DOT__CH_EN[1U]) 
                 & vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[1U])) {
                __VdlyVal__dmac__DOT__CH_REQ__v2 = 
                    ((1U & (vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                            >> 9U)) || ((1U & (~ (vlSelfRef.__PVT__dmac__DOT__DRCR[1U] 
                                                  >> 1U))) 
                                        && ((1U & (~ vlSelfRef.__PVT__dmac__DOT__DRCR[1U])) 
                                            && (IData)(vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ))));
                __VdlySet__dmac__DOT__CH_REQ__v2 = 1U;
            } else if ((1U & (vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[1U] 
                              | (~ (IData)(vlSelfRef.__PVT__dmac__DOT__CH_EN[1U]))))) {
                __VdlySet__dmac__DOT__CH_REQ__v3 = 1U;
            }
            if ((1U & (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE))) {
                __VdlyVal__cache__DOT__TAG_DIRTY__v0 
                    = vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE;
                __VdlyLsb__cache__DOT__TAG_DIRTY__v0 
                    = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                      >> 2U));
                __VdlySet__cache__DOT__TAG_DIRTY__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE))) {
                __VdlyVal__cache__DOT__TAG_DIRTY__v1 
                    = vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE;
                __VdlyLsb__cache__DOT__TAG_DIRTY__v1 
                    = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                      >> 2U));
                __VdlySet__cache__DOT__TAG_DIRTY__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE))) {
                __VdlyVal__cache__DOT__TAG_DIRTY__v2 
                    = vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE;
                __VdlyLsb__cache__DOT__TAG_DIRTY__v2 
                    = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                      >> 2U));
                __VdlySet__cache__DOT__TAG_DIRTY__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE))) {
                __VdlyVal__cache__DOT__TAG_DIRTY__v3 
                    = vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE;
                __VdlyLsb__cache__DOT__TAG_DIRTY__v3 
                    = (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                      >> 2U));
                __VdlySet__cache__DOT__TAG_DIRTY__v3 = 1U;
            }
            if (vlSelfRef.__PVT__RES_SYNC_N) {
                if ((1U & (~ (((IData)(vlSelfRef.__PVT__dmac__DOT__REG1_SEL) 
                               & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                              & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))))) {
                    if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG2_SEL) 
                          & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                        if ((0x20U != (0x0000003cU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            if ((0x28U != (0x0000003cU 
                                           & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                if ((0x30U == (0x0000003cU 
                                               & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                    __Vdly__dmac__DOT__DMAOR 
                                        = ((1U & __Vdly__dmac__DOT__DMAOR) 
                                           | (((4U 
                                                & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                   >> 1U)) 
                                               | (3U 
                                                  & ((vlSelfRef.__PVT__dmac__DOT__DMAOR 
                                                      & vlSelfRef.__PVT__cache__DOT__IBDATA) 
                                                     >> 1U))) 
                                              << 1U));
                                    __Vdly__dmac__DOT__DMAOR 
                                        = ((0xfffffffeU 
                                            & __Vdly__dmac__DOT__DMAOR) 
                                           | (1U & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                }
                            }
                        }
                    }
                }
                if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG1_SEL) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                        __VdlyVal__dmac__DOT__DRCR__v0 
                            = (3U & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                     >> 0x10U));
                        __VdlySet__dmac__DOT__DRCR__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                        __VdlyVal__dmac__DOT__DRCR__v1 
                            = (3U & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                     >> 8U));
                        __VdlySet__dmac__DOT__DRCR__v1 = 1U;
                    }
                }
            } else {
                __Vdly__dmac__DOT__DMAOR = 0U;
                __Vdly__dmac__DOT__DMAOR = (1U | __Vdly__dmac__DOT__DMAOR);
                __VdlySet__dmac__DOT__DRCR__v2 = 1U;
            }
            if ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__nmi_cnt))) {
                __Vdly__dmac__DOT__DMAOR = (2U | __Vdly__dmac__DOT__DMAOR);
            }
            if ((((IData)(vlSelfRef.__PVT__core__DOT__SLP) 
                  & (~ (IData)(vlSelfRef.__PVT__msby__DOT__unnamedblk1__DOT__SLEEP_OLD))) 
                 & ((IData)(vlSelfRef.__PVT__msby__DOT__SBYCR) 
                    >> 7U))) {
                __Vdly__MSBY_SBY = 1U;
            }
            if (((IData)(vlSelfRef.__PVT__WDT_OVF) 
                 & (IData)(vlSelfRef.__PVT__MSBY_SBY))) {
                __Vdly__MSBY_SBY = 0U;
            }
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                       | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) {
                __Vdly__frt__DOT__FTCSR = (0xf1U & (IData)(__Vdly__frt__DOT__FTCSR));
                __Vdly__frt__DOT__FTCSR = (0xfeU & (IData)(__Vdly__frt__DOT__FTCSR));
                __Vdly__frt__DOT__FTCSR = (0x8fU & (IData)(__Vdly__frt__DOT__FTCSR));
            } else {
                if (vlSelfRef.__PVT__frt__DOT__FRC_CE) {
                    if (((IData)(vlSelfRef.frt__DOT__FRC) 
                         == (IData)(vlSelfRef.frt__DOT__OCRA))) {
                        __Vdly__frt__DOT__FTCSR = (8U 
                                                   | (IData)(__Vdly__frt__DOT__FTCSR));
                    }
                    if (((IData)(vlSelfRef.frt__DOT__FRC) 
                         == (IData)(vlSelfRef.frt__DOT__OCRB))) {
                        __Vdly__frt__DOT__FTCSR = (4U 
                                                   | (IData)(__Vdly__frt__DOT__FTCSR));
                    }
                    if ((0xffffU == (IData)(vlSelfRef.frt__DOT__FRC))) {
                        __Vdly__frt__DOT__FTCSR = (2U 
                                                   | (IData)(__Vdly__frt__DOT__FTCSR));
                    }
                }
                if (vlSelfRef.__PVT__frt__DOT__FTCSR_WRITE) {
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x13U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET)) 
                         & ((IData)(vlSelfRef.frt__DOT__FTCSR) 
                            >> 3U))) {
                        __Vdly__frt__DOT__FTCSR = (0xf7U 
                                                   & (IData)(__Vdly__frt__DOT__FTCSR));
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET = 0U;
                    }
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x12U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET)) 
                         & ((IData)(vlSelfRef.frt__DOT__FTCSR) 
                            >> 2U))) {
                        __Vdly__frt__DOT__FTCSR = (0xfbU 
                                                   & (IData)(__Vdly__frt__DOT__FTCSR));
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET = 0U;
                    }
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x11U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET)) 
                         & ((IData)(vlSelfRef.frt__DOT__FTCSR) 
                            >> 1U))) {
                        __Vdly__frt__DOT__FTCSR = (0xfdU 
                                                   & (IData)(__Vdly__frt__DOT__FTCSR));
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET = 0U;
                    }
                }
                if ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                    __Vdly__frt__DOT__FTCSR 
                                        = ((0xfeU & (IData)(__Vdly__frt__DOT__FTCSR)) 
                                           | (1U & 
                                              (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                               >> 0x10U)));
                                }
                            }
                        }
                    }
                }
            }
            if (((((0xffffffe0U <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                   & (0xa55aU == (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                  >> 0x10U))) & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                if ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            __Vdly__bsc__DOT__RTCNT 
                                = (0x000000ffU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                    }
                }
            }
            vlSelfRef.__PVT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__bsc__DOT__RTCNT)));
            if (((0x00000020U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))
                  ? ((0x00000010U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))
                      ? ((8U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))
                          ? (IData)(vlSelfRef.__PVT__CLK4096_CE)
                          : (IData)(vlSelfRef.__PVT__CLK2048_CE))
                      : ((8U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))
                          ? (IData)(vlSelfRef.__PVT__CLK1024_CE)
                          : (IData)(vlSelfRef.__PVT__CLK256_CE)))
                  : ((0x00000010U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))
                      ? ((8U & (IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR))
                          ? (IData)(vlSelfRef.__PVT__CLK64_CE)
                          : (IData)(vlSelfRef.__PVT__CLK16_CE))
                      : ((IData)(vlSelfRef.__PVT__CLK4_CE) 
                         & ((IData)(vlSelfRef.__PVT__bsc__DOT__RTCSR) 
                            >> 3U))))) {
                __Vdly__bsc__DOT__RTCNT = vlSelfRef.__PVT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW;
                if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW) 
                     == (IData)(vlSelfRef.__PVT__bsc__DOT__RTCOR))) {
                    __Vdly__bsc__DOT__RTCNT = 0U;
                    __Vdly__bsc__DOT__RFS_REQ = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                    >> 3U));
                }
            }
            if (((9U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                 & (IData)(vlSelfRef.__PVT__bsc__DOT__RFS_REQ))) {
                __Vdly__bsc__DOT__RFS_REQ = 0U;
            }
        } else {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))) {
                __VdlySet__cache__DOT__TAG_DIRTY__v4 = 1U;
            }
            if (vlSelfRef.__PVT__RES_SYNC_N) {
                if (vlSelfRef.__PVT__frt__DOT__FTCSR_READ) {
                    if ((8U & (IData)(vlSelfRef.frt__DOT__FTCSR))) {
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.frt__DOT__FTCSR))) {
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.frt__DOT__FTCSR))) {
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET = 0U;
                vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET = 0U;
                vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET = 0U;
            }
        }
        if (vlSelfRef.__PVT__RES_SYNC_N) {
            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                if (((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL) 
                       & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                      & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) 
                     & (IData)(vlSelfRef.__PVT__wdt__DOT__IBUS_REQ_OLD))) {
                    __Vdly__wdt__DOT__OPEN_BUS = (0x000000ffU 
                                                  & ((4U 
                                                      == 
                                                      (7U 
                                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))
                                                      ? 
                                                     (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                      >> 8U)
                                                      : vlSelfRef.__PVT__cache__DOT__IBDATA));
                }
                if (((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL) 
                       & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                      & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) 
                     & (IData)(vlSelfRef.__PVT__wdt__DOT__IBUS_REQ_OLD))) {
                    if ((4U != (7U & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                        __Vdly__wdt__DOT__OPEN_BUS 
                            = vlSelfRef.__PVT__wdt__DOT__REG_DO;
                    }
                }
            }
            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                if ((((0xfffffe92U == vlSelfRef.__PVT__CBUS_A) 
                      & (IData)(vlSelfRef.__PVT__CBUS_WR)) 
                     & (IData)(vlSelfRef.__PVT__CBUS_REQ))) {
                    vlSelfRef.__Vdly__cache__DOT__CCR 
                        = (0xdfU & vlSelfRef.__PVT__CACHE_DI);
                }
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))) {
                    vlSelfRef.__Vdly__cache__DOT__CCR 
                        = (0xefU & (IData)(vlSelfRef.__Vdly__cache__DOT__CCR));
                }
                if ((1U & (((~ ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__nmi_cnt)) 
                                ^ ((IData)(vlSelfRef.__PVT__intc__DOT__ICR) 
                                   >> 8U))) & ((IData)(vlSelfRef.__PVT__intc__DOT__unnamedblk1__DOT__NMI_N_OLD) 
                                               ^ ((IData)(vlSelfRef.__PVT__intc__DOT__ICR) 
                                                  >> 8U))) 
                           & (~ (IData)(vlSelfRef.__PVT__INTC_NMI_REQ))))) {
                    vlSelfRef.__Vdly__INTC_NMI_REQ = 1U;
                } else if (((IData)(vlSelfRef.__PVT__INT_ACP) 
                            & (IData)(vlSelfRef.__PVT__INTC_NMI_REQ))) {
                    vlSelfRef.__Vdly__INTC_NMI_REQ = 0U;
                }
                if ((1U & ((vlSelfRef.__PVT__core__DOT__PIPE
                            .__PVT__EX.__PVT__DI[0U] 
                            >> 0x0000001dU) & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL))))) {
                    __Vdly__core__DOT__PC = vlSelfRef.__PVT__core__DOT__ALU_RES;
                } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__core__DOT__IF_STALL)) 
                                   & (~ (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                         >> 7U))) & 
                                  (~ (IData)(vlSelfRef.__PVT__core__DOT__SLP))))) {
                    __Vdly__core__DOT__PC = ((IData)(2U) 
                                             + vlSelfRef.core__DOT__PC);
                }
                if ((1U & (((((((vlSelfRef.__PVT__core__DOT__PIPE
                                 .__PVT__EX.__PVT__DI[1U] 
                                 >> 0x0000000fU) | 
                                (vlSelfRef.__PVT__core__DOT__PIPE
                                 .__PVT__EX.__PVT__DI[1U] 
                                 >> 0x0000000eU)) | 
                               (vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__EX.__PVT__DI[0U] 
                                >> 0x00000014U)) | 
                              (vlSelfRef.__PVT__core__DOT__PIPE
                               .__PVT__EX.__PVT__DI[0U] 
                               >> 0x00000013U)) & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))) 
                            & ((~ (IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)))) 
                           & (~ ((IData)(vlSelfRef.__PVT__core__DOT__VECT_ACTIVE) 
                                 & (IData)(vlSelfRef.__PVT__intc__DOT__VBREQ)))))) {
                    vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = 1U;
                } else if (((~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)) 
                            & (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE))) {
                    vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = 0U;
                }
                if ((1U & (((((vlSelfRef.core__DOT__PC 
                               >> 1U) & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                         | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)))) 
                             & (~ (IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL))) 
                            & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL))) 
                           | (vlSelfRef.__PVT__core__DOT__PIPE
                              .__PVT__EX.__PVT__BC 
                              & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                 | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT))))))) {
                    __Vdly__core__DOT__IF_ACTIVE = 1U;
                } else if ((((~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)) 
                             & (IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE)) 
                            & (~ (IData)(vlSelfRef.__PVT__core__DOT__IF_STALL)))) {
                    __Vdly__core__DOT__IF_ACTIVE = 0U;
                }
                if ((1U & ((((vlSelfRef.__PVT__core__DOT__PIPE
                              .__PVT__EX.__PVT__DI[0U] 
                              >> 1U) & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))) 
                            & ((~ (IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)))) 
                           & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                              | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)))))) {
                    __Vdly__core__DOT__VECT_ACTIVE = 1U;
                } else if (((~ (IData)(vlSelfRef.__PVT__intc__DOT__VBREQ)) 
                            & (IData)(vlSelfRef.__PVT__core__DOT__VECT_ACTIVE))) {
                    __Vdly__core__DOT__VECT_ACTIVE = 0U;
                }
                if ((1U & (((((((((IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL) 
                                  & (~ (vlSelfRef.core__DOT__PC 
                                        >> 1U))) | 
                                 (~ (vlSelfRef.__PVT__core__DOT__PIPE
                                     .__PVT__ID.__PVT__PC 
                                     >> 1U))) & (((
                                                   (vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__DI[1U] 
                                                    >> 0x0000000fU) 
                                                   | (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__EX
                                                      .__PVT__DI[1U] 
                                                      >> 0x0000000eU)) 
                                                  | (vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__EX
                                                     .__PVT__DI[0U] 
                                                     >> 0x00000014U)) 
                                                 | (vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__DI[0U] 
                                                    >> 0x00000013U))) 
                               & (~ (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                     >> 5U))) & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))) 
                             & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)))) 
                            & ((~ (IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL)) 
                               | ((IData)(vlSelfRef.__PVT__core__DOT__STATE) 
                                  == (7U & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                            >> 2U))))) 
                           | (((((IData)(vlSelfRef.__PVT__core__DOT__LOAD_ISSUE) 
                                 & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))) 
                                & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)))) 
                               & (0U == (IData)(vlSelfRef.__PVT__core__DOT__STATE))) 
                              & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL)))))) {
                    __Vdly__core__DOT__INST_SPLIT = 1U;
                } else if (((IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT) 
                            & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT))))) {
                    __Vdly__core__DOT__INST_SPLIT = 0U;
                }
                if (((IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT) 
                     & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                        | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT))))) {
                    vlSelfRef.__Vdly__core__DOT__MAWB_STALL = 1U;
                } else if (((IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL) 
                            & ((~ (IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE)) 
                               | (~ (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT))))) {
                    vlSelfRef.__Vdly__core__DOT__MAWB_STALL = 0U;
                }
                vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__NEW_IR 
                    = (0x0000ffffU & ((1U & ((~ (vlSelfRef.core__DOT__PC 
                                                 >> 1U)) 
                                             | vlSelfRef.__PVT__core__DOT__PIPE
                                             .__PVT__MA
                                             .__PVT__BC))
                                       ? ((2U & vlSelfRef.core__DOT__PC)
                                           ? vlSelfRef.__PVT__CBUS_DI
                                           : (vlSelfRef.__PVT__CBUS_DI 
                                              >> 0x10U))
                                       : (IData)(vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__SAVE_IR)));
                if ((1U & ((vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                            >> 7U) | (IData)(vlSelfRef.__PVT__core__DOT__SLP)))) {
                    vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__NEW_IR = 9U;
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL)))) {
                    if ((0x00000080U & vlSelfRef.__PVT__core__DOT__ID_DECI[0U])) {
                        __Vdly__core__DOT__SLP = 1U;
                    }
                    if (((IData)(vlSelfRef.__PVT__core__DOT__SLP) 
                         & (IData)(vlSelfRef.__Vcellinp__core__INT_REQ))) {
                        __Vdly__core__DOT__SLP = 0U;
                    }
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__IR 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__EX.__PVT__IR;
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                                .__PVT__MA.__PVT__DI, vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__EX.__PVT__DI);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__PC 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__EX.__PVT__PC;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__BC 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__EX.__PVT__BC;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__RES 
                        = ((0x00004000U & vlSelfRef.__PVT__core__DOT__PIPE
                            .__PVT__EX.__PVT__DI[0U])
                            ? vlSelfRef.__PVT__core__DOT__REG_B
                            : vlSelfRef.__PVT__core__DOT__ALU_RES);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__ADDR 
                        = vlSelfRef.__PVT__core__DOT__MA_ADDR;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__WD 
                        = vlSelfRef.__PVT__core__DOT__MA_WD;
                }
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL)) 
                           & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))))) {
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__IR 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__WB.__PVT__IR;
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                                .__PVT__WB2.__PVT__DI, vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__WB.__PVT__DI);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESA 
                        = ((1U & (((vlSelfRef.__PVT__core__DOT__PIPE
                                    .__PVT__WB.__PVT__DI[1U] 
                                    >> 0x0000000fU) 
                                   & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                                         .__PVT__WB
                                         .__PVT__DI[0U] 
                                         >> 0x00000013U))) 
                                  | ((vlSelfRef.__PVT__core__DOT__PIPE
                                      .__PVT__WB.__PVT__DI[0U] 
                                      >> 0x00000014U) 
                                     & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                                           .__PVT__WB
                                           .__PVT__DI[1U] 
                                           >> 0x0000000eU)))))
                            ? vlSelfRef.__PVT__core__DOT__PIPE
                           .__PVT__WB.__PVT__RD : vlSelfRef.__PVT__core__DOT__PIPE
                           .__PVT__WB.__PVT__RES);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESB 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__WB.__PVT__RES;
                } else if (((~ ((IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE) 
                                & (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT))) 
                            & (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL))) {
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__IR 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__WB.__PVT__IR;
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                                .__PVT__WB2.__PVT__DI, vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__WB.__PVT__DI);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESA 
                        = ((1U & (((vlSelfRef.__PVT__core__DOT__PIPE
                                    .__PVT__WB.__PVT__DI[1U] 
                                    >> 0x0000000fU) 
                                   & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                                         .__PVT__WB
                                         .__PVT__DI[0U] 
                                         >> 0x00000013U))) 
                                  | ((vlSelfRef.__PVT__core__DOT__PIPE
                                      .__PVT__WB.__PVT__DI[0U] 
                                      >> 0x00000014U) 
                                     & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                                           .__PVT__WB
                                           .__PVT__DI[1U] 
                                           >> 0x0000000eU)))))
                            ? vlSelfRef.__PVT__core__DOT__PIPE
                           .__PVT__WB.__PVT__RD : vlSelfRef.__PVT__core__DOT__PIPE
                           .__PVT__WB.__PVT__RES);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESB 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__WB.__PVT__RES;
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__core__DOT__IF_STALL)))) {
                    if ((1U & ((~ (vlSelfRef.core__DOT__PC 
                                   >> 1U)) | vlSelfRef.__PVT__core__DOT__PIPE
                               .__PVT__MA.__PVT__BC))) {
                        vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__SAVE_IR 
                            = (0x0000ffffU & vlSelfRef.__PVT__CBUS_DI);
                    }
                    if ((0U == (7U & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                      >> 2U)))) {
                        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID.__PVT__IR 
                            = vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__NEW_IR;
                        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID.__PVT__PC 
                            = vlSelfRef.core__DOT__PC;
                    } else {
                        __Vdly__core__DOT__SAVE_ID.__PVT__IR 
                            = vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__NEW_IR;
                        __Vdly__core__DOT__SAVE_ID.__PVT__PC 
                            = vlSelfRef.core__DOT__PC;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL)))) {
                    if (((0U != (7U & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                       >> 2U))) & ((IData)(vlSelfRef.__PVT__core__DOT__STATE) 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                                       >> 2U))))) {
                        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID 
                            = vlSelfRef.__PVT__core__DOT__SAVE_ID;
                    }
                }
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL)) 
                           & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))))) {
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__IR 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__MA.__PVT__IR;
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                                .__PVT__WB.__PVT__DI, vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__MA.__PVT__DI);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__PC 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__MA.__PVT__PC;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RES 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__MA.__PVT__RES;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RD 
                        = vlSelfRef.__PVT__core__DOT__MA_RDATA;
                    vlSelfRef.__PVT__core__DOT__RD_SAVE 
                        = vlSelfRef.__PVT__core__DOT__MA_RDATA;
                } else {
                    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL)) 
                                  & (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))))) {
                        if (((~ ((IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE) 
                                 & (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT))) 
                             & (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL))) {
                            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__IR 
                                = vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__MA.__PVT__IR;
                            VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                                        .__PVT__WB.__PVT__DI, vlSelfRef.__PVT__core__DOT__PIPE
                                        .__PVT__MA.__PVT__DI);
                            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__PC 
                                = vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__MA.__PVT__PC;
                            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RES 
                                = vlSelfRef.__PVT__core__DOT__PIPE
                                .__PVT__MA.__PVT__RES;
                            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RD 
                                = vlSelfRef.__PVT__core__DOT__RD_SAVE;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL)) 
                         & (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))) {
                        vlSelfRef.__PVT__core__DOT__RD_SAVE 
                            = vlSelfRef.__PVT__core__DOT__MA_RDATA;
                    }
                }
                vlSelfRef.__PVT__core__DOT__unnamedblk2__DOT__BR_COND 
                    = ((vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                        >> 0x0000000eU) & (((IData)(vlSelfRef.__PVT__core__DOT__BR_T) 
                                            == (1U 
                                                & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                                   >> 0x0000000aU))) 
                                           | (2U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                                >> 0x0000000cU)))));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL)))) {
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__IR 
                        = vlSelfRef.__PVT__core__DOT__DEC_IR;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__PC 
                        = vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__ID.__PVT__PC;
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                                .__PVT__EX.__PVT__DI, vlSelfRef.__PVT__core__DOT__ID_DECI);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__RA 
                        = ((0x10U >= (0x0000001fU & 
                                      (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                       >> 8U))) ? vlSelfRef.__PVT__core__DOT__regfile__DOT__GR
                           [(0x0000001fU & (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                            >> 8U))]
                            : 0U);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__RB 
                        = ((0x10U >= (0x0000001fU & 
                                      (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                       >> 1U))) ? vlSelfRef.__PVT__core__DOT__regfile__DOT__GR
                           [(0x0000001fU & (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                            >> 1U))]
                            : 0U);
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__R0 
                        = vlSelfRef.__PVT__core__DOT__regfile__DOT__GR0;
                    vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__BC 
                        = vlSelfRef.__PVT__core__DOT__unnamedblk2__DOT__BR_COND;
                    if ((0x10000000U & vlSelfRef.__PVT__core__DOT__PIPE
                         .__PVT__EX.__PVT__DI[0U])) {
                        if ((0U != (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                          .__PVT__EX
                                          .__PVT__DI[0U] 
                                          >> 0x0000001aU)))) {
                            if ((1U != (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                              .__PVT__EX
                                              .__PVT__DI[0U] 
                                              >> 0x0000001aU)))) {
                                if ((2U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__DI[0U] 
                                                  >> 0x0000001aU)))) {
                                    vlSelfRef.__PVT__core__DOT__VBR 
                                        = vlSelfRef.__PVT__core__DOT__ALU_RES;
                                }
                            }
                            if ((1U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                              .__PVT__EX
                                              .__PVT__DI[0U] 
                                              >> 0x0000001aU)))) {
                                vlSelfRef.__PVT__core__DOT__GBR 
                                    = vlSelfRef.__PVT__core__DOT__ALU_RES;
                            }
                        }
                    }
                    if (((5U == (IData)(vlSelfRef.__PVT__core__DOT__STATE)) 
                         & (IData)(vlSelfRef.__PVT__core__DOT__RES_EXP))) {
                        __Vdly__core__DOT__RES_EXP = 0U;
                    }
                    if ((1U & (((vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                 & (~ (IData)(vlSelfRef.__PVT__core__DOT__RES_EXP))) 
                                & (~ (IData)(vlSelfRef.__PVT__core__DOT__INT_EXP))) 
                               & (~ (IData)(vlSelfRef.__PVT__core__DOT__ILI_EXP))))) {
                        __Vdly__core__DOT__ILI_EXP = 1U;
                        vlSelfRef.__PVT__core__DOT__ILSI 
                            = vlSelfRef.__PVT__core__DOT__ID_DELAY_SLOT;
                    } else if (((6U == (IData)(vlSelfRef.__PVT__core__DOT__STATE)) 
                                & (IData)(vlSelfRef.__PVT__core__DOT__ILI_EXP))) {
                        __Vdly__core__DOT__ILI_EXP = 0U;
                    }
                    if ((((((IData)(vlSelfRef.__Vcellinp__core__INT_REQ) 
                            & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                                  .__PVT__EX.__PVT__DI[0U] 
                                  >> 6U))) & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_DELAY_SLOT))) 
                          & (~ (IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL))) 
                         & (~ (IData)(vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH)))) {
                        __Vdly__core__DOT__INT_REQ_LATCH = 1U;
                        vlSelfRef.__PVT__core__DOT__INT_LVL_LATCH 
                            = (0x0000000fU & (((1U 
                                                == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                               | ((2U 
                                                   == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                                     | ((4U 
                                                         == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                                        | ((5U 
                                                            == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                                           | ((6U 
                                                               == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                                              | ((7U 
                                                                  == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)) 
                                                                 | (8U 
                                                                    == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)))))))))
                                               ? ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)))) 
                                                  | (((3U 
                                                       == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                       ? (IData)(vlSelfRef.__PVT__intc__DOT__IRL_LVL)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                                        >> 0x0000000cU)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                                         >> 8U)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                                          >> 8U)
                                                          : 
                                                         ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                                          >> 4U))))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))))))
                                               : ((9U 
                                                   == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                   ? 
                                                  ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                   >> 0x0000000cU)
                                                   : 
                                                  ((0x0aU 
                                                    == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                    ? 
                                                   ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                    >> 0x0000000cU)
                                                    : 
                                                   ((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                     ? 
                                                    ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                     >> 0x0000000cU)
                                                     : 
                                                    ((0x0cU 
                                                      == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                      ? 
                                                     ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                      >> 0x0000000cU)
                                                      : 
                                                     ((0x0dU 
                                                       == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                       ? 
                                                      ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                       >> 8U)
                                                       : 
                                                      ((0x0eU 
                                                        == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                        ? 
                                                       ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                        >> 8U)
                                                        : 
                                                       (((IData)(vlSelfRef.intc__DOT__IPRB) 
                                                         >> 8U) 
                                                        & (- (IData)(
                                                                     (0x0fU 
                                                                      == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)))))))))))));
                    } else if (((7U == (IData)(vlSelfRef.__PVT__core__DOT__STATE)) 
                                & (IData)(vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH))) {
                        __Vdly__core__DOT__INT_REQ_LATCH = 0U;
                    }
                }
                vlSelfRef.__PVT__intc__DOT__unnamedblk1__DOT__NMI_N_OLD 
                    = (0U == (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__nmi_cnt));
                if (((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL) 
                       & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                     & (~ (IData)(vlSelfRef.__PVT__wdt__DOT__IBUS_REQ_OLD)))) {
                    vlSelfRef.__Vdly__wdt__DOT__BUSY 
                        = (1U | (IData)(vlSelfRef.__Vdly__wdt__DOT__BUSY));
                } else if ((1U & (IData)(vlSelfRef.__PVT__wdt__DOT__BUSY))) {
                    vlSelfRef.__Vdly__wdt__DOT__BUSY 
                        = (2U & (IData)(vlSelfRef.__Vdly__wdt__DOT__BUSY));
                }
                vlSelfRef.__Vdly__wdt__DOT__BUSY = 
                    ((1U & (IData)(vlSelfRef.__Vdly__wdt__DOT__BUSY)) 
                     | (2U & ((IData)(vlSelfRef.__PVT__wdt__DOT__BUSY) 
                              << 1U)));
            } else if (((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL) 
                          & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                        & (~ (IData)(vlSelfRef.__PVT__wdt__DOT__BUSY)))) {
                vlSelfRef.__PVT__wdt__DOT__REG_DO = 
                    ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                      ? ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                          ? 0xffU : ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                      ? 0xffU : (IData)(vlSelfRef.__PVT__wdt__DOT__OPEN_BUS)))
                      : ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                          ? ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                              ? (0x1fU | (IData)(vlSelfRef.__PVT__wdt__DOT__RSTCSR))
                              : 0xffU) : ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                           ? (IData)(vlSelfRef.__PVT__wdt__DOT__WTCNT)
                                           : (0x18U 
                                              | (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR)))));
            }
            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                if (vlSelfRef.__PVT__CLK2_CE) {
                    __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN 
                        = (1U & (((IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR) 
                                  >> 5U) | (IData)(vlSelfRef.__PVT__wdt__DOT__SBY_TME)));
                }
                __Vdly__WDT_OVF = 0U;
                if (vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__TM_EN) {
                    if (vlSelfRef.__PVT__wdt__DOT__WT_CE) {
                        __Vdly__wdt__DOT__WTCNT = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__wdt__DOT__WTCNT)));
                        if ((0xffU == (IData)(vlSelfRef.__PVT__wdt__DOT__WTCNT))) {
                            if (vlSelfRef.__PVT__wdt__DOT__SBY_TME) {
                                __Vdly__WDT_OVF = 1U;
                            } else if ((0x00000040U 
                                        & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))) {
                                vlSelfRef.__PVT__wdt__DOT__RSTCSR 
                                    = (0x00000080U 
                                       | (IData)(vlSelfRef.__PVT__wdt__DOT__RSTCSR));
                                vlSelfRef.__Vdly__wdt__DOT__WTCSR = 0x18U;
                            } else {
                                vlSelfRef.__Vdly__wdt__DOT__WTCSR 
                                    = (0x00000080U 
                                       | (IData)(vlSelfRef.__Vdly__wdt__DOT__WTCSR));
                            }
                        }
                    }
                } else {
                    __Vdly__wdt__DOT__WTCNT = 0U;
                    vlSelfRef.__Vdly__wdt__DOT__WTCSR 
                        = (0x7fU & (IData)(vlSelfRef.__Vdly__wdt__DOT__WTCSR));
                }
                if (((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL) 
                       & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                      & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) 
                     & (IData)(vlSelfRef.__PVT__wdt__DOT__IBUS_REQ_OLD))) {
                    if (((0x0cU == (IData)(vlSelfRef.__PVT__cache__DOT__IBBA)) 
                         | (3U == (IData)(vlSelfRef.__PVT__cache__DOT__IBBA)))) {
                        if ((0U == (7U & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            if ((0x5aU == (0x000000ffU 
                                           & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                              >> 8U)))) {
                                __Vdly__wdt__DOT__WTCNT 
                                    = (0x000000ffU 
                                       & vlSelfRef.__PVT__cache__DOT__IBDATA);
                            } else if ((0xa5U == (0x000000ffU 
                                                  & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                     >> 8U)))) {
                                vlSelfRef.__Vdly__wdt__DOT__WTCSR 
                                    = ((0x80U & (IData)(vlSelfRef.__Vdly__wdt__DOT__WTCSR)) 
                                       | (0x67U & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                if (((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                         >> 7U)) & (IData)(vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__OVF_SET))) {
                                    vlSelfRef.__Vdly__wdt__DOT__WTCSR 
                                        = (0x7fU & (IData)(vlSelfRef.__Vdly__wdt__DOT__WTCSR));
                                    vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__OVF_SET = 0U;
                                }
                            }
                        } else if ((2U == (7U & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            if ((0x5aU == (0x000000ffU 
                                           & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                              >> 8U)))) {
                                vlSelfRef.__PVT__wdt__DOT__RSTCSR 
                                    = ((0x80U & (IData)(vlSelfRef.__PVT__wdt__DOT__RSTCSR)) 
                                       | (0x60U & vlSelfRef.__PVT__cache__DOT__IBDATA));
                            } else if ((IData)((0x0000a500U 
                                                == 
                                                (0x0000ff80U 
                                                 & vlSelfRef.__PVT__cache__DOT__IBDATA)))) {
                                vlSelfRef.__PVT__wdt__DOT__RSTCSR 
                                    = (0x7fU & (IData)(vlSelfRef.__PVT__wdt__DOT__RSTCSR));
                            }
                        }
                    }
                }
                if (((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL) 
                       & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                      & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) 
                     & (IData)(vlSelfRef.__PVT__wdt__DOT__IBUS_REQ_OLD))) {
                    if (((0U == (7U & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                         & ((IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR) 
                            >> 7U))) {
                        vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__OVF_SET = 1U;
                    }
                }
            }
            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL)))) {
                    vlSelfRef.__PVT__core__DOT__STATE 
                        = vlSelfRef.__PVT__core__DOT__NEXT_STATE;
                    vlSelfRef.__PVT__core__DOT__IFID_STALL 
                        = (0U != (IData)(vlSelfRef.__PVT__core__DOT__NEXT_STATE));
                }
                vlSelfRef.__PVT__wdt__DOT__IBUS_REQ_OLD 
                    = vlSelfRef.__PVT__cache__DOT__IBREQ;
                __Vdly__unnamedblk1__DOT__DIV_CNT = 
                    (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK2_CE = (1U == (1U 
                                                   & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK4_CE = (3U == (3U 
                                                   & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK8_CE = (7U == (7U 
                                                   & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK16_CE = (0x000fU 
                                             == (0x000fU 
                                                 & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK32_CE = (0x001fU 
                                             == (0x001fU 
                                                 & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK64_CE = (0x003fU 
                                             == (0x003fU 
                                                 & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK128_CE = (0x007fU 
                                              == (0x007fU 
                                                  & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK256_CE = (0x00ffU 
                                              == (0x00ffU 
                                                  & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK512_CE = (0x01ffU 
                                              == (0x01ffU 
                                                  & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK1024_CE = (0x03ffU 
                                               == (0x03ffU 
                                                   & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK2048_CE = (0x07ffU 
                                               == (0x07ffU 
                                                   & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK4096_CE = (0x0fffU 
                                               == (0x0fffU 
                                                   & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__PVT__CLK8192_CE = (0x1fffU 
                                               == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT));
            }
        } else {
            __Vdly__core__DOT__SLP = 0U;
            vlSelfRef.__Vdly__cache__DOT__CCR = 0U;
            vlSelfRef.__Vdly__INTC_NMI_REQ = 0U;
            __Vdly__core__DOT__PC = 0U;
            vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = 0U;
            __Vdly__core__DOT__IF_ACTIVE = 0U;
            __Vdly__core__DOT__INST_SPLIT = 0U;
            vlSelfRef.__Vdly__core__DOT__MAWB_STALL = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__IR = 0U;
            __Vtemp_1[0U] = 0U;
            __Vtemp_1[1U] = 0xa0240000U;
            __Vtemp_1[2U] = 4U;
            VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI, __Vtemp_1);
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__PC = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__BC = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__RES = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__ADDR = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__WD = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__IR = 0U;
            __Vtemp_3[0U] = 0U;
            __Vtemp_3[1U] = 0xa0240000U;
            __Vtemp_3[2U] = 4U;
            VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                        .__PVT__WB2.__PVT__DI, __Vtemp_3);
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESA = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESB = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID.__PVT__IR = 0U;
            vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__SAVE_IR = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID.__PVT__PC = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__IR = 0U;
            __Vtemp_5[0U] = 0U;
            __Vtemp_5[1U] = 0xa0240000U;
            __Vtemp_5[2U] = 4U;
            VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                        .__PVT__WB.__PVT__DI, __Vtemp_5);
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RES = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RD = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__IR = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__PC = 0U;
            __Vtemp_7[0U] = 0U;
            __Vtemp_7[1U] = 0xa0240000U;
            __Vtemp_7[2U] = 4U;
            VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                        .__PVT__EX.__PVT__DI, __Vtemp_7);
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__RA = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__RB = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__R0 = 0U;
            vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__BC = 0U;
            vlSelfRef.__PVT__core__DOT__VBR = 0U;
            vlSelfRef.__PVT__core__DOT__GBR = 0U;
            __Vdly__core__DOT__RES_EXP = 1U;
            __Vdly__core__DOT__ILI_EXP = 0U;
            __Vdly__core__DOT__INT_REQ_LATCH = 0U;
            vlSelfRef.__PVT__core__DOT__INT_LVL_LATCH = 0U;
            vlSelfRef.__PVT__wdt__DOT__REG_DO = 0U;
            vlSelfRef.__Vdly__wdt__DOT__BUSY = 0U;
            vlSelfRef.__PVT__core__DOT__STATE = 0U;
            vlSelfRef.__PVT__core__DOT__IFID_STALL = 0U;
            vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__OVF_SET = 0U;
            __Vdly__wdt__DOT__WTCNT = 0U;
            vlSelfRef.__Vdly__wdt__DOT__WTCSR = 0x18U;
            vlSelfRef.__PVT__wdt__DOT__RSTCSR = 0x1fU;
            __Vdly__WDT_OVF = 0U;
            __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN = 0U;
            vlSelfRef.__PVT__CLK2_CE = 0U;
            vlSelfRef.__PVT__CLK4_CE = 0U;
            vlSelfRef.__PVT__CLK8_CE = 0U;
            vlSelfRef.__PVT__CLK16_CE = 0U;
            vlSelfRef.__PVT__CLK32_CE = 0U;
            vlSelfRef.__PVT__CLK64_CE = 0U;
            vlSelfRef.__PVT__CLK128_CE = 0U;
            vlSelfRef.__PVT__CLK256_CE = 0U;
            vlSelfRef.__PVT__CLK512_CE = 0U;
            vlSelfRef.__PVT__CLK1024_CE = 0U;
            vlSelfRef.__PVT__CLK2048_CE = 0U;
            vlSelfRef.__PVT__CLK4096_CE = 0U;
            vlSelfRef.__PVT__CLK8192_CE = 0U;
            __Vdly__unnamedblk1__DOT__DIV_CNT = 0U;
        }
        if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
            if (vlSelfRef.__PVT__INT_ACP) {
                vlSelfRef.__PVT__intc__DOT__IRL_LVL_SAVE 
                    = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
                vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED 
                    = vlSelfRef.__PVT__intc__DOT__INT_ACTIVE;
            }
            if (vlSelfRef.__PVT__cache__DOT__LRU_WE) {
                vlSelfRef.__PVT__cache__DOT__LRU_DIRTY 
                    = ((~ (1ULL << (0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                                   >> 2U)))) 
                       & vlSelfRef.__PVT__cache__DOT__LRU_DIRTY);
            }
            if ((1U & ((vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI[0U] >> 1U) 
                       & (~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL))))) {
                vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED = 0U;
            }
            if (vlSelfRef.__PVT__frt__DOT__FRC_CE) {
                __Vdly__frt__DOT__FRC = (0x0000ffffU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.frt__DOT__FRC)));
            }
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                       | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) {
                __Vdly__frt__DOT__FRC = 0U;
                __Vdly__frt__DOT__OCRA = 0xffffU;
                __Vdly__frt__DOT__OCRB = 0xffffU;
            } else if ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                        & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 1U)))) {
                            if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                if ((0x00000010U & (IData)(vlSelfRef.frt__DOT__TOCR))) {
                                    __Vdly__frt__DOT__OCRB 
                                        = (((IData)(vlSelfRef.__PVT__frt__DOT__TEMP) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                 >> 0x10U)));
                                } else {
                                    __Vdly__frt__DOT__OCRA 
                                        = (((IData)(vlSelfRef.__PVT__frt__DOT__TEMP) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                 >> 0x10U)));
                                }
                            } else {
                                __Vdly__frt__DOT__TEMP 
                                    = (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                       >> 0x18U);
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            __Vdly__frt__DOT__FRC = 
                                (((IData)(vlSelfRef.__PVT__frt__DOT__TEMP) 
                                  << 8U) | (0x000000ffU 
                                            & vlSelfRef.__PVT__cache__DOT__IBDATA));
                        } else {
                            __Vdly__frt__DOT__TEMP 
                                = (0x000000ffU & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                  >> 8U));
                        }
                    }
                }
            }
            if (((((IData)(vlSelfRef.frt__DOT__FRC) 
                   == (IData)(vlSelfRef.frt__DOT__OCRA)) 
                  & (IData)(vlSelfRef.frt__DOT__FTCSR)) 
                 & (IData)(vlSelfRef.__PVT__frt__DOT__FRC_CE))) {
                __Vdly__frt__DOT__FRC = 0U;
            }
            if ((((((((0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                      | (2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                     | (5U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                    | (8U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                   | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                  | (0x0aU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                 | (0x0cU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)))) {
                if (((((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                       & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS))) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY))) 
                     & (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                         >> 1U) | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN))))) {
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY = 1U;
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = 0U;
                }
                if (((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                       & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS))) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY))) 
                     & (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                         >> 1U) | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN))))) {
                    __Vdly__bsc__DOT__DBUSY = 1U;
                }
                if ((((IData)(vlSelfRef.__PVT__VBUS_REQ) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS))) 
                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY)))) {
                    __Vdly__bsc__DOT__VBUSY = 1U;
                }
                if ((((((((((2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                            | (5U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                           | (8U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                          | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                         | (0x0aU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                        | (0x0cU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                       & (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY)) 
                      & (~ (IData)(vlSelfRef.__PVT__IRD_WR_N))) 
                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS)))) {
                    if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__CBUSY)))) {
                        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 1U;
                    }
                    if (((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__DBUSY)))) {
                        __Vdly__bsc__DOT__DBUSY = 1U;
                    }
                }
                __Vfunc_bsc__DOT__SDRAMAreaSel__15__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__SDRAMAreaSel__15__Vfuncout 
                    = (((IData)((1U == (3U & (IData)(__Vfunc_bsc__DOT__SDRAMAreaSel__15__BCR1)))) 
                        << 3U) | (4U & (IData)(__Vfunc_bsc__DOT__SDRAMAreaSel__15__BCR1)));
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA 
                    = __Vfunc_bsc__DOT__SDRAMAreaSel__15__Vfuncout;
                __Vfunc_bsc__DOT__IsSDRAMArea__16__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__IsSDRAMArea__16__area 
                    = (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                             >> 0x19U));
                vlSelfRef.__VcaseTableOut2 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__16__BCR1)))));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut2));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut2) 
                             >> 1U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut2) 
                             >> 2U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_bsc__DOT__IsSDRAMArea__16__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__16__area))
                                           ? ((IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_bsc__DOT__IsSDRAMArea__16__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM 
                    = __Vfunc_bsc__DOT__IsSDRAMArea__16__Vfuncout;
                __Vfunc_bsc__DOT__IsSDRAMArea__17__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__IsSDRAMArea__17__area 
                    = (3U & (vlSelfRef.__PVT__DBUS_A 
                             >> 0x19U));
                vlSelfRef.__VcaseTableOut2 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__17__BCR1)))));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut2));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut2) 
                             >> 1U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut2) 
                             >> 2U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_bsc__DOT__IsSDRAMArea__17__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__17__area))
                                           ? ((IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_bsc__DOT__IsSDRAMArea__17__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM 
                    = __Vfunc_bsc__DOT__IsSDRAMArea__17__Vfuncout;
                __Vfunc_bsc__DOT__IsSDRAMArea__18__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__IsSDRAMArea__18__area 
                    = (3U & (vlSelfRef.__PVT__IA >> 0x19U));
                vlSelfRef.__VcaseTableOut2 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__18__BCR1)))));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut2));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut2) 
                             >> 1U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut2) 
                             >> 2U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_bsc__DOT__IsSDRAMArea__18__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__18__area))
                                           ? ((IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_bsc__DOT__IsSDRAMArea__18__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM 
                    = __Vfunc_bsc__DOT__IsSDRAMArea__18__Vfuncout;
                vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE = 0U;
                if (((((((2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                         | (5U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                        | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                       & (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY)) 
                      & (0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) 
                     | ((((2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                          | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                         & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                        & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST))))) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
                        = ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM)
                            ? ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)
                                ? 4U : 7U) : 1U);
                    if ((1U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                        if ((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            __Vdly__IA = ((0x07fffff0U 
                                           & __Vdly__IA) 
                                          | (0x0000000fU 
                                             & ((IData)(2U) 
                                                + vlSelfRef.__PVT__IA)));
                            if ((2U & vlSelfRef.__PVT__IA)) {
                                vlSelfRef.__PVT__IDO = 0U;
                                vlSelfRef.__PVT__IWE_N = 0x0fU;
                                __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
                                    = (3U & (- (IData)((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN))));
                            } else {
                                vlSelfRef.__PVT__IDO 
                                    = (0x0000ffffU 
                                       & vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH);
                                vlSelfRef.__PVT__IWE_N 
                                    = (0x0000000fU 
                                       & (~ (3U & (
                                                   (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)) 
                                                   & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA)))));
                                __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                            }
                        } else if ((3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ))) {
                            __Vdly__IA = ((0x07fffff0U 
                                           & __Vdly__IA) 
                                          | (0x0000000fU 
                                             & ((IData)(4U) 
                                                + vlSelfRef.__PVT__IA)));
                            vlSelfRef.__PVT__IWE_N = 0x0fU;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                        }
                    }
                    vlSelfRef.__PVT__IBS_N = 0U;
                    vlSelfRef.__PVT__IRD_N = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
                    vlSelfRef.__PVT__ICS0_N = (0U != 
                                               (3U 
                                                & (vlSelfRef.__PVT__IA 
                                                   >> 0x19U)));
                    vlSelfRef.__PVT__ICS1_N = (1U != 
                                               (3U 
                                                & (vlSelfRef.__PVT__IA 
                                                   >> 0x19U)));
                    vlSelfRef.__PVT__ICS2_N = (2U != 
                                               (3U 
                                                & (vlSelfRef.__PVT__IA 
                                                   >> 0x19U)));
                    vlSelfRef.__PVT__ICS3_N = (3U != 
                                               (3U 
                                                & (vlSelfRef.__PVT__IA 
                                                   >> 0x19U)));
                } else if ((((IData)(vlSelfRef.__PVT__bsc__DOT__BUS_SEL) 
                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS))) 
                            & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BGR)))) {
                    __Vdly__bsc__DOT__BUSY = 1U;
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY 
                        = vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ;
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = 0U;
                    __Vdly__bsc__DOT__VBUSY = vlSelfRef.__PVT__VBUS_REQ;
                    __Vdly__bsc__DOT__DBUSY = vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT)))) {
                        __Vdly__bsc__DOT__CBUS_ACTIVE = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE = 0U;
                    }
                    __Vdly__bsc__DOT__REFRESH_ACTIVE = 0U;
                    if (((((((IData)(vlSelfRef.__PVT__bsc__DOT__RFS_REQ) 
                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ))) 
                            & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS))) 
                           | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)) 
                          & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        if ((((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT) 
                              & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM)))) {
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                        } else if ((((((0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                       | (2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                      | ((8U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)))) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 9U;
                            __Vdly__bsc__DOT__REFRESH_ACTIVE = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
                                = (1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)));
                            __Vdly__IA = (0x06000000U 
                                          & __Vdly__IA);
                            vlSelfRef.__PVT__IDO = 0U;
                            vlSelfRef.__PVT__ICS0_N = 1U;
                            vlSelfRef.__PVT__ICS1_N = 1U;
                            vlSelfRef.__PVT__ICS2_N 
                                = (1U & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA) 
                                            >> 2U)));
                            vlSelfRef.__PVT__IIVECF_N = 1U;
                            vlSelfRef.__PVT__IBS_N = 1U;
                            __Vdly__IRD_WR_N = 1U;
                            vlSelfRef.__PVT__IWE_N = 0x0fU;
                            vlSelfRef.__PVT__IRD_N = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0U;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0U;
                            vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT = 3U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ = 0U;
                            vlSelfRef.__PVT__ICS3_N 
                                = (1U & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA) 
                                            >> 3U)));
                        }
                    } else if ((((IData)(vlSelfRef.__PVT__VBUS_REQ) 
                                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                                & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        if ((((((0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                | (2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                               | ((8U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                  & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                              | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                             | (0x0aU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)))) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0bU;
                            vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE = 1U;
                            __Vdly__IA = vlSelfRef.__PVT__intc__DOT__VBA;
                            vlSelfRef.__PVT__IDO = 0U;
                            vlSelfRef.__PVT__ICS0_N = 1U;
                            vlSelfRef.__PVT__ICS1_N = 1U;
                            vlSelfRef.__PVT__ICS2_N = 1U;
                            vlSelfRef.__PVT__ICS3_N = 1U;
                            vlSelfRef.__PVT__IIVECF_N = 0U;
                            vlSelfRef.__PVT__IBS_N = 0U;
                            __Vdly__IRD_WR_N = 1U;
                            vlSelfRef.__PVT__IWE_N = 0x0fU;
                            vlSelfRef.__PVT__IRD_N = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0U;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0U;
                        }
                    } else if ((((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                                   & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                                  & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                                        & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP)))) 
                                 & (~ (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND) 
                                        & (0x0aU != (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                       & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ)))) 
                                | (((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                                    & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)) 
                                   & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))))) {
                        __Vfunc_bsc__DOT__SDRAMBank__19__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__19__A 
                            = vlSelfRef.__PVT__IA;
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__19__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__19__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.bsc__DOT____VlemCall_0__SDRAMBank 
                            = vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res;
                        __Vfunc_bsc__DOT__SDRAMBank__20__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__20__A 
                            = (0x07ffffffU & vlSelfRef.__PVT__DBUS_A);
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__20__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__20__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.bsc__DOT____VlemCall_1__SDRAMBank 
                            = vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res;
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM 
                            = ((IData)(vlSelfRef.bsc__DOT____VlemCall_0__SDRAMBank) 
                               == (IData)(vlSelfRef.bsc__DOT____VlemCall_1__SDRAMBank));
                        __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP 
                            = (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM) 
                                & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)) 
                               & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM));
                        __VdlyMask__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 1U;
                        if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT) 
                             & (((((((3U & (vlSelfRef.__PVT__IA 
                                            >> 0x19U)) 
                                     != (3U & (vlSelfRef.__PVT__DBUS_A 
                                               >> 0x19U))) 
                                    & (~ (IData)(vlSelfRef.__PVT__DBUS_WE))) 
                                   & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                  & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM))) 
                                 | (((IData)(vlSelfRef.__PVT__DBUS_WE) 
                                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                    & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)))) 
                                | (((IData)(vlSelfRef.__PVT__DBUS_WE) 
                                    & (0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                   & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)))))) {
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__DBUS_A);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                        } else if (((((((0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                        | (2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                       | (((5U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                           & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))) 
                                          & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)))) 
                                      | ((8U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)))) {
                            __Vfunc_bsc__DOT__GetAreaSZ__21__dramsz 
                                = (2U | (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                               >> 6U)));
                            vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE = 1U;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
                                = vlSelfRef.__PVT__dmac__DOT__DMA_LOCK;
                            __Vfunc_bsc__DOT__GetAreaSZ__21__BCR2 
                                = vlSelfRef.__PVT__bsc__DOT__BCR2;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                                = (3U & ((IData)(1U) 
                                         + (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                  >> 0x0000000eU))));
                            __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
                                = (1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)));
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__DBUS_A);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
                                = vlSelfRef.__PVT__bsc__DOT__RFS_REQ;
                            __Vfunc_bsc__DOT__GetAreaSZ__21__BCR1 
                                = vlSelfRef.__PVT__bsc__DOT__BCR1;
                            __Vfunc_bsc__DOT__GetAreaSZ__21__area 
                                = (3U & (vlSelfRef.__PVT__DBUS_A 
                                         >> 0x19U));
                            vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res 
                                = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__area))
                                          ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__area))
                                              ? ((1U 
                                                  & VL_REDXOR_32(
                                                                 (3U 
                                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__BCR1))))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__BCR2) 
                                                  >> 6U))
                                              : ((4U 
                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__BCR1))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__BCR2) 
                                                  >> 4U)))
                                          : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__area))
                                              ? ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__21__BCR2) 
                                                 >> 2U)
                                              : 2U)));
                            __Vfunc_bsc__DOT__GetAreaSZ__21__Vfuncout 
                                = vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res;
                            bsc__DOT____VCase_h4c865549__0 
                                = __Vfunc_bsc__DOT__GetAreaSZ__21__Vfuncout;
                            if ((1U != (IData)(bsc__DOT____VCase_h4c865549__0))) {
                                if ((2U == (IData)(bsc__DOT____VCase_h4c865549__0))) {
                                    if ((2U & vlSelfRef.__PVT__DBUS_A)) {
                                        vlSelfRef.__PVT__IDO 
                                            = (0x0000ffffU 
                                               & vlSelfRef.__PVT__dmac__DOT__DBUS_DO_TEMP);
                                        vlSelfRef.__PVT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.__PVT__DBUS_WE))) 
                                                      & (IData)(vlSelfRef.__PVT__DBUS_BA)))));
                                        __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    } else {
                                        vlSelfRef.__PVT__IDO 
                                            = (vlSelfRef.__PVT__dmac__DOT__DBUS_DO_TEMP 
                                               >> 0x10U);
                                        vlSelfRef.__PVT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.__PVT__DBUS_WE))) 
                                                      & ((IData)(vlSelfRef.__PVT__DBUS_BA) 
                                                         >> 2U)))));
                                        __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
                                            = (3U & (IData)(vlSelfRef.__PVT__DBUS_BA));
                                    }
                                    if (vlSelfRef.__PVT__DBUS_WE) {
                                        __Vdly__bsc__DOT__DBUSY = 0U;
                                    }
                                } else if ((3U == (IData)(bsc__DOT____VCase_h4c865549__0))) {
                                    vlSelfRef.__PVT__IDO 
                                        = vlSelfRef.__PVT__dmac__DOT__DBUS_DO_TEMP;
                                    vlSelfRef.__PVT__IWE_N 
                                        = (0x0000000fU 
                                           & (~ ((- (IData)((IData)(vlSelfRef.__PVT__DBUS_WE))) 
                                                 & (IData)(vlSelfRef.__PVT__DBUS_BA))));
                                    __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    if (vlSelfRef.__PVT__DBUS_WE) {
                                        __Vdly__bsc__DOT__DBUSY = 0U;
                                    }
                                }
                            }
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM) 
                                 & (~ (IData)(vlSelfRef.__PVT__DBUS_WE)))) {
                                if ((1U & ((~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                                           | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 1U;
                                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE 
                                        = (1U & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_BURST)));
                                }
                            } else {
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 1U;
                            }
                            __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
                                = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM;
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM) 
                                 & (0x000cU == (0x000cU 
                                                & (IData)(vlSelfRef.__PVT__bsc__DOT__MCR))))) {
                                vlSelfRef.__PVT__ICS0_N = 1U;
                                vlSelfRef.__PVT__ICS1_N = 1U;
                                vlSelfRef.__PVT__ICS2_N = 1U;
                                vlSelfRef.__PVT__ICS3_N = 1U;
                                vlSelfRef.__PVT__IBS_N = 1U;
                                __Vdly__IRD_WR_N = 1U;
                                vlSelfRef.__PVT__IRD_N = 1U;
                            } else {
                                vlSelfRef.__PVT__ICS0_N 
                                    = (0U != (3U & 
                                              (vlSelfRef.__PVT__DBUS_A 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__ICS1_N 
                                    = (1U != (3U & 
                                              (vlSelfRef.__PVT__DBUS_A 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__ICS2_N 
                                    = (2U != (3U & 
                                              (vlSelfRef.__PVT__DBUS_A 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__ICS3_N 
                                    = (3U != (3U & 
                                              (vlSelfRef.__PVT__DBUS_A 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__IBS_N = 0U;
                                __Vdly__IRD_WR_N = 
                                    (1U & (~ (IData)(vlSelfRef.__PVT__DBUS_WE)));
                                vlSelfRef.__PVT__IRD_N 
                                    = vlSelfRef.__PVT__DBUS_WE;
                            }
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
                                = vlSelfRef.__PVT__DBUS_WE;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
                                = vlSelfRef.__PVT__dmac__DOT__DBUS_DO_TEMP;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
                                = ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)
                                    ? 4U : 1U);
                            if ((0U != (0x1bU & (vlSelfRef.__PVT__DBUS_A 
                                                 >> 0x1bU)))) {
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 1U;
                                vlSelfRef.__PVT__ICS0_N = 1U;
                                vlSelfRef.__PVT__ICS1_N = 1U;
                                vlSelfRef.__PVT__ICS2_N = 1U;
                                vlSelfRef.__PVT__ICS3_N = 1U;
                                vlSelfRef.__PVT__IWE_N = 0x0fU;
                                vlSelfRef.__PVT__IBS_N = 1U;
                                __Vdly__IRD_WR_N = 1U;
                                vlSelfRef.__PVT__IRD_N = 1U;
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0U;
                                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0U;
                            }
                        }
                    } else if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                                & ((~ (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND) 
                                        & (0x0aU != (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                       & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ))) 
                                   | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT)))) {
                        __Vfunc_bsc__DOT__SDRAMBank__22__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__22__A 
                            = vlSelfRef.__PVT__IA;
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__22__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__22__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.bsc__DOT____VlemCall_2__SDRAMBank 
                            = vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res;
                        __Vfunc_bsc__DOT__SDRAMBank__23__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__23__A 
                            = (0x07ffffffU & vlSelfRef.__PVT__cache__DOT__IBADDR);
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__23__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__23__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.bsc__DOT____VlemCall_3__SDRAMBank 
                            = vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res;
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM 
                            = ((IData)(vlSelfRef.bsc__DOT____VlemCall_2__SDRAMBank) 
                               == (IData)(vlSelfRef.bsc__DOT____VlemCall_3__SDRAMBank));
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP 
                            = (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM) 
                                & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH)) 
                               & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM));
                        if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT) 
                             & (((((((((3U & (vlSelfRef.__PVT__IA 
                                              >> 0x19U)) 
                                       != (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                 >> 0x19U))) 
                                      & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                    & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM))) 
                                   | (((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                       & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)))) 
                                  | (((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                      & (0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)))) 
                                 | ((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                    & (IData)(vlSelfRef.__PVT__bsc__DOT__REFRESH_ACTIVE))) 
                                | ((((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                     & (3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT))) 
                                    & (IData)(vlSymsp->TOP__tb_top__DOT__ref0__DOT__SSH.__PVT__bsc__DOT__BREQ)) 
                                   & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))))) {
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
                        } else if (((((((0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                        | (2U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                       | (((5U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                           & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))) 
                                          & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)))) 
                                      | ((8U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)))) {
                            __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
                                = (((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                    & (3U > (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT)))
                                    ? (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT)))
                                    : 0U);
                            __Vfunc_bsc__DOT__GetAreaSZ__24__dramsz 
                                = (2U | (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                               >> 6U)));
                            __Vdly__bsc__DOT__CBUS_ACTIVE = 1U;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
                                = vlSelfRef.__PVT__cache__DOT__IBLOCK;
                            __Vfunc_bsc__DOT__GetAreaSZ__24__BCR2 
                                = vlSelfRef.__PVT__bsc__DOT__BCR2;
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)))) {
                                __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND = 1U;
                            }
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
                                = (1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)));
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR);
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            __Vfunc_bsc__DOT__GetAreaSZ__24__BCR1 
                                = vlSelfRef.__PVT__bsc__DOT__BCR1;
                            __Vfunc_bsc__DOT__GetAreaSZ__24__area 
                                = (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                         >> 0x19U));
                            vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res 
                                = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__area))
                                          ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__area))
                                              ? ((1U 
                                                  & VL_REDXOR_32(
                                                                 (3U 
                                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__BCR1))))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__BCR2) 
                                                  >> 6U))
                                              : ((4U 
                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__BCR1))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__BCR2) 
                                                  >> 4U)))
                                          : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__area))
                                              ? ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__24__BCR2) 
                                                 >> 2U)
                                              : 2U)));
                            __Vfunc_bsc__DOT__GetAreaSZ__24__Vfuncout 
                                = vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res;
                            bsc__DOT____VCase_h9022f221__0 
                                = __Vfunc_bsc__DOT__GetAreaSZ__24__Vfuncout;
                            if ((1U != (IData)(bsc__DOT____VCase_h9022f221__0))) {
                                if ((2U == (IData)(bsc__DOT____VCase_h9022f221__0))) {
                                    if ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                        vlSelfRef.__PVT__IDO 
                                            = (0x0000ffffU 
                                               & vlSelfRef.__PVT__cache__DOT__IBDATA);
                                        vlSelfRef.__PVT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                                                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA)))));
                                        __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    } else {
                                        vlSelfRef.__PVT__IDO 
                                            = (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                               >> 0x10U);
                                        vlSelfRef.__PVT__IWE_N 
                                            = (0x0000000fU 
                                               & (~ 
                                                  (3U 
                                                   & ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                                                      & ((IData)(vlSelfRef.__PVT__cache__DOT__IBBA) 
                                                         >> 2U)))));
                                        __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
                                            = (3U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA));
                                    }
                                    if (vlSelfRef.__PVT__cache__DOT__IBWE) {
                                        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
                                    }
                                } else if ((3U == (IData)(bsc__DOT____VCase_h9022f221__0))) {
                                    vlSelfRef.__PVT__IDO 
                                        = vlSelfRef.__PVT__cache__DOT__IBDATA;
                                    vlSelfRef.__PVT__IWE_N 
                                        = (0x0000000fU 
                                           & (~ ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                                                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))));
                                    __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
                                    if (vlSelfRef.__PVT__cache__DOT__IBWE) {
                                        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
                                    }
                                }
                            }
                            if ((((IData)(vlSelfRef.__PVT__cache__DOT__IBBURST) 
                                  | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)) 
                                 & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)))) {
                                if ((1U & ((~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN)) 
                                           | (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_LAST)))) {
                                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 1U;
                                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE 
                                        = (1U & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBBURST)));
                                }
                            } else {
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
                                __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
                                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 1U;
                            }
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                                = (3U & ((((((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH) 
                                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                            & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)) 
                                           & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)))
                                           ? 0U : 1U) 
                                         + (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                  >> 0x0000000eU))));
                            __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
                                = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
                                = vlSelfRef.__PVT__cache__DOT__IBWE;
                            if (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM) 
                                 & (0x000cU == (0x000cU 
                                                & (IData)(vlSelfRef.__PVT__bsc__DOT__MCR))))) {
                                vlSelfRef.__PVT__ICS0_N = 1U;
                                vlSelfRef.__PVT__ICS1_N = 1U;
                                vlSelfRef.__PVT__ICS2_N = 1U;
                                vlSelfRef.__PVT__ICS3_N = 1U;
                                vlSelfRef.__PVT__IBS_N = 1U;
                                __Vdly__IRD_WR_N = 1U;
                                vlSelfRef.__PVT__IWE_N = 0x0fU;
                                vlSelfRef.__PVT__IRD_N = 1U;
                            } else {
                                vlSelfRef.__PVT__ICS0_N 
                                    = (0U != (3U & 
                                              (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__ICS1_N 
                                    = (1U != (3U & 
                                              (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__ICS2_N 
                                    = (2U != (3U & 
                                              (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__ICS3_N 
                                    = (3U != (3U & 
                                              (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                               >> 0x19U)));
                                vlSelfRef.__PVT__IBS_N = 0U;
                                __Vdly__IRD_WR_N = 
                                    (1U & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)));
                                vlSelfRef.__PVT__IRD_N 
                                    = vlSelfRef.__PVT__cache__DOT__IBWE;
                            }
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
                                = ((IData)(vlSelfRef.__PVT__bsc__DOT__RFS_REQ) 
                                   & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM));
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT 
                                = ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)
                                    ? 4U : 1U);
                        }
                    }
                } else {
                    __Vdly__bsc__DOT__REFRESH_ACTIVE = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT)))) {
                        __Vdly__bsc__DOT__CBUS_ACTIVE = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)))) {
                        vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE = 0U;
                    }
                    vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE = 0U;
                }
            } else if ((((((((1U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                             | (3U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                            | (4U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                           | (6U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                          | (9U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                         & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_SEL)) 
                        & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS)))) {
                if (((~ (IData)(vlSelfRef.__PVT__bsc__DOT__VBUSY)) 
                     & (IData)(vlSelfRef.__PVT__VBUS_REQ))) {
                    __Vdly__bsc__DOT__VBUSY = 1U;
                }
                if (((((1U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                       | (3U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                      | (4U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                     & (~ (IData)(vlSelfRef.__PVT__IRD_WR_N)))) {
                    if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__CBUSY)))) {
                        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 1U;
                    }
                    if (((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__DBUSY)))) {
                        __Vdly__bsc__DOT__DBUSY = 1U;
                    }
                }
                if (((((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                       & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS))) 
                     & (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY))) {
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = 1U;
                }
            }
            if (vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS) {
                __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
            }
        } else {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))) {
                vlSelfRef.__PVT__cache__DOT__LRU_DIRTY = 0xffffffffffffffffULL;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
                if ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                      & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                    vlSelfRef.__PVT__frt__DOT__unnamedblk3__DOT__OCR 
                        = ((0x00000010U & (IData)(vlSelfRef.frt__DOT__TOCR))
                            ? (IData)(vlSelfRef.frt__DOT__OCRB)
                            : (IData)(vlSelfRef.frt__DOT__OCRA));
                    if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                    vlSelfRef.__PVT__frt__DOT__REG_DO 
                                        = vlSelfRef.__PVT__frt__DOT__TEMP;
                                } else {
                                    vlSelfRef.__PVT__frt__DOT__REG_DO 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.frt__DOT__ICR) 
                                              >> 8U));
                                    __Vdly__frt__DOT__TEMP 
                                        = (0x000000ffU 
                                           & (IData)(vlSelfRef.frt__DOT__ICR));
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        vlSelfRef.__PVT__frt__DOT__REG_DO 
                            = (0x000000ffU & ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                               ? ((1U 
                                                   & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                                   ? 
                                                  (0xe0U 
                                                   | (IData)(vlSelfRef.frt__DOT__TOCR))
                                                   : 
                                                  (0x83U 
                                                   & (IData)(vlSelfRef.frt__DOT__TCR)))
                                               : ((1U 
                                                   & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                                   ? (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk3__DOT__OCR)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk3__DOT__OCR) 
                                                   >> 8U))));
                    } else if ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            vlSelfRef.__PVT__frt__DOT__REG_DO 
                                = vlSelfRef.__PVT__frt__DOT__TEMP;
                        } else {
                            vlSelfRef.__PVT__frt__DOT__REG_DO 
                                = (0x000000ffU & ((IData)(vlSelfRef.frt__DOT__FRC) 
                                                  >> 8U));
                            __Vdly__frt__DOT__TEMP 
                                = (0x000000ffU & (IData)(vlSelfRef.frt__DOT__FRC));
                        }
                    } else {
                        vlSelfRef.__PVT__frt__DOT__REG_DO 
                            = ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? (0x8fU & (IData)(vlSelfRef.frt__DOT__FTCSR))
                                : (1U | (IData)(vlSelfRef.frt__DOT__TIER)));
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
            if (((((~ (IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ)) 
                   & (IData)(vlSelfRef.__PVT__IBUS_PREREQ)) 
                  & (0U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE))) 
                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS)))) {
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 1U;
            }
            if ((((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__divu__DOT__REG_DO 
                    = ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                        ? ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                            ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? vlSelfRef.__PVT__divu__DOT__DVDNTL2
                                : vlSelfRef.__PVT__divu__DOT__DVDNTH2)
                            : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? vlSelfRef.__PVT__divu__DOT__DVDNTL
                                : vlSelfRef.__PVT__divu__DOT__DVDNTH))
                        : ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                            ? ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? (0x0000ffffU & (IData)(vlSelfRef.__PVT__divu__DOT__VCRDIV))
                                : (3U & vlSelfRef.__PVT__divu__DOT__DVCR))
                            : ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                ? vlSelfRef.__PVT__divu__DOT__DVDNTL
                                : vlSelfRef.__PVT__divu__DOT__DVSR)));
            }
            if (((IData)(vlSelfRef.__PVT__core__DOT__VECT_ACTIVE) 
                 & (~ (IData)(vlSelfRef.__PVT__intc__DOT__VBREQ)))) {
                __Vdly__intc__DOT__VBREQ = 1U;
                vlSelfRef.__PVT__intc__DOT__VBA = (0x0000000fU 
                                                   & (vlSelfRef.core__DOT__SR 
                                                      >> 4U));
            } else if (((IData)(vlSelfRef.__PVT__intc__DOT__VBREQ) 
                        & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__VBUSY) 
                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18) 
                                 & (IData)(vlSelfRef.__PVT__VBUS_REQ)))))) {
                __Vdly__intc__DOT__VBREQ = 0U;
            }
            if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG2_SEL) 
                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                if ((0x0cU == (0x0000003cU & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                    __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2 
                        = (1U & (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                                 >> 1U));
                    __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2 = 1U;
                } else if ((0x1cU == (0x0000003cU & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                    __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3 
                        = (1U & (vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                                 >> 1U));
                    __VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3 = 1U;
                }
            }
        }
        vlSelfRef.bsc__DOT__BUS_STATE = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT;
        if ((((IData)(vlSelfRef.__PVT__core__DOT__REGS_WAE) 
              & (0U == (0x0000001fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                       .__PVT__WB.__PVT__DI[1U] 
                                       >> 8U)))) & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            vlSelfRef.__PVT__core__DOT__regfile__DOT__GR0 
                = vlSelfRef.__PVT__core__DOT__REGS_WAD;
        }
        if (((IData)(vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH) 
             & (0U == (IData)(vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_ADDR_LATCH)))) {
            vlSelfRef.__PVT__core__DOT__regfile__DOT__GR0 
                = vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_D_LATCH;
        }
        __Vfunc_dmac__DOT__GetAddrInc__25__sz = (3U 
                                                 & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                    [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                    >> 0x0000000aU));
        vlSelfRef.__PVT__dmac__DOT__GetAddrInc__Vstatic__res 
            = ((2U & (IData)(__Vfunc_dmac__DOT__GetAddrInc__25__sz))
                ? 4U : ((1U & (IData)(__Vfunc_dmac__DOT__GetAddrInc__25__sz))
                         ? 2U : 1U));
        __Vfunc_dmac__DOT__GetAddrInc__25__Vfuncout 
            = vlSelfRef.__PVT__dmac__DOT__GetAddrInc__Vstatic__res;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__AR_INC 
            = __Vfunc_dmac__DOT__GetAddrInc__25__Vfuncout;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT 
            = (0x00ffffffU & (vlSelfRef.__PVT__dmac__DOT__TCR
                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                              - (IData)(1U)));
        __VdlySet__dmac__DOT__CH_REQ_CLR__v0 = 1U;
        __Vdly__dmac__DOT__DMA_REQ_CLR = 0U;
        if (((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_REQ) 
               & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_RD))) 
              & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_WR))) 
             & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
            if ((1U & ((~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                           [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                           >> 3U)) | ((vlSelfRef.__PVT__dmac__DOT__CHCR
                                       [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                       >> 3U) & (~ 
                                                 (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                  >> 8U)))))) {
                __Vdly__dmac__DOT__DMA_RD = 1U;
                __Vdly__dmac__DOT__LW_CNT = ((3U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                >> 0x0000000aU)))
                                              ? 3U : 0U);
                __VdlyVal__dmac__DOT__CH_REQ_CLR__v2 
                    = (1U & ((vlSelfRef.__PVT__dmac__DOT__CHCR
                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                              >> 3U) & (~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                                           [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                           >> 8U))));
                __VdlyDim0__dmac__DOT__CH_REQ_CLR__v2 
                    = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                __VdlySet__dmac__DOT__CH_REQ_CLR__v2 = 1U;
                vlSelfRef.__PVT__dmac__DOT__DMA_BURST 
                    = (3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                    [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                    >> 0x0000000aU)));
                vlSelfRef.__PVT__dmac__DOT__DMA_LOCK 
                    = (1U & (((~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                  >> 3U)) | (vlSelfRef.__PVT__dmac__DOT__CHCR
                                             [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                             >> 4U)) 
                             | (3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                             [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                             >> 0x0000000aU)))));
            } else {
                __Vdly__dmac__DOT__DMA_WR = 1U;
                if ((3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                  >> 0x0000000aU)))) {
                    __Vdly__dmac__DOT__LW_CNT = 3U;
                    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v3 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__CH_REQ_CLR__v3 = 1U;
                    vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 1U;
                } else {
                    __Vdly__dmac__DOT__LW_CNT = 0U;
                    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v3 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__CH_REQ_CLR__v3 = 1U;
                    vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 0U;
                }
                vlSelfRef.__PVT__dmac__DOT__DMA_LOCK 
                    = (1U & ((vlSelfRef.__PVT__dmac__DOT__CHCR
                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                              >> 4U) | (3U == (3U & 
                                               (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                >> 0x0000000aU)))));
            }
        } else if (((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_RD) 
                      | (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_WR)) 
                     & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__DBUSY) 
                           | ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE) 
                              | (((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76)))))) 
                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
            __VdlyVal__dmac__DOT__RD_BUF__v0 = vlSelfRef.__PVT__dmac__DOT__RD_BUF[0U];
            __VdlySet__dmac__DOT__RD_BUF__v0 = 1U;
            if (vlSelfRef.__PVT__dmac__DOT__DMA_RD) {
                if (((3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                   [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                   >> 0x0000000aU))) 
                     | (1U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                     [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                     >> 0x0000000cU))))) {
                    __VdlyVal__dmac__DOT__SAR__v0 = 
                        (vlSelfRef.__PVT__dmac__DOT__SAR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                         + vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__AR_INC);
                    __VdlyDim0__dmac__DOT__SAR__v0 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__SAR__v0 = 1U;
                } else if ((2U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                         >> 0x0000000cU)))) {
                    __VdlyVal__dmac__DOT__SAR__v1 = 
                        (vlSelfRef.__PVT__dmac__DOT__SAR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                         - vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__AR_INC);
                    __VdlyDim0__dmac__DOT__SAR__v1 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__SAR__v1 = 1U;
                }
                __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH = 1U;
                if (((~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                         >> 3U)) & (0U == (IData)(vlSelfRef.__PVT__dmac__DOT__LW_CNT)))) {
                    __Vdly__dmac__DOT__DMA_RD = 0U;
                    __Vdly__dmac__DOT__DMA_WR = 1U;
                    vlSelfRef.__PVT__dmac__DOT__DMA_BURST 
                        = (3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                        [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                        >> 0x0000000aU)));
                    vlSelfRef.__PVT__dmac__DOT__DMA_LOCK 
                        = (1U & ((vlSelfRef.__PVT__dmac__DOT__CHCR
                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                  >> 4U) | (3U == (3U 
                                                   & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                      [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                      >> 0x0000000aU)))));
                    __Vdly__dmac__DOT__LW_CNT = ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                      [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                      >> 0x0000000aU)))
                                                  ? 3U
                                                  : 0U);
                    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v4 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__CH_REQ_CLR__v4 = 1U;
                    if ((0U == vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT)) {
                        vlSelfRef.__PVT__dmac__DOT__DMA_LOCK = 0U;
                    }
                } else if ((((vlSelfRef.__PVT__dmac__DOT__CHCR
                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                              >> 3U) & (~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                                           [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                           >> 8U))) 
                            & (0U == (IData)(vlSelfRef.__PVT__dmac__DOT__LW_CNT)))) {
                    __VdlyDim0__dmac__DOT__CH_REQ_CLR__v5 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__CH_REQ_CLR__v5 = 1U;
                    __Vdly__dmac__DOT__DMA_REQ_CLR = 1U;
                    __Vdly__dmac__DOT__LW_CNT = ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                      [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                      >> 0x0000000aU)))
                                                  ? 3U
                                                  : 0U);
                    if ((1U & (~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                  >> 4U)))) {
                        __Vdly__dmac__DOT__DMA_RD = 0U;
                    }
                    __VdlyVal__dmac__DOT__TCR__v0 = vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT;
                    __VdlyDim0__dmac__DOT__TCR__v0 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__TCR__v0 = 1U;
                    if ((0U == vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT)) {
                        vlSelfRef.__VdlyDim0__dmac__DOT__CHCR__v0 
                            = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                        vlSelfRef.__VdlySet__dmac__DOT__CHCR__v0 = 1U;
                        __Vdly__dmac__DOT__DMA_RD = 0U;
                        vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 0U;
                    }
                }
                vlSelfRef.__PVT__dmac__DOT__SA_BA = 
                    (3U & vlSelfRef.__PVT__dmac__DOT__SAR
                     [vlSelfRef.__PVT__dmac__DOT__DMA_CH]);
            } else if (vlSelfRef.__PVT__dmac__DOT__DMA_WR) {
                if ((1U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                  >> 0x0000000eU)))) {
                    __VdlyVal__dmac__DOT__DAR__v0 = 
                        (vlSelfRef.__PVT__dmac__DOT__DAR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                         + vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__AR_INC);
                    __VdlyDim0__dmac__DOT__DAR__v0 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__DAR__v0 = 1U;
                } else if ((2U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                         >> 0x0000000eU)))) {
                    __VdlyVal__dmac__DOT__DAR__v1 = 
                        (vlSelfRef.__PVT__dmac__DOT__DAR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                         - vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__AR_INC);
                    __VdlyDim0__dmac__DOT__DAR__v1 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    __VdlySet__dmac__DOT__DAR__v1 = 1U;
                }
                if ((1U == (IData)(vlSelfRef.__PVT__dmac__DOT__LW_CNT))) {
                    if ((1U & (~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                  >> 4U)))) {
                        vlSelfRef.__PVT__dmac__DOT__DMA_LOCK = 0U;
                    }
                }
                if (((0U == (IData)(vlSelfRef.__PVT__dmac__DOT__LW_CNT)) 
                     | (0U == vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT))) {
                    if ((8U & vlSelfRef.__PVT__dmac__DOT__CHCR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH])) {
                        if ((1U & ((vlSelfRef.__PVT__dmac__DOT__CHCR
                                    [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                    >> 3U) & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                              >> 8U)))) {
                            __VdlyDim0__dmac__DOT__CH_REQ_CLR__v6 
                                = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                            __VdlySet__dmac__DOT__CH_REQ_CLR__v6 = 1U;
                            __Vdly__dmac__DOT__LW_CNT 
                                = ((3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                 [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                 >> 0x0000000aU)))
                                    ? 3U : 0U);
                            if ((1U & (~ (vlSelfRef.__PVT__dmac__DOT__CHCR
                                          [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                          >> 4U)))) {
                                __Vdly__dmac__DOT__DMA_WR = 0U;
                            }
                        }
                    } else {
                        __Vdly__dmac__DOT__DMA_WR = 0U;
                        if ((0x00000010U & vlSelfRef.__PVT__dmac__DOT__CHCR
                             [vlSelfRef.__PVT__dmac__DOT__DMA_CH])) {
                            __Vdly__dmac__DOT__DMA_RD = 1U;
                            if ((3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                              >> 0x0000000aU)))) {
                                vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 1U;
                                vlSelfRef.__PVT__dmac__DOT__DMA_LOCK = 1U;
                                __Vdly__dmac__DOT__LW_CNT = 3U;
                            } else {
                                vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 0U;
                                vlSelfRef.__PVT__dmac__DOT__DMA_LOCK = 1U;
                                __Vdly__dmac__DOT__LW_CNT = 0U;
                            }
                        }
                    }
                    __Vdly__dmac__DOT__DMA_REQ_CLR = 1U;
                }
                __VdlyVal__dmac__DOT__TCR__v1 = vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT;
                __VdlyDim0__dmac__DOT__TCR__v1 = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                __VdlySet__dmac__DOT__TCR__v1 = 1U;
                if ((1U == vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT)) {
                    if ((3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                      [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                      >> 0x0000000aU)))) {
                        vlSelfRef.__PVT__dmac__DOT__DMA_LOCK = 0U;
                    }
                }
                if ((0U == vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT)) {
                    vlSelfRef.__VdlyDim0__dmac__DOT__CHCR__v1 
                        = vlSelfRef.__PVT__dmac__DOT__DMA_CH;
                    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v1 = 1U;
                    __Vdly__dmac__DOT__DMA_RD = 0U;
                    __Vdly__dmac__DOT__DMA_WR = 0U;
                    vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 0U;
                }
            }
            __Vdly__dmac__DOT__LW_CNT = (3U & ((0U 
                                                != (IData)(vlSelfRef.__PVT__dmac__DOT__LW_CNT))
                                                ? ((IData)(vlSelfRef.__PVT__dmac__DOT__LW_CNT) 
                                                   - (IData)(1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                        [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                        >> 0x0000000aU)))
                                                    ? 3U
                                                    : 0U)));
            __VdlyVal__dmac__DOT__RD_BUF__v1 = vlSelfRef.__PVT__dmac__DOT__RD_BUF[1U];
            __VdlySet__dmac__DOT__RD_BUF__v1 = 1U;
            __VdlyVal__dmac__DOT__RD_BUF__v2 = vlSelfRef.__PVT__dmac__DOT__RD_BUF[2U];
        }
        if (((IData)(vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV))) {
            __VdlyVal__dmac__DOT__RD_BUF__v3 = vlSelfRef.__PVT__BSC_DBUS_DO;
            __VdlySet__dmac__DOT__RD_BUF__v3 = 1U;
            __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH = 0U;
        }
        vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH = 0U;
        if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
            vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ 
                = (1U & ((0x00000040U & vlSelfRef.__PVT__dmac__DOT__CHCR[0U])
                          ? ((vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                              >> 5U) & ((IData)(vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD) 
                                        ^ (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                                           >> 5U)))
                          : (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                             >> 5U)));
            vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ 
                = (1U & ((0x00000040U & vlSelfRef.__PVT__dmac__DOT__CHCR[1U])
                          ? ((vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                              >> 5U) & ((IData)(vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD) 
                                        ^ (vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                                           >> 5U)))
                          : (vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                             >> 5U)));
            vlSelfRef.__PVT__msby__DOT__unnamedblk1__DOT__SLEEP_OLD 
                = vlSelfRef.__PVT__core__DOT__SLP;
            if ((((0xfffffe91U == vlSelfRef.__PVT__cache__DOT__IBADDR) 
                  & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__msby__DOT__SBYCR = 
                    (0xdfU & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x10U));
            }
            if (vlSelfRef.__PVT__RES_SYNC_N) {
                if ((1U & (~ (((IData)(vlSelfRef.__PVT__dmac__DOT__REG1_SEL) 
                               & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                              & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))))) {
                    if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG2_SEL) 
                          & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                         & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                        if ((0x20U != (0x0000003cU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            if ((0x28U == (0x0000003cU 
                                           & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                vlSelfRef.__PVT__dmac__DOT__VCRDMA1 
                                    = (0x000000ffU 
                                       & vlSelfRef.__PVT__cache__DOT__IBDATA);
                            }
                        }
                        if ((0x20U == (0x0000003cU 
                                       & vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                            vlSelfRef.__PVT__dmac__DOT__VCRDMA0 
                                = (0x000000ffU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                    }
                }
                if (((((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                       & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                     & (0x3fU == (IData)(vlSelfRef.__PVT__divu__DOT__STEP)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 4U)))) {
                        if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                if ((0U != (3U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA)))) {
                                    vlSelfRef.__PVT__divu__DOT__VCRDIV 
                                        = (0x0000ffffU 
                                           & vlSelfRef.__PVT__cache__DOT__IBDATA);
                                }
                            }
                        }
                    }
                    if ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                vlSelfRef.__PVT__divu__DOT__DVDNTL2 
                                    = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            } else {
                                vlSelfRef.__PVT__divu__DOT__DVDNTH2 
                                    = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            }
                        } else if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            vlSelfRef.__Vdly__divu__DOT__DVDNTL 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        } else {
                            vlSelfRef.__Vdly__divu__DOT__DVDNTH 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                         >> 3U)))) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            vlSelfRef.__Vdly__divu__DOT__DVDNTH 
                                = (- (IData)((vlSelfRef.__PVT__cache__DOT__IBDATA 
                                              >> 0x1fU)));
                            vlSelfRef.__Vdly__divu__DOT__DVDNTL 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__dmac__DOT__VCRDMA1 = 0U;
                vlSelfRef.__PVT__dmac__DOT__VCRDMA0 = 0U;
                vlSelfRef.__PVT__divu__DOT__VCRDIV = 0U;
                vlSelfRef.__Vdly__divu__DOT__DVDNTL = 0U;
                vlSelfRef.__Vdly__divu__DOT__DVDNTH = 0U;
                vlSelfRef.__PVT__divu__DOT__DVDNTL2 = 0U;
                vlSelfRef.__PVT__divu__DOT__DVDNTH2 = 0U;
            }
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                       | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) {
                vlSelfRef.frt__DOT__TOCR = 0U;
                vlSelfRef.frt__DOT__TIER = 0U;
                vlSelfRef.frt__DOT__ICR = 0U;
                __Vdly__frt__DOT__FTCSR = (0x7fU & (IData)(__Vdly__frt__DOT__FTCSR));
                __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = 0U;
                vlSelfRef.frt__DOT__TCR = 0U;
            } else {
                __Vdly__frt__DOT__unnamedblk2__DOT__CAPT 
                    = (1U & ((~ ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__mfti_cnt)) 
                                 ^ ((IData)(vlSelfRef.frt__DOT__TCR) 
                                    >> 7U))) & ((IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__FTI_OLD) 
                                                ^ ((IData)(vlSelfRef.frt__DOT__TCR) 
                                                   >> 7U))));
                if ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            if ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                    vlSelfRef.frt__DOT__TOCR 
                                        = (0x1fU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                                }
                                if ((1U & (~ vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                    vlSelfRef.frt__DOT__TCR 
                                        = (0x83U & 
                                           (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                            >> 8U));
                                }
                            }
                        }
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                    vlSelfRef.frt__DOT__TIER 
                                        = (0xfeU & 
                                           (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                            >> 0x18U));
                                }
                            }
                        }
                    }
                }
                if ((((IData)(vlSelfRef.__PVT__frt__DOT__ICR_READ) 
                      & (~ (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICR_READ_OLD))) 
                     & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__CAPT))) {
                    __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = 1U;
                } else if (vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__CAPT) {
                    vlSelfRef.frt__DOT__ICR = vlSelfRef.frt__DOT__FRC;
                    __Vdly__frt__DOT__FTCSR = (0x00000080U 
                                               | (IData)(__Vdly__frt__DOT__FTCSR));
                }
                if (vlSelfRef.__PVT__frt__DOT__FTCSR_WRITE) {
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x17U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICF_SET)) 
                         & ((IData)(vlSelfRef.frt__DOT__FTCSR) 
                            >> 7U))) {
                        __Vdly__frt__DOT__FTCSR = (0x7fU 
                                                   & (IData)(__Vdly__frt__DOT__FTCSR));
                        vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICF_SET = 0U;
                    }
                }
            }
            if (((((0xffffffe0U <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                   & (0xa55aU == (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                  >> 0x10U))) & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                if ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                    if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__PVT__bsc__DOT__RTCOR 
                                = (0x000000ffU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__PVT__bsc__DOT__RTCSR 
                                = (0x00f8U & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            vlSelfRef.__PVT__bsc__DOT__BCR2 
                                = (0x00fcU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__PVT__bsc__DOT__BCR1 
                                = (0x1ff7U & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                    }
                    if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__PVT__bsc__DOT__WCR 
                                = (0x0000ffffU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            vlSelfRef.__PVT__bsc__DOT__MCR 
                                = (0xfefcU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                        }
                    }
                }
            }
            if ((((IData)(vlSelfRef.__PVT__dmac__DOT__REG2_SEL) 
                  & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                              >> 5U)))) {
                    if ((0x00000010U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v2 
                                    = (0x00003fffU 
                                       & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                          >> 2U));
                                vlSelfRef.__VdlySet__dmac__DOT__CHCR__v2 = 1U;
                                if (((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                         >> 1U)) & vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[1U])) {
                                    vlSelfRef.__VdlySet__dmac__DOT__CHCR__v3 = 1U;
                                }
                                vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v4 
                                    = (1U & vlSelfRef.__PVT__cache__DOT__IBDATA);
                                vlSelfRef.__VdlySet__dmac__DOT__CHCR__v4 = 1U;
                            } else {
                                __VdlyVal__dmac__DOT__TCR__v2 
                                    = (0x00ffffffU 
                                       & vlSelfRef.__PVT__cache__DOT__IBDATA);
                                __VdlySet__dmac__DOT__TCR__v2 = 1U;
                            }
                        } else if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            __VdlyVal__dmac__DOT__DAR__v2 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            __VdlySet__dmac__DOT__DAR__v2 = 1U;
                        } else {
                            __VdlyVal__dmac__DOT__SAR__v2 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            __VdlySet__dmac__DOT__SAR__v2 = 1U;
                        }
                    } else if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v5 
                                = (0x00003fffU & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                                  >> 2U));
                            vlSelfRef.__VdlySet__dmac__DOT__CHCR__v5 = 1U;
                            if (((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                     >> 1U)) & vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[0U])) {
                                vlSelfRef.__VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v1 = 1U;
                            }
                            vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v7 
                                = (1U & vlSelfRef.__PVT__cache__DOT__IBDATA);
                            vlSelfRef.__VdlySet__dmac__DOT__CHCR__v7 = 1U;
                        } else {
                            __VdlyVal__dmac__DOT__TCR__v3 
                                = (0x00ffffffU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                            __VdlySet__dmac__DOT__TCR__v3 = 1U;
                        }
                    } else if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        __VdlyVal__dmac__DOT__DAR__v3 
                            = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        __VdlySet__dmac__DOT__DAR__v3 = 1U;
                    } else {
                        __VdlyVal__dmac__DOT__SAR__v3 
                            = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        __VdlySet__dmac__DOT__SAR__v3 = 1U;
                    }
                }
            }
            if (((3U <= (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                 & (0x23U >= (IData)(vlSelfRef.__PVT__divu__DOT__STEP)))) {
                vlSelfRef.__Vdly__divu__DOT__DVDNTH 
                    = ((vlSelfRef.__PVT__divu__DOT__DVDNTH 
                        << 1U) | (vlSelfRef.__PVT__divu__DOT__DVDNTL 
                                  >> 0x0000001fU));
                vlSelfRef.__Vdly__divu__DOT__DVDNTL 
                    = ((vlSelfRef.__PVT__divu__DOT__DVDNTL 
                        << 1U) | (1U ^ (vlSelfRef.__PVT__divu__DOT__SUM[2U] 
                                        ^ (IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN))));
            }
            if ((0x25U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__DVDNTH 
                    = vlSelfRef.__PVT__divu__DOT__R[0U];
            }
            if (vlSelfRef.__PVT__divu__DOT__unnamedblk2__DOT__SND_UPD) {
                vlSelfRef.__PVT__divu__DOT__DVDNTL2 
                    = vlSelfRef.__PVT__divu__DOT__DVDNTL;
                vlSelfRef.__PVT__divu__DOT__DVDNTH2 
                    = vlSelfRef.__PVT__divu__DOT__DVDNTH;
            }
            vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD = 1U;
            vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD = 1U;
            vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_ADDR_LATCH 
                = (0x0000001fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                  .__PVT__WB.__PVT__DI[1U] 
                                  >> 1U));
            vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_D_LATCH 
                = vlSelfRef.__PVT__core__DOT__PIPE.__PVT__WB
                .__PVT__RES;
            vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH 
                = (1U & (((vlSelfRef.__PVT__core__DOT__PIPE
                           .__PVT__WB.__PVT__DI[0U] 
                           >> 0x0000001fU) & ((~ (vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__WB
                                                  .__PVT__DI[1U] 
                                                  >> 6U)) 
                                              | ((0x0000001fU 
                                                  & (vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__WB
                                                     .__PVT__DI[1U] 
                                                     >> 8U)) 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__WB
                                                     .__PVT__DI[1U] 
                                                     >> 1U))))) 
                         & (~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL))));
            vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__FTI_OLD 
                = ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                             | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) 
                   && (0U == (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__mfti_cnt)));
            vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICR_READ_OLD 
                = ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                             | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) 
                   && (IData)(vlSelfRef.__PVT__frt__DOT__ICR_READ));
            if (vlSelfRef.__PVT__dmac__DOT__DMA_REQ) {
                if (vlSelfRef.__PVT__dmac__DOT__DMA_REQ_CLR) {
                    __Vdly__dmac__DOT__RB_PRIO = (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__RB_PRIO)));
                    vlSelfRef.__PVT__dmac__DOT__DMA_REQ = 0U;
                }
            } else if (((((vlSelfRef.__PVT__dmac__DOT__CH_REQ[0U] 
                           & vlSelfRef.__PVT__dmac__DOT__CH_EN[0U]) 
                          & vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[0U]) 
                         & ((vlSelfRef.__PVT__dmac__DOT__CH_REQ[1U] 
                             & vlSelfRef.__PVT__dmac__DOT__CH_EN[1U]) 
                            & vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[1U])) 
                        & (vlSelfRef.__PVT__dmac__DOT__DMAOR 
                           >> 3U))) {
                vlSelfRef.__PVT__dmac__DOT__DMA_REQ = 1U;
                vlSelfRef.__PVT__dmac__DOT__DMA_CH 
                    = vlSelfRef.__PVT__dmac__DOT__RB_PRIO;
            } else if (((vlSelfRef.__PVT__dmac__DOT__CH_REQ[0U] 
                         & vlSelfRef.__PVT__dmac__DOT__CH_EN[0U]) 
                        & vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[0U])) {
                vlSelfRef.__PVT__dmac__DOT__DMA_REQ = 1U;
                vlSelfRef.__PVT__dmac__DOT__DMA_CH = 0U;
            } else if (((vlSelfRef.__PVT__dmac__DOT__CH_REQ[1U] 
                         & vlSelfRef.__PVT__dmac__DOT__CH_EN[1U]) 
                        & vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[1U])) {
                vlSelfRef.__PVT__dmac__DOT__DMA_REQ = 1U;
                vlSelfRef.__PVT__dmac__DOT__DMA_CH = 1U;
            }
            vlSelfRef.__PVT__divu__DOT__unnamedblk2__DOT__SND_UPD = 0U;
            if ((0x26U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                if (vlSelfRef.__PVT__divu__DOT__OVF) {
                    if ((2U & vlSelfRef.__PVT__divu__DOT__DVCR)) {
                        if (vlSelfRef.__PVT__divu__DOT__DIV64) {
                            vlSelfRef.__Vdly__divu__DOT__DVDNTL 
                                = (IData)(vlSelfRef.__PVT__divu__DOT__R64);
                        }
                    } else {
                        vlSelfRef.__Vdly__divu__DOT__DVDNTL 
                            = ((((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                                 ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN)) 
                                << 0x0000001fU) | (0x7fffffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                                                                     ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN))))))));
                    }
                    if (vlSelfRef.__PVT__divu__DOT__DIV64) {
                        vlSelfRef.__Vdly__divu__DOT__DVDNTH 
                            = (IData)((vlSelfRef.__PVT__divu__DOT__R64 
                                       >> 0x20U));
                    }
                } else {
                    vlSelfRef.__Vdly__divu__DOT__DVDNTL 
                        = vlSelfRef.__PVT__divu__DOT__Q;
                }
                vlSelfRef.__PVT__divu__DOT__unnamedblk2__DOT__SND_UPD = 1U;
            }
        } else if (vlSelfRef.__PVT__RES_SYNC_N) {
            if (vlSelfRef.__PVT__frt__DOT__FTCSR_READ) {
                if ((0x00000080U & (IData)(vlSelfRef.frt__DOT__FTCSR))) {
                    vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICF_SET = 1U;
                }
            }
        } else {
            vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICF_SET = 0U;
        }
    } else {
        vlSelfRef.__Vdly__intc__DOT__IPRB = 0U;
        vlSelfRef.__VdlyMask__intc__DOT__IPRB = 0xffffU;
        vlSelfRef.__Vdly__intc__DOT__IPRA = 0U;
        vlSelfRef.__VdlyMask__intc__DOT__IPRA = 0xffffU;
        __Vdly__intc__DOT__VCRWDT = 0U;
        __VdlyMask__intc__DOT__VCRWDT = 0xffffU;
        __Vdly__intc__DOT__VCRA = 0U;
        __VdlyMask__intc__DOT__VCRA = 0xffffU;
        __Vdly__intc__DOT__VCRB = 0U;
        __VdlyMask__intc__DOT__VCRB = 0xffffU;
        __Vdly__intc__DOT__VCRC = 0U;
        __VdlyMask__intc__DOT__VCRC = 0xffffU;
        __Vdly__intc__DOT__VCRD = 0U;
        __VdlyMask__intc__DOT__VCRD = 0xffffU;
        __Vdly__intc__DOT__ICR = 0U;
        __VdlyMask__intc__DOT__ICR = 0xffffU;
        vlSelfRef.__Vdly__divu__DOT__BUSY = 0U;
        __Vdly__mult__DOT__MM_DONE = 1U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC = 0U;
        vlSelfRef.__Vdly__bsc__DOT__BGR = 0U;
        __Vdly__bsc__DOT__MST_BUS_RLS = 0U;
        __Vdly__core__DOT__SLP = 1U;
        vlSelfRef.__Vdly__cache__DOT__CCR = 0U;
        vlSelfRef.__Vdly__cache__DOT__CCR = 0U;
        __VdlySet__dmac__DOT__CH_REQ__v4 = 1U;
        vlSelfRef.__Vdly__INTC_NMI_REQ = 0U;
        __Vdly__core__DOT__PC = 0U;
        __VdlySet__core__DOT__regfile__DOT__GR__v2 = 1U;
        vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = 0U;
        __Vdly__core__DOT__IF_ACTIVE = 0U;
        __Vdly__core__DOT__VECT_ACTIVE = 0U;
        __Vdly__core__DOT__INST_SPLIT = 0U;
        vlSelfRef.__Vdly__core__DOT__MAWB_STALL = 0U;
        __VdlySet__cache__DOT__TAG_DIRTY__v8 = 1U;
        __Vdly__dmac__DOT__DMAOR = 0U;
        __Vdly__dmac__DOT__DMAOR = (1U | __Vdly__dmac__DOT__DMAOR);
        __Vdly__MSBY_SBY = 0U;
        __VdlySet__dmac__DOT__DRCR__v4 = 1U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__IR = 0U;
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0xa0240000U;
        __Vtemp_2[2U] = 4U;
        VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                    .__PVT__MA.__PVT__DI, __Vtemp_2);
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__BC = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__RES = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__ADDR = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__MA.__PVT__WD = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__IR = 0U;
        __Vtemp_4[0U] = 0U;
        __Vtemp_4[1U] = 0xa0240000U;
        __Vtemp_4[2U] = 4U;
        VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                    .__PVT__WB2.__PVT__DI, __Vtemp_4);
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESA = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB2.__PVT__RESB = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID.__PVT__IR = 0U;
        vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__SAVE_IR = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__ID.__PVT__PC = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__IR = 0U;
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0xa0240000U;
        __Vtemp_6[2U] = 4U;
        VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                    .__PVT__WB.__PVT__DI, __Vtemp_6);
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RES = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__WB.__PVT__RD = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__IR = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__PC = 0U;
        __Vtemp_8[0U] = 0U;
        __Vtemp_8[1U] = 0xa0240000U;
        __Vtemp_8[2U] = 4U;
        VL_ASSIGN_W(80, vlSelfRef.__Vdly__core__DOT__PIPE
                    .__PVT__EX.__PVT__DI, __Vtemp_8);
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__RA = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__RB = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__R0 = 0U;
        vlSelfRef.__Vdly__core__DOT__PIPE.__PVT__EX.__PVT__BC = 0U;
        __Vdly__frt__DOT__FTCSR = (0xf1U & (IData)(__Vdly__frt__DOT__FTCSR));
        __Vdly__frt__DOT__FTCSR = (0xfeU & (IData)(__Vdly__frt__DOT__FTCSR));
        __Vdly__frt__DOT__FTCSR = (0x8fU & (IData)(__Vdly__frt__DOT__FTCSR));
        __Vdly__bsc__DOT__RFS_REQ = 0U;
        __Vdly__bsc__DOT__RTCNT = 0U;
        vlSelfRef.__PVT__mult__DOT__SIGNED = 0U;
        vlSelfRef.__PVT__sci__DOT__REG_DO = 0U;
        vlSelfRef.__PVT__UBC__DOT__REG_DO = 0U;
        vlSelfRef.__PVT__core__DOT__VBR = 0U;
        vlSelfRef.__PVT__core__DOT__GBR = 0U;
        __Vdly__core__DOT__RES_EXP = 1U;
        __Vdly__core__DOT__ILI_EXP = 0U;
        vlSelfRef.__PVT__cache__DOT__LRU_DIRTY = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__intc__DOT__BUS_DO = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC = 0U;
        vlSelfRef.__PVT__mult__DOT__MACL = 0U;
        vlSelfRef.__PVT__mult__DOT__MACH = 0U;
        vlSelfRef.__PVT__mult__DOT__MACL = 0x01234567U;
        vlSelfRef.__PVT__mult__DOT__MACH = 0x89abcdefU;
        vlSelfRef.__PVT__dmac__DOT__REG_DO = 0U;
        vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED = 0U;
        __Vdly__core__DOT__INT_REQ_LATCH = 0U;
        vlSelfRef.__PVT__core__DOT__INT_LVL_LATCH = 0U;
        __Vdly__frt__DOT__FRC = 0U;
        __Vdly__frt__DOT__OCRA = 0xffffU;
        __Vdly__frt__DOT__OCRB = 0xffffU;
        vlSelfRef.__PVT__frt__DOT__REG_DO = 0U;
        __Vdly__frt__DOT__TEMP = 0U;
        vlSelfRef.__PVT__bsc__DOT__REG_DO = 0U;
        __Vdly__IRD_WR_N = 1U;
        __Vdly__bsc__DOT__BUSY = 0U;
        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 0U;
        __Vdly__bsc__DOT__DBUSY = 0U;
        __Vdly__bsc__DOT__VBUSY = 0U;
        __Vdly__bsc__DOT__REFRESH_ACTIVE = 0U;
        vlSelfRef.__PVT__ICS0_N = 1U;
        vlSelfRef.__PVT__ICS1_N = 1U;
        vlSelfRef.__PVT__ICS2_N = 1U;
        vlSelfRef.__PVT__ICS3_N = 1U;
        vlSelfRef.__PVT__IBS_N = 1U;
        vlSelfRef.__PVT__IRD_N = 1U;
        vlSelfRef.__PVT__IWE_N = 0x0fU;
        vlSelfRef.__PVT__IIVECF_N = 1U;
        vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = 0U;
        __Vdly__bsc__DOT__CBUS_ACTIVE = 0U;
        vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE = 0U;
        vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE = 0U;
        __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
        vlSelfRef.bsc__DOT__BUS_STATE = 0U;
        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
        __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
        vlSelfRef.__PVT__divu__DOT__REG_DO = 0U;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ = 0U;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ = 0U;
        vlSelfRef.__PVT__msby__DOT__SBYCR = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR0 = 0U;
        vlSelfRef.__PVT__wdt__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__wdt__DOT__BUSY = 0U;
        vlSelfRef.__PVT__mult__DOT__MA = 0U;
        vlSelfRef.__PVT__mult__DOT__MB = 0U;
        vlSelfRef.__PVT__dmac__DOT__VCRDMA1 = 0U;
        vlSelfRef.__PVT__dmac__DOT__VCRDMA0 = 0U;
        vlSelfRef.__PVT__core__DOT__STATE = 0U;
        vlSelfRef.__PVT__core__DOT__IFID_STALL = 0U;
        vlSelfRef.frt__DOT__TOCR = 0U;
        vlSelfRef.frt__DOT__TIER = 0U;
        __Vdly__frt__DOT__FTCSR = (0x7fU & (IData)(__Vdly__frt__DOT__FTCSR));
        __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = 0U;
        vlSelfRef.frt__DOT__ICR = 0U;
        vlSelfRef.__PVT__bsc__DOT__RTCOR = 0U;
        vlSelfRef.__PVT__bsc__DOT__RTCSR = 0U;
        __Vdly__intc__DOT__VBREQ = 0U;
        vlSelfRef.__PVT__intc__DOT__VBA = 0U;
        vlSelfRef.__PVT__bsc__DOT__BCR2 = 0x00fcU;
        vlSelfRef.__PVT__bsc__DOT__BCR1 = 0x03f0U;
        vlSelfRef.__PVT__bsc__DOT__WCR = 0xaaffU;
        vlSelfRef.__PVT__bsc__DOT__MCR = 0U;
        __VdlySet__dmac__DOT__DAR__v4 = 1U;
        __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH = 0U;
        vlSelfRef.__VdlySet__dmac__DOT__SAR__v4 = 1U;
        __Vdly__dmac__DOT__DMA_WR = 0U;
        __Vdly__dmac__DOT__DMA_RD = 0U;
        vlSelfRef.__PVT__dmac__DOT__DMA_BURST = 0U;
        vlSelfRef.__PVT__dmac__DOT__DMA_LOCK = 0U;
        __VdlySet__dmac__DOT__CH_REQ_CLR__v7 = 1U;
        __Vdly__dmac__DOT__DMA_REQ_CLR = 0U;
        __Vdly__dmac__DOT__LW_CNT = 0U;
        vlSelfRef.__VdlySet__dmac__DOT__SAR__v5 = 1U;
        vlSelfRef.__PVT__divu__DOT__VCRDIV = 0U;
        vlSelfRef.__Vdly__divu__DOT__DVDNTL = 0U;
        vlSelfRef.__Vdly__divu__DOT__DVDNTH = 0U;
        vlSelfRef.__PVT__divu__DOT__DVDNTL2 = 0U;
        vlSelfRef.__PVT__divu__DOT__DVDNTH2 = 0U;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD = 0U;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_ADDR_LATCH = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_D_LATCH = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH = 0U;
        vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__OVF_SET = 0U;
        __Vdly__wdt__DOT__WTCNT = 0U;
        vlSelfRef.__Vdly__wdt__DOT__WTCSR = 0x18U;
        vlSelfRef.__PVT__wdt__DOT__RSTCSR = 0x1fU;
        __Vdly__WDT_OVF = 0U;
        __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN = 0U;
        vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__FTI_OLD = 0U;
        vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICR_READ_OLD = 0U;
        vlSelfRef.frt__DOT__TCR = 0U;
        __Vdly__dmac__DOT__RB_PRIO = 0U;
        vlSelfRef.__PVT__dmac__DOT__DMA_REQ = 0U;
        vlSelfRef.__PVT__dmac__DOT__DMA_CH = 0U;
        vlSelfRef.__PVT__CLK2_CE = 0U;
        vlSelfRef.__PVT__CLK4_CE = 0U;
        vlSelfRef.__PVT__CLK8_CE = 0U;
        vlSelfRef.__PVT__CLK16_CE = 0U;
        vlSelfRef.__PVT__CLK32_CE = 0U;
        vlSelfRef.__PVT__CLK64_CE = 0U;
        vlSelfRef.__PVT__CLK128_CE = 0U;
        vlSelfRef.__PVT__CLK256_CE = 0U;
        vlSelfRef.__PVT__CLK512_CE = 0U;
        vlSelfRef.__PVT__CLK1024_CE = 0U;
        vlSelfRef.__PVT__CLK2048_CE = 0U;
        vlSelfRef.__PVT__CLK4096_CE = 0U;
        vlSelfRef.__PVT__CLK8192_CE = 0U;
        __Vdly__unnamedblk1__DOT__DIV_CNT = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__RES_SYNC_N) 
                     << 1U) | (IData)(vlSymsp->TOP.tb_top__DOT__RST_N));
    if ((0U != (0x0010U & Vtb_top__ConstPool__TABLE_h9b2cab03_0
                [__Vtableidx3]))) {
        vlSelfRef.__PVT__sci__DOT__RXI = Vtb_top__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx3];
    }
    if ((0U != (0x0020U & Vtb_top__ConstPool__TABLE_h9b2cab03_0
                [__Vtableidx3]))) {
        vlSelfRef.__PVT__sci__DOT__ERI = Vtb_top__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx3];
    }
    vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC 
        = __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC;
    vlSelfRef.__PVT__mult__DOT__MM_DONE = __Vdly__mult__DOT__MM_DONE;
    if (__VdlySet__cache__DOT__TAG_DIRTY__v0) {
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[0U] 
            = (((~ (1ULL << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v0))) 
                & vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[0U]) 
               | ((QData)((IData)(__VdlyVal__cache__DOT__TAG_DIRTY__v0)) 
                  << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v0)));
    }
    if (__VdlySet__cache__DOT__TAG_DIRTY__v1) {
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[1U] 
            = (((~ (1ULL << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v1))) 
                & vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[1U]) 
               | ((QData)((IData)(__VdlyVal__cache__DOT__TAG_DIRTY__v1)) 
                  << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v1)));
    }
    if (__VdlySet__cache__DOT__TAG_DIRTY__v2) {
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[2U] 
            = (((~ (1ULL << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v2))) 
                & vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[2U]) 
               | ((QData)((IData)(__VdlyVal__cache__DOT__TAG_DIRTY__v2)) 
                  << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v2)));
    }
    if (__VdlySet__cache__DOT__TAG_DIRTY__v3) {
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[3U] 
            = (((~ (1ULL << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v3))) 
                & vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[3U]) 
               | ((QData)((IData)(__VdlyVal__cache__DOT__TAG_DIRTY__v3)) 
                  << (IData)(__VdlyLsb__cache__DOT__TAG_DIRTY__v3)));
    }
    if (__VdlySet__cache__DOT__TAG_DIRTY__v4) {
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[0U] = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[1U] = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[2U] = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[3U] = 0xffffffffffffffffULL;
    }
    if (__VdlySet__cache__DOT__TAG_DIRTY__v8) {
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[0U] = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[1U] = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[2U] = 0xffffffffffffffffULL;
        vlSelfRef.__PVT__cache__DOT__TAG_DIRTY[3U] = 0xffffffffffffffffULL;
    }
    vlSelfRef.__PVT__core__DOT__SAVE_ID = __Vdly__core__DOT__SAVE_ID;
    vlSelfRef.core__DOT__PC = __Vdly__core__DOT__PC;
    vlSelfRef.__PVT__core__DOT__IF_ACTIVE = __Vdly__core__DOT__IF_ACTIVE;
    if (__VdlySet__core__DOT__regfile__DOT__GR__v0) {
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[__VdlyDim0__core__DOT__regfile__DOT__GR__v0] 
            = __VdlyVal__core__DOT__regfile__DOT__GR__v0;
    }
    if (__VdlySet__core__DOT__regfile__DOT__GR__v1) {
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[__VdlyDim0__core__DOT__regfile__DOT__GR__v1] 
            = __VdlyVal__core__DOT__regfile__DOT__GR__v1;
    }
    if (__VdlySet__core__DOT__regfile__DOT__GR__v2) {
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[0U] = 0x01234567U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[1U] = 0x11111111U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[2U] = 0x89abcdefU;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[3U] = 0x11111111U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[4U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[5U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[6U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[7U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[8U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[9U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[10U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[11U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[12U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[13U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[14U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[15U] = 0U;
        vlSelfRef.__PVT__core__DOT__regfile__DOT__GR[16U] = 0U;
    }
    vlSelfRef.__PVT__core__DOT__ILI_EXP = __Vdly__core__DOT__ILI_EXP;
    vlSelfRef.__PVT__core__DOT__RES_EXP = __Vdly__core__DOT__RES_EXP;
    vlSelfRef.__PVT__intc__DOT__VCRA = (((IData)(__Vdly__intc__DOT__VCRA) 
                                         & (IData)(__VdlyMask__intc__DOT__VCRA)) 
                                        | ((IData)(vlSelfRef.__PVT__intc__DOT__VCRA) 
                                           & (~ (IData)(__VdlyMask__intc__DOT__VCRA))));
    __VdlyMask__intc__DOT__VCRA = 0U;
    vlSelfRef.__PVT__intc__DOT__VCRB = (((IData)(__Vdly__intc__DOT__VCRB) 
                                         & (IData)(__VdlyMask__intc__DOT__VCRB)) 
                                        | ((IData)(vlSelfRef.__PVT__intc__DOT__VCRB) 
                                           & (~ (IData)(__VdlyMask__intc__DOT__VCRB))));
    __VdlyMask__intc__DOT__VCRB = 0U;
    vlSelfRef.__PVT__intc__DOT__VCRD = (((IData)(__Vdly__intc__DOT__VCRD) 
                                         & (IData)(__VdlyMask__intc__DOT__VCRD)) 
                                        | ((IData)(vlSelfRef.__PVT__intc__DOT__VCRD) 
                                           & (~ (IData)(__VdlyMask__intc__DOT__VCRD))));
    __VdlyMask__intc__DOT__VCRD = 0U;
    vlSelfRef.__PVT__intc__DOT__VCRWDT = (((IData)(__Vdly__intc__DOT__VCRWDT) 
                                           & (IData)(__VdlyMask__intc__DOT__VCRWDT)) 
                                          | ((IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT) 
                                             & (~ (IData)(__VdlyMask__intc__DOT__VCRWDT))));
    __VdlyMask__intc__DOT__VCRWDT = 0U;
    vlSelfRef.intc__DOT__VCRC = (((IData)(__Vdly__intc__DOT__VCRC) 
                                  & (IData)(__VdlyMask__intc__DOT__VCRC)) 
                                 | ((IData)(vlSelfRef.intc__DOT__VCRC) 
                                    & (~ (IData)(__VdlyMask__intc__DOT__VCRC))));
    __VdlyMask__intc__DOT__VCRC = 0U;
    vlSelfRef.__PVT__intc__DOT__ICR = (((IData)(__Vdly__intc__DOT__ICR) 
                                        & (IData)(__VdlyMask__intc__DOT__ICR)) 
                                       | ((IData)(vlSelfRef.__PVT__intc__DOT__ICR) 
                                          & (~ (IData)(__VdlyMask__intc__DOT__ICR))));
    __VdlyMask__intc__DOT__ICR = 0U;
    vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACW_EXEC 
        = __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC;
    vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACL_EXEC 
        = __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC;
    vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MUL_EXEC 
        = __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC;
    vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DMUL_EXEC 
        = __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC;
    if (__VdlySet__dmac__DOT__DRCR__v0) {
        vlSelfRef.__PVT__dmac__DOT__DRCR[0U] = __VdlyVal__dmac__DOT__DRCR__v0;
    }
    if (__VdlySet__dmac__DOT__DRCR__v1) {
        vlSelfRef.__PVT__dmac__DOT__DRCR[1U] = __VdlyVal__dmac__DOT__DRCR__v1;
    }
    if (__VdlySet__dmac__DOT__DRCR__v2) {
        vlSelfRef.__PVT__dmac__DOT__DRCR[0U] = 0U;
        vlSelfRef.__PVT__dmac__DOT__DRCR[1U] = 0U;
    }
    if (__VdlySet__dmac__DOT__DRCR__v4) {
        vlSelfRef.__PVT__dmac__DOT__DRCR[0U] = 0U;
        vlSelfRef.__PVT__dmac__DOT__DRCR[1U] = 0U;
    }
    vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH = __Vdly__core__DOT__INT_REQ_LATCH;
    vlSelfRef.__PVT__frt__DOT__TEMP = __Vdly__frt__DOT__TEMP;
    vlSelfRef.frt__DOT__OCRA = __Vdly__frt__DOT__OCRA;
    vlSelfRef.frt__DOT__OCRB = __Vdly__frt__DOT__OCRB;
    vlSelfRef.__PVT__bsc__DOT__RTCNT = __Vdly__bsc__DOT__RTCNT;
    vlSelfRef.__PVT__bsc__DOT__BUSY = __Vdly__bsc__DOT__BUSY;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_PRECHARGE_PEND;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_CNT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__NEXT_BA;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP 
        = (((IData)(__Vdly__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP) 
            & (IData)(__VdlyMask__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP)) 
           | ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP) 
              & (~ (IData)(__VdlyMask__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))));
    __VdlyMask__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0U;
    vlSelfRef.__PVT__bsc__DOT__REFRESH_ACTIVE = __Vdly__bsc__DOT__REFRESH_ACTIVE;
    vlSelfRef.__PVT__bsc__DOT__RFS_REQ = __Vdly__bsc__DOT__RFS_REQ;
    vlSelfRef.__PVT__IRD_WR_N = __Vdly__IRD_WR_N;
    vlSelfRef.__PVT__IA = __Vdly__IA;
    vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS = __Vdly__bsc__DOT__MST_BUS_RLS;
    vlSelfRef.RFS = ((9U == (IData)(vlSelfRef.bsc__DOT__BUS_STATE)) 
                     & ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT)) 
                        | (2U == (IData)(vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT))));
    vlSelfRef.__PVT__core__DOT__SLP = __Vdly__core__DOT__SLP;
    vlSelfRef.__PVT__core__DOT__INST_SPLIT = __Vdly__core__DOT__INST_SPLIT;
    vlSelfRef.__PVT__wdt__DOT__OPEN_BUS = __Vdly__wdt__DOT__OPEN_BUS;
    vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__CAPT 
        = __Vdly__frt__DOT__unnamedblk2__DOT__CAPT;
    vlSelfRef.frt__DOT__FRC = __Vdly__frt__DOT__FRC;
    vlSelfRef.frt__DOT__FTCSR = __Vdly__frt__DOT__FTCSR;
    vlSelfRef.__PVT__bsc__DOT__VBUSY = __Vdly__bsc__DOT__VBUSY;
    vlSelfRef.__PVT__core__DOT__VECT_ACTIVE = __Vdly__core__DOT__VECT_ACTIVE;
    vlSelfRef.__PVT__intc__DOT__VBREQ = __Vdly__intc__DOT__VBREQ;
    vlSelfRef.__PVT__dmac__DOT__LW_CNT = __Vdly__dmac__DOT__LW_CNT;
    vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH 
        = __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH;
    vlSelfRef.__PVT__bsc__DOT__DBUSY = __Vdly__bsc__DOT__DBUSY;
    if (__VdlySet__dmac__DOT__RD_BUF__v0) {
        vlSelfRef.__PVT__dmac__DOT__RD_BUF[1U] = __VdlyVal__dmac__DOT__RD_BUF__v0;
    }
    if (__VdlySet__dmac__DOT__RD_BUF__v1) {
        vlSelfRef.__PVT__dmac__DOT__RD_BUF[2U] = __VdlyVal__dmac__DOT__RD_BUF__v1;
        vlSelfRef.__PVT__dmac__DOT__RD_BUF[3U] = __VdlyVal__dmac__DOT__RD_BUF__v2;
    }
    if (__VdlySet__dmac__DOT__RD_BUF__v3) {
        vlSelfRef.__PVT__dmac__DOT__RD_BUF[0U] = __VdlyVal__dmac__DOT__RD_BUF__v3;
    }
    vlSelfRef.__PVT__dmac__DOT__DMA_RD = __Vdly__dmac__DOT__DMA_RD;
    vlSelfRef.__PVT__dmac__DOT__DMA_WR = __Vdly__dmac__DOT__DMA_WR;
    vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE = __Vdly__bsc__DOT__CBUS_ACTIVE;
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v0) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[0U] = 0U;
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[1U] = 0U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v2) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[__VdlyDim0__dmac__DOT__CH_REQ_CLR__v2] 
            = __VdlyVal__dmac__DOT__CH_REQ_CLR__v2;
    }
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v3) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[__VdlyDim0__dmac__DOT__CH_REQ_CLR__v3] = 1U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v4) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[__VdlyDim0__dmac__DOT__CH_REQ_CLR__v4] = 1U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v5) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[__VdlyDim0__dmac__DOT__CH_REQ_CLR__v5] = 1U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v6) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[__VdlyDim0__dmac__DOT__CH_REQ_CLR__v6] = 1U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ_CLR__v7) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v3) {
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v1) {
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[0U] = 0U;
    }
    if (__VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2) {
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[0U] 
            = __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v2;
    }
    if (__VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3) {
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[1U] 
            = __VdlyVal__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v3;
    }
    if (__VdlySet__dmac__DOT__TCR__v0) {
        vlSelfRef.__PVT__dmac__DOT__TCR[__VdlyDim0__dmac__DOT__TCR__v0] 
            = __VdlyVal__dmac__DOT__TCR__v0;
    }
    if (__VdlySet__dmac__DOT__TCR__v1) {
        vlSelfRef.__PVT__dmac__DOT__TCR[__VdlyDim0__dmac__DOT__TCR__v1] 
            = __VdlyVal__dmac__DOT__TCR__v1;
    }
    if (__VdlySet__dmac__DOT__TCR__v2) {
        vlSelfRef.__PVT__dmac__DOT__TCR[1U] = __VdlyVal__dmac__DOT__TCR__v2;
    }
    if (__VdlySet__dmac__DOT__TCR__v3) {
        vlSelfRef.__PVT__dmac__DOT__TCR[0U] = __VdlyVal__dmac__DOT__TCR__v3;
    }
    if (__VdlySet__dmac__DOT__DAR__v4) {
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[0U] = 0U;
    }
    if (__VdlySet__dmac__DOT__SAR__v0) {
        vlSelfRef.__PVT__dmac__DOT__SAR[__VdlyDim0__dmac__DOT__SAR__v0] 
            = __VdlyVal__dmac__DOT__SAR__v0;
    }
    if (__VdlySet__dmac__DOT__SAR__v1) {
        vlSelfRef.__PVT__dmac__DOT__SAR[__VdlyDim0__dmac__DOT__SAR__v1] 
            = __VdlyVal__dmac__DOT__SAR__v1;
    }
    if (__VdlySet__dmac__DOT__SAR__v2) {
        vlSelfRef.__PVT__dmac__DOT__SAR[1U] = __VdlyVal__dmac__DOT__SAR__v2;
    }
    if (__VdlySet__dmac__DOT__SAR__v3) {
        vlSelfRef.__PVT__dmac__DOT__SAR[0U] = __VdlyVal__dmac__DOT__SAR__v3;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v5) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ_CLR[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v4) {
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD[1U] = 0U;
        vlSelfRef.__PVT__dmac__DOT__TCR[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v5) {
        vlSelfRef.__PVT__dmac__DOT__TCR[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v4) {
        vlSelfRef.__PVT__dmac__DOT__SAR[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v5) {
        vlSelfRef.__PVT__dmac__DOT__SAR[1U] = 0U;
    }
    if (__VdlySet__dmac__DOT__DAR__v0) {
        vlSelfRef.__PVT__dmac__DOT__DAR[__VdlyDim0__dmac__DOT__DAR__v0] 
            = __VdlyVal__dmac__DOT__DAR__v0;
    }
    if (__VdlySet__dmac__DOT__DAR__v1) {
        vlSelfRef.__PVT__dmac__DOT__DAR[__VdlyDim0__dmac__DOT__DAR__v1] 
            = __VdlyVal__dmac__DOT__DAR__v1;
    }
    if (__VdlySet__dmac__DOT__DAR__v2) {
        vlSelfRef.__PVT__dmac__DOT__DAR[1U] = __VdlyVal__dmac__DOT__DAR__v2;
    }
    if (__VdlySet__dmac__DOT__DAR__v3) {
        vlSelfRef.__PVT__dmac__DOT__DAR[0U] = __VdlyVal__dmac__DOT__DAR__v3;
    }
    if (__VdlySet__dmac__DOT__DAR__v4) {
        vlSelfRef.__PVT__dmac__DOT__DAR[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v4) {
        vlSelfRef.__PVT__dmac__DOT__DAR[1U] = 0U;
    }
    VL_EXTENDS_WQ(65,33, __Vtemp_11, (((QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__mult__DOT__SIGNED) 
                                                        & (vlSelfRef.__PVT__mult__DOT__MA 
                                                           >> 0x0000001fU)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__mult__DOT__MA))));
    __Vtemp_12[0U] = __Vtemp_11[0U];
    __Vtemp_12[1U] = __Vtemp_11[1U];
    __Vtemp_12[2U] = (1U & __Vtemp_11[2U]);
    VL_EXTENDS_WQ(65,33, __Vtemp_14, (((QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__mult__DOT__SIGNED) 
                                                        & (vlSelfRef.__PVT__mult__DOT__MB 
                                                           >> 0x0000001fU)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.__PVT__mult__DOT__MB))));
    __Vtemp_15[0U] = __Vtemp_14[0U];
    __Vtemp_15[1U] = __Vtemp_14[1U];
    __Vtemp_15[2U] = (1U & __Vtemp_14[2U]);
    VL_MULS_WWW(65, __Vtemp_16, __Vtemp_12, __Vtemp_15);
    vlSelfRef.__PVT__mult__DOT__SRES[0U] = __Vtemp_16[0U];
    vlSelfRef.__PVT__mult__DOT__SRES[1U] = __Vtemp_16[1U];
    vlSelfRef.__PVT__mult__DOT__SRES[2U] = (1U & __Vtemp_16[2U]);
    vlSelfRef.__PVT__VBUS_REQ = ((IData)(vlSelfRef.__PVT__intc__DOT__VBREQ) 
                                 & ((IData)(vlSelfRef.__PVT__intc__DOT__ICR) 
                                    & (3U == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))));
    vlSelfRef.__PVT__DBUS_WE = ((~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_RD)) 
                                & (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_WR));
    vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS = ((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_RD) 
                                              | (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_WR));
    vlSelfRef.__PVT__wdt__DOT__unnamedblk2__DOT__TM_EN 
        = __Vdly__wdt__DOT__unnamedblk2__DOT__TM_EN;
    vlSelfRef.__PVT__wdt__DOT__WTCNT = __Vdly__wdt__DOT__WTCNT;
    vlSelfRef.__PVT__mult__DOT__ACC32 = (0x00000001ffffffffULL 
                                         & ((((QData)((IData)(
                                                              (vlSelfRef.__PVT__mult__DOT__MACL 
                                                               >> 0x0000001fU))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__mult__DOT__MACL))) 
                                            + (((QData)((IData)(vlSelfRef.__PVT__mult__DOT__SRES[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__mult__DOT__SRES[0U])))));
    vlSelfRef.__PVT__mult__DOT__ACC64 = ((((QData)((IData)(vlSelfRef.__PVT__mult__DOT__MACH)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.__PVT__mult__DOT__MACL))) 
                                         + (((QData)((IData)(vlSelfRef.__PVT__mult__DOT__SRES[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.__PVT__mult__DOT__SRES[0U]))));
    vlSelfRef.__PVT__dmac__DOT__DMA_REQ_CLR = __Vdly__dmac__DOT__DMA_REQ_CLR;
    vlSelfRef.__PVT__dmac__DOT__RB_PRIO = __Vdly__dmac__DOT__RB_PRIO;
    if (__VdlySet__dmac__DOT__CH_REQ__v0) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ[0U] = __VdlyVal__dmac__DOT__CH_REQ__v0;
    }
    if (__VdlySet__dmac__DOT__CH_REQ__v1) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ[0U] = 0U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ__v2) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ[1U] = __VdlyVal__dmac__DOT__CH_REQ__v2;
    }
    if (__VdlySet__dmac__DOT__CH_REQ__v3) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ[1U] = 0U;
    }
    if (__VdlySet__dmac__DOT__CH_REQ__v4) {
        vlSelfRef.__PVT__dmac__DOT__CH_REQ[0U] = 0U;
        vlSelfRef.__PVT__dmac__DOT__CH_REQ[1U] = 0U;
    }
    vlSelfRef.__PVT__dmac__DOT__DMAOR = __Vdly__dmac__DOT__DMAOR;
    __Vtableidx1 = (4U | ((((((IData)(vlSelfRef.__PVT__WDT_OVF) 
                              << 3U) | ((IData)(vlSelfRef.__PVT__MSBY_SBY) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.__PVT__wdt__DOT__unnamedblk1__DOT__NMI_OLD) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__INTC_NMI_REQ))) 
                           << 4U) | (((IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) 
                                      << 3U) | (((IData)(vlSelfRef.__PVT__RES_SYNC_N) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP.tb_top__DOT__RST_N)))));
    if ((0U != (1U & Vtb_top__ConstPool__TABLE_h31cf1c10_0
                [__Vtableidx1]))) {
        vlSelfRef.__PVT__wdt__DOT__unnamedblk1__DOT__NMI_OLD 
            = Vtb_top__ConstPool__TABLE_h0a5b22a4_0
            [__Vtableidx1];
    }
    if ((0U != (2U & Vtb_top__ConstPool__TABLE_h31cf1c10_0
                [__Vtableidx1]))) {
        vlSelfRef.__PVT__wdt__DOT__SBY_TME = Vtb_top__ConstPool__TABLE_h1628b77a_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__DBUS_A = ((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_RD)
                                ? (0x07ffffffU & vlSelfRef.__PVT__dmac__DOT__SAR
                                   [vlSelfRef.__PVT__dmac__DOT__DMA_CH])
                                : (0x07ffffffU & ((- (IData)((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_WR))) 
                                                  & vlSelfRef.__PVT__dmac__DOT__DAR
                                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH])));
    vlSelfRef.__PVT__WDT_OVF = __Vdly__WDT_OVF;
    vlSelfRef.__PVT__MSBY_SBY = __Vdly__MSBY_SBY;
    vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT = __Vdly__unnamedblk1__DOT__DIV_CNT;
}

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__2(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bsc__DOT__BGR = vlSelfRef.__Vdly__bsc__DOT__BGR;
}

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__3(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __PVT__intc__DOT__unnamedblk3__DOT__INT;
    __PVT__intc__DOT__unnamedblk3__DOT__INT = 0;
    // Body
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[0U] = 0U;
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[1U] = 0U;
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[2U] = 0U;
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[3U] = 0U;
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[4U] = 0U;
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U] = 0U;
    vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] = 0U;
    __PVT__intc__DOT__unnamedblk3__DOT__INT = 0U;
    if (vlSelfRef.__PVT__INTC_NMI_REQ) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[0U] = 0x10U;
        __PVT__intc__DOT__unnamedblk3__DOT__INT = 1U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[1U] = 0x10U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[2U] = 0x10U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[3U] = 0x10U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[4U] = 0x10U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U] = 0x10U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] = 0x10U;
    }
    if ((((0U != (IData)(vlSelfRef.__PVT__intc__DOT__IRL_LVL)) 
          & ((IData)(vlSelfRef.__PVT__intc__DOT__IRL_LVL) 
             > (0x0000000fU & (vlSelfRef.core__DOT__SR 
                               >> 4U)))) & ((IData)(vlSelfRef.__PVT__intc__DOT__IRL_LVL) 
                                            > vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[1U]))) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[2U] 
            = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
        __PVT__intc__DOT__unnamedblk3__DOT__INT = 3U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[3U] 
            = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[4U] 
            = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U] 
            = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] 
            = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
    }
    if ((((3U == (3U & vlSelfRef.__PVT__divu__DOT__DVCR)) 
          & ((0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                             >> 0x0000000cU)) > (0x0000000fU 
                                                 & (vlSelfRef.core__DOT__SR 
                                                    >> 4U)))) 
         & ((0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                            >> 0x0000000cU)) > vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[2U]))) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[3U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 0x0000000cU));
        __PVT__intc__DOT__unnamedblk3__DOT__INT = 4U;
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[4U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 0x0000000cU));
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 0x0000000cU));
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 0x0000000cU));
    }
    if (((((3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                         >> 1U))) | (3U == (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                                                  >> 1U)))) 
          & ((0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                             >> 8U)) > (0x0000000fU 
                                        & (vlSelfRef.core__DOT__SR 
                                           >> 4U)))) 
         & ((0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                            >> 8U)) > vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[3U]))) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[4U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 8U));
        __PVT__intc__DOT__unnamedblk3__DOT__INT = (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                                                        >> 1U)))
                                                    ? 5U
                                                    : 6U);
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 8U));
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 8U));
    }
    if (((((IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR) 
           >> 7U) & ((0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                     >> 4U)) > (0x0000000fU 
                                                & (vlSelfRef.core__DOT__SR 
                                                   >> 4U)))) 
         & ((0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                            >> 4U)) > vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[4U]))) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 4U));
        __PVT__intc__DOT__unnamedblk3__DOT__INT = (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                                    ? 7U
                                                    : 8U);
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                              >> 4U));
    }
    if (((((((IData)(vlSelfRef.__PVT__ERI_IRQ) | (IData)(vlSelfRef.__PVT__RXI_IRQ)) 
            | (IData)(vlSelfRef.__PVT__TXI_IRQ)) | 
           ((IData)(vlSelfRef.__PVT__sci__DOT__TEI) 
            & ((IData)(vlSelfRef.__PVT__sci__DOT__SCR) 
               >> 2U))) & ((0x0000000fU & ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                           >> 0x0000000cU)) 
                           > (0x0000000fU & (vlSelfRef.core__DOT__SR 
                                             >> 4U)))) 
         & ((0x0000000fU & ((IData)(vlSelfRef.intc__DOT__IPRB) 
                            >> 0x0000000cU)) > vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[5U]))) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U] 
            = (0x0000000fU & ((IData)(vlSelfRef.intc__DOT__IPRB) 
                              >> 0x0000000cU));
        __PVT__intc__DOT__unnamedblk3__DOT__INT = ((IData)(vlSelfRef.__PVT__ERI_IRQ)
                                                    ? 9U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__RXI_IRQ)
                                                     ? 0x0aU
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__TXI_IRQ)
                                                      ? 0x0bU
                                                      : 0x0cU)));
    }
    if ((((IData)((0U != (0x8eU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20)))) 
          & ((0x0000000fU & ((IData)(vlSelfRef.intc__DOT__IPRB) 
                             >> 8U)) > (0x0000000fU 
                                        & (vlSelfRef.core__DOT__SR 
                                           >> 4U)))) 
         & ((0x0000000fU & ((IData)(vlSelfRef.intc__DOT__IPRB) 
                            >> 8U)) > vlSelfRef.__PVT__intc__DOT__unnamedblk3__DOT__IP[6U]))) {
        __PVT__intc__DOT__unnamedblk3__DOT__INT = (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20))
                                                    ? 0x0dU
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                                         >> 2U)))
                                                     ? 0x0eU
                                                     : 0x0fU));
    }
    vlSelfRef.__PVT__intc__DOT__INT_ACTIVE = __PVT__intc__DOT__unnamedblk3__DOT__INT;
}

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__0(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__ref0__DOT__MSH__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__frt__DOT__FRC_CE = (1U & ((2U 
                                                & (IData)(vlSelfRef.frt__DOT__TCR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.frt__DOT__TCR))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.__PVT__frt__DOT__FTCI_OLD))
                                                    : (IData)(vlSelfRef.__PVT__CLK128_CE))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.frt__DOT__TCR))
                                                    ? (IData)(vlSelfRef.__PVT__CLK32_CE)
                                                    : (IData)(vlSelfRef.__PVT__CLK8_CE))));
    vlSelfRef.__Vcellinp__core__INT_REQ = ((~ (IData)(vlSelfRef.__PVT__MSBY_SBY)) 
                                           & (0U != (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE)));
}

extern const VlWide<64>/*2047:0*/ Vtb_top__ConstPool__CONST_he49c974f_0;
extern const VlUnpacked<CData/*7:0*/, 4> Vtb_top__ConstPool__TABLE_hd96158b0_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_top__ConstPool__TABLE_ha586ad81_0;

void Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__4(Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__ref0__DOT__MSH__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__TXD;
    __PVT__TXD = 0;
    CData/*3:0*/ cache__DOT____VlemCall_4__AddrToWay;
    CData/*3:0*/ cache__DOT____VlemCall_3__AddrToWay;
    CData/*3:0*/ __PVT__cache__DOT__AddrToWay__Vstatic__res;
    __PVT__cache__DOT__AddrToWay__Vstatic__res = 0;
    CData/*1:0*/ __PVT__cache__DOT__CRAM_WRWAY;
    __PVT__cache__DOT__CRAM_WRWAY = 0;
    CData/*0:0*/ __PVT__core__DOT__BUS_STALL;
    __PVT__core__DOT__BUS_STALL = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk3__DOT__SCR_VAL;
    __PVT__core__DOT__unnamedblk3__DOT__SCR_VAL = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk3__DOT__BP_A;
    __PVT__core__DOT__unnamedblk3__DOT__BP_A = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk3__DOT__BP_B;
    __PVT__core__DOT__unnamedblk3__DOT__BP_B = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk6__DOT__temp;
    __PVT__core__DOT__unnamedblk6__DOT__temp = 0;
    CData/*1:0*/ __Vfunc_cache__DOT__AddrToWay__2__a;
    __Vfunc_cache__DOT__AddrToWay__2__a = 0;
    CData/*1:0*/ __Vfunc_cache__DOT__AddrToWay__3__a;
    __Vfunc_cache__DOT__AddrToWay__3__a = 0;
    CData/*3:0*/ __Vfunc_cache__DOT__WayFromLRU__5__Vfuncout;
    __Vfunc_cache__DOT__WayFromLRU__5__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_cache__DOT__WayFromLRU__5__lru;
    __Vfunc_cache__DOT__WayFromLRU__5__lru = 0;
    CData/*0:0*/ __Vfunc_cache__DOT__WayFromLRU__5__two_way;
    __Vfunc_cache__DOT__WayFromLRU__5__two_way = 0;
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_79;
    __VdfgRegularize_hebeb780c_0_79 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_80;
    __VdfgRegularize_hebeb780c_0_80 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hebeb780c_0_86;
    VL_ZERO_W(65, __VdfgRegularize_hebeb780c_0_86);
    VlWide<3>/*64:0*/ __VdfgRegularize_hebeb780c_0_87;
    VL_ZERO_W(65, __VdfgRegularize_hebeb780c_0_87);
    CData/*3:0*/ __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0;
    __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0 = 0;
    CData/*3:0*/ __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v1;
    __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v1 = 0;
    CData/*3:0*/ __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v2;
    __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v2 = 0;
    CData/*3:0*/ __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v3;
    __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_20 = ((IData)(vlSelfRef.frt__DOT__TIER) 
                                                 & (IData)(vlSelfRef.frt__DOT__FTCSR));
    vlSelfRef.__PVT__intc__DOT__IPRA = (((IData)(vlSelfRef.__Vdly__intc__DOT__IPRA) 
                                         & (IData)(vlSelfRef.__VdlyMask__intc__DOT__IPRA)) 
                                        | ((IData)(vlSelfRef.__PVT__intc__DOT__IPRA) 
                                           & (~ (IData)(vlSelfRef.__VdlyMask__intc__DOT__IPRA))));
    vlSelfRef.__VdlyMask__intc__DOT__IPRA = 0U;
    vlSelfRef.intc__DOT__IPRB = (((IData)(vlSelfRef.__Vdly__intc__DOT__IPRB) 
                                  & (IData)(vlSelfRef.__VdlyMask__intc__DOT__IPRB)) 
                                 | ((IData)(vlSelfRef.intc__DOT__IPRB) 
                                    & (~ (IData)(vlSelfRef.__VdlyMask__intc__DOT__IPRB))));
    vlSelfRef.__VdlyMask__intc__DOT__IPRB = 0U;
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v0) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[vlSelfRef.__VdlyDim0__dmac__DOT__CHCR__v0] 
            = (2U | vlSelfRef.__PVT__dmac__DOT__CHCR
               [vlSelfRef.__VdlyDim0__dmac__DOT__CHCR__v0]);
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v1) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[vlSelfRef.__VdlyDim0__dmac__DOT__CHCR__v1] 
            = (2U | vlSelfRef.__PVT__dmac__DOT__CHCR
               [vlSelfRef.__VdlyDim0__dmac__DOT__CHCR__v1]);
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v2) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[1U] = ((3U 
                                                 & vlSelfRef.__PVT__dmac__DOT__CHCR[1U]) 
                                                | (vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v2 
                                                   << 2U));
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v3) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[1U] = (0xfffffffdU 
                                                & vlSelfRef.__PVT__dmac__DOT__CHCR[1U]);
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v4) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[1U] = ((0xfffffffeU 
                                                 & vlSelfRef.__PVT__dmac__DOT__CHCR[1U]) 
                                                | (IData)(vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v4));
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v5) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[0U] = ((3U 
                                                 & vlSelfRef.__PVT__dmac__DOT__CHCR[0U]) 
                                                | (vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v5 
                                                   << 2U));
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__unnamedblk2__DOT__CHCR_TE_OLD__v1) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[0U] = (0xfffffffdU 
                                                & vlSelfRef.__PVT__dmac__DOT__CHCR[0U]);
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__CHCR__v7) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[0U] = ((0xfffffffeU 
                                                 & vlSelfRef.__PVT__dmac__DOT__CHCR[0U]) 
                                                | (IData)(vlSelfRef.__VdlyVal__dmac__DOT__CHCR__v7));
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v4) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dmac__DOT__SAR__v5) {
        vlSelfRef.__PVT__dmac__DOT__CHCR[1U] = 0U;
    }
    vlSelfRef.__PVT__wdt__DOT__WTCSR = vlSelfRef.__Vdly__wdt__DOT__WTCSR;
    vlSelfRef.__PVT__INTC_NMI_REQ = vlSelfRef.__Vdly__INTC_NMI_REQ;
    vlSelfRef.__PVT__dmac__DOT__CH_EN[0U] = (1U & (vlSelfRef.__PVT__dmac__DOT__DMAOR 
                                                   & vlSelfRef.__PVT__dmac__DOT__CHCR[0U]));
    vlSelfRef.__PVT__dmac__DOT__CH_EN[1U] = (1U & (vlSelfRef.__PVT__dmac__DOT__DMAOR 
                                                   & vlSelfRef.__PVT__dmac__DOT__CHCR[1U]));
    vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[0U] = (IData)(
                                                       ((0U 
                                                         == 
                                                         (6U 
                                                          & vlSelfRef.__PVT__dmac__DOT__DMAOR)) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__dmac__DOT__CHCR[0U] 
                                                            >> 1U))));
    vlSelfRef.__PVT__dmac__DOT__CH_AVAIL[1U] = (IData)(
                                                       ((0U 
                                                         == 
                                                         (6U 
                                                          & vlSelfRef.__PVT__dmac__DOT__DMAOR)) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__dmac__DOT__CHCR[1U] 
                                                            >> 1U))));
    if (vlSelfRef.__PVT__dmac__DOT__DMA_RD) {
        vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__sz 
            = (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                     [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                     >> 0x0000000aU));
        vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr 
            = (3U & vlSelfRef.__PVT__dmac__DOT__SAR
               [vlSelfRef.__PVT__dmac__DOT__DMA_CH]);
        vlSelfRef.__PVT__dmac__DOT__BAFromAddr__Vstatic__res 
            = ((2U & (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__sz))
                ? 0x0fU : ((1U & (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__sz))
                            ? ((((2U & ((~ ((IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr) 
                                            >> 1U)) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr) 
                                                       >> 1U)))) 
                                << 2U) | ((2U & (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr)) 
                                          | (1U & ((IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr) 
                                                   >> 1U))))
                            : ((((IData)((0U == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr))) 
                                 << 3U) | ((IData)(
                                                   (1U 
                                                    == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr))) 
                                           << 2U)) 
                               | (((IData)((2U == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr))) 
                                   << 1U) | (IData)(
                                                    (3U 
                                                     == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__26__addr)))))));
        vlSelfRef.dmac__DOT____VlemCall_0__BAFromAddr 
            = vlSelfRef.__PVT__dmac__DOT__BAFromAddr__Vstatic__res;
        vlSelfRef.dmac__DOT____VlemCond_2 = vlSelfRef.dmac__DOT____VlemCall_0__BAFromAddr;
    } else {
        if (vlSelfRef.__PVT__dmac__DOT__DMA_WR) {
            vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__sz 
                = (3U & (vlSelfRef.__PVT__dmac__DOT__CHCR
                         [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                         >> 0x0000000aU));
            vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr 
                = (3U & vlSelfRef.__PVT__dmac__DOT__DAR
                   [vlSelfRef.__PVT__dmac__DOT__DMA_CH]);
            vlSelfRef.__PVT__dmac__DOT__BAFromAddr__Vstatic__res 
                = ((2U & (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__sz))
                    ? 0x0fU : ((1U & (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__sz))
                                ? ((((2U & ((~ ((IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr) 
                                                >> 1U)) 
                                            << 1U)) 
                                     | (1U & (~ ((IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr) 
                                                 >> 1U)))) 
                                    << 2U) | ((2U & (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr) 
                                                    >> 1U))))
                                : ((((IData)((0U == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr))) 
                                     << 3U) | ((IData)(
                                                       (1U 
                                                        == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr))) 
                                               << 2U)) 
                                   | (((IData)((2U 
                                                == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr))) 
                                       << 1U) | (IData)(
                                                        (3U 
                                                         == (IData)(vlSelfRef.__Vfunc_dmac__DOT__BAFromAddr__27__addr)))))));
            vlSelfRef.dmac__DOT____VlemCall_1__BAFromAddr 
                = vlSelfRef.__PVT__dmac__DOT__BAFromAddr__Vstatic__res;
        } else {
            vlSelfRef.dmac__DOT____VlemCall_1__BAFromAddr = 0U;
        }
        vlSelfRef.dmac__DOT____VlemCond_2 = vlSelfRef.dmac__DOT____VlemCall_1__BAFromAddr;
    }
    vlSelfRef.__PVT__DBUS_BA = vlSelfRef.dmac__DOT____VlemCond_2;
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__RES_SYNC_N) 
                     << 1U) | (IData)(vlSymsp->TOP.tb_top__DOT__RST_N));
    if (vlSymsp->TOP.tb_top__DOT__RST_N) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)))) {
            vlSelfRef.__PVT__sci__DOT__SCR = 0U;
        }
        if (vlSelfRef.__PVT__RES_SYNC_N) {
            if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
                __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0 
                    = (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N)));
                vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0 = 1U;
                __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v1 
                    = vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[0U];
                __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v2 
                    = vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[1U];
                __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v3 
                    = vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[2U];
                if (((((vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[0U] 
                        == (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N)))) 
                       & (vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[1U] 
                          == (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N))))) 
                      & (vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[2U] 
                         == (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N))))) 
                     & (vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[3U] 
                        == (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N)))))) {
                    vlSelfRef.__PVT__intc__DOT__IRL_LVL 
                        = (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N)));
                    vlSelfRef.__Vdly__intc__DOT__unnamedblk2__DOT__IRL_NORM 
                        = (0x0000000fU & (~ (IData)(vlSelfRef.IRL_N)));
                } else {
                    vlSelfRef.__PVT__intc__DOT__IRL_LVL 
                        = vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_NORM;
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL)))) {
                    if ((0x10000000U & vlSelfRef.__PVT__core__DOT__PIPE
                         .__PVT__EX.__PVT__DI[0U])) {
                        if ((0U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                          .__PVT__EX
                                          .__PVT__DI[0U] 
                                          >> 0x0000001aU)))) {
                            vlSelfRef.core__DOT__SR 
                                = (0x000003f3U & vlSelfRef.__PVT__core__DOT__SR_NEW);
                        }
                    }
                }
            }
        } else {
            vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v4 = 1U;
            vlSelfRef.__Vdly__intc__DOT__unnamedblk2__DOT__IRL_NORM = 0U;
            vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v6 = 1U;
            vlSelfRef.core__DOT__SR = 0x000000f0U;
        }
        if (vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV) {
            if (vlSelfRef.__PVT__RES_SYNC_N) {
                if (((((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                       & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                     & (0x3fU == (IData)(vlSelfRef.__PVT__divu__DOT__STEP)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 4U)))) {
                        if ((8U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                          >> 2U)))) {
                                if ((0U != (3U & ((IData)(vlSelfRef.__PVT__cache__DOT__IBBA) 
                                                  >> 2U)))) {
                                    vlSelfRef.__PVT__divu__DOT__DVCR 
                                        = (0x0000ffffU 
                                           & vlSelfRef.__PVT__divu__DOT__DVCR);
                                }
                                if ((0U != (3U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA)))) {
                                    vlSelfRef.__PVT__divu__DOT__DVCR 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__PVT__divu__DOT__DVCR) 
                                           | (3U & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                }
                            }
                        }
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                          >> 2U)))) {
                                vlSelfRef.__PVT__divu__DOT__DVSR 
                                    = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__divu__DOT__DVCR = 0U;
                vlSelfRef.__PVT__divu__DOT__DVSR = 0U;
            }
            if ((0x3fU != (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__STEP = 
                    (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__divu__DOT__STEP)));
            }
            if ((0x26U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                if (vlSelfRef.__PVT__divu__DOT__OVF) {
                    vlSelfRef.__PVT__divu__DOT__DVCR 
                        = (1U | vlSelfRef.__PVT__divu__DOT__DVCR);
                }
            }
            if (((0x3fU == (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                 & (((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                     & ((4U == (0x0000001fU & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))) 
                    | (IData)(vlSelfRef.__PVT__divu__DOT__DIV64_START)))) {
                vlSelfRef.__Vdly__divu__DOT__STEP = 0U;
                vlSelfRef.__Vdly__divu__DOT__DIV64 
                    = vlSelfRef.__PVT__divu__DOT__DIV64_START;
                vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF0 = 0U;
                vlSelfRef.__PVT__divu__DOT__OVF = 0U;
            }
            __Vtemp_3[0U] = (vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U] 
                             ^ (- (IData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG))));
            __Vtemp_3[1U] = (vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U] 
                             ^ (- (IData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG))));
            __Vtemp_3[2U] = (vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[2U] 
                             ^ (- (IData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG))));
            __Vtemp_4[0U] = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG;
            __Vtemp_4[1U] = 0U;
            __Vtemp_4[2U] = 0U;
            VL_ADD_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
            vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[0U] 
                = __Vtemp_5[0U];
            vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[1U] 
                = __Vtemp_5[1U];
            vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[2U] 
                = (1U & __Vtemp_5[2U]);
            if ((0U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__Q = 0U;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__R[0U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[0U];
                vlSelfRef.__Vdly__divu__DOT__R[1U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[1U];
                vlSelfRef.__Vdly__divu__DOT__R[2U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[2U];
                vlSelfRef.__Vdly__divu__DOT__R_SIGN 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG;
                vlSelfRef.__PVT__divu__DOT__R64 = (
                                                   ((QData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U])));
            }
            if ((2U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__D[0U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[0U];
                vlSelfRef.__Vdly__divu__DOT__D[1U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[1U];
                vlSelfRef.__Vdly__divu__DOT__D[2U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[2U];
                vlSelfRef.__Vdly__divu__DOT__D_SIGN 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG;
                vlSelfRef.__PVT__divu__DOT__D64 = (
                                                   ((QData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U])));
                vlSelfRef.__Vdly__divu__DOT__T64 = 
                    (1U & (~ ((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                              ^ (IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG))));
                if ((0U == vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U])) {
                    vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF0 = 1U;
                }
            }
            if (((3U <= (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                 & (0x23U >= (IData)(vlSelfRef.__PVT__divu__DOT__STEP)))) {
                vlSelfRef.__Vdly__divu__DOT__Q = ((vlSelfRef.__PVT__divu__DOT__Q 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ vlSelfRef.__PVT__divu__DOT__SUM[2U])));
                vlSelfRef.__Vdly__divu__DOT__D[0U] 
                    = (IData)((((QData)((IData)(vlSelfRef.__PVT__divu__DOT__D[2U])) 
                                << 0x0000003fU) | (
                                                   ((QData)((IData)(vlSelfRef.__PVT__divu__DOT__D[1U])) 
                                                    << 0x0000001fU) 
                                                   | ((QData)((IData)(vlSelfRef.__PVT__divu__DOT__D[0U])) 
                                                      >> 1U))));
                vlSelfRef.__Vdly__divu__DOT__D[1U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.__PVT__divu__DOT__D[2U])) 
                                 << 0x0000003fU) | 
                                (((QData)((IData)(vlSelfRef.__PVT__divu__DOT__D[1U])) 
                                  << 0x0000001fU) | 
                                 ((QData)((IData)(vlSelfRef.__PVT__divu__DOT__D[0U])) 
                                  >> 1U))) >> 0x00000020U));
                vlSelfRef.__Vdly__divu__DOT__D[2U] 
                    = (1U & vlSelfRef.__PVT__divu__DOT__D[2U]);
                if ((1U & vlSelfRef.__PVT__divu__DOT__SUM[2U])) {
                    vlSelfRef.__Vdly__divu__DOT__R[0U] 
                        = vlSelfRef.__PVT__divu__DOT__R[0U];
                    vlSelfRef.__Vdly__divu__DOT__R[1U] 
                        = vlSelfRef.__PVT__divu__DOT__R[1U];
                    vlSelfRef.__Vdly__divu__DOT__R[2U] 
                        = vlSelfRef.__PVT__divu__DOT__R[2U];
                } else {
                    vlSelfRef.__Vdly__divu__DOT__R[0U] 
                        = vlSelfRef.__PVT__divu__DOT__SUM[0U];
                    vlSelfRef.__Vdly__divu__DOT__R[1U] 
                        = vlSelfRef.__PVT__divu__DOT__SUM[1U];
                    vlSelfRef.__Vdly__divu__DOT__R[2U] 
                        = vlSelfRef.__PVT__divu__DOT__SUM[2U];
                }
                if (((3U <= (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                     & (5U >= (IData)(vlSelfRef.__PVT__divu__DOT__STEP)))) {
                    vlSelfRef.__PVT__divu__DOT__R64 
                        = ((0xfffffffffffffffeULL & 
                            (((QData)((IData)(vlSelfRef.__PVT__divu__DOT__SUM64[1U])) 
                              << 0x00000021U) | ((QData)((IData)(vlSelfRef.__PVT__divu__DOT__SUM64[0U])) 
                                                 << 1U))) 
                           | (QData)((IData)((1U & 
                                              (~ ((vlSelfRef.__PVT__divu__DOT__SUM64[1U] 
                                                   >> 0x0000001fU) 
                                                  ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN)))))));
                    vlSelfRef.__Vdly__divu__DOT__T64 
                        = (1U & (~ ((vlSelfRef.__PVT__divu__DOT__SUM64[1U] 
                                     >> 0x0000001fU) 
                                    ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN))));
                }
                if ((4U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                    vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF64_33 
                        = vlSelfRef.__PVT__divu__DOT__T64;
                }
                if (((5U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                     & ((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF0) 
                        | ((((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF64_33) 
                             != (IData)(vlSelfRef.__PVT__divu__DOT__T64)) 
                            | (((IData)(vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF64_33) 
                                != ((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                                    ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN))) 
                               & ((IData)(vlSelfRef.__PVT__divu__DOT__T64) 
                                  != ((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                                      ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN))))) 
                           & (IData)(vlSelfRef.__PVT__divu__DOT__DIV64))))) {
                    vlSelfRef.__PVT__divu__DOT__OVF = 1U;
                    vlSelfRef.__Vdly__divu__DOT__R[0U] 
                        = vlSelfRef.__PVT__divu__DOT__SUM[0U];
                    vlSelfRef.__Vdly__divu__DOT__R[1U] 
                        = vlSelfRef.__PVT__divu__DOT__SUM[1U];
                    vlSelfRef.__Vdly__divu__DOT__R[2U] 
                        = vlSelfRef.__PVT__divu__DOT__SUM[2U];
                    vlSelfRef.__Vdly__divu__DOT__STEP = 0x26U;
                }
            }
            if ((0x26U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__STEP = 0x3fU;
            }
            if ((0x24U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__R[0U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[0U];
                vlSelfRef.__Vdly__divu__DOT__R[1U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[1U];
                vlSelfRef.__Vdly__divu__DOT__R[2U] 
                    = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[2U];
            }
            if ((0x25U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__divu__DOT__Q = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NRES[0U];
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)))) {
                vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND = 0U;
            }
            vlSelfRef.__PVT__RES_SYNC_N = vlSymsp->TOP.tb_top__DOT__ref0__DOT__MSHRES_N;
        } else {
            if ((1U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U] 
                    = (IData)((((QData)((IData)(vlSelfRef.__PVT__divu__DOT__DVDNTH)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__divu__DOT__DVDNTL))));
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.__PVT__divu__DOT__DVDNTH)) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__divu__DOT__DVDNTL))) 
                               >> 0x00000020U));
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[2U] 
                    = (vlSelfRef.__PVT__divu__DOT__DVDNTH 
                       >> 0x1fU);
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG 
                    = (vlSelfRef.__PVT__divu__DOT__DVDNTH 
                       >> 0x1fU);
            }
            if ((2U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U] 
                    = (IData)(((QData)((IData)(vlSelfRef.__PVT__divu__DOT__DVSR)) 
                               << 0x00000020U));
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U] 
                    = (IData)((((QData)((IData)(vlSelfRef.__PVT__divu__DOT__DVSR)) 
                                << 0x00000020U) >> 0x00000020U));
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[2U] 
                    = (vlSelfRef.__PVT__divu__DOT__DVSR 
                       >> 0x1fU);
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG 
                    = (vlSelfRef.__PVT__divu__DOT__DVSR 
                       >> 0x1fU);
            }
            if ((0x24U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U] 
                    = vlSelfRef.__PVT__divu__DOT__R[0U];
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U] 
                    = vlSelfRef.__PVT__divu__DOT__R[1U];
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[2U] 
                    = vlSelfRef.__PVT__divu__DOT__R[2U];
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG 
                    = vlSelfRef.__PVT__divu__DOT__R_SIGN;
            }
            if ((0x25U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[0U] 
                    = vlSelfRef.__PVT__divu__DOT__Q;
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[1U] 
                    = (IData)((0x00000001ffffffffULL 
                               & (- (QData)((IData)(
                                                    (vlSelfRef.__PVT__divu__DOT__Q 
                                                     >> 0x1fU))))));
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__VAL[2U] 
                    = (IData)(((0x00000001ffffffffULL 
                                & (- (QData)((IData)(
                                                     (vlSelfRef.__PVT__divu__DOT__Q 
                                                      >> 0x1fU))))) 
                               >> 0x00000020U));
                vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__NEG 
                    = ((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                       ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN));
            }
            if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__MCLK_DIV)))) {
                vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE = 0U;
                vlSelfRef.__PVT__cache__DOT__CACHE_WRITE = 0U;
                vlSelfRef.__PVT__cache__DOT__CACHE_READ = 0U;
                vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE = 0U;
                vlSelfRef.__PVT__cache__DOT__CACHE_DATA_WRITE = 0U;
                vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE = 0U;
                vlSelfRef.__PVT__cache__DOT__IBDATA_RDY = 0U;
                if ((1U & (~ ((1U & (~ (IData)(vlSelfRef.__PVT__intc__DOT__REG_SEL))) 
                              && ((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL)
                                   ? (IData)(vlSelfRef.__PVT__divu__DOT__BUSY)
                                   : ((~ (IData)(vlSelfRef.__PVT__DMAC_ACT)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__UBC__DOT__REG_SEL)) 
                                         & ((~ (IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL)) 
                                            & ((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL)
                                                ? (0U 
                                                   != (IData)(vlSelfRef.__PVT__wdt__DOT__BUSY))
                                                : (
                                                   (~ (IData)(vlSelfRef.__PVT__sci__DOT__REG_SEL)) 
                                                   & ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUSY) 
                                                      | ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUSY2) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18) 
                                                             & (IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ)) 
                                                            | ((~ 
                                                                ((IData)(vlSelfRef.__PVT__cache__DOT__IBREQ) 
                                                                 & (0xffffU 
                                                                    == 
                                                                    (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                                     >> 0x00000010U)))) 
                                                               & ((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE) 
                                                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76)))))))))))))))) {
                    if (vlSelfRef.__PVT__cache__DOT__IBUS_WRITE) {
                        vlSelfRef.__Vdly__cache__DOT__IBREQ = 0U;
                        vlSelfRef.__PVT__cache__DOT__IBUS_WRITE = 0U;
                    } else if (vlSelfRef.__PVT__cache__DOT__IBUS_READ) {
                        vlSelfRef.__Vdly__cache__DOT__IBREQ = 0U;
                        vlSelfRef.__PVT__cache__DOT__IBDATA_RDY = 1U;
                        vlSelfRef.__Vdly__cache__DOT__IBUS_READ = 0U;
                    } else if (vlSelfRef.__PVT__cache__DOT__IBUS_READARRAY) {
                        vlSelfRef.__Vdly__cache__DOT__IBADDR 
                            = ((0xfffffff0U & vlSelfRef.__PVT__cache__DOT__IBADDR) 
                               | (0x0000000cU & (((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                   >> 2U)) 
                                                 << 2U)));
                        if (((3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                    >> 2U)) == (IData)(vlSelfRef.__PVT__cache__DOT__unnamedblk3__DOT__ARRAY_POS))) {
                            vlSelfRef.__Vdly__cache__DOT__IBREQ = 0U;
                            vlSelfRef.__PVT__cache__DOT__IBDATA_RDY = 1U;
                            vlSelfRef.__Vdly__cache__DOT__IBUS_READARRAY = 0U;
                        }
                        vlSelfRef.__PVT__cache__DOT__CACHE_WR_BA = 0x0fU;
                        vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE 
                            = (1U & ((((vlSelfRef.__PVT__core__DOT__PIPE
                                        .__PVT__MA.__PVT__DI[1U] 
                                        >> 0x0000000dU) 
                                       & (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                      & (~ (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL)))
                                      ? (~ ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                            >> 2U))
                                      : (~ ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                            >> 1U))));
                        if (((3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                    >> 2U)) == (3U 
                                                & ((IData)(vlSelfRef.__PVT__cache__DOT__unnamedblk3__DOT__ARRAY_POS) 
                                                   - (IData)(1U))))) {
                            vlSelfRef.__PVT__cache__DOT__IBLOCK = 0U;
                        }
                        vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                              >> 2U));
                    }
                }
                if (vlSelfRef.__PVT__CBUS_REQ) {
                    if (vlSelfRef.__PVT__CBUS_WR) {
                        if ((((0U == (vlSelfRef.__PVT__CBUS_A 
                                      >> 0x0000001dU)) 
                              | (1U == (vlSelfRef.__PVT__CBUS_A 
                                        >> 0x0000001dU))) 
                             | (IData)(vlSelfRef.__PVT__cache__DOT__IO_AREA))) {
                            if (vlSelfRef.__PVT__cache__DOT__IBREQ) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBUS_WRITE_PEND)))) {
                                    vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND = 1U;
                                }
                            } else {
                                vlSelfRef.__Vdly__cache__DOT__IBADDR 
                                    = vlSelfRef.__PVT__CBUS_A;
                                vlSelfRef.__PVT__cache__DOT__IBDATA 
                                    = vlSelfRef.__PVT__CACHE_DI;
                                vlSelfRef.__PVT__cache__DOT__IBBA 
                                    = vlSelfRef.__PVT__CBUS_BA;
                                vlSelfRef.__PVT__cache__DOT__IBWE = 1U;
                                vlSelfRef.__Vdly__cache__DOT__IBREQ = 1U;
                                vlSelfRef.__PVT__cache__DOT__IBBURST = 0U;
                                vlSelfRef.__PVT__cache__DOT__IBLOCK = 0U;
                                vlSelfRef.__PVT__cache__DOT__IBUS_WRITE = 1U;
                                vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND = 0U;
                            }
                        }
                        if (((((0U == (vlSelfRef.__PVT__CBUS_A 
                                       >> 0x0000001dU)) 
                               & (0U != (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT))) 
                              & (IData)(vlSelfRef.__PVT__cache__DOT__CCR)) 
                             & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)))) {
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                = (0x07ffffffU & (vlSelfRef.__PVT__CBUS_A 
                                                  >> 2U));
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_BA 
                                = vlSelfRef.__PVT__CBUS_BA;
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY 
                                = vlSelfRef.__PVT__cache__DOT__WAY_HIT;
                            vlSelfRef.__PVT__cache__DOT__CACHE_WRITE = 1U;
                        } else if ((2U == (vlSelfRef.__PVT__CBUS_A 
                                           >> 0x0000001dU))) {
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                = (0x07ffffffU & (vlSelfRef.__PVT__CBUS_A 
                                                  >> 2U));
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY 
                                = vlSelfRef.__PVT__cache__DOT__WAY_TAG;
                            vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE = 1U;
                        } else if (vlSelfRef.__PVT__cache__DOT__CACHE_DATA_AREA) {
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                = (0x07ffffffU & (vlSelfRef.__PVT__CBUS_A 
                                                  >> 2U));
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_BA 
                                = vlSelfRef.__PVT__CBUS_BA;
                            vlSelfRef.__PVT__cache__DOT__CACHE_DATA_WRITE = 1U;
                        } else if ((3U == (vlSelfRef.__PVT__CBUS_A 
                                           >> 0x0000001dU))) {
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                = (0x07ffffffU & (vlSelfRef.__PVT__CBUS_A 
                                                  >> 2U));
                            vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE = 1U;
                        }
                    } else if ((((((0U == (vlSelfRef.__PVT__CBUS_A 
                                           >> 0x0000001dU)) 
                                   & ((~ (IData)(vlSelfRef.__PVT__cache__DOT__CCR)) 
                                      | (IData)(vlSelfRef.__PVT__CBUS_TAS))) 
                                  | (1U == (vlSelfRef.__PVT__CBUS_A 
                                            >> 0x0000001dU))) 
                                 | (IData)(vlSelfRef.__PVT__cache__DOT__IO_AREA)) 
                                & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READ)))) {
                        if (vlSelfRef.__PVT__cache__DOT__IBREQ) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READ_PEND)))) {
                                vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = 1U;
                            }
                        } else {
                            vlSelfRef.__Vdly__cache__DOT__IBADDR 
                                = vlSelfRef.__PVT__CBUS_A;
                            vlSelfRef.__PVT__cache__DOT__IBBA 
                                = vlSelfRef.__PVT__CBUS_BA;
                            vlSelfRef.__PVT__cache__DOT__IBWE = 0U;
                            vlSelfRef.__Vdly__cache__DOT__IBREQ = 1U;
                            vlSelfRef.__PVT__cache__DOT__IBBURST = 0U;
                            vlSelfRef.__PVT__cache__DOT__IBLOCK 
                                = vlSelfRef.__PVT__CBUS_TAS;
                            vlSelfRef.__Vdly__cache__DOT__IBUS_READ = 1U;
                            vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = 0U;
                        }
                    } else if (((((0U == (vlSelfRef.__PVT__CBUS_A 
                                          >> 0x0000001dU)) 
                                  & (IData)(vlSelfRef.__PVT__cache__DOT__CCR)) 
                                 & (~ (IData)(vlSelfRef.__PVT__CBUS_TAS))) 
                                & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READARRAY)))) {
                        if ((0U != (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT))) {
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                = (0x07ffffffU & (vlSelfRef.__PVT__CBUS_A 
                                                  >> 2U));
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY 
                                = vlSelfRef.__PVT__cache__DOT__WAY_HIT;
                            vlSelfRef.__PVT__cache__DOT__CACHE_READ = 1U;
                        } else if (vlSelfRef.__PVT__cache__DOT__IBREQ) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READ_PEND)))) {
                                vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = 1U;
                            }
                        } else {
                            __Vfunc_cache__DOT__WayFromLRU__5__two_way 
                                = (1U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                         >> 3U));
                            __Vfunc_cache__DOT__WayFromLRU__5__lru 
                                = vlSelfRef.__PVT__cache__DOT__LRU_DATA;
                            vlSelfRef.__Vdly__cache__DOT__IBADDR 
                                = ((0xfffffff0U & vlSelfRef.__PVT__CBUS_A) 
                                   | (0x0000000cU & 
                                      (((IData)(1U) 
                                        + (vlSelfRef.__PVT__CBUS_A 
                                           >> 2U)) 
                                       << 2U)));
                            vlSelfRef.__PVT__cache__DOT__IBBA = 0x0fU;
                            vlSelfRef.__PVT__cache__DOT__IBWE = 0U;
                            vlSelfRef.__Vdly__cache__DOT__IBREQ = 1U;
                            vlSelfRef.__PVT__cache__DOT__IBBURST = 1U;
                            vlSelfRef.__PVT__cache__DOT__IBLOCK = 0U;
                            vlSelfRef.__PVT__cache__DOT__unnamedblk3__DOT__ARRAY_POS 
                                = (3U & (vlSelfRef.__PVT__CBUS_A 
                                         >> 2U));
                            vlSelfRef.__PVT__cache__DOT__WayFromLRU__Vstatic__res 
                                = (0x0000000fU & ((IData)(__Vfunc_cache__DOT__WayFromLRU__5__two_way)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_cache__DOT__WayFromLRU__5__lru))
                                                    ? 4U
                                                    : 8U)
                                                   : Vtb_top__ConstPool__CONST_he49c974f_0
                                                  [
                                                  (0x07ffffffU 
                                                   & (IData)(__Vfunc_cache__DOT__WayFromLRU__5__lru))]));
                            vlSelfRef.__Vdly__cache__DOT__IBUS_READARRAY = 1U;
                            vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = 0U;
                            __Vfunc_cache__DOT__WayFromLRU__5__Vfuncout 
                                = vlSelfRef.__PVT__cache__DOT__WayFromLRU__Vstatic__res;
                            vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY 
                                = __Vfunc_cache__DOT__WayFromLRU__5__Vfuncout;
                        }
                    } else if ((2U == (vlSelfRef.__PVT__CBUS_A 
                                       >> 0x0000001dU))) {
                        vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.__PVT__CBUS_A 
                                              >> 2U));
                        vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY 
                            = vlSelfRef.__PVT__cache__DOT__WAY_TAG;
                        vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__sci__DOT__SCR = 0U;
        vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v8 = 1U;
        vlSelfRef.__Vdly__intc__DOT__unnamedblk2__DOT__IRL_NORM = 0U;
        vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v10 = 1U;
        vlSelfRef.core__DOT__SR = 0x000000f0U;
        vlSelfRef.__PVT__divu__DOT__DVCR = 0U;
        vlSelfRef.__Vdly__divu__DOT__STEP = 0x3fU;
        vlSelfRef.__PVT__divu__DOT__OVF = 0U;
        vlSelfRef.__PVT__divu__DOT__DVSR = 0U;
        vlSelfRef.__Vdly__cache__DOT__IBADDR = 0U;
        vlSelfRef.__PVT__cache__DOT__IBDATA = 0U;
        vlSelfRef.__PVT__cache__DOT__IBBA = 0U;
        vlSelfRef.__PVT__cache__DOT__IBWE = 0U;
        vlSelfRef.__Vdly__cache__DOT__IBREQ = 0U;
        vlSelfRef.__PVT__cache__DOT__IBBURST = 0U;
        vlSelfRef.__PVT__cache__DOT__IBLOCK = 0U;
        vlSelfRef.__PVT__cache__DOT__unnamedblk3__DOT__ARRAY_POS = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_WR_BA = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_WRITE = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_READ = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_DATA_WRITE = 0U;
        vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE = 0U;
        vlSelfRef.__PVT__cache__DOT__IBDATA_RDY = 0U;
        vlSelfRef.__PVT__cache__DOT__IBUS_WRITE = 0U;
        vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND = 0U;
        vlSelfRef.__Vdly__cache__DOT__IBUS_READ = 0U;
        vlSelfRef.__Vdly__cache__DOT__IBUS_READARRAY = 0U;
        vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = 0U;
        vlSelfRef.__PVT__RES_SYNC_N = 0U;
    }
    if ((0U != (1U & Vtb_top__ConstPool__TABLE_hd96158b0_0
                [__Vtableidx2]))) {
        __PVT__TXD = Vtb_top__ConstPool__TABLE_ha586ad81_0
            [__Vtableidx2];
    }
    if ((0U != (0x10U & Vtb_top__ConstPool__TABLE_hd96158b0_0
                [__Vtableidx2]))) {
        vlSelfRef.__PVT__sci__DOT__TXI = Vtb_top__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx2];
    }
    if ((0U != (0x20U & Vtb_top__ConstPool__TABLE_hd96158b0_0
                [__Vtableidx2]))) {
        vlSelfRef.__PVT__sci__DOT__TEI = Vtb_top__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx2];
    }
    vlSelfRef.__PVT__wdt__DOT__WT_CE = ((4U & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                         ? ((2U & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                                 ? (IData)(vlSelfRef.__PVT__CLK8192_CE)
                                                 : (IData)(vlSelfRef.__PVT__CLK4096_CE))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                                 ? (IData)(vlSelfRef.__PVT__CLK1024_CE)
                                                 : (IData)(vlSelfRef.__PVT__CLK512_CE)))
                                         : ((2U & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                                 ? (IData)(vlSelfRef.__PVT__CLK256_CE)
                                                 : (IData)(vlSelfRef.__PVT__CLK128_CE))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__wdt__DOT__WTCSR))
                                                 ? (IData)(vlSelfRef.__PVT__CLK64_CE)
                                                 : (IData)(vlSelfRef.__PVT__CLK2_CE))));
    vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_NORM 
        = vlSelfRef.__Vdly__intc__DOT__unnamedblk2__DOT__IRL_NORM;
    if (vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[0U] 
            = __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[1U] 
            = __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v1;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[2U] 
            = __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v2;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[3U] 
            = __VdlyVal__intc__DOT__unnamedblk2__DOT__IRL_OLD__v3;
    }
    if (vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v4) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[0U] = 0x0fU;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[1U] = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v6) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[2U] = 0x0fU;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[3U] = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v8) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[0U] = 0x0fU;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[1U] = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v10) {
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[2U] = 0x0fU;
        vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_OLD[3U] = 0x0fU;
    }
    vlSelfRef.__PVT__RXI_IRQ = ((IData)(vlSelfRef.__PVT__sci__DOT__RXI) 
                                & ((IData)(vlSelfRef.__PVT__sci__DOT__SCR) 
                                   >> 6U));
    vlSelfRef.__PVT__ERI_IRQ = ((IData)(vlSelfRef.__PVT__sci__DOT__ERI) 
                                & ((IData)(vlSelfRef.__PVT__sci__DOT__SCR) 
                                   >> 6U));
    vlSelfRef.__PVT__TXI_IRQ = ((IData)(vlSelfRef.__PVT__sci__DOT__TXI) 
                                & ((IData)(vlSelfRef.__PVT__sci__DOT__SCR) 
                                   >> 7U));
    vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF0 
        = vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF0;
    vlSelfRef.__PVT__divu__DOT__R_SIGN = vlSelfRef.__Vdly__divu__DOT__R_SIGN;
    vlSelfRef.__PVT__divu__DOT__Q = vlSelfRef.__Vdly__divu__DOT__Q;
    vlSelfRef.__PVT__divu__DOT__D_SIGN = vlSelfRef.__Vdly__divu__DOT__D_SIGN;
    vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF64_33 
        = vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF64_33;
    vlSelfRef.__PVT__divu__DOT__DIV64 = vlSelfRef.__Vdly__divu__DOT__DIV64;
    vlSelfRef.__PVT__divu__DOT__DVDNTH = vlSelfRef.__Vdly__divu__DOT__DVDNTH;
    vlSelfRef.__PVT__divu__DOT__DVDNTL = vlSelfRef.__Vdly__divu__DOT__DVDNTL;
    vlSelfRef.__PVT__divu__DOT__D[0U] = vlSelfRef.__Vdly__divu__DOT__D[0U];
    vlSelfRef.__PVT__divu__DOT__D[1U] = vlSelfRef.__Vdly__divu__DOT__D[1U];
    vlSelfRef.__PVT__divu__DOT__D[2U] = vlSelfRef.__Vdly__divu__DOT__D[2U];
    vlSelfRef.__PVT__divu__DOT__R[0U] = vlSelfRef.__Vdly__divu__DOT__R[0U];
    vlSelfRef.__PVT__divu__DOT__R[1U] = vlSelfRef.__Vdly__divu__DOT__R[1U];
    vlSelfRef.__PVT__divu__DOT__R[2U] = vlSelfRef.__Vdly__divu__DOT__R[2U];
    vlSelfRef.__PVT__divu__DOT__T64 = vlSelfRef.__Vdly__divu__DOT__T64;
    VL_SUB_W(3, __Vtemp_7, vlSelfRef.__PVT__divu__DOT__R, vlSelfRef.__PVT__divu__DOT__D);
    vlSelfRef.__PVT__divu__DOT__SUM[0U] = __Vtemp_7[0U];
    vlSelfRef.__PVT__divu__DOT__SUM[1U] = __Vtemp_7[1U];
    vlSelfRef.__PVT__divu__DOT__SUM[2U] = (1U & __Vtemp_7[2U]);
    __VdfgRegularize_hebeb780c_0_86[0U] = (IData)(vlSelfRef.__PVT__divu__DOT__R64);
    __VdfgRegularize_hebeb780c_0_86[1U] = (IData)((vlSelfRef.__PVT__divu__DOT__R64 
                                                   >> 0x00000020U));
    __VdfgRegularize_hebeb780c_0_86[2U] = (1U & (IData)(
                                                        (vlSelfRef.__PVT__divu__DOT__R64 
                                                         >> 0x0000003fU)));
    __VdfgRegularize_hebeb780c_0_87[0U] = (IData)(vlSelfRef.__PVT__divu__DOT__D64);
    __VdfgRegularize_hebeb780c_0_87[1U] = (IData)((vlSelfRef.__PVT__divu__DOT__D64 
                                                   >> 0x00000020U));
    __VdfgRegularize_hebeb780c_0_87[2U] = 0U;
    if (vlSelfRef.__PVT__divu__DOT__T64) {
        VL_SUB_W(3, __Vtemp_9, __VdfgRegularize_hebeb780c_0_86, __VdfgRegularize_hebeb780c_0_87);
    } else {
        VL_ADD_W(3, __Vtemp_9, __VdfgRegularize_hebeb780c_0_86, __VdfgRegularize_hebeb780c_0_87);
    }
    vlSelfRef.__PVT__divu__DOT__SUM64[0U] = __Vtemp_9[0U];
    vlSelfRef.__PVT__divu__DOT__SUM64[1U] = __Vtemp_9[1U];
    vlSelfRef.__PVT__divu__DOT__SUM64[2U] = (1U & __Vtemp_9[2U]);
    vlSelfRef.__PVT__divu__DOT__STEP = vlSelfRef.__Vdly__divu__DOT__STEP;
    vlSelfRef.__PVT__bsc__DOT__CBUSY2 = vlSelfRef.__Vdly__bsc__DOT__CBUSY2;
    vlSelfRef.__PVT__divu__DOT__BUSY = vlSelfRef.__Vdly__divu__DOT__BUSY;
    vlSelfRef.__PVT__wdt__DOT__BUSY = vlSelfRef.__Vdly__wdt__DOT__BUSY;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_76 = ((IData)(vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE) 
                                                 | (IData)(vlSelfRef.__PVT__bsc__DOT__REFRESH_ACTIVE));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = ((IData)(vlSelfRef.__PVT__bsc__DOT__BGR) 
                                                 | (IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS));
    vlSelfRef.__PVT__bsc__DOT__CBUSY = vlSelfRef.__Vdly__bsc__DOT__CBUSY;
    vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE = vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE;
    vlSelfRef.__PVT__cache__DOT__IBREQ = vlSelfRef.__Vdly__cache__DOT__IBREQ;
    vlSelfRef.__PVT__cache__DOT__IBUS_WRITE_PEND = vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND;
    vlSelfRef.__PVT__cache__DOT__IBUS_READ = vlSelfRef.__Vdly__cache__DOT__IBUS_READ;
    vlSelfRef.__PVT__cache__DOT__IBUS_READARRAY = vlSelfRef.__Vdly__cache__DOT__IBUS_READARRAY;
    vlSelfRef.__PVT__cache__DOT__IBUS_READ_PEND = vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND;
    vlSelfRef.__PVT__cache__DOT__CCR = vlSelfRef.__Vdly__cache__DOT__CCR;
    vlSelfRef.__PVT__core__DOT__MAWB_STALL = vlSelfRef.__Vdly__core__DOT__MAWB_STALL;
    vlSelfRef.__PVT__cache__DOT__IBADDR = vlSelfRef.__Vdly__cache__DOT__IBADDR;
    vlSelfRef.__PVT__core__DOT__MA_ACTIVE = vlSelfRef.__Vdly__core__DOT__MA_ACTIVE;
    vlSelfRef.__PVT__core__DOT__PIPE = vlSelfRef.__Vdly__core__DOT__PIPE;
    vlSelfRef.__PVT__bsc__DOT__BUS_END = (1U & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE)
                                                    ? (IData)(vlSelfRef.__PVT__bsc__DOT__VBUSY)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__bsc__DOT__DBUSY) 
                                                     | (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_LOCK))
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE) 
                                                     & ((IData)(vlSelfRef.__PVT__cache__DOT__IBLOCK) 
                                                        | (IData)(vlSelfRef.__PVT__bsc__DOT__CBUSY)))))));
    vlSelfRef.__PVT__BSC_DBUS_DO = (vlSelfRef.__PVT__bsc__DOT__DAT_BUF 
                                    & (- (IData)((IData)(vlSelfRef.__PVT__bsc__DOT__DBUS_ACTIVE))));
    vlSelfRef.__PVT__cache__DOT__CRAM_WE = (0x0000000fU 
                                            & ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE))) 
                                               | ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_WR_BA) 
                                                  & (- (IData)(
                                                               ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_DATA_WRITE) 
                                                                | (IData)(vlSelfRef.__PVT__cache__DOT__CACHE_WRITE)))))));
    if (vlSelfRef.__PVT__cache__DOT__CACHE_DATA_WRITE) {
        vlSelfRef.cache__DOT____VlemCond_1 = (3U & 
                                              (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                               >> 8U));
    } else {
        vlSelfRef.__Vfunc_cache__DOT__WayToAddr__0__way 
            = vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY;
        vlSelfRef.__PVT__cache__DOT__WayToAddr__Vstatic__res 
            = ((1U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__0__way))
                ? 0U : ((2U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__0__way))
                         ? 1U : ((4U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__0__way))
                                  ? 2U : ((8U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__0__way))
                                           ? 3U : 0U))));
        vlSelfRef.cache__DOT____VlemCall_0__WayToAddr 
            = vlSelfRef.__PVT__cache__DOT__WayToAddr__Vstatic__res;
        vlSelfRef.cache__DOT____VlemCond_1 = vlSelfRef.cache__DOT____VlemCall_0__WayToAddr;
    }
    __PVT__cache__DOT__CRAM_WRWAY = vlSelfRef.cache__DOT____VlemCond_1;
    vlSelfRef.__PVT__cache__DOT__CVALID_D = ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE) 
                                             | ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE) 
                                                & vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR));
    vlSelfRef.__PVT__cache__DOT__LRU_WE = ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE) 
                                           | ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_WRITE) 
                                              | ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE) 
                                                 | (IData)(vlSelfRef.__PVT__cache__DOT__CACHE_READ))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ));
    __VdfgRegularize_hebeb780c_0_79 = ((~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                                       & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ));
    __Vfunc_cache__DOT__AddrToWay__2__a = (3U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                                 >> 6U));
    __PVT__cache__DOT__AddrToWay__Vstatic__res = (0x0000000fU 
                                                  & (0x8421U 
                                                     >> 
                                                     ((IData)(__Vfunc_cache__DOT__AddrToWay__2__a) 
                                                      << 2U)));
    cache__DOT____VlemCall_3__AddrToWay = __PVT__cache__DOT__AddrToWay__Vstatic__res;
    vlSelfRef.__PVT__cache__DOT__CTAG_WE = (((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE))) 
                                             & (IData)(vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY)) 
                                            | ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE))) 
                                               & (IData)(cache__DOT____VlemCall_3__AddrToWay)));
    __Vfunc_cache__DOT__AddrToWay__3__a = (3U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                                 >> 6U));
    __PVT__cache__DOT__AddrToWay__Vstatic__res = (0x0000000fU 
                                                  & (0x8421U 
                                                     >> 
                                                     ((IData)(__Vfunc_cache__DOT__AddrToWay__3__a) 
                                                      << 2U)));
    cache__DOT____VlemCall_4__AddrToWay = __PVT__cache__DOT__AddrToWay__Vstatic__res;
    vlSelfRef.__PVT__cache__DOT__CVALID_WE = (((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE) 
                                                           | (IData)(vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE)))) 
                                               & (IData)(vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY)) 
                                              | ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE))) 
                                                 & (IData)(cache__DOT____VlemCall_4__AddrToWay)));
    vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ = ((IData)(vlSelfRef.__PVT__cache__DOT__IBREQ) 
                                               & (0U 
                                                  == 
                                                  (0xd8000000U 
                                                   & vlSelfRef.__PVT__cache__DOT__IBADDR)));
    vlSelfRef.__PVT__wdt__DOT__REG_SEL = ((0xfffffe80U 
                                           <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                          & (0xfffffe8fU 
                                             >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__sci__DOT__REG_SEL = ((0xfffffe00U 
                                           <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                          & (0xfffffe05U 
                                             >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__intc__DOT__REG_SEL = (((0xfffffe60U 
                                             <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                            & (0xfffffe69U 
                                               >= vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                                           | ((0xfffffee0U 
                                               <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                              & (0xfffffee5U 
                                                 >= vlSelfRef.__PVT__cache__DOT__IBADDR)));
    vlSelfRef.__PVT__UBC__DOT__REG_SEL = ((0xffffff40U 
                                           <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                          & (0xffffff7cU 
                                             >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__dmac__DOT__REG1_SEL = ((0xfffffe71U 
                                             <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                            & (0xfffffe72U 
                                               >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__dmac__DOT__REG2_SEL = ((0xffffff80U 
                                             <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                            & (0xffffffb3U 
                                               >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__divu__DOT__REG_SEL = ((0xffffff00U 
                                            <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                           & (0xffffff3fU 
                                              >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__frt__DOT__REG_SEL = ((0xfffffe10U 
                                           <= vlSelfRef.__PVT__cache__DOT__IBADDR) 
                                          & (0xfffffe19U 
                                             >= vlSelfRef.__PVT__cache__DOT__IBADDR));
    vlSelfRef.__PVT__core__DOT__REGS_WAD = ((1U & (
                                                   ((vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__WB
                                                     .__PVT__DI[1U] 
                                                     >> 0x0000000fU) 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__WB
                                                        .__PVT__DI[0U] 
                                                        >> 0x00000013U))) 
                                                   | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__WB
                                                       .__PVT__DI[0U] 
                                                       >> 0x00000014U) 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[1U] 
                                                          >> 0x0000000eU)))))
                                             ? vlSelfRef.__PVT__core__DOT__PIPE
                                            .__PVT__WB
                                            .__PVT__RD
                                             : vlSelfRef.__PVT__core__DOT__PIPE
                                            .__PVT__WB
                                            .__PVT__RES);
    vlSelfRef.__PVT__CBUS_WR = ((vlSelfRef.__PVT__core__DOT__PIPE
                                 .__PVT__MA.__PVT__DI[1U] 
                                 >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE));
    vlSelfRef.__PVT__CBUS_TAS = (((vlSelfRef.__PVT__core__DOT__PIPE
                                   .__PVT__MA.__PVT__DI[0U] 
                                   >> 8U) & (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                 & (~ (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL)));
    __PVT__core__DOT__unnamedblk6__DOT__temp = vlSelfRef.__PVT__core__DOT__PIPE
        .__PVT__MA.__PVT__WD;
    vlSelfRef.__PVT__core__DOT__MA_WDATA = ((0U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__core__DOT__PIPE
                                               .__PVT__MA
                                               .__PVT__DI[1U] 
                                               >> 0x00000010U)))
                                             ? ((((0x0000ff00U 
                                                   & (__PVT__core__DOT__unnamedblk6__DOT__temp 
                                                      << 8U)) 
                                                  | (0x000000ffU 
                                                     & __PVT__core__DOT__unnamedblk6__DOT__temp)) 
                                                 << 0x00000010U) 
                                                | ((0x0000ff00U 
                                                    & (__PVT__core__DOT__unnamedblk6__DOT__temp 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & __PVT__core__DOT__unnamedblk6__DOT__temp)))
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__MA
                                                     .__PVT__DI[1U] 
                                                     >> 0x00000010U)))
                                                 ? 
                                                ((__PVT__core__DOT__unnamedblk6__DOT__temp 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & __PVT__core__DOT__unnamedblk6__DOT__temp))
                                                 : __PVT__core__DOT__unnamedblk6__DOT__temp));
    vlSelfRef.__PVT__CBUS_BA = (0x0000000fU & (((0U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__MA
                                                     .__PVT__DI[1U] 
                                                     >> 0x00000010U)))
                                                 ? 
                                                ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (~ vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__MA
                                                     .__PVT__ADDR)))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__MA
                                                      .__PVT__DI[1U] 
                                                      >> 0x00000010U)))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (2U 
                                                   & ((~ 
                                                       (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__MA
                                                        .__PVT__ADDR 
                                                        >> 1U)) 
                                                      << 1U)))
                                                  : 0x0fU)) 
                                               | (- (IData)(
                                                            ((~ 
                                                              ((IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT) 
                                                               | (IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL))) 
                                                             & (IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE))))));
    vlSelfRef.__PVT__CBUS_REQ = (((((vlSelfRef.__PVT__core__DOT__PIPE
                                     .__PVT__MA.__PVT__DI[1U] 
                                     >> 0x0000000fU) 
                                    | (vlSelfRef.__PVT__core__DOT__PIPE
                                       .__PVT__MA.__PVT__DI[1U] 
                                       >> 0x0000000eU)) 
                                   & (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                                  & (~ (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL))) 
                                 | (((IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE) 
                                     & (~ (IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT))) 
                                    & (~ (IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL))));
    vlSelfRef.__PVT__MAC_OP = (0x0000000fU & (((vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__MA
                                                .__PVT__DI[0U] 
                                                << 0x00000011U) 
                                               | (vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__MA
                                                  .__PVT__DI[0U] 
                                                  >> 0x0000000fU)) 
                                              & (- (IData)(
                                                           ((IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE) 
                                                            & (~ (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL)))))));
    vlSelfRef.__PVT__core__DOT__ID_DELAY_SLOT = ((~ 
                                                  (vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__EX
                                                   .__PVT__DI[0U] 
                                                   >> 0x0000000eU)) 
                                                 & ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000000cU))) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[0U] 
                                                           >> 0x0000000cU)))));
    vlSelfRef.__PVT__MAC_SEL = (3U & (((vlSelfRef.__PVT__core__DOT__PIPE
                                        .__PVT__MA.__PVT__DI[0U] 
                                        << 0x0000000bU) 
                                       | (vlSelfRef.__PVT__core__DOT__PIPE
                                          .__PVT__MA
                                          .__PVT__DI[0U] 
                                          >> 0x00000015U)) 
                                      & (- (IData)(
                                                   ((IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE) 
                                                    & (~ (IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL)))))));
    __PVT__core__DOT__unnamedblk3__DOT__BP_A = ((((
                                                   (((0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[1U] 
                                                         >> 8U)) 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[1U] 
                                                         >> 8U))) 
                                                    & (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[1U] 
                                                       >> 7U)) 
                                                   & (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__MA
                                                      .__PVT__DI[1U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (((vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__MA
                                                        .__PVT__DI[1U] 
                                                        >> 0x0000000fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__MA
                                                           .__PVT__DI[0U] 
                                                           >> 0x00000013U))) 
                                                      | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__MA
                                                          .__PVT__DI[0U] 
                                                          >> 0x00000014U) 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__MA
                                                             .__PVT__DI[1U] 
                                                             >> 0x0000000eU)))))) 
                                                 | (((((0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[1U] 
                                                           >> 8U)) 
                                                       == 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__MA
                                                           .__PVT__DI[1U] 
                                                           >> 1U))) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[1U] 
                                                         >> 7U)) 
                                                     & (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__MA
                                                        .__PVT__DI[0U] 
                                                        >> 0x0000001fU)) 
                                                    & (((0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 8U)) 
                                                        != 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 1U))) 
                                                       | (~ 
                                                          (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__MA
                                                           .__PVT__DI[1U] 
                                                           >> 6U)))))
                                                 ? vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__MA
                                                .__PVT__RES
                                                 : 
                                                ((((((0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[1U] 
                                                         >> 8U)) 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[1U] 
                                                         >> 8U))) 
                                                    & (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[1U] 
                                                       >> 7U)) 
                                                   & (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__MA
                                                      .__PVT__DI[1U] 
                                                      >> 6U)) 
                                                  & (((vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__MA
                                                       .__PVT__DI[1U] 
                                                       >> 0x0000000fU) 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__MA
                                                          .__PVT__DI[0U] 
                                                          >> 0x00000013U))) 
                                                     | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[0U] 
                                                         >> 0x00000014U) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 0x0000000eU)))))
                                                  ? vlSelfRef.__PVT__core__DOT__RD_SAVE
                                                  : 
                                                 ((1U 
                                                   & ((((((0x0000001fU 
                                                           & (vlSelfRef.__PVT__core__DOT__PIPE
                                                              .__PVT__EX
                                                              .__PVT__DI[1U] 
                                                              >> 8U)) 
                                                          == 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.__PVT__core__DOT__PIPE
                                                              .__PVT__WB
                                                              .__PVT__DI[1U] 
                                                              >> 8U))) 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__EX
                                                            .__PVT__DI[1U] 
                                                            >> 7U)) 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__WB
                                                           .__PVT__DI[1U] 
                                                           >> 6U)) 
                                                       & (((vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB
                                                            .__PVT__DI[1U] 
                                                            >> 0x0000000fU) 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__WB
                                                               .__PVT__DI[0U] 
                                                               >> 0x00000013U))) 
                                                          | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                              .__PVT__WB
                                                              .__PVT__DI[0U] 
                                                              >> 0x00000014U) 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__core__DOT__PIPE
                                                                 .__PVT__WB
                                                                 .__PVT__DI[1U] 
                                                                 >> 0x0000000eU))))) 
                                                      | (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[2U] 
                                                         >> 6U)))
                                                   ? vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__WB
                                                  .__PVT__RD
                                                   : 
                                                  (((((((0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__EX
                                                            .__PVT__DI[1U] 
                                                            >> 8U)) 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB
                                                            .__PVT__DI[1U] 
                                                            >> 8U))) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[1U] 
                                                          >> 7U)) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__WB
                                                         .__PVT__DI[1U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (((vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__WB
                                                           .__PVT__DI[1U] 
                                                           >> 0x0000000fU) 
                                                          & (~ 
                                                             (vlSelfRef.__PVT__core__DOT__PIPE
                                                              .__PVT__WB
                                                              .__PVT__DI[0U] 
                                                              >> 0x00000013U))) 
                                                         | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__WB
                                                             .__PVT__DI[0U] 
                                                             >> 0x00000014U) 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__core__DOT__PIPE
                                                                .__PVT__WB
                                                                .__PVT__DI[1U] 
                                                                >> 0x0000000eU)))))) 
                                                    | ((((0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__EX
                                                             .__PVT__DI[1U] 
                                                             >> 8U)) 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__WB
                                                             .__PVT__DI[1U] 
                                                             >> 1U))) 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[1U] 
                                                           >> 7U)) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[0U] 
                                                          >> 0x0000001fU)))
                                                    ? vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__WB
                                                   .__PVT__RES
                                                    : 
                                                   ((1U 
                                                     & (((((0x0000001fU 
                                                            & (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__EX
                                                               .__PVT__DI[1U] 
                                                               >> 8U)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__WB2
                                                               .__PVT__DI[1U] 
                                                               >> 8U))) 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__EX
                                                             .__PVT__DI[1U] 
                                                             >> 7U)) 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB2
                                                            .__PVT__DI[1U] 
                                                            >> 6U)) 
                                                        | (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[2U] 
                                                           >> 7U)))
                                                     ? vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__WB2
                                                    .__PVT__RESA
                                                     : 
                                                    (((((0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__EX
                                                            .__PVT__DI[1U] 
                                                            >> 8U)) 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB2
                                                            .__PVT__DI[1U] 
                                                            >> 1U))) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[1U] 
                                                          >> 7U)) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__WB2
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000001fU))
                                                      ? vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__WB2
                                                     .__PVT__RESB
                                                      : vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__EX
                                                     .__PVT__RA))))));
    vlSelfRef.__PVT__core__DOT__REG_A = __PVT__core__DOT__unnamedblk3__DOT__BP_A;
    __PVT__core__DOT__unnamedblk3__DOT__SCR_VAL = (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__DI[0U] 
                                                        >> 0x0000001aU)))
                                                    ? 
                                                   (0x000003f3U 
                                                    & vlSelfRef.core__DOT__SR)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000001aU)))
                                                     ? vlSelfRef.__PVT__core__DOT__GBR
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[0U] 
                                                          >> 0x0000001aU)))
                                                      ? vlSelfRef.__PVT__core__DOT__VBR
                                                      : 0U)));
    __PVT__core__DOT__unnamedblk3__DOT__BP_B = ((1U 
                                                 & (((((((0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__EX
                                                             .__PVT__DI[1U] 
                                                             >> 1U)) 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__MA
                                                             .__PVT__DI[1U] 
                                                             >> 8U))) 
                                                        & vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__DI[1U]) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__MA
                                                          .__PVT__DI[1U] 
                                                          >> 6U)) 
                                                      & (~ 
                                                         (((vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 0x0000000fU) 
                                                           & (~ 
                                                              (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__MA
                                                               .__PVT__DI[0U] 
                                                               >> 0x00000013U))) 
                                                          | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                              .__PVT__MA
                                                              .__PVT__DI[0U] 
                                                              >> 0x00000014U) 
                                                             & (~ 
                                                                (vlSelfRef.__PVT__core__DOT__PIPE
                                                                 .__PVT__MA
                                                                 .__PVT__DI[1U] 
                                                                 >> 0x0000000eU)))))) 
                                                     | (((((0x0000001fU 
                                                            & (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__EX
                                                               .__PVT__DI[1U] 
                                                               >> 1U)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__MA
                                                               .__PVT__DI[1U] 
                                                               >> 1U))) 
                                                          & vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[1U]) 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[0U] 
                                                            >> 0x0000001fU)) 
                                                        & (((0x0000001fU 
                                                             & (vlSelfRef.__PVT__core__DOT__PIPE
                                                                .__PVT__MA
                                                                .__PVT__DI[1U] 
                                                                >> 8U)) 
                                                            != 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.__PVT__core__DOT__PIPE
                                                                .__PVT__MA
                                                                .__PVT__DI[1U] 
                                                                >> 1U))) 
                                                           | (~ 
                                                              (vlSelfRef.__PVT__core__DOT__PIPE
                                                               .__PVT__MA
                                                               .__PVT__DI[1U] 
                                                               >> 6U))))) 
                                                    | (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[2U] 
                                                       >> 5U)))
                                                 ? vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__MA
                                                .__PVT__RES
                                                 : 
                                                ((((((0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[1U] 
                                                         >> 1U)) 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[1U] 
                                                         >> 8U))) 
                                                    & vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__DI[1U]) 
                                                   & (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__MA
                                                      .__PVT__DI[1U] 
                                                      >> 6U)) 
                                                  & (((vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__MA
                                                       .__PVT__DI[1U] 
                                                       >> 0x0000000fU) 
                                                      & (~ 
                                                         (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__MA
                                                          .__PVT__DI[0U] 
                                                          >> 0x00000013U))) 
                                                     | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[0U] 
                                                         >> 0x00000014U) 
                                                        & (~ 
                                                           (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 0x0000000eU)))))
                                                  ? vlSelfRef.__PVT__core__DOT__RD_SAVE
                                                  : 
                                                 ((((((0x0000001fU 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[1U] 
                                                          >> 1U)) 
                                                      == 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[1U] 
                                                          >> 8U))) 
                                                     & vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__EX
                                                     .__PVT__DI[1U]) 
                                                    & (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__WB
                                                       .__PVT__DI[1U] 
                                                       >> 6U)) 
                                                   & (((vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__WB
                                                        .__PVT__DI[1U] 
                                                        >> 0x0000000fU) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__WB
                                                           .__PVT__DI[0U] 
                                                           >> 0x00000013U))) 
                                                      | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[0U] 
                                                          >> 0x00000014U) 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__WB
                                                             .__PVT__DI[1U] 
                                                             >> 0x0000000eU)))))
                                                   ? vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__WB
                                                  .__PVT__RD
                                                   : 
                                                  (((((((0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__EX
                                                            .__PVT__DI[1U] 
                                                            >> 1U)) 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB
                                                            .__PVT__DI[1U] 
                                                            >> 8U))) 
                                                       & vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[1U]) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__WB
                                                         .__PVT__DI[1U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (((vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__WB
                                                           .__PVT__DI[1U] 
                                                           >> 0x0000000fU) 
                                                          & (~ 
                                                             (vlSelfRef.__PVT__core__DOT__PIPE
                                                              .__PVT__WB
                                                              .__PVT__DI[0U] 
                                                              >> 0x00000013U))) 
                                                         | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__WB
                                                             .__PVT__DI[0U] 
                                                             >> 0x00000014U) 
                                                            & (~ 
                                                               (vlSelfRef.__PVT__core__DOT__PIPE
                                                                .__PVT__WB
                                                                .__PVT__DI[1U] 
                                                                >> 0x0000000eU)))))) 
                                                    | ((((0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__EX
                                                             .__PVT__DI[1U] 
                                                             >> 1U)) 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__WB
                                                             .__PVT__DI[1U] 
                                                             >> 1U))) 
                                                        & vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__DI[1U]) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[0U] 
                                                          >> 0x0000001fU)))
                                                    ? vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__WB
                                                   .__PVT__RES
                                                    : 
                                                   (((((0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[1U] 
                                                           >> 1U)) 
                                                       == 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__WB2
                                                           .__PVT__DI[1U] 
                                                           >> 8U))) 
                                                      & vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__EX
                                                      .__PVT__DI[1U]) 
                                                     & (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__WB2
                                                        .__PVT__DI[1U] 
                                                        >> 6U))
                                                     ? vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__WB2
                                                    .__PVT__RESA
                                                     : 
                                                    (((((0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__EX
                                                            .__PVT__DI[1U] 
                                                            >> 1U)) 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB2
                                                            .__PVT__DI[1U] 
                                                            >> 1U))) 
                                                       & vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[1U]) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__WB2
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000001fU))
                                                      ? vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__WB2
                                                     .__PVT__RESB
                                                      : vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__EX
                                                     .__PVT__RB))))));
    vlSelfRef.__PVT__core__DOT__REG_B = ((0x00001000U 
                                          & vlSelfRef.__PVT__core__DOT__PIPE
                                          .__PVT__EX
                                          .__PVT__DI[2U])
                                          ? ((0x00000800U 
                                              & vlSelfRef.__PVT__core__DOT__PIPE
                                              .__PVT__EX
                                              .__PVT__DI[2U])
                                              ? 0U : 
                                             ((0x00000400U 
                                               & vlSelfRef.__PVT__core__DOT__PIPE
                                               .__PVT__EX
                                               .__PVT__DI[2U])
                                               ? 0U
                                               : vlSelfRef.__PVT__core__DOT__SAVE_ID
                                              .__PVT__PC))
                                          : ((0x00000800U 
                                              & vlSelfRef.__PVT__core__DOT__PIPE
                                              .__PVT__EX
                                              .__PVT__DI[2U])
                                              ? ((0x00000400U 
                                                  & vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__DI[2U])
                                                  ? vlSelfRef.__PVT__core__DOT__PIPE
                                                 .__PVT__EX
                                                 .__PVT__PC
                                                  : 
                                                 ((0xfffffffcU 
                                                   & vlSelfRef.core__DOT__PC) 
                                                  | (3U 
                                                     & (vlSelfRef.core__DOT__PC 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelfRef.__PVT__core__DOT__PIPE
                                                                          .__PVT__EX
                                                                          .__PVT__DI[2U] 
                                                                          >> 8U)))))))))
                                              : ((0x00000400U 
                                                  & vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__DI[2U])
                                                  ? __PVT__core__DOT__unnamedblk3__DOT__SCR_VAL
                                                  : __PVT__core__DOT__unnamedblk3__DOT__BP_B)));
    vlSelfRef.__PVT__CBUS_A = ((IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)
                                ? vlSelfRef.__PVT__core__DOT__PIPE
                               .__PVT__MA.__PVT__ADDR
                                : (0xfffffffcU & vlSelfRef.core__DOT__PC));
    vlSelfRef.__PVT__dmac__DOT__DBUS_DO_TEMP = ((0x00000800U 
                                                 & vlSelfRef.__PVT__dmac__DOT__CHCR
                                                 [vlSelfRef.__PVT__dmac__DOT__DMA_CH])
                                                 ? 
                                                ((0x00000400U 
                                                  & vlSelfRef.__PVT__dmac__DOT__CHCR
                                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH])
                                                  ? vlSelfRef.__PVT__dmac__DOT__RD_BUF[3U]
                                                  : vlSelfRef.__PVT__BSC_DBUS_DO)
                                                 : 
                                                ((0x00000400U 
                                                  & vlSelfRef.__PVT__dmac__DOT__CHCR
                                                  [vlSelfRef.__PVT__dmac__DOT__DMA_CH])
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__dmac__DOT__SA_BA))
                                                   ? 
                                                  ((vlSelfRef.__PVT__BSC_DBUS_DO 
                                                    << 0x00000010U) 
                                                   | (0x0000ffffU 
                                                      & vlSelfRef.__PVT__BSC_DBUS_DO))
                                                   : 
                                                  ((0xffff0000U 
                                                    & vlSelfRef.__PVT__BSC_DBUS_DO) 
                                                   | (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                      >> 0x10U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__dmac__DOT__SA_BA))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__dmac__DOT__SA_BA))
                                                    ? 
                                                   ((vlSelfRef.__PVT__BSC_DBUS_DO 
                                                     << 0x00000018U) 
                                                    | ((0x00ff0000U 
                                                        & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                           << 0x00000010U)) 
                                                       | ((0x0000ff00U 
                                                           & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                              << 8U)) 
                                                          | (0x000000ffU 
                                                             & vlSelfRef.__PVT__BSC_DBUS_DO))))
                                                    : 
                                                   ((0xff000000U 
                                                     & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                        << 0x00000010U)) 
                                                    | ((0x00ff0000U 
                                                        & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                           << 8U)) 
                                                       | ((0x0000ff00U 
                                                           & vlSelfRef.__PVT__BSC_DBUS_DO) 
                                                          | (0x000000ffU 
                                                             & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                                >> 8U))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__dmac__DOT__SA_BA))
                                                    ? 
                                                   ((0xff000000U 
                                                     & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                        << 8U)) 
                                                    | ((0x00ff0000U 
                                                        & vlSelfRef.__PVT__BSC_DBUS_DO) 
                                                       | ((0x0000ff00U 
                                                           & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                              >> 8U)) 
                                                          | (0x000000ffU 
                                                             & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                                >> 0x10U)))))
                                                    : 
                                                   ((0xff000000U 
                                                     & vlSelfRef.__PVT__BSC_DBUS_DO) 
                                                    | ((0x00ff0000U 
                                                        & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                           >> 8U)) 
                                                       | ((0x0000ff00U 
                                                           & (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                              >> 0x00000010U)) 
                                                          | (vlSelfRef.__PVT__BSC_DBUS_DO 
                                                             >> 0x18U))))))));
    vlSelfRef.__PVT__cache__DOT__CRAM_WRADDR = (((IData)(__PVT__cache__DOT__CRAM_WRWAY) 
                                                 << 8U) 
                                                | (0x000000ffU 
                                                   & vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR));
    vlSelfRef.__PVT__bsc__DOT__BUS_SEL = ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                                          | ((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                                             | ((IData)(vlSelfRef.__PVT__bsc__DOT__RFS_REQ) 
                                                | (IData)(vlSelfRef.__PVT__VBUS_REQ))));
    vlSelfRef.__PVT__DMAC_ACT = ((IData)(vlSelfRef.__PVT__dmac__DOT__REG1_SEL) 
                                 | (IData)(vlSelfRef.__PVT__dmac__DOT__REG2_SEL));
    vlSelfRef.__PVT__divu__DOT__DIV64_START = ((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                                               & ((0x14U 
                                                   == 
                                                   (0x0000001fU 
                                                    & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)));
    vlSelfRef.__PVT__frt__DOT__ICR_READ = ((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                                           & ((9U == 
                                               (0x0000000fU 
                                                & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                                              & (IData)(__VdfgRegularize_hebeb780c_0_79)));
    __VdfgRegularize_hebeb780c_0_80 = ((1U == (0x0000000fU 
                                               & vlSelfRef.__PVT__cache__DOT__IBADDR)) 
                                       & (IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL));
    vlSelfRef.__PVT__MULT_DO = ((2U & (IData)(vlSelfRef.__PVT__MAC_SEL))
                                 ? vlSelfRef.__PVT__mult__DOT__MACH
                                 : vlSelfRef.__PVT__mult__DOT__MACL);
    vlSelfRef.__Vcellinp__core__BUS_WAIT = (1U & (((IData)(vlSelfRef.__PVT__CBUS_REQ) 
                                                   & ((IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READ) 
                                                      | ((IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READARRAY) 
                                                         | ((IData)(vlSelfRef.__PVT__cache__DOT__IBUS_READ_PEND) 
                                                            | (IData)(vlSelfRef.__PVT__cache__DOT__IBUS_WRITE_PEND))))) 
                                                  | ((~ (IData)(vlSymsp->TOP.tb_top__DOT__ref0__DOT__FAST_R)) 
                                                     & ((~ (IData)(vlSelfRef.__PVT__mult__DOT__MM_DONE)) 
                                                        & ((4U 
                                                            & (IData)(vlSelfRef.__PVT__MAC_OP))
                                                            ? 
                                                           (0U 
                                                            != (IData)(vlSelfRef.__PVT__MAC_SEL))
                                                            : (IData)(vlSelfRef.__PVT__MAC_SEL))))));
    vlSelfRef.__PVT__cache__DOT__IO_AREA = ((0xfffffe92U 
                                             != vlSelfRef.__PVT__CBUS_A) 
                                            & (7U == 
                                               (vlSelfRef.__PVT__CBUS_A 
                                                >> 0x0000001dU)));
    vlSelfRef.__PVT__cache__DOT__CACHE_DATA_AREA = 
        ((6U == (vlSelfRef.__PVT__CBUS_A >> 0x0000001dU)) 
         | (4U == (vlSelfRef.__PVT__CBUS_A >> 0x0000001dU)));
    vlSelfRef.__PVT__IBUS_DI = ((IData)(vlSelfRef.__PVT__intc__DOT__REG_SEL)
                                 ? vlSelfRef.__PVT__intc__DOT__BUS_DO
                                 : ((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL)
                                     ? ((- (IData)((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL))) 
                                        & ((0x0fU == (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))
                                            ? vlSelfRef.__PVT__divu__DOT__REG_DO
                                            : ((vlSelfRef.__PVT__divu__DOT__REG_DO 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.__PVT__divu__DOT__REG_DO))))
                                     : ((IData)(vlSelfRef.__PVT__DMAC_ACT)
                                         ? (vlSelfRef.__PVT__dmac__DOT__REG_DO 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__DMAC_ACT))))
                                         : ((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL)
                                             ? ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_DO) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.__PVT__frt__DOT__REG_DO) 
                                                     << 0x00000010U) 
                                                    | (((IData)(vlSelfRef.__PVT__frt__DOT__REG_DO) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.__PVT__frt__DOT__REG_DO)))) 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL))))
                                             : ((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL)
                                                 ? 
                                                ((((IData)(vlSelfRef.__PVT__wdt__DOT__REG_DO) 
                                                   << 0x00000018U) 
                                                  | (((IData)(vlSelfRef.__PVT__wdt__DOT__REG_DO) 
                                                      << 0x00000010U) 
                                                     | (((IData)(vlSelfRef.__PVT__wdt__DOT__REG_DO) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.__PVT__wdt__DOT__REG_DO)))) 
                                                 & (- (IData)((IData)(vlSelfRef.__PVT__wdt__DOT__REG_SEL))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__sci__DOT__REG_SEL)
                                                  ? 
                                                 (vlSelfRef.__PVT__sci__DOT__REG_DO 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__sci__DOT__REG_SEL))))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__UBC__DOT__REG_SEL)
                                                   ? 
                                                  (vlSelfRef.__PVT__UBC__DOT__REG_DO 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__UBC__DOT__REG_SEL))))
                                                   : 
                                                  ((0xffffffe0U 
                                                    <= vlSelfRef.__PVT__cache__DOT__IBADDR)
                                                    ? vlSelfRef.__PVT__bsc__DOT__REG_DO
                                                    : 
                                                   (vlSelfRef.__PVT__bsc__DOT__DAT_BUF 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_ACTIVE))))))))))));
    vlSelfRef.__PVT__frt__DOT__FTCSR_WRITE = ((IData)(__VdfgRegularize_hebeb780c_0_80) 
                                              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19));
    vlSelfRef.__PVT__frt__DOT__FTCSR_READ = ((IData)(__VdfgRegularize_hebeb780c_0_80) 
                                             & (IData)(__VdfgRegularize_hebeb780c_0_79));
    __PVT__core__DOT__BUS_STALL = (((IData)(vlSelfRef.__PVT__core__DOT__VECT_ACTIVE) 
                                    & (IData)(vlSelfRef.__PVT__intc__DOT__VBREQ)) 
                                   | (((IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE) 
                                       | (IData)(vlSelfRef.__PVT__core__DOT__IF_ACTIVE)) 
                                      & (IData)(vlSelfRef.__Vcellinp__core__BUS_WAIT)));
    vlSelfRef.__PVT__core__DOT__ID_STALL = ((IData)(vlSelfRef.__PVT__core__DOT__INST_SPLIT) 
                                            | (IData)(__PVT__core__DOT__BUS_STALL));
    vlSelfRef.__PVT__core__DOT__MA_STALL = ((IData)(vlSelfRef.__PVT__core__DOT__MAWB_STALL) 
                                            | (IData)(__PVT__core__DOT__BUS_STALL));
    vlSelfRef.__PVT__core__DOT__IF_STALL = ((IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL) 
                                            | (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL));
    vlSelfRef.__PVT__core__DOT__REGS_WAE = (1U & ((vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__WB
                                                   .__PVT__DI[1U] 
                                                   >> 6U) 
                                                  & (~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL))));
    vlSelfRef.__PVT__MAC_WE = ((((0U != (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                               .__PVT__MA
                                               .__PVT__DI[0U] 
                                               >> 0x00000015U))) 
                                 & (vlSelfRef.__PVT__core__DOT__PIPE
                                    .__PVT__MA.__PVT__DI[0U] 
                                    >> 0x00000013U)) 
                                & (IData)(vlSelfRef.__PVT__core__DOT__MA_ACTIVE)) 
                               & (~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL)));
    vlSelfRef.__PVT__CACHE_DI = (((0U != (IData)(vlSelfRef.__PVT__MAC_SEL)) 
                                  & ((~ (IData)(vlSelfRef.__PVT__MAC_WE)) 
                                     & (0x0eU == (IData)(vlSelfRef.__PVT__MAC_OP))))
                                  ? vlSelfRef.__PVT__MULT_DO
                                  : vlSelfRef.__PVT__core__DOT__MA_WDATA);
    if (vlSelfRef.__PVT__cache__DOT__CACHE_UPDATE) {
        vlSelfRef.__PVT__cache__DOT__CTAG_D = (0x0007ffffU 
                                               & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                                  >> 8U));
        vlSelfRef.__PVT__cache__DOT__CRAM_D = vlSelfRef.__PVT__IBUS_DI;
    } else {
        vlSelfRef.__PVT__cache__DOT__CTAG_D = (0x0007ffffU 
                                               & ((vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                                   >> 8U) 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE)))));
        vlSelfRef.__PVT__cache__DOT__CRAM_D = vlSelfRef.__PVT__CACHE_DI;
    }
}
