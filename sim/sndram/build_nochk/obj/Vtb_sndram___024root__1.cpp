// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sndram.h for the primary calling header

#include "Vtb_sndram__pch.h"

extern const VlUnpacked<SData/*9:0*/, 32> Vtb_sndram__ConstPool__TABLE_h0c961df8_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_sndram__ConstPool__TABLE_he33553dd_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_sndram__ConstPool__TABLE_h137b4441_0;

void Vtb_sndram___024root___act_sequent__TOP__20(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__20\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL;
    tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__1__Vfuncout;
    __Vfunc_PLFOCalc__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__1__DATA;
    __Vfunc_PLFOCalc__1__DATA = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__1__NOISE;
    __Vfunc_PLFOCalc__1__NOISE = 0;
    CData/*1:0*/ __Vfunc_PLFOCalc__1__PLFOWS;
    __Vfunc_PLFOCalc__1__PLFOWS = 0;
    CData/*2:0*/ __Vfunc_PLFOCalc__1__PLFOS;
    __Vfunc_PLFOCalc__1__PLFOS = 0;
    IData/*22:0*/ __Vfunc_PhaseCalc__2__Vfuncout;
    __Vfunc_PhaseCalc__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PhaseCalc__2__SCR5;
    __Vfunc_PhaseCalc__2__SCR5 = 0;
    CData/*7:0*/ __Vfunc_PhaseCalc__2__PLFO_WAVE;
    __Vfunc_PhaseCalc__2__PLFO_WAVE = 0;
    SData/*9:0*/ __Vfunc_LFOFreqDiv__3__Vfuncout;
    __Vfunc_LFOFreqDiv__3__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_LFOFreqDiv__3__LFOF;
    __Vfunc_LFOFreqDiv__3__LFOF = 0;
    SData/*9:0*/ __Vfunc_LevelAddTL__12__Vfuncout;
    __Vfunc_LevelAddTL__12__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_LevelAddTL__12__LEVEL;
    __Vfunc_LevelAddTL__12__LEVEL = 0;
    CData/*7:0*/ __Vfunc_LevelAddTL__12__TL;
    __Vfunc_LevelAddTL__12__TL = 0;
    SData/*15:0*/ __Vfunc_VolCalc__13__WAVE;
    __Vfunc_VolCalc__13__WAVE = 0;
    SData/*9:0*/ __Vfunc_VolCalc__13__LEVEL;
    __Vfunc_VolCalc__13__LEVEL = 0;
    CData/*4:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*10:0*/ TOP__SCSPP_PKG__DOT__LevelAddTL__Vstatic__SUM;
    TOP__SCSPP_PKG__DOT__LevelAddTL__Vstatic__SUM = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DC 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           && (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_STB) 
                & (2U == (0x27U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) 
               & (3U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                               >> 3U)))));
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DR 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           && (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_STB) 
                & (0U == (0x27U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) 
               & (3U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                               >> 3U)))));
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DW 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           && (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_STB) 
                & (1U == (0x27U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) 
               & (3U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                               >> 3U)))));
    __Vtableidx11 = (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_PEND) 
                      << 4U) | ((8U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD)) 
                                       << 3U)) | (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                   << 2U) 
                                                  | (3U 
                                                     & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__RST_N)))))));
    if ((0U != (1U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    if ((0U != (2U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_PEND 
            = Vtb_sndram__ConstPool__TABLE_h137b4441_0
            [__Vtableidx11];
    }
    if ((0U != (4U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    if ((0U != (8U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    if ((0U != (0x0010U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    if ((0U != (0x0020U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    if ((0U != (0x0080U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    if ((0U != (0x0200U & Vtb_sndram__ConstPool__TABLE_h0c961df8_0
                [__Vtableidx11]))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_PEND 
            = Vtb_sndram__ConstPool__TABLE_he33553dd_0
            [__Vtableidx11];
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           && (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7) 
                     >> 0x0000000cU)));
    __Vfunc_LevelAddTL__12__TL = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q));
    __Vfunc_LevelAddTL__12__LEVEL = (0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6));
    TOP__SCSPP_PKG__DOT__LevelAddTL__Vstatic__SUM = 
        (0x000007ffU & ((IData)(__Vfunc_LevelAddTL__12__LEVEL) 
                        + ((IData)(__Vfunc_LevelAddTL__12__TL) 
                           << 2U)));
    __Vfunc_LevelAddTL__12__Vfuncout = ((0x00000400U 
                                         & (IData)(TOP__SCSPP_PKG__DOT__LevelAddTL__Vstatic__SUM))
                                         ? 0x000003ffU
                                         : (0x000003ffU 
                                            & (IData)(TOP__SCSPP_PKG__DOT__LevelAddTL__Vstatic__SUM)));
    tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL 
        = __Vfunc_LevelAddTL__12__Vfuncout;
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_BE 
            = (0x0000000fU & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                 >> 2U)));
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
            if ((IData)((((0U == (0x0600U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) 
                          & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                             >> 1U)) & (0U == (0x0000001eU 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                  << 1U)))))) {
                if ((0x00001000U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_PEND = 1U;
                }
            }
        }
        __Vfunc_PLFOCalc__1__PLFOS = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR6) 
                                            >> 5U));
        __Vfunc_PLFOCalc__1__PLFOWS = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR6) 
                                             >> 8U));
        __Vfunc_PLFOCalc__1__NOISE = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE);
        __Vfunc_PLFOCalc__1__DATA = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q);
        vlSymsp->TOP__SCSPP_PKG.PLFOCalc__Vstatic__WAVE 
            = ((2U & (IData)(__Vfunc_PLFOCalc__1__PLFOWS))
                ? ((1U & (IData)(__Vfunc_PLFOCalc__1__PLFOWS))
                    ? (0x80U ^ (IData)(__Vfunc_PLFOCalc__1__NOISE))
                    : (0x000000feU & (((0x0000003fU 
                                        & ((IData)(__Vfunc_PLFOCalc__1__DATA) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PLFOCalc__1__DATA) 
                                                            >> 6U)))))) 
                                       ^ (- (IData)(
                                                    (1U 
                                                     & ((IData)(__Vfunc_PLFOCalc__1__DATA) 
                                                        >> 7U))))) 
                                      << 1U))) : ((1U 
                                                   & (IData)(__Vfunc_PLFOCalc__1__PLFOWS))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(__Vfunc_PLFOCalc__1__DATA)) 
                                                   | (0x0000007fU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       ((IData)(__Vfunc_PLFOCalc__1__DATA) 
                                                                        >> 7U)))))))
                                                   : (IData)(__Vfunc_PLFOCalc__1__DATA)));
        vlSymsp->TOP__SCSPP_PKG.PLFOCalc__Vstatic__RET 
            = ((0U != (IData)(__Vfunc_PLFOCalc__1__PLFOS))
                ? (0x000000ffU & VL_SHIFTRS_III(8,8,3, 
                                                (0xfeU 
                                                 & (IData)(vlSymsp->TOP__SCSPP_PKG.PLFOCalc__Vstatic__WAVE)), 
                                                (7U 
                                                 & (~ (IData)(__Vfunc_PLFOCalc__1__PLFOS)))))
                : 0U);
        __Vfunc_PLFOCalc__1__Vfuncout = vlSymsp->TOP__SCSPP_PKG.PLFOCalc__Vstatic__RET;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE 
            = __Vfunc_PLFOCalc__1__Vfuncout;
        __Vfunc_PhaseCalc__2__PLFO_WAVE = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE;
        __Vfunc_PhaseCalc__2__SCR5 = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR5;
        vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__S 
            = (0x0000000fU & (8U ^ ((IData)(__Vfunc_PhaseCalc__2__SCR5) 
                                    >> 0x0000000bU)));
        vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__F 
            = (0x000007ffU & ((IData)(0x0400U) + (IData)(__Vfunc_PhaseCalc__2__SCR5)));
        vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__TEMP 
            = (0x00007fffU & ((IData)(__Vfunc_PhaseCalc__2__PLFO_WAVE) 
                              * (0x0000007fU & ((IData)(vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__F) 
                                                >> 4U))));
        vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__FM 
            = ((0x00000e00U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                 >> 0x0eU)))) 
                               << 9U)) | (0x000001ffU 
                                          & ((IData)(vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__TEMP) 
                                             >> 6U)));
        vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__P 
            = (0x0fffffffU & ((0x00000fffU & ((IData)(vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__F) 
                                              + (IData)(vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__FM))) 
                              << (IData)(vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__S)));
        __Vfunc_PhaseCalc__2__Vfuncout = (0x007fffffU 
                                          & (vlSymsp->TOP__SCSPP_PKG.PhaseCalc__Vstatic__P 
                                             >> 4U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PHASE 
            = __Vfunc_PhaseCalc__2__Vfuncout;
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D = 0U;
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_RUN) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST)))) {
                if ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
                     [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT] 
                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem
                                  [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT])))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D 
                        = (1U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D));
                }
                if (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
                                [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT])) 
                     & vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem
                     [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT])) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D 
                        = (2U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D));
                }
            }
            if ((0x1fU == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_RUN = 0U;
                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_PEND) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_PEND = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_RUN = 1U;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__RST = 0U;
            }
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                = ((0x000000ff000001ffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2) 
                   | ((QData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PHASE)) 
                      << 9U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2 
                = ((0x00000001ffffffffULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2) 
                   | ((QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT) 
                                        << 2U) | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST) 
                                                   << 1U) 
                                                  | (1U 
                                                     & vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                     [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT]))))) 
                      << 0x00000021U));
            vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2 
                = (0x000000fe00000000ULL | vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2);
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2 
                = ((0x000000feffffffffULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2) 
                   | ((QData)((IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                             [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT] 
                                             >> 1U)))) 
                      << 0x00000020U));
            vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2 
                = (0x0000000100000000ULL | vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2);
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2 
                = ((0x000000fffffffe00ULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2) 
                   | (IData)((IData)(((0x00000100U 
                                       & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR5) 
                                          >> 7U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE)))));
            vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2 
                = (0x00000000000001ffULL | vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2);
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SLOT 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__NOISE 
                = ((0x00010000U & ((0xffff0000U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE 
                                                   << 0x0000000bU)) 
                                   ^ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE 
                                      << 0x00000010U))) 
                   | (0x0000ffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE 
                                     >> 1U)));
            if ((0U != (0x000003ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q 
                                       >> 8U)))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                    = (0x000003ffU & ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q 
                                       >> 8U) - (IData)(1U)));
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                    = (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q);
            } else {
                __Vfunc_LFOFreqDiv__3__LFOF = (0x0000001fU 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR6) 
                                                  >> 0x0000000aU));
                vlSymsp->TOP__SCSPP_PKG.LFOFreqDiv__Vstatic__TEMP 
                    = (0x0000000fU & ((IData)(1U) + 
                                      (7U & (~ (3U 
                                                & (IData)(__Vfunc_LFOFreqDiv__3__LFOF))))));
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                    = (0x000000ffU & ((IData)(1U) + vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q));
                vlSymsp->TOP__SCSPP_PKG.LFOFreqDiv__Vstatic__TEMP2 
                    = (((IData)(vlSymsp->TOP__SCSPP_PKG.LFOFreqDiv__Vstatic__TEMP) 
                        << 7U) >> (7U & ((IData)(__Vfunc_LFOFreqDiv__3__LFOF) 
                                         >> 2U)));
                __Vfunc_LFOFreqDiv__3__Vfuncout = (0x000003ffU 
                                                   & (((IData)(vlSymsp->TOP__SCSPP_PKG.LFOFreqDiv__Vstatic__TEMP2) 
                                                       - (IData)(4U)) 
                                                      - (IData)(1U)));
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                    = __Vfunc_LFOFreqDiv__3__Vfuncout;
            }
            if ((0x00008000U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR6))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_D 
                = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DIV) 
                    << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DATA));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7 
                = ((0x0001ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7) 
                   | (0x01fe0000U & ((IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                              >> 0x0000001aU)) 
                                     << 0x00000011U)));
            if ((0x00000100U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCond_6 
                    = (0x0000ffffU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                              >> 0x0000000aU)));
            } else {
                __Vfunc_VolCalc__13__LEVEL = tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL;
                __Vfunc_VolCalc__13__WAVE = (0x0000ffffU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                                        >> 0x0000000aU)));
                vlSymsp->TOP__SCSPP_PKG.VolCalc__Vstatic__MULT 
                    = (0x007fffffU & ((IData)(__Vfunc_VolCalc__13__WAVE) 
                                      * (0x00000040U 
                                         | (0x0000003fU 
                                            & (~ (IData)(__Vfunc_VolCalc__13__LEVEL))))));
                vlSymsp->TOP__SCSPP_PKG.VolCalc__Vstatic__PMV 
                    = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                                           (0x00000001ffffffffULL 
                                                            & VL_EXTENDS_QI(33,16, 
                                                                            (0x0000ffffU 
                                                                             & (vlSymsp->TOP__SCSPP_PKG.VolCalc__Vstatic__MULT 
                                                                                >> 7U)))), 
                                                           (0x00000001ffffffffULL 
                                                            & VL_EXTENDS_QI(33,17, 
                                                                            (0x0000ffffU 
                                                                             & ((IData)(1U) 
                                                                                << 
                                                                                (0x0000000fU 
                                                                                & ((IData)(0x0fU) 
                                                                                - 
                                                                                ((IData)(__Vfunc_VolCalc__13__LEVEL) 
                                                                                >> 6U)))))))));
                vlSymsp->TOP__SCSPP_PKG.VolCalc__Vstatic__RES 
                    = (0x0000ffffU & (IData)((vlSymsp->TOP__SCSPP_PKG.VolCalc__Vstatic__PMV 
                                              >> 0x0fU)));
                vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_5__VolCalc 
                    = vlSymsp->TOP__SCSPP_PKG.VolCalc__Vstatic__RES;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCond_6 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_5__VolCalc;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7 
                = ((0x01fe0000U & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7) 
                   | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCond_6) 
                       << 1U) | (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q) 
                                       >> 9U))));
        }
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0) 
                         & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB) 
                            >> 1U))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE 
                            = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                     >> 8U));
                    }
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE2) 
                         & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB) 
                            >> 1U))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                              >> 8U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                              >> 0x0000000cU));
                    }
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE2) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                              >> 4U));
                    }
                }
                if ((1U & (~ (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))))) {
                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR) {
                        if ((8U != (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                   >> 2U)))) {
                            if ((0x0aU == (0x0000000fU 
                                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                              >> 2U)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 
                                    = (0x000000ffU 
                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                            }
                        }
                        if ((8U == (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                   >> 2U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 
                                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                    }
                }
                if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR) 
                     & (0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))) {
                    if ((0U != (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                        if ((2U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 2U)))) {
                            if ((0U != (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE 
                                    = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                             >> 1U));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF 
                                    = (1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ 
                = (1U & ((0x00000040U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U])
                          ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                              >> 5U) & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD) 
                                        ^ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                                           >> 5U)))
                          : (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                             >> 5U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ 
                = (1U & ((0x00000040U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U])
                          ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                              >> 5U) & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD) 
                                        ^ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                                           >> 5U)))
                          : (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                             >> 5U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP;
            if ((((0xfffffe91U == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR 
                    = ((0x00000060U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                       >> 0x00000011U)) 
                       | (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                         >> 0x10U)));
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_CE) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC 
                    = (0x0000ffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_INC);
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA = 0xffffU;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB = 0xffffU;
            } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR) {
                if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 1U)))) {
                            if ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB 
                                        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                 >> 0x10U)));
                                } else {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA 
                                        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                 >> 0x10U)));
                                }
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP 
                                    = (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                       >> 0x18U);
                            }
                        }
                    } else if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                        if ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC 
                                = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP) 
                                    << 8U) | (0x000000ffU 
                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA));
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP 
                                = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                  >> 8U));
                        }
                    }
                }
            }
            if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__EQA) 
                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_CE))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVECF_LVL 
                = (0x0000000fU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000020U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT2 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT1;
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT1) 
                 & (0x28U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IMS 
                    = ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IMS) 
                       | ((0x0000ff00U & (((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))
                                            ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI 
                                               >> 8U)
                                            : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB) 
                                               >> 8U)) 
                                          << 8U)) | 
                          (0x000000ffU & ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))
                                           ? vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI
                                           : (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB)))));
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_RISE) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IMS = 0x0000bfffU;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_PEND = 0U;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH 
                = (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1));
            vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_ZERO 
                = (1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1))));
            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_ZERO)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1 
                    = (0x00000fffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1) 
                                      - (IData)(1U)));
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD 
                = ((2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD) 
                          << 1U)) | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH));
            if ((IData)((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD)))) {
                if ((1U & ((~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD 
                               >> 8U)) | ((vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD 
                                           >> 8U) & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_PEND = 1U;
                }
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__EXT_INT = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SND = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)))) {
                if ((1U & (~ (((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                               | (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) 
                              | (1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR = 1U;
                }
            }
            if ((0x26U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SND = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR = 0U;
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF = 1U;
                }
            }
            if (((((0xffffffe0U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
                   & (0xa55aU == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                  >> 0x10U))) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ))) {
                if ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                    if ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR 
                                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR 
                                = (0x00f8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2 
                                = (0x00fcU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1 
                                = (0x1ff7U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                    }
                    if ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR 
                                = (0x0000ffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                        if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR 
                                = (0xfefcU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        }
                    }
                }
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR) {
                if ((3U == (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                           >> 2U)))) {
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2 
                        = (0x00003fffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                          >> 2U));
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2 = 1U;
                    if (((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                             >> 1U)) & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[0U])) {
                        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v3 = 1U;
                    }
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4 
                        = (1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4 = 1U;
                } else if ((7U == (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                  >> 2U)))) {
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5 
                        = (0x00003fffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                          >> 2U));
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5 = 1U;
                    if (((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                             >> 1U)) & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[1U])) {
                        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v1 = 1U;
                    }
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7 
                        = (1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7 = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__RD) {
                if ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 1U)))) {
                            if ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
                                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FICR));
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
                                    = (0x000000ffU 
                                       & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FICR) 
                                          >> 8U));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
                        = (0x000000ffU & ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                           ? ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                               ? (0x000000e0U 
                                                  | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR))
                                               : (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG) 
                                                   << 7U) 
                                                  | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS)))
                                           : ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                               ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCR)
                                               : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCR) 
                                                  >> 8U))));
                } else if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                    if ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP;
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
                            = (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC) 
                                              >> 8U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP 
                            = (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
                        = ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF) 
                                << 7U) | ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA))))
                            : (1U | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
                                     << 1U)));
                }
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS1) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F3 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS2) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F4 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS3) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F5 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT;
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT 
                    = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2_CE 
                    = (1U == (1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4_CE 
                    = (3U == (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8_CE 
                    = (7U == (7U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK16_CE 
                    = (0x000fU == (0x000fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK32_CE 
                    = (0x001fU == (0x001fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK64_CE 
                    = (0x003fU == (0x003fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK128_CE 
                    = (0x007fU == (0x007fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK256_CE 
                    = (0x00ffU == (0x00ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK512_CE 
                    = (0x01ffU == (0x01ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK1024_CE 
                    = (0x03ffU == (0x03ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2048_CE 
                    = (0x07ffU == (0x07ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4096_CE 
                    = (0x0fffU == (0x0fffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT)));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8192_CE 
                    = (0x1fffU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY 
                    = ((2U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY)) 
                       | ((((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                             >> 4U)) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)) 
                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD))));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY 
                    = ((1U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY)) 
                       | (2U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY) 
                                << 1U)));
                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL)) 
                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__IR 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__MA.__PVT__IR;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z 
                        = (0U == (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_RDATA));
                    VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                .__PVT__WB.__PVT__DI, vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                .__PVT__MA.__PVT__DI);
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__PC 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__MA.__PVT__PC;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__RD 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_RDATA;
                } else if ((1U & (~ ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL)) 
                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))))) {
                    if (((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT))) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__IR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                            .__PVT__MA.__PVT__IR;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z 
                            = (0U == (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE));
                        VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                    .__PVT__WB.__PVT__DI, vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                    .__PVT__MA.__PVT__DI);
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__PC 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                            .__PVT__MA.__PVT__PC;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__RD 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL 
                        = (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__NEXT_STATE));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__STATE 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__NEXT_STATE;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_SAME)
                        ? ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN))
                            ? 3U : (3U & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN))))
                        : 0U);
                if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_SAME) 
                     & (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL 
                        = (0x0000000fU & (~ (IData)(vlSelfRef.tb_sndram__DOT__CIRL_N)));
                } else if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL = 0U;
                }
            } else if (((((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                           >> 4U)) 
                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE))) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)) 
                        & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO 
                    = ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                        ? ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? 0xffU : ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                        ? 0xffU : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS)))
                        : ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                            ? ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                ? (0x1fU | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF) 
                                             << 7U) 
                                            | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE) 
                                                << 6U) 
                                               | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS) 
                                                  << 5U))))
                                : 0xffU) : ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                             ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT)
                                             : (0x00000018U 
                                                | ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF) 
                                                     << 7U) 
                                                    | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT) 
                                                        << 6U) 
                                                       | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME) 
                                                          << 5U))) 
                                                   | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))))));
            }
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK16_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK32_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK64_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK128_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK256_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK512_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK1024_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2048_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4096_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8192_CE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__IR = 0U;
            __Vtemp_1[0U] = 0U;
            __Vtemp_1[1U] = 0xa0240000U;
            __Vtemp_1[2U] = 4U;
            VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__WB.__PVT__DI, __Vtemp_1);
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__RD = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__STATE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN = 3U;
        }
        if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
            if ((2U == (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 8U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) {
                                    if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                               & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC))))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6)) 
                                               | (0xfeU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC))))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6)) 
                                               | (0x0000ff00U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                               & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC))))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5)) 
                                               | (0xfeU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC))))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5)) 
                                               | (0x0000ff00U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11)) 
                                               | (0x00000700U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0)) 
                                               | (0x0fU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0)) 
                                               | (0x00000300U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1)) 
                                               | (0x00000100U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19)) 
                                               | (0x00000700U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17)) 
                                               | (0x00000700U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16 
                                            = (0x00ffU 
                                               & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16));
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15 
                                            = (0x00ffU 
                                               & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15));
                                    }
                                }
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14 
                                            = (0x00ffU 
                                               & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14));
                                    }
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) {
                                    if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13 
                                            = ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13)) 
                                               | (0x00000700U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR3 = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR2 = 0U;
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE = 0U;
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SAMPLE_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0xfcU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (1U | (2U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)) 
                                  << 1U))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0xfbU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (4U & ((~ (0U != (3U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)))) 
                            << 2U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0xf7U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (8U & ((~ (0U != (7U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)))) 
                            << 3U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0xefU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (0x00000010U & ((~ (0U != (0x0000000fU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)))) 
                                     << 4U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0xdfU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (0x00000020U & ((~ (0U != (0x0000001fU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)))) 
                                     << 5U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0xbfU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (0x00000040U & ((~ (0U != (0x0000003fU 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT)))) 
                                     << 6U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE 
                = ((0x7fU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE)) 
                   | (0x00000080U & ((~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT))) 
                                     << 7U)));
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO) {
            if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) {
                            if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC = 1U;
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__EXEC) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC = 0U;
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD 
            = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                     >> 1U));
        vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD 
            = (3U == (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                            >> 2U)));
        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CLR0) 
             | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_GC) 
                | ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64) 
                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__H = 0U;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HBUS) 
                    | (((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0) 
                            | (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                                       >> 0x00000020U)))) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest)) 
                       | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HSUM)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__H 
                = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H_SEL))
                    ? vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA
                    : ((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H_SEL))
                        ? (- (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                      >> 0x0000001fU)))
                        : ((2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H_SEL))
                            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD)
                            : vlSelfRef.__VdfgRegularize_hebeb780c_0_59)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_RD) {
                if ((3U == (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                           >> 2U)))) {
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2 
                        = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                                 >> 1U));
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2 = 1U;
                } else if ((7U == (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                  >> 2U)))) {
                    vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3 
                        = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                                 >> 1U));
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3 = 1U;
                }
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBA 
                    = (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                      >> 4U));
            } else if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ) 
                        & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY) 
                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ)))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ = 0U;
            }
        }
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v0 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR = 0U;
        if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ) 
               & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD))) 
              & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR))) 
             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if ((1U & ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                           [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                           >> 3U)) | ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                       [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                       >> 3U) & (~ 
                                                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                  [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                                  >> 8U)))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
                    = ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                        ? 3U : 0U);
                vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 
                    = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                              [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                              >> 3U) & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                           [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                           >> 8U))));
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST 
                    = (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS));
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK 
                    = (1U & (((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                  [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                  >> 3U)) | (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                             [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                             >> 4U)) 
                             | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))));
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 1U;
                if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 3U;
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 0U;
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0U;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK 
                    = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                              [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                              >> 4U) | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))));
            }
        } else if (((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD) 
                      | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR)) 
                     & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_BUSY))) 
                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD) {
                if (((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                         [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                         >> 3U)) & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST 
                        = (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK 
                        = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                  [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                  >> 4U) | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
                        = ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                            ? 3U : 0U);
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4 = 1U;
                    if ((0U == vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT)) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 0U;
                    }
                } else if ((((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                              [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                              >> 3U) & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                           [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                           >> 8U))) 
                            & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT)))) {
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5 = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
                        = ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                            ? 3U : 0U);
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                  [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                  >> 4U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0U;
                    }
                    if ((0U == vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT)) {
                        vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0 = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0U;
                    }
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA 
                    = (3U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q);
            } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR) {
                if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT))) {
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                  [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                  >> 4U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 0U;
                    }
                }
                if (((0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT)) 
                     | (0U == vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT))) {
                    if ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                         [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH])) {
                        if ((1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                    [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                    >> 3U) & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                              [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                              >> 8U)))) {
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6 = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
                                = ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                                    ? 3U : 0U);
                            if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                          [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                          >> 4U)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 0U;
                            }
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 0U;
                        if ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                             [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH])) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 1U;
                            if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 3U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 0U;
                            }
                        }
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR = 1U;
                }
                if ((1U == vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT)) {
                    if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 0U;
                    }
                }
                if ((0U == vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT)) {
                    vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
                    vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1 = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0U;
                }
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
                = (3U & ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT))
                          ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT) 
                             - (IData)(1U)) : ((3U 
                                                == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                                                ? 3U
                                                : 0U)));
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_BE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SLOT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__RST = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2 = 0ULL;
        vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2 = 0x000000ffffffffffULL;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA = 0xffffU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB = 0xffffU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK16_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK32_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK64_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK128_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK256_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK512_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK1024_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2048_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4096_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8192_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT2 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IMS = 0x0000bfffU;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR3 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR2 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__EXT_INT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__IR = 0U;
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0xa0240000U;
        __Vtemp_2[2U] = 4U;
        VL_ASSIGN_W(80, vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                    .__PVT__WB.__PVT__DI, __Vtemp_2);
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__RD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__H = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__STATE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN = 3U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v4 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v8 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v7 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v9 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2 = 0x00fcU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1 = 0x03f0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR = 0xaaffU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBA = 0U;
    }
    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0 
        = ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N))) 
           || (0x0000000fU == (0x0000000fU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                              >> 2U))));
    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N)))) {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2 = (0x0000001fU 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                 >> 0x00000022U)))
                                                      ? (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                 >> 0x00000023U))
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST) 
                                                                   | ((IData)(
                                                                              (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                               >> 0x00000022U)) 
                                                                      | ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                                                          >> 0x00000015U) 
                                                                         | ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                                                             >> 0x00000013U) 
                                                                            | (IData)(
                                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                                                                >> 0x0000001cU)))))))))));
    if ((0U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
    } else if ((2U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                             >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA 
            = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                              >> 0x00000016U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA 
            = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                              >> 0x00000012U));
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE0 = 
        (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                & (- (IData)((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL))))) 
               | (- (IData)((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                           >> 0x00000022U)))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4 
        = ((((0x0000000cU & ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                               & (- (IData)((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                                   >> 7U))))) 
                              | (- (IData)((1U & (IData)(
                                                         (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                          >> 0x00000022U)))))) 
                             << 2U)) | (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                                                >> 3U))))) 
                                              | (- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                       >> 0x00000022U)))))))) 
            << 4U) | ((0x0000000cU & ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                                         >> 2U))))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                >> 0x00000022U)))))) 
                                      << 2U)) | (3U 
                                                 & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                                                      >> 1U))))) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                             >> 0x00000022U)))))))));
}

void Vtb_sndram___024root___act_sequent__TOP__27(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__27\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__INT_ACP) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE;
            }
            if ((1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI[0U] >> 1U) 
                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD = 1U;
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CKS = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FICR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT = 0U;
            } else {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR) {
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                            if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                if ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR 
                                        = (0x0000001fU 
                                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                                }
                                if ((1U & (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CKS 
                                        = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                 >> 8U));
                                }
                            }
                        }
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA 
                                        = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                 >> 0x10U));
                                }
                            }
                        }
                    }
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG) 
                       & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD) 
                          ^ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG)));
                if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ) 
                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD))) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT = 1U;
                } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FICR 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF = 1U;
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_WRITE) {
                    if ((((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                              >> 0x17U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET = 0U;
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT1) 
                 & (0x28U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB 
                        = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB)) 
                           | (0x0000ff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB 
                        = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB)) 
                           | (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_PEND = 0U;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH 
                = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0) 
                   == (0x000003ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__T0C));
            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0 = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD 
                = ((2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD) 
                          << 1U)) | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH));
            if ((IData)((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD)))) {
                if ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD)) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_PEND = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN = 1U;
                }
            }
            if ((1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD 
                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD))))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0 = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD = 0U;
            }
            if ((0x3fU != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
            }
            if (((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START32) 
                    | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START64)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START64;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVF = 0U;
            }
            if (((5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF_DEC))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVF = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP = 0x26U;
            }
            if ((0x26U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP = 0x3fU;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO 
                        = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 0U;
                }
            } else if (((((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[0U] 
                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[0U]) 
                          & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[0U]) 
                         & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[1U] 
                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[1U]) 
                            & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[1U])) 
                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                           >> 3U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO;
            } else if (((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[0U] 
                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[0U]) 
                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[0U])) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH = 0U;
            } else if (((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[1U] 
                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[1U]) 
                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[1U])) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH = 1U;
            }
        } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_READ) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET = 1U;
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET = 0U;
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
            if ((0U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                              >> 1U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR6 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6_Q;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR5 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5_Q;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg];
        }
        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF = 0U;
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN) {
                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WT_CE) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT)));
                        if ((0x000000ffU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT))) {
                            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF = 1U;
                            } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF = 1U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS = 0U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0U;
                }
                if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WR_DONE) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__HALF))) {
                    if ((2U == (7U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) {
                        if ((0x5aU == (0x000000ffU 
                                       & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                          >> 8U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE 
                                = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                         >> 6U));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS 
                                = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                         >> 5U));
                        }
                        if ((0x5aU != (0x000000ffU 
                                       & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                          >> 8U)))) {
                            if ((IData)((0x0000a500U 
                                         == (0x0000ff80U 
                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF = 0U;
                            }
                        }
                    }
                    if ((0U == (7U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) {
                        if ((0x5aU == (0x000000ffU 
                                       & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                          >> 8U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT 
                                = (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                        } else if ((0xa5U == (0x000000ffU 
                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                 >> 8U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT 
                                = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                         >> 6U));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME 
                                = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                         >> 5U));
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS 
                                = (7U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
                            if (((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                     >> 7U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET = 0U;
                            }
                        }
                    }
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__RD_DONE) {
                    if (((0U == (7U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET = 1U;
                    }
                }
                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL)) 
                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_RDATA;
                } else if (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL)) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_RDATA;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)))) {
                    if ((0x10000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])) {
                        if ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                          >> 0x0000001aU)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                = (0x000003f3U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR_NEW);
                        }
                    }
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SR = 0x000000f0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR6 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR5 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CKS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FICR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB = 0xbfffU;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP = 0x3fU;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SR = 0x000000f0U;
    }
}

void Vtb_sndram___024root___act_sequent__TOP__37(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__37\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_LevelAddALFO__11__LEVEL;
    __Vfunc_LevelAddALFO__11__LEVEL = 0;
    CData/*7:0*/ __Vfunc_LevelAddALFO__11__ALFO;
    __Vfunc_LevelAddALFO__11__ALFO = 0;
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6 
                = ((0x0000000003ffffffULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6) 
                   | ((QData)((IData)((0x000000ffU 
                                       & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5 
                                                  >> 0x00000022U))))) 
                      << 0x0000001aU));
            __Vfunc_LevelAddALFO__11__ALFO = (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5));
            __Vfunc_LevelAddALFO__11__LEVEL = (0x000003ffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5 
                                                          >> 8U)));
            vlSymsp->TOP__SCSPP_PKG.LevelAddALFO__Vstatic__SUM 
                = (0x000007ffU & ((IData)(__Vfunc_LevelAddALFO__11__LEVEL) 
                                  + (IData)(__Vfunc_LevelAddALFO__11__ALFO)));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_4__LevelAddALFO 
                = ((0x00000400U & (IData)(vlSymsp->TOP__SCSPP_PKG.LevelAddALFO__Vstatic__SUM))
                    ? 0x000003ffU : (0x000003ffU & (IData)(vlSymsp->TOP__SCSPP_PKG.LevelAddALFO__Vstatic__SUM)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6 
                = ((0x00000003fc000000ULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6) 
                   | (IData)((IData)(((0x03fffc00U 
                                       & ((IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5 
                                                   >> 0x00000012U)) 
                                          << 0x0000000aU)) 
                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_4__LevelAddALFO)))));
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ;
        }
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WR) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT = 1U;
        }
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RD) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY = 4U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_RWAIT = 1U;
        }
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R60) 
                         & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB) 
                            >> 1U))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                              >> 8U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                              >> 0x0000000cU));
                    }
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TIER = 0U;
            } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR) {
                if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TIER 
                                    = (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                       >> 0x19U);
                            }
                        }
                    }
                }
            }
            if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY 
                    = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY) 
                             - (IData)(1U)));
            } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RWAIT) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_RWAIT = 0U;
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT1 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT = 0U;
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT1 = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            if ((0x90U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                           << 2U))) {
                if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C 
                        = (0x00ffffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C);
                }
                if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C 
                        = (0xff00ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C);
                }
                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C 
                        = ((0xffff00ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C) 
                           | (0x00000300U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C 
                        = ((0xffffff00U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C) 
                           | (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
            } else if ((0x94U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                  << 2U))) {
                if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S 
                        = (0x00ffffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S);
                }
                if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S 
                        = (0xff00ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S);
                }
                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S 
                        = ((0xffff00ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S) 
                           | (0x00000100U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S 
                        = ((0xffffff00U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S) 
                           | (0x000000ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
            } else if ((0x98U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                  << 2U))) {
                if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD 
                        = (0x00ffffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD);
                }
                if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD 
                        = (0xff00ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD);
                }
                if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD 
                        = ((0xffff00ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD) 
                           | (0x00000100U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD 
                        = ((0xffffff00U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD) 
                           | (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI));
                }
            } else if ((0xb0U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                  << 2U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR0 
                    = (0xfffdfffdU & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
            } else if ((0xb4U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                  << 2U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR1 
                    = (0xf00dfffdU & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
            } else if ((0xb8U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                  << 2U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__AREF 
                    = (0x0000001fU & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
            } else if ((0xc4U == ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                  << 2U))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__RSEL 
                    = (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI);
            }
        }
        if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RWAIT) 
              & (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY))) 
             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_DO 
                = ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                    ? ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                        ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                            ? 0U : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                     ? 0U : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                  ? 0U
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__RSEL))
                                                  : 0U))))
                        : ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                            ? ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                ? 0U : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                  ? 
                                                 (0xffff3fffU 
                                                  & vlSelfRef.tb_sndram__DOT__SCU__DOT__IST)
                                                  : 0U)))
                            : 0U)) : ((0x00000010U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                       ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                           ? ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 
                                                   (0x00733333U 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DSTA)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)
                                           : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 0U
                                                    : 
                                                   (0x00000fffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                                                    [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH]))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 
                                                   (0x07ffffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL)
                                                    : 
                                                   (0x07ffffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DRSEL)))))
                                       : ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                           ? ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 0U
                                                    : 
                                                   (0x00000fffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                                                    [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH]))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 
                                                   (0x07ffffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL)
                                                    : 
                                                   (0x07ffffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DRSEL))))
                                           : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 0U
                                                    : 
                                                   (0x000fffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                                                    [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH]))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))
                                                    ? 
                                                   (0x07ffffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL)
                                                    : 
                                                   (0x07ffffffU 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DRSEL)))))));
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TIER = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6 = 0ULL;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__AREF = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__RSEL = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_RWAIT = 0U;
    }
}

extern const VlWide<64>/*2047:0*/ Vtb_sndram__ConstPool__CONST_he49c974f_0;

void Vtb_sndram___024root___act_sequent__TOP__39(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__39\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vfunc_SoundSel__8__WAVE0;
    __Vfunc_SoundSel__8__WAVE0 = 0;
    SData/*15:0*/ __Vfunc_SoundSel__8__WAVE1;
    __Vfunc_SoundSel__8__WAVE1 = 0;
    SData/*15:0*/ __Vfunc_SoundSel__8__NOISE;
    __Vfunc_SoundSel__8__NOISE = 0;
    CData/*1:0*/ __Vfunc_SoundSel__8__SSCTL;
    __Vfunc_SoundSel__8__SSCTL = 0;
    CData/*1:0*/ __Vfunc_SoundSel__8__SBCTL;
    __Vfunc_SoundSel__8__SBCTL = 0;
    CData/*5:0*/ __Vfunc_SoundSel__8__PHASE;
    __Vfunc_SoundSel__8__PHASE = 0;
    SData/*15:0*/ __Vfunc_Interpolate__9__Vfuncout;
    __Vfunc_Interpolate__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_Interpolate__9__WAVE0;
    __Vfunc_Interpolate__9__WAVE0 = 0;
    SData/*15:0*/ __Vfunc_Interpolate__9__WAVE1;
    __Vfunc_Interpolate__9__WAVE1 = 0;
    CData/*5:0*/ __Vfunc_Interpolate__9__PHASE;
    __Vfunc_Interpolate__9__PHASE = 0;
    CData/*7:0*/ __Vfunc_ALFOCalc__10__DATA;
    __Vfunc_ALFOCalc__10__DATA = 0;
    CData/*7:0*/ __Vfunc_ALFOCalc__10__NOISE;
    __Vfunc_ALFOCalc__10__NOISE = 0;
    CData/*1:0*/ __Vfunc_ALFOCalc__10__ALFOWS;
    __Vfunc_ALFOCalc__10__ALFOWS = 0;
    CData/*2:0*/ __Vfunc_ALFOCalc__10__ALFOS;
    __Vfunc_ALFOCalc__10__ALFOS = 0;
    CData/*3:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__lru;
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__lru = 0;
    CData/*0:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__two_way;
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__two_way = 0;
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY = 0U;
            if ((1U & (~ ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__REG_SEL))) 
                          && ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL)
                               ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY)
                               : ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DMAC_ACT)) 
                                  & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_SEL)) 
                                     & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL)) 
                                        & ((0x0fffffe8U 
                                            == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                >> 4U))
                                            ? (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY))
                                            : ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_SEL)) 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY) 
                                                  | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2) 
                                                     | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ)) 
                                                        | ((~ 
                                                            ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ) 
                                                             & (0xffffU 
                                                                == 
                                                                (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                                 >> 0x00000010U)))) 
                                                           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE) 
                                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_91)))))))))))))))) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE = 0U;
                } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ = 0U;
                } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                        = ((0xfffffff0U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
                           | (0x0000000cU & (((IData)(1U) 
                                              + (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                 >> 2U)) 
                                             << 2U)));
                    if (((3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                >> 2U)) == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY = 0U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA = 0x0fU;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE 
                        = (1U & ((((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                    .__PVT__MA.__PVT__DI[1U] 
                                    >> 0x0000000dU) 
                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL)))
                                  ? (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                                        >> 2U)) : (~ 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                                                    >> 1U))));
                    if (((3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                >> 2U)) == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS) 
                                                  - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK = 0U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                        = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 2U));
                }
            }
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_REQ) {
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_WR) {
                    if ((((0U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                  >> 0x0000001dU)) 
                          | (1U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                    >> 0x0000001dU))) 
                         | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IO_AREA))) {
                        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND = 1U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA 
                                = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_BA;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND = 0U;
                        }
                    }
                    if (((((0U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                   >> 0x0000001dU)) 
                           & (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT))) 
                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR)) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 2U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_BA;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE = 1U;
                    } else if ((2U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                       >> 0x0000001dU))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 2U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE = 1U;
                    } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_AREA) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 2U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_BA;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE = 1U;
                    } else if ((3U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                       >> 0x0000001dU))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 2U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE = 1U;
                    }
                } else if ((((((0U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                       >> 0x0000001dU)) 
                               & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR)) 
                                  | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_TAS))) 
                              | (1U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                        >> 0x0000001dU))) 
                             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IO_AREA)) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ)))) {
                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 1U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_BA;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_TAS;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 0U;
                    }
                } else if (((((0U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                      >> 0x0000001dU)) 
                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR)) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_TAS))) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY)))) {
                    if ((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 2U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ = 1U;
                    } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 1U;
                        }
                    } else {
                        __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__two_way 
                            = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                                     >> 3U));
                        __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__lru 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            = ((0xfffffff0U & vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A) 
                               | (0x0000000cU & (((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                                   >> 2U)) 
                                                 << 2U)));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA = 0x0fU;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS 
                            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                     >> 2U));
                        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__Vstatic__res 
                            = (0x0000000fU & ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__two_way)
                                               ? ((1U 
                                                   & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__lru))
                                                   ? 4U
                                                   : 8U)
                                               : Vtb_sndram__ConstPool__CONST_he49c974f_0
                                              [(0x07ffffffU 
                                                & (IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__lru))]));
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 0U;
                        __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__Vfuncout 
                            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__Vstatic__res;
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
                            = __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__25__Vfuncout;
                    }
                } else if ((2U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                   >> 0x0000001dU))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                        = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                          >> 2U));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
                        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG;
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE = 1U;
                }
            }
        }
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ERMAX 
            = ((0x1eU < (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE))
                ? 0x1eU : ((0x18U > (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE))
                            ? 0x18U : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__SRAC 
            = (0x0000003fU & ((0x0000001fU & (((IData)(0x20U) 
                                               - (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ERMAX)) 
                                              >> 1U)) 
                              + (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ERMAX) 
                                  & ((0x0eU >= (0x0000000fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)))) 
                                     && (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT) 
                                               >> (0x0000000fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)))))))
                                  ? 1U : 0U)));
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL 
                = (0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST 
                = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q) 
                         >> 0x0000000aU));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ATTACK_VOL_CALC 
                = (0x000007ffU & ((0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q)) 
                                  + ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__ENV_STEP)
                                      ? VL_SHIFTRS_III(11,11,5, 
                                                       (0x000007ffU 
                                                        & (~ 
                                                           (0x000003ffU 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q)))), 
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__SRAC)))
                                      : 0U)));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC 
                = (0x000007ffU & ((0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q)) 
                                  + ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__ENV_STEP)
                                      ? (0x0010U >> 
                                         (0x0000001fU 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__SRAC)))
                                      : 0U)));
            if ((0x00200000U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4)) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL = 0x03ffU;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST = 3U;
            } else if ((IData)(((0x0c00U == (0x0c00U 
                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))) 
                                & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                   >> 0x00000014U)))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_OVR)
                        ? 0U : 0x0280U);
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST = 0U;
            } else if (((3U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q) 
                                      >> 0x0000000aU))) 
                        & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                           >> 0x00000013U))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST = 3U;
            } else if ((0x00000800U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL 
                    = (0x000003ffU & ((0x00000400U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                                       ? ((0x00000400U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC))
                                           ? 0x03ffU
                                           : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC))
                                       : ((0x00000400U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC))
                                           ? 0x03ffU
                                           : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC))));
            } else if ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL 
                    = ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC))
                        ? 0x000003ffU : (0x000003ffU 
                                         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC)));
                if (((0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q) 
                                     >> 5U)) == (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2) 
                                                    >> 5U)))) {
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST = 2U;
                }
            } else {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL 
                    = ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ATTACK_VOL_CALC))
                        ? 0U : (0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ATTACK_VOL_CALC)));
                if ((1U & (((~ (0U != (0x000003ffU 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q)))) 
                            & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2) 
                                  >> 0x0000000eU))) 
                           | ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                               >> 0x00000012U) & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2) 
                                                  >> 0x0000000eU))))) {
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST = 1U;
                }
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D 
                = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST) 
                    << 0x0000000aU) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 
                = ((0x00000003ffffffffULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5) 
                   | ((QData)((IData)((0x000000ffU 
                                       & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                          >> 0x00000013U)))) 
                      << 0x00000022U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 
                = ((0x000003fffffc00ffULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5) 
                   | ((QData)((IData)(((1U & (((0U 
                                                == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST)) 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q) 
                                                  >> 5U)) 
                                              | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2) 
                                                 >> 0x0000000fU)))
                                        ? 0U : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL)))) 
                      << 8U));
            __Vfunc_SoundSel__8__PHASE = (0x0000003fU 
                                          & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                             >> 4U));
            __Vfunc_SoundSel__8__SBCTL = (3U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4);
            __Vfunc_SoundSel__8__SSCTL = (3U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                                >> 2U));
            __Vfunc_SoundSel__8__NOISE = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV) 
                                          << 8U);
            __Vfunc_SoundSel__8__WAVE1 = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD1;
            __Vfunc_SoundSel__8__WAVE0 = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD0;
            if ((0U == (IData)(__Vfunc_SoundSel__8__SSCTL))) {
                __Vfunc_Interpolate__9__PHASE = __Vfunc_SoundSel__8__PHASE;
                __Vfunc_Interpolate__9__WAVE1 = ((IData)(__Vfunc_SoundSel__8__WAVE1) 
                                                 ^ 
                                                 ((0x00008000U 
                                                   & ((IData)(__Vfunc_SoundSel__8__SBCTL) 
                                                      << 0x0000000eU)) 
                                                  | (0x00007fffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(__Vfunc_SoundSel__8__SBCTL)))))));
                __Vfunc_Interpolate__9__WAVE0 = ((IData)(__Vfunc_SoundSel__8__WAVE0) 
                                                 ^ 
                                                 ((0x00008000U 
                                                   & ((IData)(__Vfunc_SoundSel__8__SBCTL) 
                                                      << 0x0000000eU)) 
                                                  | (0x00007fffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(__Vfunc_SoundSel__8__SBCTL)))))));
                vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__PHASE_NEG 
                    = (0x0000007fU & ((IData)(0x40U) 
                                      - (IData)(__Vfunc_Interpolate__9__PHASE)));
                vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__TEMP0 
                    = (0x003fffffU & ((IData)(__Vfunc_Interpolate__9__WAVE0) 
                                      * (IData)(vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__PHASE_NEG)));
                vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__TEMP1 
                    = (0x003fffffU & ((IData)(__Vfunc_Interpolate__9__WAVE1) 
                                      * (IData)(__Vfunc_Interpolate__9__PHASE)));
                vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__SUM 
                    = (0x003fffffU & (vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__TEMP0 
                                      + vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__TEMP1));
                __Vfunc_Interpolate__9__Vfuncout = 
                    (0x0000ffffU & (vlSymsp->TOP__SCSPP_PKG.Interpolate__Vstatic__SUM 
                                    >> 6U));
                vlSymsp->TOP__SCSPP_PKG.SoundSel__Vstatic__SD 
                    = __Vfunc_Interpolate__9__Vfuncout;
            } else {
                vlSymsp->TOP__SCSPP_PKG.SoundSel__Vstatic__SD 
                    = ((1U == (IData)(__Vfunc_SoundSel__8__SSCTL))
                        ? ((IData)(__Vfunc_SoundSel__8__NOISE) 
                           ^ ((0x00008000U & ((IData)(__Vfunc_SoundSel__8__SBCTL) 
                                              << 0x0000000eU)) 
                              | (0x00007fffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(__Vfunc_SoundSel__8__SBCTL)))))))
                        : ((0x00008000U & ((IData)(__Vfunc_SoundSel__8__SBCTL) 
                                           << 0x0000000eU)) 
                           | (0x00007fffU & (- (IData)(
                                                       (1U 
                                                        & (IData)(__Vfunc_SoundSel__8__SBCTL)))))));
            }
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_2__SoundSel 
                = vlSymsp->TOP__SCSPP_PKG.SoundSel__Vstatic__SD;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 
                = ((0x000003fc0003ffffULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5) 
                   | ((QData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_2__SoundSel)) 
                      << 0x00000012U));
            __Vfunc_ALFOCalc__10__ALFOS = (7U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR6));
            __Vfunc_ALFOCalc__10__ALFOWS = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR6) 
                                                  >> 3U));
            __Vfunc_ALFOCalc__10__NOISE = (0x000000ffU 
                                           & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                              >> 0x0000000aU));
            __Vfunc_ALFOCalc__10__DATA = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q;
            vlSymsp->TOP__SCSPP_PKG.ALFOCalc__Vstatic__WAVE 
                = (0x000000ffU & ((2U & (IData)(__Vfunc_ALFOCalc__10__ALFOWS))
                                   ? ((1U & (IData)(__Vfunc_ALFOCalc__10__ALFOWS))
                                       ? (IData)(__Vfunc_ALFOCalc__10__NOISE)
                                       : (0x000000feU 
                                          & (((IData)(__Vfunc_ALFOCalc__10__DATA) 
                                              ^ (- (IData)(
                                                           (1U 
                                                            & ((IData)(__Vfunc_ALFOCalc__10__DATA) 
                                                               >> 7U))))) 
                                             << 1U)))
                                   : ((1U & (IData)(__Vfunc_ALFOCalc__10__ALFOWS))
                                       ? (- (IData)(
                                                    (1U 
                                                     & ((IData)(__Vfunc_ALFOCalc__10__DATA) 
                                                        >> 7U))))
                                       : (IData)(__Vfunc_ALFOCalc__10__DATA))));
            vlSymsp->TOP__SCSPP_PKG.ALFOCalc__Vstatic__RET 
                = ((0U != (IData)(__Vfunc_ALFOCalc__10__ALFOS))
                    ? ((0xfeU & (IData)(vlSymsp->TOP__SCSPP_PKG.ALFOCalc__Vstatic__WAVE)) 
                       >> (7U & (~ (IData)(__Vfunc_ALFOCalc__10__ALFOS))))
                    : 0U);
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_3__ALFOCalc 
                = vlSymsp->TOP__SCSPP_PKG.ALFOCalc__Vstatic__RET;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 
                = ((0x000003ffffffff00ULL & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5) 
                   | (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_3__ALFOCalc)));
            if (((0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                 >> 0x00000016U)) == 
                 (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR4) 
                                 >> 0x0000000bU)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_SGC 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_EG 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL) 
                                      >> 5U));
            }
        }
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WR) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WREN 
                = (0x0000000fU & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                     >> 2U)));
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 = 0ULL;
    }
}

void Vtb_sndram___024root___act_sequent__TOP__47(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__47\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT0_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_CURR 
                = (1U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP);
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_NEXT 
                = (1U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP);
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__WD_READ;
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
            if ((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCDTACK_N = 0U;
            }
        }
        if (((((~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N)) 
               & (IData)(vlSelfRef.tb_sndram__DOT__BDTEN_N)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__BADDT_N)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A 
                = ((0x00008000U & (IData)(vlSelfRef.tb_sndram__DOT__BDO))
                    ? ((0x000fff00U & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A) 
                       | (0x000000ffU & (IData)(vlSelfRef.tb_sndram__DOT__BDO)))
                    : ((0x000000ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A) 
                       | (0x000fff00U & ((IData)(vlSelfRef.tb_sndram__DOT__BDO) 
                                         << 8U))));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCDTACK_N)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCDTACK_N = 1U;
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_REQ) 
             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__WE_N))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RPEND = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RRDY = 0U;
        }
        if ((((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE)) 
             | (((0x10U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST)) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD)) 
                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_sndram__DOT__SCSP__DOT__A));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RRDY = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RPEND = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND = 0U;
        }
        if ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_REQ) 
              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__WE_N))) 
             & (~ (IData)(vlSelfRef.tb_sndram__DOT__BDTEN_N)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_D 
                = vlSelfRef.tb_sndram__DOT__BDO;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WE 
                = (3U & ((~ (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__WE_N)))) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DQM))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WRDY = 0U;
        }
        if (((((0x10U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST)) 
               & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE))) 
              | ((0x10U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST)) 
                 & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE)))) 
             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_sndram__DOT__SCSP__DOT__A));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WRDY = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 0U;
        }
        if ((((0x20U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST)) 
              | (0x20U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__IO_ST))) 
             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_RPEND = 0U;
        } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_RPEND) 
                     & (5U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) 
                    & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_RPEND = 0U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST)))) {
                                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST)))) {
                            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST)))) {
                        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST)))) {
                    if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST)))) {
                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST))) {
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WPEND;
                if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__WD_READ) 
                     & ((1U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                      >> 1U))) | (3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                                      >> 1U)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                        = (0x0003ffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP 
                                          >> 1U));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 2U;
                } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_READ) 
                             | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_WRITE)) 
                            & ((0U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                             >> 1U))) 
                               | (2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                               >> 1U)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE 
                        = (3U & (- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_WRITE) 
                                            & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG 
                                                  >> 0x12U))))));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_READ;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 2U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 4U;
                } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR)) 
                               ^ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_MA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D 
                        = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DAT) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7) 
                                                  >> 0x0000000eU))))));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE 
                        = (3U & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR))));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD 
                        = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 3U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 8U;
                } else if ((((~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__A 
                                 >> 0x13U)) & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RPEND)) 
                            & (4U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__A);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 4U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 0x10U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__A 
                                    >> 0x12U)));
                } else if (((~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__A 
                                >> 0x13U)) & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__A);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_D;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WE;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 0x10U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__A 
                                    >> 0x12U)));
                } else if ((IData)(((0U == (0x00780000U 
                                            & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WA)) 
                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WPEND)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_D;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WE;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WA 
                                    >> 0x12U)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 0x20U;
                } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_RPEND) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 5U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 0x20U;
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 0U;
                }
            }
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
            if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WD 
                    = vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q;
            } else if ((2U != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) {
                if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DAT 
                        = vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q;
                } else if ((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DO 
                        = vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q;
                }
            }
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST)))) {
                                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0U;
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST)))) {
                            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DO 
                                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_Q;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST)))) {
                        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DAT 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_Q;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST))) {
                    if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND 
                            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WPEND;
                        if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC) 
                             & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR) 
                                ^ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_RA;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D 
                                = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DAT) 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7) 
                                                     >> 0x0000000eU))))));
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE 
                                = (3U & (~ (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR)))));
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 8U;
                        } else if (((vlSelfRef.tb_sndram__DOT__SCSP__DOT__A 
                                     >> 0x13U) & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__A);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 0x10U;
                        } else if (((vlSelfRef.tb_sndram__DOT__SCSP__DOT__A 
                                     >> 0x13U) & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__A);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_D;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WE;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 0x10U;
                        } else if ((IData)(((0x00080000U 
                                             == (0x00780000U 
                                                 & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WA)) 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WPEND)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_D;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WE;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 0x20U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND 
                            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RPEND;
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__IO_ST))) {
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START) {
                if (((0U != (7U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WA 
                                   >> 0x14U))) & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WPEND))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__IO_ST = 0x20U;
                }
            }
        } else if ((0x20U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__IO_ST))) {
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__IO_ST = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCDTACK_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__IO_ST = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_RPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RRDY = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WRDY = 1U;
    }
}

void Vtb_sndram___024root___act_sequent__TOP__49(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__49\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*23:0*/ __Vfunc_DSPItoF__17__I;
    __Vfunc_DSPItoF__17__I = 0;
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH 
                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_SCR0) 
                         >> 4U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4 
                = ((0x000003ffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4) 
                   | (((0x0001fe00U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                       >> 6U)) | ((0x00000100U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                                      >> 5U)) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                                                        >> 0x00000017U)))) 
                      << 0x0000000aU));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4 
                = ((0x07fffc00U & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4) 
                   | ((0x000003f0U & ((((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                           >> 7U)) 
                                       + ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                                           << 0x0000000fU) 
                                          | (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                                             >> 0x00000011U))) 
                                      << 4U)) | ((0x0000000cU 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_SCR0) 
                                                     >> 5U)) 
                                                 | (3U 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_SCR0) 
                                                       >> 9U)))));
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV;
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START = 0U;
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START = 1U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_READ = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_WRITE = 0U;
            __Vfunc_DSPItoF__17__I = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SHFT_OUT;
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__SIGN 
                = (1U & (__Vfunc_DSPItoF__17__I >> 0x17U));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                = (0x007fffffU & (__Vfunc_DSPItoF__17__I 
                                  ^ (- (IData)((IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__SIGN)))));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__E1 
                = (0x0000000fU & (((0U != (0x0000000fU 
                                           & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                              >> 0x13U)))
                                    ? vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0
                                    : ((0U != (0x0000000fU 
                                               & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                                  >> 0x0fU)))
                                        ? (0x02000000U 
                                           | (0x007ffff0U 
                                              & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                                 << 4U)))
                                        : (0x04000000U 
                                           | (0x007fff00U 
                                              & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                                 << 8U))))) 
                                  >> 0x00000017U));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1 
                = (0x007fffffU & ((0U != (0x0000000fU 
                                          & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                             >> 0x13U)))
                                   ? vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0
                                   : ((0U != (0x0000000fU 
                                              & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                                 >> 0x0fU)))
                                       ? (0x02000000U 
                                          | (0x007ffff0U 
                                             & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                                << 4U)))
                                       : (0x04000000U 
                                          | (0x007fff00U 
                                             & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T0 
                                                << 8U))))));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__E2 
                = (0x0000000fU & (((0U != (3U & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1 
                                                 >> 0x15U)))
                                    ? vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1
                                    : (0x01000000U 
                                       | (0x007ffffcU 
                                          & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1 
                                             << 2U)))) 
                                  >> 0x00000017U));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2 
                = (0x007fffffU & ((0U != (3U & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1 
                                                >> 0x15U)))
                                   ? vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1
                                   : (0x01000000U | 
                                      (0x007ffffcU 
                                       & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T1 
                                          << 2U)))));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__E3 
                = (0x0000000fU & (((0x00400000U & vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2)
                                    ? vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2
                                    : ((0x00200000U 
                                        & vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2)
                                        ? (0x00800000U 
                                           | (0x007ffffeU 
                                              & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2 
                                                 << 1U)))
                                        : (0x01000000U 
                                           | (0x007ffffeU 
                                              & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2 
                                                 << 1U))))) 
                                  >> 0x00000017U));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T3 
                = (0x007fffffU & ((0x00400000U & vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2)
                                   ? vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2
                                   : ((0x00200000U 
                                       & vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2)
                                       ? (0x00800000U 
                                          | (0x007ffffeU 
                                             & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2 
                                                << 1U)))
                                       : (0x01000000U 
                                          | (0x007ffffeU 
                                             & (vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T2 
                                                << 1U))))));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__EXP 
                = (0x0000000fU & (((IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__E1) 
                                   + (IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__E2)) 
                                  + (IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__E3)));
            vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__MANT 
                = (0x000007ffU & ((vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__T3 
                                   >> 0x0bU) ^ (- (IData)((IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__SIGN)))));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_7__DSPItoF 
                = (((IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__SIGN) 
                    << 0x0000000fU) | (((IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__EXP) 
                                        << 0x0000000bU) 
                                       | (IData)(vlSymsp->TOP__SCSPP_PKG.DSPItoF__Vstatic__MANT)));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCond_8 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_7__DSPItoF;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCond_8;
        } else {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START = 0U;
        }
        if (((((~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N)) 
               & (IData)(vlSelfRef.tb_sndram__DOT__BDTEN_N)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__BADDT_N)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__BDO) 
                          >> 0x0fU)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WE_N 
                    = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__BDO) 
                             >> 0x0eU));
            }
            if ((0x00008000U & (IData)(vlSelfRef.tb_sndram__DOT__BDO))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DQM 
                    = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__BDO) 
                             >> 0x0cU));
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_READ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_WRITE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WE_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DQM = 3U;
    }
}

void Vtb_sndram___024root___act_sequent__TOP__51(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__51\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT__REV_OUT;
    tb_sndram__DOT__SCSP__DOT__REV_OUT = 0;
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT__F_SUB;
    tb_sndram__DOT__SCSP__DOT__F_SUB = 0;
    SData/*15:0*/ __Vfunc_MDCalc__4__X;
    __Vfunc_MDCalc__4__X = 0;
    SData/*15:0*/ __Vfunc_MDCalc__4__Y;
    __Vfunc_MDCalc__4__Y = 0;
    CData/*3:0*/ __Vfunc_MDCalc__4__MDL;
    __Vfunc_MDCalc__4__MDL = 0;
    SData/*15:0*/ __Vfunc_WaveMask__5__LEA;
    __Vfunc_WaveMask__5__LEA = 0;
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
            if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                              >> 1U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_SCR0 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0_Q;
            }
        }
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_LOOPEND 
            = (1U & (((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                     >> 0x00000021U)))
                       ? 0U : (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q))) 
                     >> 0x00000012U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP 
            = (1U & (((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                     >> 0x00000021U)))
                       ? 0U : (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q))) 
                     >> 0x00000011U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SADIR 
            = (1U & (((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                     >> 0x00000021U)))
                       ? 0U : (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q))) 
                     >> 0x00000010U));
        if ((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                           >> 0x00000021U)))) {
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SO = 0U;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
        } else {
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SO 
                = (0x0000ffffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC 
                = (0x00003fffU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 0x00000013U)));
        }
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP 
            = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COMP_X) 
                >= (0x0000ffffU & ((1U & ((~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                              >> 0x00000011U)) 
                                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)))
                                    ? (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                               >> 0x00000010U))
                                    : (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                               >> 0x00000020U))))) 
               & (0xffffU != (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__COMP_X)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW = 1U;
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 0U;
            if ((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                               >> 0x00000022U)))) {
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
            } else {
                if ((((0x03c0U <= (0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q))) 
                      & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR2) 
                            >> 0x0000000fU))) & (~ (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                            >> 0x00000021U))))) {
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW = 0U;
                } else {
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_LOOPEND;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SADIR;
                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SO;
                    if ((0x00000040U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0))) {
                        if ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0))) {
                            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SADIR) {
                                    if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                                        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                                    } else {
                                        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO 
                                            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W;
                                        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                    }
                                } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W;
                                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                            } else {
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO 
                                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W;
                            }
                        } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO 
                                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W;
                            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0))) {
                        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO 
                                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W;
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                        }
                    } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_LOOPEND)))) {
                            if (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED)))) {
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND = 1U;
                                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        }
                    } else if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP) {
                        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 1U;
                    }
                    if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND) {
                        vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    }
                }
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_INT 
                    = (0x000001ffU & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                       + (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                  >> 9U))) 
                                      >> 0x0000000eU));
                vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_FRAC 
                    = (0x00003fffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                      + (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                 >> 9U))));
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_SA 
                = ((0x000f0000U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                   << 0x00000010U)) 
                   | ((0x0000fffeU & ((IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                               >> 1U)) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q) 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                                       >> 4U)))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_PCM8B 
                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                         >> 4U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CALC_SO 
                = (0x0000ffffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO) 
                                  + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_INT)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM_D 
                = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND) 
                    << 0x00000012U) | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP) 
                                        << 0x00000011U) 
                                       | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                           << 0x00000010U) 
                                          | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CALC_SO))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                = ((0x00001fffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U]) 
                   | (0x007fffffU & (((0x000003fcU 
                                       & ((IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                   >> 0x00000020U)) 
                                          << 2U)) | 
                                      (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW) 
                                        << 1U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP))) 
                                     << 0x0000000dU)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                = ((0xff80007fU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U]) 
                   | (0x007fff80U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO) 
                                      ^ (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR)))) 
                                     << 7U)));
            __Vfunc_MDCalc__4__MDL = (0x0000000fU & (IData)(
                                                            (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                             >> 0x0000003cU)));
            __Vfunc_MDCalc__4__Y = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY;
            __Vfunc_MDCalc__4__X = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX;
            vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__TEMP 
                = (0x0001ffffU & (((0x00010000U & ((IData)(__Vfunc_MDCalc__4__X) 
                                                   << 1U)) 
                                   | (IData)(__Vfunc_MDCalc__4__X)) 
                                  + ((0x00010000U & 
                                      ((IData)(__Vfunc_MDCalc__4__Y) 
                                       << 1U)) | (IData)(__Vfunc_MDCalc__4__Y))));
            vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__OH 
                = (0x000007ffU & ((IData)(1U) << (0x0000000fU 
                                                  & ((IData)(__Vfunc_MDCalc__4__MDL) 
                                                     - (IData)(5U)))));
            vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__PM 
                = (0x07ffffffU & VL_MULS_III(27, (0x07ffffffU 
                                                  & VL_EXTENDS_II(27,16, 
                                                                  (0x0000ffffU 
                                                                   & (vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__TEMP 
                                                                      >> 1U)))), 
                                             (0x07ffffffU 
                                              & VL_EXTENDS_II(27,12, (IData)(vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__OH)))));
            vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__M 
                = (0x0000ffffU & (vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__PM 
                                  >> 5U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_0__MDCalc 
                = ((4U < (IData)(__Vfunc_MDCalc__4__MDL))
                    ? ((0x003e0000U & ((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__M) 
                                                      >> 0x0fU)))) 
                                       << 0x00000011U)) 
                       | ((IData)(vlSymsp->TOP__SCSPP_PKG.MDCalc__Vstatic__M) 
                          << 1U)) : 0U);
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                = ((0x0001ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U]) 
                   | (vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_0__MDCalc 
                      << 0x00000011U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                = ((0xffffff80U & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U]) 
                   | (vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_0__MDCalc 
                      >> 0x0000000fU));
            __Vfunc_WaveMask__5__LEA = (0x0000ffffU 
                                        & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                   >> 0x00000020U)));
            vlSymsp->TOP__SCSPP_PKG.WaveMask__Vstatic__RET = 0x0001ffffU;
            if ((0x00000400U & (IData)(__Vfunc_WaveMask__5__LEA))) {
                vlSymsp->TOP__SCSPP_PKG.WaveMask__Vstatic__RET = 0x000003ffU;
            }
            if ((0x00000200U & (IData)(__Vfunc_WaveMask__5__LEA))) {
                vlSymsp->TOP__SCSPP_PKG.WaveMask__Vstatic__RET = 0x000001ffU;
            }
            if ((0x00000100U & (IData)(__Vfunc_WaveMask__5__LEA))) {
                vlSymsp->TOP__SCSPP_PKG.WaveMask__Vstatic__RET = 0x000000ffU;
            }
            if ((0x00000080U & (IData)(__Vfunc_WaveMask__5__LEA))) {
                vlSymsp->TOP__SCSPP_PKG.WaveMask__Vstatic__RET = 0x0000007fU;
            }
            vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_1__WaveMask 
                = vlSymsp->TOP__SCSPP_PKG.WaveMask__Vstatic__RET;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                = ((0xfffe0000U & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U]) 
                   | (0x0001ffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT____VlemCall_1__WaveMask 
                                     | (- (IData)((1U 
                                                   & (~ (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                 >> 8U)))))))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                = ((0x7fffffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U]) 
                   | (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                       ^ (- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                     & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                        >> 6U))))) 
                      << 0x0000001fU));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                = ((0x007fe000U & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U]) 
                   | (0x00001fffU & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                      ^ (- (IData)(
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                                       >> 6U))))) 
                                     >> 1U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                = ((0x807fffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U]) 
                   | (0x7f800000U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2) 
                                     << 0x00000017U)));
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WD_READ = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_FRAC;
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WD_READ = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D = 0U;
            }
            if (((0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                         >> 0x00000023U))) 
                 == (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR4) 
                                    >> 0x0000000bU)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_CA 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW)
                        ? (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO) 
                                          >> 0x0cU))
                        : 0U);
            }
        }
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT0_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT 
                = (0x00003fffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                  ^ (- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                                   >> 6U))))));
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_h) 
                | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ind) 
                   | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_dr) 
                      | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_dw) 
                         | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_l) 
                            | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_d1) 
                               | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_d0) 
                                  | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ra) 
                                     | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_wa) 
                                        | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_w0) 
                                           | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK) 
                                              | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_w3)))))))))))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__BDO = 
                (0x0000ffffU & (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_h))) 
                                 & (((0x0000000fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61)) 
                                     << 0x0000000eU) 
                                    | (0x00000fffU 
                                       & (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                  [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                  >> 0x00000030U))))) 
                                | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ind))) 
                                    & (0x00007000U 
                                       | (0x00000fffU 
                                          & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA 
                                             >> 9U)))) 
                                   | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_dr))) 
                                       & (0x00007000U 
                                          | (0x00000fffU 
                                             & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                                >> 9U)))) 
                                      | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_dw))) 
                                          & ((0x00003000U 
                                              & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE))) 
                                                 << 0x0000000cU)) 
                                             | (0x00000fffU 
                                                & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                   >> 9U)))) 
                                         | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_l))) 
                                             & (0x00008000U 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62)
                                                    ? 
                                                   ((0x00003000U 
                                                     & (((3U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84))
                                                          ? (IData)(
                                                                    (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                                     [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                                     >> 3U))
                                                          : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84)) 
                                                        << 0x0000000cU)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                                  [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                                  >> 0x00000028U))))
                                                    : 
                                                   ((0x000000feU 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                                 [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                                 >> 0x00000029U)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_A1))))) 
                                            | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_d1))) 
                                                & (IData)(
                                                          (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                           [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                           >> 0x00000017U))) 
                                               | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_d0))) 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                              [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                              >> 7U))) 
                                                  | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ra))) 
                                                      & (0x00008000U 
                                                         | (0x000000ffU 
                                                            & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)
                                                                ? 
                                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA 
                                                                >> 1U)
                                                                : 
                                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                                                >> 1U))))) 
                                                     | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_wa))) 
                                                         & (0x00008000U 
                                                            | ((((1U 
                                                                  & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA)
                                                                  ? 2U
                                                                  : 
                                                                 (1U 
                                                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28))))) 
                                                                << 0x0000000cU) 
                                                               | (0x000000ffU 
                                                                  & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                                     >> 1U))))) 
                                                        | ((0x00000fffU 
                                                            & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_w0))) 
                                                               & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                                  >> 9U))) 
                                                           | (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__f_w3))) 
                                                               & (0x00003000U 
                                                                  | (0x00000fffU 
                                                                     & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                                        >> 9U)))) 
                                                              | ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK))) 
                                                                 & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ
                                                                             [
                                                                             (3U 
                                                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS))]) 
                                                                     << 8U) 
                                                                    | ((1U 
                                                                        & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA)
                                                                        ? vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ
                                                                       [
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS))]
                                                                        : vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ
                                                                       [
                                                                       (3U 
                                                                        & ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS)))])))))))))))))));
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_SCR0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WD_READ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__BDO = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W = (0x0007ffffU 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                                >> 0x00000021U))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = (1U 
                                                 & ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                                     >> 0x00000010U) 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                                       >> 6U)));
    tb_sndram__DOT__SCSP__DOT__REV_OUT = (IData)(((~ 
                                                   (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                                    >> 0x00000011U)) 
                                                  & (0x0040U 
                                                     == 
                                                     (0x0060U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0)))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__COMP_X = (0x0000ffffU 
                                                   & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                                      ^ 
                                                      (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)))));
    tb_sndram__DOT__SCSP__DOT__F_SUB = ((IData)(((~ 
                                                  (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                                   >> 0x00000010U)) 
                                                 & (0x0060U 
                                                    == 
                                                    (0x0060U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0))))) 
                                        | (IData)(tb_sndram__DOT__SCSP__DOT__REV_OUT));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W = (0x0000ffffU 
                                                & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                                   + 
                                                   ((((3U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                                           >> 5U)))
                                                       ? 
                                                      (0x0000fffeU 
                                                       & (((0x00010000U 
                                                            & vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W)
                                                            ? (IData)(
                                                                      (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                                       >> 0x00000010U))
                                                            : (IData)(
                                                                      (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                                       >> 0x00000020U))) 
                                                          << 1U))
                                                       : 
                                                      ((IData)(
                                                               (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                                >> 0x00000010U)) 
                                                       + 
                                                       ((1U 
                                                         & (~ (IData)(tb_sndram__DOT__SCSP__DOT__REV_OUT))) 
                                                        + 
                                                        ((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(tb_sndram__DOT__SCSP__DOT__REV_OUT))))) 
                                                         ^ (IData)(
                                                                   (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                                    >> 0x00000020U)))))) 
                                                     ^ 
                                                     (- (IData)((IData)(tb_sndram__DOT__SCSP__DOT__F_SUB)))) 
                                                    + (IData)(tb_sndram__DOT__SCSP__DOT__F_SUB))));
}

void Vtb_sndram___024root___act_sequent__TOP__55(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__55\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg];
            if ((0U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                              >> 1U)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR2 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2_Q;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR0 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0_Q;
            }
            if ((0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                              >> 1U)))) {
                if ((2U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    if ((3U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY 
                            = ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA))
                                ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1_Q)
                                : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0_Q));
                    }
                }
                if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX 
                        = ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA))
                            ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1_Q)
                            : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0_Q));
                }
            }
        }
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CA_INNER 
            = (0x01ffffffU & (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                                      [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                                      >> 0x00000027U)));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CDQMN_INNER 
            = (0x0000000fU & (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                                      [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                                      >> 3U)));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER 
            = (1U & (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                             [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                             >> 2U)));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS1N_INNER 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_63;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS2N_INNER 
            = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS]));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER 
            = (0x01ffffffU & (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                      [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                      >> 0x00000027U)));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CDQMN_INNER 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_61;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CRDN_INNER 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_62;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CCS2N_INNER 
            = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS]));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_SEL_INNER 
            = (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS1N_INNER)) 
                | ((0x19U > (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CA_INNER 
                                            >> 0x14U))) 
                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS2N_INNER)))) 
               & vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL
               [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS]);
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_SEL_INNER 
            = ((((0x01a0U <= (0x000001ffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER 
                                             >> 0x10U))) 
                 & (0x01feU > (0x000001ffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER 
                                              >> 0x10U)))) 
                & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CCS2N_INNER))) 
               & vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL
               [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS]);
        if ((((vlSelfRef.tb_sndram__DOT__SCU__DOT__DSTA 
               >> 0x00000014U) & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 0U;
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_DONE = 0U;
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RW) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 1U;
            }
            if (((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RW) 
                   & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                         >> 8U))) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL
                                               [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS]))) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT))) {
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS;
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS)));
            } else if ((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RW) 
                           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                              >> 8U)) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[0U]))) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[1U]))) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT))) {
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS;
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS)));
            }
            if ((((vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL
                   [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND))) 
                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ))) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_SEL_INNER;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND = 1U;
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR) 
                 & vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL
                 [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS])) {
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS;
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2 = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0U;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS)));
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RW) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 1U;
            }
            if (((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RW) 
                   & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                         >> 8U))) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL
                                               [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS]))) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT))) {
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS;
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS)));
            } else if ((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RW) 
                           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                              >> 8U)) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[0U]))) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[1U]))) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT))) {
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS;
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS)));
            }
            if ((((vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL
                   [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND))) 
                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ))) 
                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT)))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_SEL_INNER;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND = 1U;
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR) 
                 & vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL
                 [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS])) {
                vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2 
                    = vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS;
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2 = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CRDN_INNER)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0U;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS 
                    = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS)));
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_PEND = 0U;
            if (((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_FACT[0U] 
                  & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] 
                     >> 8U)) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U])))) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v0 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                    = (0x00000020U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
            }
            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v0 = 1U;
            if (((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_FACT[1U] 
                  & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] 
                     >> 8U)) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U])))) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v1 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                    = (0x00000200U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
            }
            if (((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_FACT[2U] 
                  & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] 
                     >> 8U)) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[2U])))) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v2 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                    = (0x00002000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT)));
            if ((0x02eeU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 1U;
            }
        }
        if (((((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)) 
                   | (1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
                  | (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
                 | (3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
                | (4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
               | (5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
              | (6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
             | (7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)))) {
            if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 
                            = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CA_INNER 
                                     >> 1U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 2U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG 
                            = ((1U & ((~ (3U == (3U 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CDQMN_INNER) 
                                                    >> 2U)))) 
                                      | (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER)))) 
                               && (1U & ((((~ (3U == 
                                               (3U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CDQMN_INNER)))) 
                                           | (IData)(
                                                     (((0x01800000U 
                                                        == 
                                                        (0x01f80000U 
                                                         & vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CA_INNER)) 
                                                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS2N_INNER))) 
                                                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER))))) 
                                          | (((0x18U 
                                               > (0x0000001fU 
                                                  & (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CA_INNER 
                                                     >> 0x14U))) 
                                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS2N_INNER))) 
                                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER)))) 
                                         | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS1N_INNER)) 
                                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER))))));
                    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR))) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 
                            = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                     >> 1U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 5U;
                    } else if ((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR))) 
                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR))) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP))) 
                                & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                   | (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 
                            = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                     >> 1U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 5U;
                    } else if ((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A) 
                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR))) 
                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR))) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP))) 
                                & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                   | (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 
                            = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                     >> 1U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 8U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT))))) {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF 
                                = (0x0000ffffU | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF);
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF 
                                = (0xffff0000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF);
                            if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG)))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF 
                                    = (0x0000ffffU 
                                       | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF);
                            }
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 3U;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 1U;
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 4U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 0U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                  >> 2U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 6U;
                    }
                }
            } else if ((6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT))))) {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1) {
                            vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_DONE 
                                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF 
                                = (0x0000ffffU | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST 
                                = ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                          & (~ (0U 
                                                != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN))))
                                    ? 0x0aU : 7U);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS = 0U;
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF 
                                = (0xffff0000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 7U;
                        }
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 5U;
            }
        } else if ((8U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((1U & (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                            & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) 
                           | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST)) 
                              & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 0x0aU;
                } else if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                            & (((0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                              >> 1U))) 
                                | vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA) 
                               | ((~ (0U != (0x0007ffffU 
                                             & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                >> 1U)))) 
                                  & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 9U;
                }
            }
        } else if ((9U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT))))) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1) {
                        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_DONE 
                            = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST 
                            = ((1U & (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                       & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) 
                                      | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST)) 
                                         & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))))))
                                ? 0x0aU : 8U);
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS = 0U;
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 8U;
                    }
                }
            }
        } else if ((0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A)) 
                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 0U;
                }
            }
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 1U;
        if ((((vlSelfRef.tb_sndram__DOT__SCU__DOT__DSTA 
               >> 0x00000015U) & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START)) 
             & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START = 0U;
        }
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_DONE = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE = 0U;
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE = 0U;
        }
        if (((((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                   | (1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                  | (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                 | (9U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
               | (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
              | (0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
             | (0x0dU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) {
            if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 
                            = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER 
                                     >> 1U));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD 
                            = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CRDN_INNER)));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                            = (3U & (((2U & ((~ (3U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CDQMN_INNER) 
                                                     >> 2U)))) 
                                             << 1U)) 
                                      | (1U & (~ (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CDQMN_INNER)))))) 
                                     | (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CRDN_INNER)))))));
                        if ((0x00400000U & vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 2U;
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 5U;
                        }
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))) {
                        if ((1U == (3U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA 
                                          >> 0x15U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 0U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_POS = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD = 3U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x20U;
                    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B))) 
                                & ((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)) 
                                    | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A)) 
                                   | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)))) {
                        if ((1U == (3U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                          >> 0x15U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 0U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD = 3U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x20U;
                    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B))) 
                                & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                   & (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A))))) {
                        if ((1U == (3U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                          >> 0x15U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 0U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD = 3U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x23U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
                            = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD)
                                ? 0x15U : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))
                                            ? 9U : 0x0aU));
                    }
                }
            } else if ((9U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                        if ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0aU;
                        } else if ((0x00200000U & vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0dU;
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0bU;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                            = (1U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                    }
                }
            } else if ((0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                            = (2U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                        if ((0x00200000U & vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER)) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0dU;
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0bU;
                        }
                    }
                }
            } else if ((0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0cU;
                }
            } else if ((0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0dU;
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR)))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 1U;
                }
                vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0U;
            }
        } else if (((((((((0x15U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                          | (0x1aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                         | (3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                        | (4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                       | (5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                      | (6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                     | (7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                    | (8U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) {
            if ((0x15U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1aU;
                    }
                }
            } else if ((0x1aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF 
                            = ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))
                                ? ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF) 
                                   | ((IData)(vlSelfRef.tb_sndram__DOT__BDI) 
                                      << 0x00000010U))
                                : ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF) 
                                   | (IData)(vlSelfRef.tb_sndram__DOT__BDI)));
                        if ((IData)((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
                                = ((IData)((0x00600000U 
                                            == (0x00600000U 
                                                & vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER)))
                                    ? 0x1bU : 0x1cU);
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1dU;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                            = (1U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_22) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 4U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_22) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 6U;
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 3U;
                    }
                }
            } else if ((6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 7U;
                }
            } else if ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 8U;
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD)
                        ? 0x16U : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))
                                    ? 0x0eU : 0x10U));
            }
        } else if (((((((((0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                          | (0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                         | (0x10U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                        | (0x11U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                       | (0x12U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                      | (0x13U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                     | (0x14U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                    | (0x16U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) {
            if ((0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x0fU;
                }
            } else if ((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
                        = ((1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))
                            ? 0x10U : 0x12U);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                        = (1U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                }
            } else if ((0x10U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_22) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x11U;
                    }
                }
            } else if ((0x11U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                        = (2U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x12U;
                }
            } else if ((0x12U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x13U;
                }
            } else if ((0x13U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x14U;
                }
            } else if ((0x14U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0U;
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x17U;
            }
        } else if (((((((((0x17U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                          | (0x18U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                         | (0x19U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                        | (0x1bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                       | (0x1cU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                      | (0x1dU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                     | (0x1eU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                    | (0x1fU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) {
            if ((0x17U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_22) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x18U;
                    }
                }
            } else if ((0x18U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x19U;
                }
            } else if ((0x19U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF 
                        = ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))
                            ? ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF) 
                               | ((IData)(vlSelfRef.tb_sndram__DOT__BDI) 
                                  << 0x00000010U)) : 
                           ((0xffff0000U & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF) 
                            | (IData)(vlSelfRef.tb_sndram__DOT__BDI)));
                    if ((IData)((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1cU;
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1dU;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                        = (1U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                }
            } else if ((0x1bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1cU;
                }
            } else if ((0x1cU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
                        = ((0x00400000U & vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER)
                            ? 1U : 5U);
                }
            } else if ((0x1dU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1eU;
                }
            } else if ((0x1eU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x1fU;
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0U;
            }
        } else if (((((((((0x20U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                          | (0x21U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                         | (0x22U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                        | (0x23U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                       | (0x24U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                      | (0x25U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                     | (0x26U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                    | (0x27U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) {
            if ((0x20U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x21U;
                }
            } else if ((0x21U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x22U;
                    }
                }
            } else if ((0x22U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        if ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF) 
                                   | ((IData)(vlSelfRef.tb_sndram__DOT__BDI) 
                                      << 0x00000010U));
                            vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                                = (1U & (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                             >> 2U)))) {
                            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_POS 
                                    = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_POS)));
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF) 
                                       | (IData)(vlSelfRef.tb_sndram__DOT__BDI));
                                if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)))) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE = 1U;
                                }
                                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND) {
                                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE = 1U;
                                }
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS = 0U;
                            if ((1U & ((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))) 
                                        & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN))) 
                                       | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND) 
                                          & (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_POS)))))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x29U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD 
                                    = (2U | (IData)(vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD));
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS = 1U;
                            }
                        }
                    }
                }
            } else if ((0x23U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST 
                        = ((0x00400000U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA)
                            ? 0x26U : 0x24U);
                }
            } else if ((0x24U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x25U;
                }
            } else if ((0x25U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x26U;
                }
            } else if ((0x26U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 0U;
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                        if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                             & (((0U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                               >> 1U))) 
                                 | vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA) 
                                | ((~ (0U != (0x0007ffffU 
                                              & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                 >> 1U)))) 
                                   & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED 
                                = (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x27U;
                        }
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
                if ((1U & (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                            & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) 
                           | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST)) 
                              & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))))))) {
                    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_DONE 
                        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x29U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS = 0U;
                } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) {
                    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_DONE 
                        = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS = 0U;
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE) {
                        if ((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED) 
                                   | ((~ (0U != (0x0007ffffU 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                    >> 1U)))) 
                                      & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x23U;
                        } else if ((0xffU == (0x000000ffU 
                                              & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                 >> 1U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x28U;
                        } else if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                                    & ((0U != (3U & 
                                               ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                                >> 1U))) 
                                       | ((~ (0U != 
                                              (0x0007ffffU 
                                               & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                  >> 1U)))) 
                                          & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS = 1U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x23U;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED = 0U;
                }
            }
        } else if ((0x28U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0x23U;
            }
        } else if ((0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)) 
                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0U;
                }
            }
        }
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
                   | (1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
                  | (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
                 | (3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
                | (4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
               | (5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
              | (6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
             | (8U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)))) {
            if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))) 
                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR))) 
                            & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A)) 
                               | (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)))) 
                           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)) 
                              | (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) 
                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))) 
                         | ((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C) 
                                & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C))) 
                               & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR))) 
                              & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A)) 
                                 | (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)))) 
                             & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)) 
                                | (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) 
                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST 
                            = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)
                                ? 1U : 2U);
                    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 1U;
                    } else if ((1U & ((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                        & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C))) 
                                       & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))) 
                                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0x0bU;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START = 1U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 3U;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 4U;
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                                & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CCACHE_RADDR 
                            = (7U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                     >> 2U));
                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v0 = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 5U;
                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v1 = 1U;
                    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C) 
                                 & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))) 
                                & ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                     >> 2U) | (0U != 
                                               (3U 
                                                & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA))) 
                                   | ((~ (0U != (0x0003ffffU 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                    >> 2U)))) 
                                      & (0U != (3U 
                                                & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 8U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS)));
                        if ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0U;
                        }
                    }
                }
            } else if ((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL
                                      [(1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                                              >> 4U))])))) {
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS)));
                            if ((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND = 0U;
                            }
                        } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS)));
                            if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0U;
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND = 0U;
                            }
                        }
                        if ((3U == (3U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                                          >> 2U)))) {
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2 
                                = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                                         >> 4U));
                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2 = 1U;
                        }
                    }
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT) {
                        if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                   & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN))))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 6U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
                    if ((vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL
                         [(1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR) 
                                 >> 2U))] & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                                >> 2U)))) {
                        if (((3U == (3U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR))) 
                             & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                 & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD))) 
                                | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RADD))))) {
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3 
                                = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR) 
                                         >> 2U));
                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3 = 1U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CCACHE_RADDR 
                            = (7U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                     >> 2U));
                    }
                }
            } else if ((6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF) {
                        if ((IData)((0U != (0x00700000U 
                                            & vlSelfRef.tb_sndram__DOT__SCU__DOT__DSTA)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0x0aU;
                        }
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 7U;
            }
        } else if ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS)));
                    if ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND = 0U;
                    }
                } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS)));
                    if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND = 0U;
                    }
                } else if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                            & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                >> 2U) | (((~ (0U != 
                                               (0x0003ffffU 
                                                & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                   >> 2U)))) 
                                           & (0U != 
                                              (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) 
                                          & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                             >= (3U 
                                                 & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 8U;
                } else if ((1U & (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                   & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) 
                                  | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 9U;
                }
            }
        } else if ((9U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS)));
                if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0x0aU;
                }
            }
        } else if ((0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS)));
                if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0x0bU;
                }
            }
        } else if ((0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0x0cU;
                }
            }
        } else if ((0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0U;
                }
            }
        }
        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_END = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                   | (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
                  | ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                     || (4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))) 
                 | (5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
                | (1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
               | (6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
              | (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
             | ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                || (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))))) {
            if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0xffffffefU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0xfffffeffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0xffffefffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0xfffffffeU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U]) {
                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v3 = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RADD 
                            = (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_ADD));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WADD 
                            = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_ADD;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_DSP = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_CH = 3U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                            = (1U | (0xfffffffcU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA));
                    } else if (((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U] 
                                 | vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U]) 
                                | vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[2U])) {
                        vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX 
                            = (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U]
                                ? 0U : (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U]
                                         ? 1U : 2U));
                        vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4 
                            = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX;
                        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4 = 1U;
                        if ((0x01000000U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                             [((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX))
                                ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX)
                                : 0U)])) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 2U;
                        } else {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RADD 
                                = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD
                                         [((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX))
                                            ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX)
                                            : 0U)] 
                                         >> 8U));
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WADD 
                                = (7U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD
                                   [((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX))
                                      ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX)
                                      : 0U)]);
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_CH 
                            = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX;
                        if ((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX))) {
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0 
                                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0 = 1U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                            = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX))
                                ? (0x00000010U | (0xffffffcfU 
                                                  & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA))
                                : ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX))
                                    ? (0x00000100U 
                                       | (0xfffffcffU 
                                          & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA))
                                    : (0x00001000U 
                                       | (0xffffcfffU 
                                          & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA))));
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (((0x05a0U <= (0x000007ffU & 
                                      (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA 
                                       >> 0x10U))) 
                         & (0x05feU > (0x000007ffU 
                                       & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA 
                                          >> 0x10U))))) {
                        if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND_REG = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 3U;
                        }
                    } else if ((6U == (7U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA 
                                             >> 0x18U)))) {
                        if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND_REG = 0U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 4U;
                        }
                    }
                }
            } else if (((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                        || (4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))
                          ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE)
                          : (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_IND_DONE))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND_REG 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG)));
                        if ((2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RADD 
                                = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD
                                         [((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                                            ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)
                                            : 0U)] 
                                         >> 8U));
                            if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B = 0U;
                            } else {
                                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C = 0U;
                            }
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WADD 
                                = (7U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD
                                   [((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                                      ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)
                                      : 0U)]);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 5U;
                        }
                    }
                }
            } else if ((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
                         & (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RBA 
                        = (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE = 0U;
                    if (((0x20U <= (0x0000007fU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                                   >> 0x14U))) 
                         & (0x59U > (0x0000007fU & 
                                     (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                      >> 0x14U))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_A = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR = 0U;
                    } else if (((0x05a0U <= (0x000007ffU 
                                             & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                                >> 0x10U))) 
                                & (0x05feU > (0x000007ffU 
                                              & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                                 >> 0x10U))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR = 0U;
                    } else if ((6U == (7U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                                             >> 0x18U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR = 0U;
                    }
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x12U;
                    } else {
                        if (((0x20U <= (0x0000007fU 
                                        & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                           >> 0x14U))) 
                             & (0x59U > (0x0000007fU 
                                         & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                            >> 0x14U))))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_A = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 0U;
                        } else if (((0x05a0U <= (0x000007ffU 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                    >> 0x10U))) 
                                    & (0x05feU > (0x000007ffU 
                                                  & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                     >> 0x10U))))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_B = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 0U;
                        } else if ((6U == (7U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                 >> 0x18U)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_C = 1U;
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 0U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 6U;
                    }
                }
            } else if ((6U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR = 0U;
                    if ((((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR) 
                            | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR)) 
                           | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                              & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A))) 
                          | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B))) 
                         | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B))) {
                        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                                = (0x00300000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 7U;
                        }
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))) {
                        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                                = (0x00100000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 8U;
                        }
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))) {
                        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                                = (0x00200000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 9U;
                        }
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A))) {
                        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                                = (0x00100000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x0aU;
                        }
                    } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B))) {
                        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                                = (0x00200000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x0bU;
                        }
                    }
                }
            } else if ((0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
                            = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                                     + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)));
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
                            = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                     - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)));
                    }
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_DONE) {
                        if ((1U & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                        }
                    }
                }
            } else if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
                        = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                                 + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
                        = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                 - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)));
                }
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_DONE) {
                    if ((1U & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                    }
                }
            }
        } else if (((8U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                    || (9U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
                        = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                                 + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
                        = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                 - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)));
                }
                if ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                    if ((1U & (~ (0U != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                    }
                }
            }
        } else if ((0x12U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0x00100000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x0cU;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0x00400000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0x00600000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x0dU;
                } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0x00400000U | vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x0eU;
                }
            }
        } else if ((((0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                     || (0x0dU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
                    || (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DMA_END) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                }
            }
        } else if (((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                    || (0x10U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_DONE) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST) 
                         & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_LAST = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                    }
                }
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
                        = (7U & ((IData)(2U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
                        = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                 - (IData)(2U)));
                }
                if ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) {
                    if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST) 
                         & (~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_LAST = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0x13U;
                    }
                }
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
                        = (7U & ((IData)(4U) + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
                        = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                 - (IData)(4U)));
                }
            }
        } else if ((0x13U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) {
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                if ((((((((((((((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A)) 
                                 & (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                               & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
                              | (((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)) 
                                   & (0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A)) 
                                 & (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)))) 
                             | (((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)) 
                                  & (0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))) 
                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                                & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)))) 
                            | (((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)) 
                                 & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A)) 
                               & (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)))) 
                           | (((((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)) 
                                & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)) 
                              & (0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) 
                          | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR))) 
                         | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A)) 
                            & (0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)))) 
                        | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)) 
                           & (0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) 
                       | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)) 
                          & (0x29U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)))) 
                      | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                          & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                         & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)))) 
                     | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)) 
                        & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST))))) {
                    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_END = 1U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_A = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_A = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_B = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_C = 0U;
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA 
                        = (0xff8fffffU & vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA);
                    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_DSP = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DMA_END = 0U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0U;
                    } else if ((1U & (((~ (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                           [((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                                              ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)
                                              : 0U)] 
                                           >> 0x00000018U)) 
                                       | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_EC)) 
                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR)))) {
                        if ((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))) {
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1 
                                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1 = 1U;
                        }
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0U;
                        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_PEND = 1U;
                        } else if ((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))) {
                            vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3 
                                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH;
                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3 = 1U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 1U;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 2U;
                    }
                }
            }
        }
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_ACK) 
                  | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_ACK)) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_READ_ACK))) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) {
                    if ((1U & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD) 
                                >> 1U) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_HOLD))))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DR 
                            = (0x01ffffffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA_NEW 
                                              >> 2U));
                    }
                }
            }
            if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK) 
                  | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK)) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK))) {
                if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) {
                    if (((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD)) 
                         & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_HOLD)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DW 
                            = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DMA_END)
                                ? vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DW
                                : vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA_NEW);
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_END) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP))) {
                if ((1U & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD) 
                               >> 1U)) & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_HOLD))))) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DR 
                        = (0x01ffffffU & ((IData)(1U) 
                                          + vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DR));
                }
            }
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                              >> 5U)))) {
                    if ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                        if ((8U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A)))) {
                                        if ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI)) {
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v2 = 1U;
                                            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0U;
                                            vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v3 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))) {
            if (vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RD) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS 
                    = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS) 
                             + ((IData)(4U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA))));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
                    = (7U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                             + ((IData)(4U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA))));
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RBA = 0U;
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q = 0ULL;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR2 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR0 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[0U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[0U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[1U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[1U] = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_CH = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v5 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_DSP = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v5 = 1U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_PEND = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_A = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_A = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_B = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_C = 0U;
        vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v6 = 1U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2_Q 
        = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA)))
            ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM
           [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA))]
            : 0U);
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0_Q 
        = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA)))
            ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM
           [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA))]
            : 0U);
    if ((0U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA = 0U;
    } else if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                             >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA 
            = (0x0000003fU & ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RGEN) 
                                << 5U) | (0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                     >> 0x00000023U)))) 
                              + (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                         >> 0x00000036U))));
    } else if ((3U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                             >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA 
            = (0x0000003fU & ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RGEN) 
                                << 5U) | (0x0000001fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                     >> 0x00000023U)))) 
                              + (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                         >> 0x00000030U))));
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD)
                           ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)
                           : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA)));
}

void Vtb_sndram___024root___act_sequent__TOP__59(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___act_sequent__TOP__59\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sndram__DOT__RST_N) {
        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ind) 
             & (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_EC 
                = (vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D 
                   >> 0x1fU);
        }
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WR) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WDI 
                = (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1);
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_A 
                = (0x0000003fU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000022U)));
        }
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RD) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_A 
                = (0x0000003fU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                          >> 0x00000022U)));
        }
        if ((((0x0aU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK)) 
             | ((((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                  | (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK)) 
                | (((8U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                    | (9U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK))))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_NEXT;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ind) 
                    & (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN 
                = (0x000fffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D);
        } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ich) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH];
        }
        if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RW;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RW;
        }
        if ((((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_dack)) 
             & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA_NEW;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ind) 
                    & (1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA 
                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D);
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_i3) 
                    | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ich))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL;
        }
        if ((((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_rack)) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)
                 ? (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD))
                 : (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RADD)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA_NEW;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ind) 
                    & (2U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA 
                = (0x07ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D);
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_i3) 
                    | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ich))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DRSEL;
        }
        if ((((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_rack)) 
             & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_NEXT;
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ind) 
                    & (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN 
                = (0x000fffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D);
        } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ich) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM
                [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH];
        }
        if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE) 
                | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_IND_DONE)))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA_NEW;
        } else if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77) 
                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79))) {
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IA 
                = (0x07fffffcU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL);
        }
    } else {
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_EC = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN = 0U;
        vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IA = 0U;
    }
}

void Vtb_sndram___024root___act_sequent__TOP__0(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___act_sequent__TOP__3(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___act_sequent__TOP__4(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___act_sequent__TOP__11(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___act_sequent__TOP__13(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___act_sequent__TOP__17(Vtb_sndram___024root* vlSelf);
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_h2047061a_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb_sndram__ConstPool__TABLE_h29f06150_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_sndram__ConstPool__TABLE_hf6dfdf03_0;

void Vtb_sndram___024root___eval_body__act(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_body__act\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        Vtb_sndram___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__1
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_col__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v4 = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__fc 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__fc;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__icnt 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__icnt;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__i_wait;
            vlSelfRef.__Vdly__tb_sndram__DOT__init_done 
                = vlSelfRef.tb_sndram__DOT__init_done;
            vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scsp_drop 
                = vlSelfRef.tb_sndram__DOT__dbg_scsp_drop;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_addr 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_t0 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_t0;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_rd_p;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_din 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_din;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_be 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_be;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cyc 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_row__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v1 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v2 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v3 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v4 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v5 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v6 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v1 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v2 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v3 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v4 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v5 = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v1 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v2 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v3 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v4 = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__dl_wi 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_tv 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_tv;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_tk 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_tk;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_ti 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_ti;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v8 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_d__v0 = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_RAM_Q 
                = vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v0 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v1 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v2 = 0U;
            vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v3 = 0U;
            vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap 
                = vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cn 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__cn;
            vlSelfRef.__Vdly__tb_sndram__DOT__dout_b1 
                = vlSelfRef.tb_sndram__DOT__dout_b1;
            vlSelfRef.__Vdly__tb_sndram__DOT__dout_a1 
                = vlSelfRef.tb_sndram__DOT__dout_a1;
            vlSelfRef.__Vdly__tb_sndram__DOT__dout_b0 
                = vlSelfRef.tb_sndram__DOT__dout_b0;
            vlSelfRef.__Vdly__tb_sndram__DOT__dout_a0 
                = vlSelfRef.tb_sndram__DOT__dout_a0;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_o 
                = vlSelfRef.tb_sndram__DOT__dram_dq_o;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_ba 
                = vlSelfRef.tb_sndram__DOT__dram_ba;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_dqm 
                = vlSelfRef.tb_sndram__DOT__dram_dqm;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_oe 
                = vlSelfRef.tb_sndram__DOT__dram_dq_oe;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_a 
                = vlSelfRef.tb_sndram__DOT__dram_a;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_ras_n 
                = vlSelfRef.tb_sndram__DOT__dram_ras_n;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_cas_n 
                = vlSelfRef.tb_sndram__DOT__dram_cas_n;
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_we_n 
                = vlSelfRef.tb_sndram__DOT__dram_we_n;
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__2
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q) 
                              != (IData)(vlSelfRef.tb_sndram__DOT__ram_q_o))))) {
                VL_WRITEF_NX("%0t RAM  Q=%04h\n",3, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',16,(IData)(vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q));
            }
            if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_RD) 
                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS)) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__old_rd)))))) {
                VL_WRITEF_NX("%0t RAM  RD A=%05h\n",3, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',19,(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_A 
                                       << 1U));
            }
            if (VL_UNLIKELY((((0U != ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE) 
                                      & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS))))) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__old_wr)))))) {
                VL_WRITEF_NX("%0t RAM  WR A=%05h D=%04h WE=%b\n",5, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',19,(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_A 
                                       << 1U), '#',16,(IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_D)
                             , '#',2,vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE);
            }
            if ((0U == (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc))) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_col__v0 = 1U;
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v0 = 1U;
            }
            if (vlSelfRef.tb_sndram__DOT__init) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v4 = 1U;
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cn = 0U;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__fc 
                = (((IData)(vlSelfRef.tb_sndram__DOT__dot_ce_r) 
                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__sync_old)))
                    ? 7U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__fc))));
            if (vlSelfRef.tb_sndram__DOT__init_done) {
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_o 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_dq;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_ba 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_ba;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_dqm 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_dqm;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_a 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_a;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_ras_n 
                    = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__q_cmd) 
                             >> 2U));
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_cas_n 
                    = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__q_cmd) 
                             >> 1U));
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_we_n 
                    = (1U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__q_cmd));
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_o = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_ba = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_dqm = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_a 
                    = vlSelfRef.tb_sndram__DOT__sdram__DOT__i_a;
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_ras_n 
                    = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_cmd) 
                             >> 2U));
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_cas_n 
                    = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_cmd) 
                             >> 1U));
                vlSelfRef.__Vdly__tb_sndram__DOT__dram_we_n 
                    = (1U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__i_cmd));
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_oe 
                = ((IData)(vlSelfRef.tb_sndram__DOT__init_done) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__q_oe));
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        Vtb_sndram___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x000000000000003fULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__5
            vlSelfRef.tb_sndram__DOT__model__DOT__t_cmd_ch 
                = VL_TIME_UNITED_Q(1);
            if (VL_UNLIKELY((((0x00000000000003e8ULL 
                               > ((QData)(VL_TIME_UNITED_Q(1)) 
                                  - vlSelfRef.tb_sndram__DOT__model__DOT__t_clk_rise)) 
                              & (0ULL != vlSelfRef.tb_sndram__DOT__model__DOT__t_clk_rise))))) {
                vlSelfRef.tb_sndram__DOT__m_err = ((IData)(1U) 
                                                   + vlSelfRef.tb_sndram__DOT__m_err);
                VL_WRITEF_NX("%0t SDRAM: command hold violation (%0d ps)\n",3, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',64,((QData)(VL_TIME_UNITED_Q(1)) 
                                       - vlSelfRef.tb_sndram__DOT__model__DOT__t_clk_rise));
            }
        }
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__6
            vlSelfRef.tb_sndram__DOT__model__DOT__t_clk_rise 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if ((0x0000000000040100ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_comb__TOP__0
            vlSelfRef.tb_sndram__DOT__dram_clk = (1U 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cn)
                                                      ? (IData)(vlSelfRef.tb_sndram__DOT__clk_ram)
                                                      : 
                                                     (~ (IData)(vlSelfRef.tb_sndram__DOT__clk_ram))));
        }
    }
    if ((0x0000000000000140ULL & vlSelfRef.__VactTriggered[1U])) {
        {
            // Inlined CFunc: _act_comb__TOP__1
            vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en 
                = (((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1) 
                    | (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2)) 
                   & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))));
            vlSelfRef.tb_sndram__DOT__dq = (((IData)(vlSelfRef.tb_sndram__DOT__o_d) 
                                             & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__oe_d)))) 
                                            | ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))) 
                                               & ((((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out1) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1)) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out2) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2))) 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en))));
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__7
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q;
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__8
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cap_n 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__cap_n;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__9
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q;
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__10
            vlSelfRef.__Vdly__tb_sndram__DOT__ram_q_o 
                = vlSelfRef.tb_sndram__DOT__ram_q_o;
            vlSelfRef.__Vdly__tb_sndram__DOT__old_wr 
                = vlSelfRef.tb_sndram__DOT__old_wr;
            vlSelfRef.__Vdly__tb_sndram__DOT__old_rd 
                = vlSelfRef.tb_sndram__DOT__old_rd;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sync_old 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__sync_old;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_dq 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_dq;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_ba 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_ba;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_dqm 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_dqm;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_oe 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_oe;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_a 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__i_a;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_a 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_a;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__i_cmd;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_cmd 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__q_cmd;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__12
            vlSelfRef.__Vdly__tb_sndram__DOT__cs2_o 
                = vlSelfRef.tb_sndram__DOT__cs2_o;
            vlSelfRef.__Vdly__tb_sndram__DOT__brdy_o 
                = vlSelfRef.tb_sndram__DOT__brdy_o;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_2X_CE 
                = vlSelfRef.tb_sndram__DOT__SCSP_2X_CE;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        Vtb_sndram___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__14
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_A_RDADDR];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM
                [(1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                        >> 2U))];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM
                [(IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                           >> 2U) ^ (2U < (3U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS)))))];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM
                [(IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                           >> 2U) ^ (1U < (3U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS)))))];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM
                [(IData)((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS) 
                           >> 2U) ^ (0U < (3U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS)))))];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem
                [vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem
                [vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem
                [vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem
                [vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__RAD];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem
                [(0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                 >> 4U))];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem
                [(7U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED) 
                        >> 1U))];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem
                [(0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                 >> 1U))];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem
                [(0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                 >> 8U))];
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__15
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cap_n 
                = vlSelfRef.tb_sndram__DOT__dram_dq_i;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__16
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem
                [(0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                 >> 4U))];
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem
                [(0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                 >> 4U))];
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__17(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__18
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__19
            vlSelfRef.__Vdly__tb_sndram__DOT__cs2_o 
                = Vtb_sndram__ConstPool__TABLE_h2047061a_0
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_10];
            vlSelfRef.__Vdly__tb_sndram__DOT__brdy_o 
                = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_2X_CE 
                = vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__ev;
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__EV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2;
            }
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__20(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__21
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_RD;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_A;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_D;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR6 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR6;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR5 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR5;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CKS 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FICR 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FICR;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVF 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR;
        }
    }
    if ((2ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__22
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__old_rd 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__old_rd;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__old_wr 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__old_wr;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cs 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__cs;
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__23
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem
                [((4U & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV) 
                             >> (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B))) 
                         << 2U)) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B))];
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__24
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2;
            vlSelfRef.__Vdly__tb_sndram__DOT__CIRL_N 
                = vlSelfRef.tb_sndram__DOT__CIRL_N;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__25
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q;
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__26
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__27(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__28
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__old_rd 
                = vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_rd;
            vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__old_wr 
                = (0U != (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_wr));
            if (vlSelfRef.tb_sndram__DOT__init) {
                vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cs 
                    = (7U & vlSelfRef.tb_sndram__DOT__CAPV);
            }
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__29
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__EV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1;
            }
            if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk6__DOT__INT_LVL 
                    = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_INT)
                        ? 0x0fU : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_INT)
                                    ? 0x0eU : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_INT)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT)
                                                    ? 0x0cU
                                                    : 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT)
                                                     ? 0x0bU
                                                     : 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_INT)
                                                      ? 0x0aU
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_INT)
                                                       ? 9U
                                                       : 
                                                      ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_INT)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_INT)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__)
                                                           ? 6U
                                                           : 
                                                          ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__)
                                                            ? 5U
                                                            : 
                                                           ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_INT)
                                                             ? 3U
                                                             : 
                                                            ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_INT)
                                                              ? 2U
                                                              : 0U))))))))))))));
                vlSelfRef.__Vdly__tb_sndram__DOT__CIRL_N 
                    = (0x0000000fU & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk6__DOT__INT_LVL)));
            }
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__30
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_2____pinNumber6) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem
                    [vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg];
            }
        }
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__31
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem
                [((4U & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                             & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV) 
                                >> (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_A)))) 
                         << 2U)) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_A))];
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__32
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__33
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT1 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT1;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IRQV_N_OLD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__T0C;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__34
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE 
                = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ)
                    ? 0x0000000cU : (0x0000000fU & 
                                     ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP) 
                                        > ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_SCI)
                                            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP)
                                            : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__M4))) 
                                       & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ICI_IRQ) 
                                          | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF) 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER)) 
                                             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__intc__FRT_OCI_IRQ))))
                                       ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ICI_IRQ)
                                           ? 3U : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__intc__FRT_OCI_IRQ)
                                                    ? 2U
                                                    : 1U))
                                       : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_SCI)
                                           ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ERI_IRQ)
                                               ? 5U
                                               : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RXI_IRQ)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__TXI_IRQ)
                                                    ? 7U
                                                    : 6U)))
                                           : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_WDT)
                                               ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF)
                                                   ? 9U
                                                   : 8U)
                                               : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DMAC)
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                                                        >> 1U)))
                                                    ? 0x0aU
                                                    : 0x0bU)
                                                   : 
                                                  ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DIVU))) 
                                                   | (0x0eU 
                                                      & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_IRL)))))))))));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg 
                = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                          >> 0x0000001dU)));
            if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__EV) {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1 
                    = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0;
            }
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__35
            CData/*2:0*/ __Vinline_0__act_sequent__TOP__35___Vtableidx9;
            __Vinline_0__act_sequent__TOP__35___Vtableidx9 = 0;
            if (vlSelfRef.tb_sndram__DOT__RST_N) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD 
                        = (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR)));
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD 
                        = ((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR))) 
                           && (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ));
                    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG = 0U;
                    } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR) {
                        if ((1U & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
                                    if ((1U & (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) {
                                        vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG 
                                            = (1U & 
                                               (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                                                >> 0x0fU));
                                    }
                                }
                            }
                        }
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD 
                        = (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD);
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) {
                    if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                        if ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ) 
                              & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD))) 
                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY))) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME = 1U;
                        }
                        if (vlSelfRef.tb_sndram__DOT__MSH__DOT__WDT_OVF) {
                            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME = 0U;
                        }
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME = 0U;
                }
                if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_EN) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV 
                        = ((IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV) 
                           | (0x0fU & ((IData)(1U) 
                                       << (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_ADDR))));
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV = 0U;
            }
            __Vinline_0__act_sequent__TOP__35___Vtableidx9 
                = (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                    << 2U) | (3U & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__RST_N)))));
            if ((0U != (2U & Vtb_sndram__ConstPool__TABLE_h29f06150_0
                        [__Vinline_0__act_sequent__TOP__35___Vtableidx9]))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IRQV_N_OLD 
                    = Vtb_sndram__ConstPool__TABLE_hf6dfdf03_0
                    [__Vinline_0__act_sequent__TOP__35___Vtableidx9];
            }
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__36
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TIER 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6;
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__37(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__38
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WREN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__39(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__40
            vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__RES_SYNC_N 
                = vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR2 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR6 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR6;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD0 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD0;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD1 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD1;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__41
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__42
            if (vlSelfRef.tb_sndram__DOT__RST_N) {
                if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__RES_SYNC_N = 1U;
                }
                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE) {
                    if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR2 
                            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2_Q;
                        vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR6 
                            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6_Q;
                    }
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg];
                }
                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_4____pinNumber6) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q 
                        = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg];
                }
                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV 
                        = (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                          >> 0x0000000aU));
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD0 
                        = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__WD_READ)
                            ? ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_SCR0))
                                ? ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP0_CURR)
                                    ? (0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD) 
                                          << 8U)) : 
                                   (0x0000ff00U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD)))
                                : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD))
                            : 0U);
                }
                if (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT0_CE) {
                    vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD1 
                        = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH)
                            ? ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH)
                                ? ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP0_NEXT)
                                    ? (0x0000ff00U 
                                       & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD) 
                                          << 8U)) : 
                                   (0x0000ff00U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD)))
                                : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD))
                            : 0U);
                }
            } else {
                vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__RES_SYNC_N = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR2 = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR6 = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD0 = 0U;
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD1 = 0U;
            }
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__43
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_4____pinNumber6) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem
                    [vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg];
            }
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__44
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__45
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_CURR 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP0_CURR;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_NEXT 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP0_NEXT;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WD 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__46
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__47(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__48
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_READ 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_READ;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_WRITE 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_WRITE;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WD_READ 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__WD_READ;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WE_N 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__WE_N;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DQM 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__DQM;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__49(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__50
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_SCR0 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_SCR0;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[0U];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[1U];
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U];
            vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N 
                = vlSelfRef.tb_sndram__DOT__BADDT_N;
            vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N 
                = vlSelfRef.tb_sndram__DOT__BCSS_N;
            vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N 
                = vlSelfRef.tb_sndram__DOT__BDTEN_N;
            vlSelfRef.__Vdly__tb_sndram__DOT__BDO = vlSelfRef.tb_sndram__DOT__BDO;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__51(vlSelf);
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__52
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__53
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR2 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR2;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR0 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_A1;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__54
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                         >> 0x00000023U)))];
            if (vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_2____pinNumber6) {
                vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q 
                    = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem
                    [vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg];
            }
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__55(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__56
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg 
                = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__57
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_EC 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_EC;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WDI 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_A 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN;
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IA 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__58
            vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg 
                = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                          >> 0x00000023U)));
            vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF = 1U;
        }
    }
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sndram___024root___act_sequent__TOP__59(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[2U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__60
            vlSelfRef.__Vdly__tb_sndram__DOT__RST_N 
                = vlSelfRef.tb_sndram__DOT__RST_N;
        }
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        {
            // Inlined CFunc: _act_sequent__TOP__61
            if (((0x0000012cU < vlSelfRef.tb_sndram__DOT__cyc) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__init_done))) {
                vlSelfRef.__Vdly__tb_sndram__DOT__RST_N = 1U;
            }
        }
    }
}

void Vtb_sndram___024root___nba_sequent__TOP__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___nba_sequent__TOP__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6;
    tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_113;
    __VdfgRegularize_hebeb780c_0_113 = 0;
    // Body
    vlSelfRef.tb_sndram__DOT__cyc = vlSelfRef.__Vdly__tb_sndram__DOT__cyc;
    vlSelfRef.tb_sndram__DOT__brdy_o = vlSelfRef.__Vdly__tb_sndram__DOT__brdy_o;
    vlSelfRef.tb_sndram__DOT__cs2_o = vlSelfRef.__Vdly__tb_sndram__DOT__cs2_o;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0;
    }
    vlSelfRef.tb_sndram__DOT__ce_ph = vlSelfRef.__Vdly__tb_sndram__DOT__ce_ph;
    vlSelfRef.tb_sndram__DOT__dot_div = vlSelfRef.__Vdly__tb_sndram__DOT__dot_div;
    vlSelfRef.tb_sndram__DOT__CIRL_N = vlSelfRef.__Vdly__tb_sndram__DOT__CIRL_N;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0x0000003ffff80000ULL & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x000000000007ffffULL & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 0x00000013U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0x0000003ffff80000ULL & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x000000000007ffffULL & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 0x00000013U));
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0;
    }
    vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_CEGen__DOT__sum;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0] 
            = ((0xff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1] 
            = ((0x00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SWC9 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SWC9;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__wramh__v0) {
        vlSelfRef.tb_sndram__DOT__wramh[vlSelfRef.__VdlyDim0__tb_sndram__DOT__wramh__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__wramh__v0;
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CLK_DIV = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CLK_DIV;
    vlSelfRef.tb_sndram__DOT__SCSP_DIV = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DIV;
    vlSelfRef.tb_sndram__DOT__SCSP_2X_CE = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_2X_CE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CYCLE_NUM;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE;
    vlSelfRef.tb_sndram__DOT__RST_N = vlSelfRef.__Vdly__tb_sndram__DOT__RST_N;
    vlSelfRef.tb_sndram__DOT__MCLK_DIV = vlSelfRef.__Vdly__tb_sndram__DOT__MCLK_DIV;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U];
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U] 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U];
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U] 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U];
    vlSelfRef.tb_sndram__DOT__dot_ce_r = ((IData)(vlSelfRef.tb_sndram__DOT__ce_ph) 
                                          & (3U == (IData)(vlSelfRef.tb_sndram__DOT__dot_div)));
    vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__nxt 
        = (0x07ffffffU & ((IData)(0x02b11000U) + vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum));
    vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__ev = 
        ((0x07ffffffU & ((IData)(0x02b11000U) + vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum)) 
         >= vlSelfRef.tb_sndram__DOT__in_clk);
    vlSelfRef.tb_sndram__DOT__SCSP_CE = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP_2X_CE) 
                                         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP_DIV));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__RST_N));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV));
    __VdfgRegularize_hebeb780c_0_113 = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CLK_DIV) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP_CE));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_113));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
           & (IData)(__VdfgRegularize_hebeb780c_0_113));
    tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT0_CE = (IData)(
                                                            ((2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE = (IData)(
                                                            ((6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_4____pinNumber6 
        = (IData)(((4U == (6U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                   & (IData)(tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_2____pinNumber6 
        = (IData)(((0U == (6U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                   & (IData)(tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6)));
}

void Vtb_sndram___024root___nba_sequent__TOP__1(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___nba_sequent__TOP__1\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_sndram__DOT__old_rd = vlSelfRef.__Vdly__tb_sndram__DOT__old_rd;
    vlSelfRef.tb_sndram__DOT__old_wr = vlSelfRef.__Vdly__tb_sndram__DOT__old_wr;
    vlSelfRef.tb_sndram__DOT__ram_q_o = vlSelfRef.__Vdly__tb_sndram__DOT__ram_q_o;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sync_old 
        = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sync_old;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__fc = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__fc;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__i_cmd = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__i_a = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_a;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__icnt = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__icnt;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__i_step = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_step;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__i_wait = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__i_wait;
    vlSelfRef.tb_sndram__DOT__init_done = vlSelfRef.__Vdly__tb_sndram__DOT__init_done;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__old_wr = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__old_wr;
    vlSelfRef.tb_sndram__DOT__dbg_scsp_drop = vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scsp_drop;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_addr = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_addr;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_t0 = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_t0;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_rd_p = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_wr_p = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_din = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_din;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sc_be = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__sc_be;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__cyc = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cyc;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__v_act = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__v_act;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_wi = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__dl_wi;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_cmd = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_cmd;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_a = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_a;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_ba = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_ba;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_dqm = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_dqm;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_dq = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_dq;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_oe = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_oe;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_tv = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_tv;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_tk = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_tk;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_ti = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__q_ti;
    vlSelfRef.tb_sndram__DOT__dout_b1 = vlSelfRef.__Vdly__tb_sndram__DOT__dout_b1;
    vlSelfRef.tb_sndram__DOT__dout_a1 = vlSelfRef.__Vdly__tb_sndram__DOT__dout_a1;
    vlSelfRef.tb_sndram__DOT__dout_b0 = vlSelfRef.__Vdly__tb_sndram__DOT__dout_b0;
    vlSelfRef.tb_sndram__DOT__dout_a0 = vlSelfRef.__Vdly__tb_sndram__DOT__dout_a0;
    vlSelfRef.tb_sndram__DOT__SCSP_RAM_Q = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_RAM_Q;
    vlSelfRef.tb_sndram__DOT__dbg_scrub_wrap = vlSelfRef.__Vdly__tb_sndram__DOT__dbg_scrub_wrap;
    vlSelfRef.tb_sndram__DOT__dram_dq_o = vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_o;
    vlSelfRef.tb_sndram__DOT__dram_a = vlSelfRef.__Vdly__tb_sndram__DOT__dram_a;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_col__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_col[3U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__sdram__DOT__old_rd = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__old_rd;
    vlSelfRef.tb_sndram__DOT__dram_ras_n = vlSelfRef.__Vdly__tb_sndram__DOT__dram_ras_n;
    vlSelfRef.tb_sndram__DOT__dram_cas_n = vlSelfRef.__Vdly__tb_sndram__DOT__dram_cas_n;
    vlSelfRef.tb_sndram__DOT__dram_we_n = vlSelfRef.__Vdly__tb_sndram__DOT__dram_we_n;
    vlSelfRef.tb_sndram__DOT__dram_ba = vlSelfRef.__Vdly__tb_sndram__DOT__dram_ba;
    vlSelfRef.tb_sndram__DOT__dram_dqm = vlSelfRef.__Vdly__tb_sndram__DOT__dram_dqm;
    vlSelfRef.tb_sndram__DOT__dram_dq_oe = vlSelfRef.__Vdly__tb_sndram__DOT__dram_dq_oe;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v4) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[0U] = 3U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[1U] = 3U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[2U] = 3U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_mode[3U] = 3U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_wr[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__s_wr__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v1) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[0U] = 1U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_wr[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v4) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_wr[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__s_wr__v2;
    }
    vlSelfRef.tb_sndram__DOT__sdram__DOT__cn = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cn;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__cs = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cs;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__v_row__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v1;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_ld[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v0] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_t0[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_t0__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_t0__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_v__v0] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v1) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_ld[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v1] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_t0[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_t0__v1] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_t0__v1;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_v__v1] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_d__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_d[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_d__v0] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_d__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_ld[vlSelfRef.__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v2] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v2) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v3) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v4) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v5) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_dum[1U] = 1U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_wr[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v2) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v3) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v4) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v1) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v1;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v2) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v3) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr_q[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v3;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v1;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v2;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v3;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[4U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v4;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[5U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v5;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[6U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v6;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_k[7U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v7;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v1;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v2;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v3;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[4U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v4;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[5U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v5;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[6U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v6;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_i[7U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v7;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v0;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v1;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v2;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v3;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[4U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v4;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[5U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v5;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[6U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v6;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[7U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v7;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v6) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v0) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v1) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v2;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__v_row[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v3;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v1;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v2) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v3) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v3;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v4) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v4;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v5) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v5;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v6) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v8) {
        vlSelfRef.tb_sndram__DOT__sdram__DOT__s_act[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__dl_v[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[3U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[4U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[5U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[6U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__t_v[7U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__sdram__DOT__scr[3U] = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_hd11fe979_0;

void Vtb_sndram___024root___nba_sequent__TOP__2(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___nba_sequent__TOP__2\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0;
    tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0 = 0;
    CData/*4:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_3__AddrToWay;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res;
    tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY;
    tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL;
    tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL;
    tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__intc__DOT__M1;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M1 = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__intc__DOT__M2;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M2 = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__intc__DOT__M3;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M3 = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__mult__DOT__ACC;
    tb_sndram__DOT__MSH__DOT__mult__DOT__ACC = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__mult__DOT__RL;
    tb_sndram__DOT__MSH__DOT__mult__DOT__RL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__mult__DOT__RH;
    tb_sndram__DOT__MSH__DOT__mult__DOT__RH = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__mult__DOT__W32;
    tb_sndram__DOT__MSH__DOT__mult__DOT__W32 = 0;
    CData/*2:0*/ tb_sndram__DOT__SCU__DOT__DMA_RTN_OFFS;
    tb_sndram__DOT__SCU__DOT__DMA_RTN_OFFS = 0;
    CData/*2:0*/ tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS;
    tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS = 0;
    CData/*5:0*/ __Vfunc_EffRateCalc__6__Vfuncout;
    __Vfunc_EffRateCalc__6__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateCalc__6__RATE;
    __Vfunc_EffRateCalc__6__RATE = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__6__KRS;
    __Vfunc_EffRateCalc__6__KRS = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__6__OCT;
    __Vfunc_EffRateCalc__6__OCT = 0;
    CData/*3:0*/ __Vfunc_EffRateBit__7__Vfuncout;
    __Vfunc_EffRateBit__7__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateBit__7__ERATE;
    __Vfunc_EffRateBit__7__ERATE = 0;
    IData/*23:0*/ __Vfunc_DSPShifter__15__Vfuncout;
    __Vfunc_DSPShifter__15__Vfuncout = 0;
    IData/*25:0*/ __Vfunc_DSPShifter__15__A;
    __Vfunc_DSPShifter__15__A = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__22__a;
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__22__a = 0;
    CData/*3:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__Vfuncout;
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__a;
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__a = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_92;
    __VdfgRegularize_hebeb780c_0_92 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_104;
    __VdfgRegularize_hebeb780c_0_104 = 0;
    CData/*4:0*/ TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__RES;
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__RES = 0;
    CData/*5:0*/ TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP;
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP = 0;
    CData/*3:0*/ TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE;
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE = 0;
    CData/*5:0*/ TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP2;
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 = 0;
    CData/*4:0*/ TOP__SCSPP_PKG__DOT__EffRateBit__Vstatic__TEMP;
    TOP__SCSPP_PKG__DOT__EffRateBit__Vstatic__TEMP = 0;
    IData/*25:0*/ TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP;
    TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP = 0;
    IData/*23:0*/ TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__RES;
    TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__RES = 0;
    // Body
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR5 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR5;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP1_SCR6 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR6;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_PEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM_D 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KYONEX_RUN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_RUN;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__NOISE = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__NOISE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_D 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR2 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR2;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM_D = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__WD_READ = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WD_READ;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_CA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_CA;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_SCR0 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_SCR0;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP0_CURR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_CURR;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP0_NEXT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_NEXT;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD1 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD1;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_WD0 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD0;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR6 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR6;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP5 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP5;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_SGC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_SGC;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MONITOR_EG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_EG;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_READ = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_READ;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_WRITE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_WRITE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__TMR_CE = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_MA = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_RA = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_LEN = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DIR = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DIR;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_WR = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_EXEC = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DQM = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DQM;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__WE_N = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__WE_N;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCDTACK_N 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCDTACK_N;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__A = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__A;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_D = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WE = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_RPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_RPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_A = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_D = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCPU_WPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WD = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__DMA_DAT = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DAT;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__IO_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__IO_ST;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR15 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR15;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR13 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR13;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR2 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR2;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR14 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR14;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR6 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR6;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR3 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR3;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR16 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR16;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR19 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR19;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR18 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR18;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR12 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR12;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR10 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR10;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR9 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR9;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR8 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR8;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR7 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR7;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_Q = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR4 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR4;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR11 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR11;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR17 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR17;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR5 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR5;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR1 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR1;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CR0 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__CR0;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK16_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK16_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2048_CE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2048_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SLP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F5 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F5;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__WDT_OVF = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FICR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FICR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_LVL = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVECF_LVL;
    vlSelfRef.tb_sndram__DOT__BDO = vlSelfRef.__Vdly__tb_sndram__DOT__BDO;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_EC = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_EC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_BE = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_BE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DSTA = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSTA;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RFS = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_A1 = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT;
    vlSelfRef.tb_sndram__DOT__BDTEN_N = vlSelfRef.__Vdly__tb_sndram__DOT__BDTEN_N;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RADD = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RADD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DMA_END 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DMA_END;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBREQ = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBREQ;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1 = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0 = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_PEND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IMS = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IMS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IST = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IST;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__VBIN_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__INT_SET = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__VBOUT_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__HBIN_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__SCSP_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__SM_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__SM_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__PAD_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__PAD_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMAIL_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__VDP1_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__EXT_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__EXT_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WDI = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WDI;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WREN = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WREN;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__T0C = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T0C;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__T1S = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1S;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__T1MD = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__T1MD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR0 = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR0;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ASR1 = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ASR1;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__AREF = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__AREF;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__RSEL = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__RSEL;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT1 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT1;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT2 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT2;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v0) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_EXTS[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_EXTS[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v2) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_EXTS[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__DSP_EXTS[1U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP 
        = (((IData)(vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP) 
            & (IData)(vlSelfRef.__VdlyMask__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP)) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP) 
              & (~ (IData)(vlSelfRef.__VdlyMask__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))));
    vlSelfRef.__VdlyMask__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_RD = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD;
    vlSelfRef.tb_sndram__DOT__SCSP_DO = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v5) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[0U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP_SA = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_SA;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP_PCM8B 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_PCM8B;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v2) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v4) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[1U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__BREQ_N = vlSelfRef.__Vdly__tb_sndram__DOT__BREQ_N;
    vlSelfRef.tb_sndram__DOT__BADDT_N = vlSelfRef.__Vdly__tb_sndram__DOT__BADDT_N;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DR = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DW = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DW;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v3) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v4) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[1U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MDEC_CT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK32_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK32_CE;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v3) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v4) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[0U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CKS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IRQV_N_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v5) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[0U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM0_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__TM1_INT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_WAIT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_WAIT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RWAIT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_RWAIT;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__MEM_WAIT = vlSelfRef.__Vdly__tb_sndram__DOT__DCC__DOT__MEM_WAIT;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TIER;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TEI 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TEI;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CRD_N_OLD = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CRD_N_OLD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DC = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DW = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DW;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DR = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CW_DR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT_CNT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT_CNT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1 = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RGEN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_RGEN;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SFT_REG = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SFT_REG;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK2_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK64_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK64_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK256_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK256_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK512_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK512_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK1024_CE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK1024_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4096_CE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK4096_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8192_CE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK8192_CE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[0U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[1U] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v4) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[1U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__PW 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2] 
            = vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v7) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[0U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TXI 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TXI;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__RXI 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__RXI;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__ERI 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__ERI;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_POS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_POS;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP6;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_WGEN 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_WGEN;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RBA;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK128_CE = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__CLK128_CE;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U] 
            = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U] 
            = (0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v2) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v3));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v4) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U] 
            = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v5) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U] 
            = (0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v6) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v6) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v7) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v7));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v8) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U] 
            = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v9) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U] 
            = (0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v10) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v10) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v11) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v11));
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ZF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__ZF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F4 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F4;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F3 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F3;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_DO = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_DO;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_DO = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__REG_A;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] 
            = (0xfffffffeU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U]);
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] 
            = (0xfffffffeU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U]);
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] 
            = (0xfffffffeU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] 
            = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v4) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] 
            = (0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v5) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v6) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v6));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v7) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] 
            = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v8) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] 
            = (0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v9) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v10) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v10));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v11) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] 
            = (0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v12) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] 
            = (0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v13) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v14) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v14));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v15) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__RST;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SLOT;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_A;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SAT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SAT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND_REG;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_BUF = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IA;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBRLS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__CC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[0U] = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[0U];
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[1U] = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[1U];
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP3[2U];
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CCACHE_RADDR;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__TF;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_A;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCNT;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR2;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR5 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR5;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vV 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[vlSelfRef.__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v5) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v6) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RUN[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__SCR;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR0;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_B;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IIVECF_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_WR_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IWE_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MB 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MB;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_C;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__H;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_LAST;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__STATE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SND;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WADD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP4;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SX;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_CH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 = ((vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP2 
                                                 & vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2) 
                                                | (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                   & (~ vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2)));
    vlSelfRef.__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2 = 0ULL;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA;
    vlSelfRef.tb_sndram__DOT__BCSS_N = vlSelfRef.__Vdly__tb_sndram__DOT__BCSS_N;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RRDY = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RRDY;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WRDY = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WRDY;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IA = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IA;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IDO = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IDO;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v0) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U] 
            = ((0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v0) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v1) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U] 
            = ((0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v1) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v2) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v2) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v3) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v3));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v4) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U] 
            = ((0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v4) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v5) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U] 
            = ((0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v5) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v6) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v6) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v7) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v7));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v8) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U] 
            = ((0x00ffffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v8) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v9) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U] 
            = ((0xff00ffffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v9) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v10) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U] 
            = ((0xffff00ffU & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v10) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v11) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U] 
            = ((0xffffff00U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v11));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v12) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DAD[2U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__RES_SYNC_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__OP7;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP;
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0] 
            = (2U | vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
               [vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1] 
            = (2U | vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
               [vlSelfRef.__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
            = ((3U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U]) 
               | (vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v3) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
            = (0xfffffffdU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
            = ((0xfffffffeU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
            = ((3U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U]) 
               | (vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v1) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
            = (0xfffffffdU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U]);
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
            = ((0xfffffffeU & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7));
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v8) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v9) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[1U] = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_DSP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IBS_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS0_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS1_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS2_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS3_N = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__INIT;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M0 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M1 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__MSBY_SBY;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VBR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VBR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__GBR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__GBR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VB 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILSI 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILSI;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SR;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE 
        = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_INC 
        = (0x0001ffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC)));
    vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_wr = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS))));
    vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_rd = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_RD) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ICI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
                                                      >> 6U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__intc__FRT_OCI_IRQ 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
               >> 2U)) | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB) 
                          & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
                             >> 1U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__EQA 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC) 
           == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCR 
        = ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR))
            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB)
            : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA));
    __Vfunc_DSPShifter__15__A = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SFT_REG;
    TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP 
        = __Vfunc_DSPShifter__15__A;
    TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__RES = 
        (((~ (TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP 
              >> 0x19U)) & (0U != (3U & (TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                         >> 0x17U))))
          ? 0x007fffffU : (((TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                             >> 0x19U) & (3U != (3U 
                                                 & (TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                                    >> 0x17U))))
                            ? 0x00800000U : (0x00ffffffU 
                                             & TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__TEMP)));
    __Vfunc_DSPShifter__15__Vfuncout = TOP__SCSPP_PKG__DOT__DSPShifter__Vstatic__RES;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SHFT_OUT = __Vfunc_DSPShifter__15__Vfuncout;
    vlSelfRef.tb_sndram__DOT__CWAIT_N = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT) 
                                                  | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_WAIT) 
                                                     | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) 
                                                        | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RWAIT) 
                                                           | (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__MEM_WAIT)))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__kk 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA) 
                          + (3U & (- (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS)))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__kk 
        = (0x0000000fU & ((3U & ((IData)(1U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS))) 
                          + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__kk 
        = (0x0000000fU & ((3U & ((IData)(2U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS))) 
                          + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__kk 
        = (0x0000000fU & ((3U & ((IData)(3U) - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS))) 
                          + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RBA)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WT_CE 
        = ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
            ? ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
                ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
                    ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8192_CE)
                    : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK4096_CE))
                : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
                    ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK1024_CE)
                    : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK512_CE)))
            : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
                ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
                    ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK256_CE)
                    : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK128_CE))
                : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS))
                    ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK64_CE)
                    : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK2_CE))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_117 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND) 
                                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA_NEW 
        = (0x07ffffffU & ((IData)(4U) + vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_74 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D = (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF 
                                                 & (- (IData)(
                                                              (3U 
                                                               == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_91 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_64 = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL
                                                              [
                                                              (1U 
                                                               & (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                                                                  >> 4U))])));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH 
        = (3U & ((- (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U])) 
                 | ((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U]
                      ? 1U : 2U) & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U]))))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ERI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__ERI) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                                                      >> 6U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__RXI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__RXI) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                                                      >> 6U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__TXI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TXI) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                                                      >> 7U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN 
        = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MA 
            ^ vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MB) 
           >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_76 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
        = (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
           & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE))) 
                          | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA) 
                             & (- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE) 
                                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((4U 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                 ? 0x2eU
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                  ? 0x2eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                   ? 0x2eU
                                                   : 0x33U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__data 
        = (0x0000003fffffffffULL & (((QData)((IData)(
                                                     (0x0007ffffU 
                                                      & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE)
                                                          ? 
                                                         (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                                          >> 8U)
                                                          : 
                                                         ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                                           >> 8U) 
                                                          & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE)))))))) 
                                     << 0x00000013U) 
                                    | (QData)((IData)(
                                                      (0x0007ffffU 
                                                       & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE)
                                                           ? 
                                                          (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                                           >> 8U)
                                                           : 
                                                          ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                                                            >> 8U) 
                                                           & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE))))))))));
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_1 
            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                     >> 8U));
    } else {
        vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__20__way 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__Vstatic__res 
            = ((1U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__20__way))
                ? 0U : ((2U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__20__way))
                         ? 1U : ((4U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__20__way))
                                  ? 2U : ((8U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__20__way))
                                           ? 3U : 0U))));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_0__WayToAddr 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__Vstatic__res;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_1 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_0__WayToAddr;
    }
    tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_1;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE 
        = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT) 
            ^ ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT) 
               - (IData)(1U))) & (1U ^ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCNT)));
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE 
        = (0x0000001fU & ((0x00000800U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                           ? ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                               ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2)
                               : ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q) 
                                  >> 0x0000000bU)) : 
                          ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))
                            ? ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q) 
                               >> 6U) : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q))));
    if ((IData)(((0x0c00U == (0x0c00U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))) 
                 & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                    >> 0x00000014U)))) {
        tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q));
    } else if (((3U != (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q) 
                              >> 0x0000000aU))) & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                                   >> 0x00000013U))) {
        tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2));
    }
    __Vfunc_EffRateCalc__6__OCT = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR5) 
                                                  >> 0x0000000bU));
    __Vfunc_EffRateCalc__6__KRS = (0x0000000fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4_SCR2) 
                                                  >> 0x0000000aU));
    __Vfunc_EffRateCalc__6__RATE = tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE;
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__6__KRS) 
                          + ((0x00000020U & ((IData)(__Vfunc_EffRateCalc__6__OCT) 
                                             << 2U)) 
                             | ((0x00000010U & ((IData)(__Vfunc_EffRateCalc__6__OCT) 
                                                << 1U)) 
                                | (IData)(__Vfunc_EffRateCalc__6__OCT)))));
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE 
        = ((0x0fU == (IData)(__Vfunc_EffRateCalc__6__KRS))
            ? 0U : ((0x00000020U & (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                     ? 0U : ((0x00000010U & (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                              ? 0x0000000fU : (0x0000000fU 
                                               & (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP)))));
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__6__RATE) 
                          + (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE)));
    TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__RES 
        = ((0x00000020U & (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP2))
            ? 0x0000001fU : (0x0000001fU & (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)));
    __Vfunc_EffRateCalc__6__Vfuncout = ((0x00000020U 
                                         & (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)) 
                                        | (IData)(TOP__SCSPP_PKG__DOT__EffRateCalc__Vstatic__RES));
    tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0 
        = __Vfunc_EffRateCalc__6__Vfuncout;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_OVR 
        = (1U & ((IData)(tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0) 
                 >> 5U));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE = 
        (0x0000001fU & (IData)(tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0));
    __Vfunc_EffRateBit__7__ERATE = vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE;
    TOP__SCSPP_PKG__DOT__EffRateBit__Vstatic__TEMP 
        = (0x0000001fU & ((IData)(0x18U) - ((0x18U 
                                             < (IData)(__Vfunc_EffRateBit__7__ERATE))
                                             ? 0x18U
                                             : (IData)(__Vfunc_EffRateBit__7__ERATE))));
    __Vfunc_EffRateBit__7__Vfuncout = (0x0000000fU 
                                       & ((IData)(TOP__SCSPP_PKG__DOT__EffRateBit__Vstatic__TEMP) 
                                          >> 1U));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT 
        = __Vfunc_EffRateBit__7__Vfuncout;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__ENV_STEP = 
        ((1U & (~ ((0U == (IData)(tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE)) 
                   | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_OVR) 
                      & (0U == (0x0c00U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q))))))) 
         && (((0x18U > (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE))
              ? (((0x0eU >= (0x0000000fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)))) 
                  && (1U & ((IData)(tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                            >> (0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)))))) 
                 | ((0x0eU >= (0x0000000fU & ((IData)(2U) 
                                              + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)))) 
                    && (1U & ((IData)(tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                              >> (0x0000000fU & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)))))))
              : ((0x0eU >= (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT)) 
                 && (1U & ((IData)(tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                           >> (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT))))));
    tb_sndram__DOT__MSH__DOT__mult__DOT__ACC = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC) 
                                                | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_WA = (3U 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT)
                                                     ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_INIT_CNT)
                                                     : 
                                                    (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DR) 
                                                      | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DW) 
                                                         | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_DC)))
                                                      ? 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                                                      >> 3U)
                                                      : (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX) 
           ^ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE = (
                                                   (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD)) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__HALF 
        = ((0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)) 
           | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)));
    vlSelfRef.tb_sndram__DOT__BDI = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP_DO) 
                                     & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_REQ = 
        (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__BCSS_N) 
                  | ((IData)(vlSelfRef.tb_sndram__DOT__BADDT_N) 
                     | (IData)(vlSelfRef.tb_sndram__DOT__BREQ_N)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_86 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                                                 & (3U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RRDY) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WRDY));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT 
        = (0x00ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T
                          [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                          - (IData)(1U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_A 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH) 
            << 1U) | (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_FACT[0U] 
        = ((4U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U])
            ? ((2U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U])
                ? ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
                   && (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[0U]))
                : ((1U & (~ vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U])) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT)))
            : ((2U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U])
                ? ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT))
                : ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[0U]) 
                   && (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_FACT[1U] 
        = ((4U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U])
            ? ((2U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U])
                ? ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
                   && (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[1U]))
                : ((1U & (~ vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U])) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT)))
            : ((2U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U])
                ? ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT))
                : ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[1U]) 
                   && (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_FACT[2U] 
        = ((4U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U])
            ? ((2U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U])
                ? ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
                   && (1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DEN[2U]))
                : ((1U & (~ vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U])) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM1_INT)))
            : ((2U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U])
                ? ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
                   && (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__TM0_INT))
                : ((1U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD[2U]) 
                   && (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IRQV_N_OLD))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_71 = (1U 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                                    [
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH) 
                                                     & (- (IData)(
                                                                  (2U 
                                                                   >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)))))] 
                                                    >> 8U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_72 = (1U 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                                    [
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH) 
                                                     & (- (IData)(
                                                                  (2U 
                                                                   >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)))))] 
                                                    >> 0x00000018U));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD = 
        ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
           << 0x00000010U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)) 
         & (- (IData)((1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                >> 0x00000013U))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
         & (- (IData)((1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                >> 0x00000013U))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_D = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST) 
                                                                   | ((IData)(
                                                                              (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                               >> 0x00000022U)) 
                                                                      | ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                                                          >> 0x00000015U) 
                                                                         | ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                                                             >> 0x00000013U) 
                                                                            | (IData)(
                                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                                                                >> 0x0000001cU)))))))))));
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__22__a 
        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                 >> 6U));
    tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res 
        = (0x0000000fU & (0x8421U >> ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__22__a) 
                                      << 2U)));
    tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_3__AddrToWay 
        = tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_WE 
        = (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE))) 
            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY)) 
           | ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE))) 
              & (IData)(tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_3__AddrToWay)));
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__a 
        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                 >> 6U));
    tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res 
        = (0x0000000fU & (0x8421U >> ((IData)(__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__a) 
                                      << 2U)));
    __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__Vfuncout 
        = tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ADDRWAY 
        = __Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__23__Vfuncout;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[0U] 
        = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U]));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[1U] 
        = (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR 
                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U]));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[0U] 
        = (IData)(((0U == (6U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR)) 
                   & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                         >> 1U))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[1U] 
        = (IData)(((0U == (6U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR)) 
                   & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                         >> 1U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = (3U 
                                                 & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                    [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                                    >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = (3U 
                                                 & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                    [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                                    >> 0x0000000eU));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS 
        = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                 [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                 >> 0x0000000aU));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE 
        = ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD)) 
           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
              >> 0x00000016U));
    tb_sndram__DOT__SCU__DOT__DMA_RTN_OFFS = 0U;
    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC = 4U;
    } else if ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)) 
                | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C))) {
        tb_sndram__DOT__SCU__DOT__DMA_RTN_OFFS = (7U 
                                                  & (0x029cU 
                                                     >> 
                                                     ((IData)(3U) 
                                                      * 
                                                      (3U 
                                                       & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA))));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC 
            = tb_sndram__DOT__SCU__DOT__DMA_RTN_OFFS;
        if ((1U & (~ (0U != (0x0003ffffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN 
                                            >> 2U)))))) {
            if ((0U != (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN))) {
                if (((0U != (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN)) 
                     & ((3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN) 
                        < (IData)(tb_sndram__DOT__SCU__DOT__DMA_RTN_OFFS)))) {
                    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC 
                        = (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN);
                }
            } else {
                vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC = 4U;
            }
        }
    } else {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_NEXT 
        = (0x000fffffU & ((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN 
                           - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC)) 
                          & (((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                               ? vlSymsp->TOP__SCUP2_PKG.DMA_TN_MASK
                              [vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH]
                               : 0U) | (- (IData)((1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                                      [
                                                      ((2U 
                                                        >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                                                        ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)
                                                        : 0U)] 
                                                      >> 0x00000018U)))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__b_c3 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                                & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A) 
                                                      | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                                         | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_116 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                                  | (0U 
                                                     != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN));
    __VdfgRegularize_hebeb780c_0_92 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)) 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ));
    __VdfgRegularize_hebeb780c_0_17 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ));
    if ((0x00080000U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7)) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA 
            = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA 
            = (0x0000000fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                              >> 0x00000015U));
    } else {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA 
            = (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A4 = (0x0000001fU 
                                                  & ((0x00200000U 
                                                      & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4)
                                                      ? 
                                                     (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                                      >> 0x00000016U)
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A2 = (0x0000001fU 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                 >> 0x00000022U)))
                                                      ? (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                 >> 0x00000023U))
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A6 = (0x0000001fU 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                                                 >> 0x0000001cU)))
                                                      ? (IData)(
                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                                                 >> 0x0000001dU))
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1 = (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST)
                                                      ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT)
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U)));
    tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS = 0U;
    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA_NEW 
            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                              + ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)
                                  ? 4U : ((2U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD))
                                           ? 4U : 0U))));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC = 4U;
    } else {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA_NEW 
            = (0x07ffffffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                              + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC)));
        if (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C) {
            tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS 
                = (7U & (0x029cU >> ((IData)(3U) * 
                                     (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA))));
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC 
                = tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS;
            if ((1U & (~ (0U != (0x0003ffffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                >> 2U)))))) {
                if ((0U != (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) {
                    if (((0U != (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)) 
                         & ((3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN) 
                            < (IData)(tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS)))) {
                        vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC 
                            = (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN);
                    }
                } else {
                    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC = 4U;
                }
            }
        } else if (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A) 
                    | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B))) {
            tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS 
                = (7U & (0x0aU >> ((IData)(3U) * (1U 
                                                  & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA))));
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC 
                = tb_sndram__DOT__SCU__DOT__DMA_WTN_OFFS;
            if ((1U & ((~ (0U != (0x0007ffffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                 >> 1U)))) 
                       & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) {
                vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC = 1U;
            }
        } else {
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC = 0U;
        }
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_NEXT 
        = (0x000fffffU & ((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                           - (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)) 
                          & (((2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                               ? vlSymsp->TOP__SCUP2_PKG.DMA_TN_MASK
                              [vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH]
                               : 0U) | (- (IData)((1U 
                                                   & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                                      [
                                                      ((2U 
                                                        >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH))
                                                        ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_CH)
                                                        : 0U)] 
                                                      >> 0x00000018U)))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA_NEW 
        = (0x07ffffffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A)
                           ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                              + (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC))
                           : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)
                               ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                  + ((2U > (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC))
                                      ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)
                                      : ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD))))
                               : ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C)
                                   ? (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                      + ((4U > (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC))
                                          ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC)
                                          : ((IData)(1U) 
                                             << (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD))))
                                   : vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_70 = ((~ 
                                                  (0U 
                                                   != 
                                                   (0x0003ffffU 
                                                    & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                       >> 2U)))) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (0x0007ffffU 
                                                       & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                          >> 1U)))) 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN));
    tb_sndram__DOT__MSH__DOT__mult__DOT__RL = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL 
                                                & ((0x80000000U 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M0) 
                                                       << 0x0000001cU)) 
                                                   | (0x7fffffffU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M0) 
                                                                       >> 2U))))))) 
                                               | ((0x80000000U 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M1) 
                                                      << 0x0000001cU)) 
                                                  | (0x7fffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M1) 
                                                                      >> 2U)))))));
    tb_sndram__DOT__MSH__DOT__mult__DOT__RH = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACH 
                                                & (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M0) 
                                                                   >> 1U)))) 
                                                    << 0x0000000fU) 
                                                   | (0x00007fffU 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M0))))))) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M1) 
                                                                  >> 1U)))) 
                                                   << 0x0000000fU) 
                                                  | (0x00007fffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__M1)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_66 = (1U 
                                                 & (~ 
                                                    ((~ 
                                                      ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                                       | (0U 
                                                          != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN))) 
                                                     | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                                        & ((~ 
                                                            (0U 
                                                             != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))) 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LAST))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR 
        = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x000001ffU 
                                                & (0x000000c0U 
                                                   | ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_WR_N) 
                                                        << 8U) 
                                                       | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IWE_N) 
                                                           << 2U) 
                                                          | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IRD_N) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IIVECF_N)))) 
                                                      | (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((((QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IDO))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS3_N) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS2_N) 
                                                      << 4U) 
                                                     | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS1_N) 
                                                        << 3U))) 
                                                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ICS0_N) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IBS_N) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ) 
           & (0U == (0xd8000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)));
    if ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD 
            = (0x0000ffffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA);
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB 
            = (3U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD 
            = (0x0000ffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA 
                              >> 0x00000010U));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB 
            = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA) 
                     >> 2U));
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX 
        = (7U & ((0x00000080U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                  ? ((IData)(5U) + (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 1U))) : 
                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                  >> 1U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B 
        = ((2U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                  >> 3U)) | (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                   >> 2U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_SEL 
        = ((0xfffffe00U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
           & (0xfffffe05U >= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_SEL 
        = ((0xffffff40U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
           & (0xffffff7cU >= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL 
        = ((0x3fffff9cU == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 2U)) & VL_REDXOR_32(
                                                   (3U 
                                                    & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B 
        = (IData)(((0xfffffee0U == (0xfffffff8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (~ (3U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 1U))))));
    tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL = 
        ((~ (IData)(((0x00000030U == (0x00000030U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                     & (0U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                     >> 2U)))))) & 
         (0x03fffffeU == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                          >> 6U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL 
        = ((~ (0U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 6U)))) & (0x00ffffffU 
                                         == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                             >> 8U)));
    __VdfgRegularize_hebeb780c_0_104 = (1U & (~ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                  >> 3U) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                        >> 1U))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_IRL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL) 
           > (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                             >> 4U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ = 
        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD) 
            & (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_WR = (
                                                   (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                    .__PVT__MA
                                                    .__PVT__DI[1U] 
                                                    >> 0x0000000eU) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_TAS = 
        (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
           .__PVT__MA.__PVT__DI[0U] >> 8U) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL)));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
        .__PVT__MA.__PVT__WD;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WDATA 
        = ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                         .__PVT__MA.__PVT__DI[1U] >> 0x00000010U)))
            ? ((((0x0000ff00U & (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp 
                                 << 8U)) | (0x000000ffU 
                                            & tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp)) 
                << 0x00000010U) | ((0x0000ff00U & (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp 
                                                   << 8U)) 
                                   | (0x000000ffU & tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp)))
            : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                             .__PVT__MA.__PVT__DI[1U] 
                             >> 0x00000010U))) ? ((tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp))
                : tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_BA = (0x0000000fU 
                                                   & (((0U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 0x00000010U)))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__ADDR)))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                             .__PVT__MA
                                                             .__PVT__DI[1U] 
                                                             >> 0x00000010U)))
                                                         ? 
                                                        ((IData)(3U) 
                                                         << 
                                                         (2U 
                                                          & ((~ 
                                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                               .__PVT__MA
                                                               .__PVT__ADDR 
                                                               >> 1U)) 
                                                             << 1U)))
                                                         : 0x0fU)) 
                                                      | (- (IData)(
                                                                   ((~ 
                                                                     ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT) 
                                                                      | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL))) 
                                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_REQ = 
        (((((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
             .__PVT__MA.__PVT__DI[1U] >> 0x0000000fU) 
            | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
               .__PVT__MA.__PVT__DI[1U] >> 0x0000000eU)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL))) 
         | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE) 
             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT))) 
            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)
                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                  .__PVT__MA
                                                  .__PVT__ADDR
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP = (0x0000000fU 
                                                  & (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                       .__PVT__MA
                                                       .__PVT__DI[0U] 
                                                       << 0x00000011U) 
                                                      | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000000fU)) 
                                                     & (- (IData)(
                                                                  ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE) 
                                                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL)))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL = (3U 
                                                   & (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                        .__PVT__MA
                                                        .__PVT__DI[0U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                          .__PVT__MA
                                                          .__PVT__DI[0U] 
                                                          >> 0x00000015U)) 
                                                      & (- (IData)(
                                                                   ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE) 
                                                                    & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL)))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LD 
        = (1U & (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                   .__PVT__WB.__PVT__DI[1U] >> 0x0000000fU) 
                  & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__WB.__PVT__DI[0U] >> 0x00000013U))) 
                 | ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                     .__PVT__WB.__PVT__DI[0U] >> 0x00000014U) 
                    & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                          .__PVT__WB.__PVT__DI[1U] 
                          >> 0x0000000eU)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WB 
        = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                  .__PVT__MA.__PVT__DI[0U] >> 0x0000001fU) 
                 & ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI[1U] >> 6U)) 
                    | ((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                       .__PVT__MA.__PVT__DI[1U] 
                                       >> 8U)) != (0x0000001fU 
                                                   & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                      .__PVT__MA
                                                      .__PVT__DI[1U] 
                                                      >> 1U))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD 
        = (1U & (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                   .__PVT__MA.__PVT__DI[1U] >> 0x0000000fU) 
                  & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI[0U] >> 0x00000013U))) 
                 | ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                     .__PVT__MA.__PVT__DI[0U] >> 0x00000014U) 
                    & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                          .__PVT__MA.__PVT__DI[1U] 
                          >> 0x0000000eU)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_77 = (1U 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                                    [
                                                    ((- (IData)(
                                                                (2U 
                                                                 >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH)))) 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH))] 
                                                    >> 0x00000018U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR 
        = (((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY) 
            << 8U) | (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__EXEC 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC) 
              | (IData)(tb_sndram__DOT__MSH__DOT__mult__DOT__ACC)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF_DEC 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ZF) 
           | ((~ (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F3) 
                   == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD)) 
                  & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__F4) 
                     == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD)))) 
              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY = 
        ((~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N)) 
         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WR_DONE 
        = ((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 4U)) & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                       & (IData)(__VdfgRegularize_hebeb780c_0_92)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__RD_DONE 
        = ((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 4U)) & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                                       & (IData)(__VdfgRegularize_hebeb780c_0_92)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_67 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_68 = (IData)(
                                                        ((0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
        = (VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                  ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED) 
                                                                   & (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MA 
                                                                      >> 0x0000001fU)))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MA)))), 
                       VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                              ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED) 
                                                               & (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MB 
                                                                  >> 0x0000001fU)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MB))))) 
           + ((((QData)((IData)(tb_sndram__DOT__MSH__DOT__mult__DOT__RH)) 
                << 0x00000020U) | (QData)((IData)(tb_sndram__DOT__MSH__DOT__mult__DOT__RL))) 
              & (- (QData)((IData)(tb_sndram__DOT__MSH__DOT__mult__DOT__ACC)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_BUSY 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE) 
              | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_91))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_RISE 
        = (1U & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CRD_N_OLD) 
                     | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                    >> 1U)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT____Vcellinp__ACACHE____pinNumber4 
        = ((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
            << 7U) | (QData)((IData)(((0x0000007cU 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                          << 1U)) | 
                                      (((IData)(Vtb_sndram__ConstPool__TABLE_hd11fe979_0
                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_10]) 
                                        << 1U) | Vtb_sndram__ConstPool__TABLE_h2047061a_0
                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_10])))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = (1U 
                                                 & (~ (IData)(Vtb_sndram__ConstPool__TABLE_hd11fe979_0
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_10])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (1U 
                                                & (~ (IData)(Vtb_sndram__ConstPool__TABLE_h2047061a_0
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_10])));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0 
        = (IData)(((0U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE2 
        = (IData)(((2U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_RD 
        = ((IData)(tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR 
        = ((IData)(tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL) 
           & (IData)(__VdfgRegularize_hebeb780c_0_17));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__DMAC_ACT = 
        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL) 
         | (IData)(tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL) 
           & (IData)(__VdfgRegularize_hebeb780c_0_17));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL 
        = ((IData)(__VdfgRegularize_hebeb780c_0_104) 
           & (0x0fffffe1U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                              >> 4U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A 
        = (IData)(((0xfffffe60U == (0xfffffff0U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_104)));
    tb_sndram__DOT__MSH__DOT__intc__DOT__M1 = (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_IRL)
                                                   ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL)
                                                   : 
                                                  (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                   >> 4U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_SEL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
              | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IO_AREA 
        = ((0xfffffe92U != vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A) 
           & (7U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                     >> 0x0000001dU)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_AREA 
        = ((6U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                   >> 0x0000001dU)) | (4U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 0x0000001dU)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW 
        = ((6U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
           | (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_90 = ((0x0bU 
                                                  == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
                                                    | ((2U 
                                                        == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
                                                       | ((3U 
                                                           == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
                                                          | (9U 
                                                             == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__HI 
        = ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
               >> 1U)) & (0x0bU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DO = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))
                                                    ? tb_sndram__DOT__MSH__DOT__mult__DOT__RH
                                                    : tb_sndram__DOT__MSH__DOT__mult__DOT__RL);
    vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT 
        = (1U & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_REQ) 
                  & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ) 
                     | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY) 
                        | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND) 
                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND))))) 
                 | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE)) 
                    & ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))
                        ? (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))
                        : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA 
        = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                  .__PVT__MA.__PVT__DI[1U] >> 6U) & 
                 (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_87 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66) 
                                                 & ((0x27U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__W_SIZE_OK2 
        = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SAT) 
              & ((0x0000ffffU & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
                                         >> 0x00000030U))) 
                 != (0x0000ffffU & (- (IData)((1U & (IData)(
                                                            (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
                                                             >> 0x0000002fU)))))))));
    tb_sndram__DOT__MSH__DOT__mult__DOT__W32 = (1U 
                                                & ((tb_sndram__DOT__MSH__DOT__mult__DOT__RL 
                                                    >> 0x0000001fU) 
                                                   ^ 
                                                   (tb_sndram__DOT__MSH__DOT__mult__DOT__RH 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
                                                               >> 0x00000020U)))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_SEL = 
        ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
         & ((0x1aU <= (0x0000001fU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                              >> 0x00000034U)))) 
            & (0x01feU > (0x000001ffU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                 >> 0x00000030U))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_SEL = 
        ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33) 
         | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
            & (0x1aU > (0x0000001fU & (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                               >> 0x00000034U))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_SEL = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                                                   & ((0x01fe0000U 
                                                       <= 
                                                       (0x01ffffffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                                   >> 0x00000020U)))) 
                                                      & (0x01fe00cfU 
                                                         >= 
                                                         (0x01ffffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                                     >> 0x00000020U))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START32 
        = ((4U == (0x0000001fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START64 
        = ((0x14U == (0x0000001fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL) 
           & (IData)(__VdfgRegularize_hebeb780c_0_17));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__RD 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R68 
        = (IData)(((8U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R60 
        = (IData)(((0U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__REG_SEL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DIVU 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP) 
                 > (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M1))));
    tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE) 
            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ)) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE))));
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__KN 
            = tb_sndram__DOT__MSH__DOT__mult__DOT__W32;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW 
            = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SAT) 
               & ((1U & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SUM 
                                 >> 0x0000001fU))) 
                  != (IData)(tb_sndram__DOT__MSH__DOT__mult__DOT__W32)));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__KN 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RW = (
                                                   (~ 
                                                    (0x0000001fU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                         >> 1U)))) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_SEL));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_RW = (
                                                   (~ 
                                                    (0x0000001fU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                         >> 1U)))) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_SEL));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WR = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_SEL) 
                                                  & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0)) 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RD = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_SEL) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                       >> 1U)) 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CRD_N_OLD)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_WRITE 
        = ((1U == (0x0000000fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_READ 
        = ((1U == (0x0000000fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__RD));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ 
        = ((9U == (0x0000000fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__RD));
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__REG_SEL) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR 
            = __VdfgRegularize_hebeb780c_0_17;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__IBUS_DI 
            = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR = 0U;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__IBUS_DI 
            = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL)
                ? ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL))) 
                   & ((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA))
                       ? vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO
                       : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO 
                           << 0x00000010U) | (0x0000ffffU 
                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO))))
                : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DMAC_ACT)
                    ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO 
                       & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__DMAC_ACT))))
                    : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL)
                        ? ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO) 
                             << 0x00000018U) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO) 
                                                 << 0x00000010U) 
                                                | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO)))) 
                           & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL))))
                        : ((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                            >> 4U))
                            ? ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO) 
                                 << 0x00000018U) | 
                                (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO) 
                                  << 0x00000010U) | 
                                 (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO) 
                                   << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO)))) 
                               & (- (IData)((0x0fffffe8U 
                                             == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                 >> 4U)))))
                            : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_SEL)
                                ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO 
                                   & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_SEL))))
                                : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_SEL)
                                    ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO 
                                       & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_SEL))))
                                    : ((0xffffffe0U 
                                        <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                                        ? vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO
                                        : (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
                                           & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE)))))))))));
    }
    tb_sndram__DOT__MSH__DOT__intc__DOT__M2 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DIVU)
                                                ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP)
                                                : (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M1));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT) 
           | (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL) 
           | (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DMAC 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP) 
            > (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M2)) 
           & ((3U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                            >> 1U))) | (3U == (3U & 
                                               (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                                                >> 1U)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_STALL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_EV 
        = (1U & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT) 
                     | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL))) 
                 | ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE) 
                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT))) 
                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE = ((
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[0U] 
                                                         >> 0x00000015U))) 
                                                    & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                       .__PVT__MA
                                                       .__PVT__DI[0U] 
                                                       >> 0x00000013U)) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
                                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL)));
    tb_sndram__DOT__MSH__DOT__intc__DOT__M3 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DMAC)
                                                ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP)
                                                : (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M2));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI = 
        (((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL)) 
          & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE)) 
             & (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))
          ? vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DO
          : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WDATA);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_WDT 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP) 
              > (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M3)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE)
            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__IBUS_DI
            : vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__M4 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_WDT)
            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP)
            : (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M3));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_SCI 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP) 
            > (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__M4)) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ERI_IRQ) 
              | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RXI_IRQ) 
                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TEI) 
                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                        >> 2U)) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__TXI_IRQ)))));
}
