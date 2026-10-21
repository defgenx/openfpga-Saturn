// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__5(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__cache__DOT__SC_WR;
    __PVT__cache__DOT__SC_WR = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = (1U 
                                                 & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__PVT__bsc__DOT__BREQ)) 
                                                    | (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__PVT__bsc__DOT__SLV_BUS_RLS)));
    vlSelfRef.cache__DOT____Vcellinpt__lru_a__wren__strong 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) 
           & (IData)(vlSelfRef.__PVT__cache__DOT__LRU_WE));
    __PVT__cache__DOT__SC_WR = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)) 
                                & ((IData)(vlSelfRef.__PVT__cache__DOT__INIT) 
                                   | ((~ (IData)(vlSelfRef.__PVT__cache__DOT__SC_SKIP)) 
                                      & (0U != (IData)(vlSelfRef.__PVT__cache__DOT__SC_STALE)))));
    vlSelfRef.__PVT__cache__DOT__ST_D = ((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(__PVT__cache__DOT__SC_WR))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.__PVT__cache__DOT__CACHE_LINE_PURGE)))))));
    if (__PVT__cache__DOT__SC_WR) {
        vlSelfRef.__PVT__cache__DOT__ST_WA = (0x0000003fU 
                                              & (IData)(vlSelfRef.__PVT__cache__DOT__SC_PTR));
        vlSelfRef.__PVT__cache__DOT__ST_WE = (0x0000001fU 
                                              & ((- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__INIT))) 
                                                 | ((IData)(vlSelfRef.__PVT__cache__DOT__SC_STALE) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__SC_SKIP))))))));
    } else {
        vlSelfRef.__PVT__cache__DOT__ST_WA = (0x0000003fU 
                                              & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                                 >> 2U));
        vlSelfRef.__PVT__cache__DOT__ST_WE = (0x0000001fU 
                                              & ((((IData)(vlSelfRef.__PVT__cache__DOT__LRU_WE) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE)) 
                                                 & (- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))));
    }
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__6(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__6\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IRL_N = (0x0000000fU & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__lvlM)) 
                                      | (- (IData)(
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__lvlM))))));
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT__CACHE_DO;
    __PVT__CACHE_DO = 0;
    CData/*1:0*/ __PVT__cache__DOT__CRAM_RDWAY;
    __PVT__cache__DOT__CRAM_RDWAY = 0;
    CData/*0:0*/ __PVT__cache__DOT__unnamedblk1__DOT__DIRTY;
    __PVT__cache__DOT__unnamedblk1__DOT__DIRTY = 0;
    CData/*3:0*/ __PVT__cache__DOT__unnamedblk2__DOT__DIRTY;
    __PVT__cache__DOT__unnamedblk2__DOT__DIRTY = 0;
    CData/*0:0*/ __PVT__core__DOT__ALU_T;
    __PVT__core__DOT__ALU_T = 0;
    QData/*32:0*/ core__DOT____Vconcswap_1_hf514e05d__0;
    core__DOT____Vconcswap_1_hf514e05d__0 = 0;
    QData/*32:0*/ core__DOT____Vconcswap_1_hc7560488__0;
    core__DOT____Vconcswap_1_hc7560488__0 = 0;
    SData/*11:0*/ __PVT__core__DOT__unnamedblk3__DOT__ir_imm;
    __PVT__core__DOT__unnamedblk3__DOT__ir_imm = 0;
    CData/*7:0*/ __PVT__core__DOT__unnamedblk3__DOT__vec;
    __PVT__core__DOT__unnamedblk3__DOT__vec = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk3__DOT__temp;
    __PVT__core__DOT__unnamedblk3__DOT__temp = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk3__DOT__IMM_VAL;
    __PVT__core__DOT__unnamedblk3__DOT__IMM_VAL = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk3__DOT__BP_C;
    __PVT__core__DOT__unnamedblk3__DOT__BP_C = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES;
    __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__ADDER_C;
    __PVT__core__DOT__unnamedblk4__DOT__ADDER_C = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__ADDER_V;
    __PVT__core__DOT__unnamedblk4__DOT__ADDER_V = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk4__DOT__LOG_RES;
    __PVT__core__DOT__unnamedblk4__DOT__LOG_RES = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__LOG_Z;
    __PVT__core__DOT__unnamedblk4__DOT__LOG_Z = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk4__DOT__EXT_RES;
    __PVT__core__DOT__unnamedblk4__DOT__EXT_RES = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk4__DOT__SHIFT_RES;
    __PVT__core__DOT__unnamedblk4__DOT__SHIFT_RES = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__SHIFT_C;
    __PVT__core__DOT__unnamedblk4__DOT__SHIFT_C = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk4__DOT__adder_a;
    __PVT__core__DOT__unnamedblk4__DOT__adder_a = 0;
    CData/*3:0*/ __PVT__core__DOT__unnamedblk4__DOT__adder_code;
    __PVT__core__DOT__unnamedblk4__DOT__adder_code = 0;
    CData/*2:0*/ __PVT__core__DOT__unnamedblk4__DOT__adder_cmp;
    __PVT__core__DOT__unnamedblk4__DOT__adder_cmp = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__ge_hs;
    __PVT__core__DOT__unnamedblk4__DOT__ge_hs = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__eq;
    __PVT__core__DOT__unnamedblk4__DOT__eq = 0;
    CData/*0:0*/ __PVT__core__DOT__unnamedblk4__DOT__str_eq;
    __PVT__core__DOT__unnamedblk4__DOT__str_eq = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk4__DOT__log_b;
    __PVT__core__DOT__unnamedblk4__DOT__log_b = 0;
    CData/*1:0*/ __PVT__core__DOT__unnamedblk5__DOT__mask;
    __PVT__core__DOT__unnamedblk5__DOT__mask = 0;
    IData/*31:0*/ __PVT__core__DOT__unnamedblk5__DOT__temp;
    __PVT__core__DOT__unnamedblk5__DOT__temp = 0;
    VlWide<3>/*79:0*/ __Vfunc_Decode__6__Vfuncout;
    VL_ZERO_W(80, __Vfunc_Decode__6__Vfuncout);
    SData/*15:0*/ __Vfunc_Decode__6__IR;
    __Vfunc_Decode__6__IR = 0;
    CData/*2:0*/ __Vfunc_Decode__6__STATE;
    __Vfunc_Decode__6__STATE = 0;
    CData/*0:0*/ __Vfunc_Decode__6__T;
    __Vfunc_Decode__6__T = 0;
    CData/*0:0*/ __Vfunc_Decode__6__DS;
    __Vfunc_Decode__6__DS = 0;
    CData/*0:0*/ __Vfunc_Decode__6__RES_EXP;
    __Vfunc_Decode__6__RES_EXP = 0;
    CData/*0:0*/ __Vfunc_Decode__6__INT_EXP;
    __Vfunc_Decode__6__INT_EXP = 0;
    CData/*0:0*/ __Vfunc_Decode__6__ILI_EXP;
    __Vfunc_Decode__6__ILI_EXP = 0;
    CData/*0:0*/ __Vfunc_Decode__6__ILSI;
    __Vfunc_Decode__6__ILSI = 0;
    CData/*0:0*/ __Vfunc_Decode__6__VER;
    __Vfunc_Decode__6__VER = 0;
    QData/*32:0*/ __Vfunc_Adder__7__Vfuncout;
    __Vfunc_Adder__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Adder__7__a;
    __Vfunc_Adder__7__a = 0;
    IData/*31:0*/ __Vfunc_Adder__7__b;
    __Vfunc_Adder__7__b = 0;
    CData/*0:0*/ __Vfunc_Adder__7__ci;
    __Vfunc_Adder__7__ci = 0;
    CData/*3:0*/ __Vfunc_Adder__7__code;
    __Vfunc_Adder__7__code = 0;
    IData/*31:0*/ __Vfunc_Log__8__Vfuncout;
    __Vfunc_Log__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Log__8__a;
    __Vfunc_Log__8__a = 0;
    IData/*31:0*/ __Vfunc_Log__8__b;
    __Vfunc_Log__8__b = 0;
    CData/*3:0*/ __Vfunc_Log__8__code;
    __Vfunc_Log__8__code = 0;
    IData/*31:0*/ __Vfunc_Ext__9__Vfuncout;
    __Vfunc_Ext__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Ext__9__a;
    __Vfunc_Ext__9__a = 0;
    IData/*31:0*/ __Vfunc_Ext__9__b;
    __Vfunc_Ext__9__b = 0;
    CData/*3:0*/ __Vfunc_Ext__9__code;
    __Vfunc_Ext__9__code = 0;
    QData/*32:0*/ __Vfunc_Shifter__10__Vfuncout;
    __Vfunc_Shifter__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Shifter__10__a;
    __Vfunc_Shifter__10__a = 0;
    CData/*0:0*/ __Vfunc_Shifter__10__ci;
    __Vfunc_Shifter__10__ci = 0;
    CData/*3:0*/ __Vfunc_Shifter__10__code;
    __Vfunc_Shifter__10__code = 0;
    IData/*31:0*/ __Vfunc_ByteShiftRigth__11__Vfuncout;
    __Vfunc_ByteShiftRigth__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ByteShiftRigth__11__val;
    __Vfunc_ByteShiftRigth__11__val = 0;
    CData/*1:0*/ __Vfunc_ByteShiftRigth__11__s;
    __Vfunc_ByteShiftRigth__11__s = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_53;
    __VdfgRegularize_hebeb780c_0_53 = 0;
    VlWide<3>/*79:0*/ TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI;
    VL_ZERO_W(80, TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI);
    CData/*4:0*/ TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN = 0;
    CData/*4:0*/ TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN = 0;
    CData/*0:0*/ TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp0;
    TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp0 = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp1;
    TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp1 = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__b2;
    TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__b2 = 0;
    CData/*0:0*/ TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__ci2;
    TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__ci2 = 0;
    QData/*32:0*/ TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__sum;
    TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__sum = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2;
    TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2 = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__Log__Vstatic__res;
    TOP__SH2_PKG__DOT____PVT__Log__Vstatic__res = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__Ext__Vstatic__res;
    TOP__SH2_PKG__DOT____PVT__Ext__Vstatic__res = 0;
    IData/*31:0*/ TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__res;
    TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__res = 0;
    CData/*0:0*/ TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__ci2;
    TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__ci2 = 0;
    CData/*0:0*/ TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__co;
    TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__co = 0;
    // Body
    __PVT__core__DOT__unnamedblk3__DOT__ir_imm = (0x00000fffU 
                                                  & vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__IR);
    __PVT__core__DOT__unnamedblk3__DOT__vec = (0x000000ffU 
                                               & ((IData)(vlSelfRef.__PVT__core__DOT__RES_EXP)
                                                   ? 
                                                  ((0U 
                                                    != (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__nmi_cnt)) 
                                                   << 1U)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                     ? 0x0bU
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                      ? 0x0cU
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.__PVT__intc__DOT__ICR))
                                                        ? (IData)(vlSelfRef.__PVT__bsc__DOT__VEC_BUF)
                                                        : 
                                                       (0x00000040U 
                                                        | (7U 
                                                           & ((IData)(vlSelfRef.__PVT__intc__DOT__IRL_LVL_SAVE) 
                                                              >> 1U))))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                        ? (IData)(vlSelfRef.__PVT__divu__DOT__VCRDIV)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                         ? vlSelfRef.__PVT__dmac__DOT__VCRDMA0
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                          ? vlSelfRef.__PVT__dmac__DOT__VCRDMA1
                                                          : 
                                                         (((8U 
                                                            == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED)) 
                                                           | (7U 
                                                              == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED)))
                                                           ? 
                                                          (0x0000007fU 
                                                           & ((7U 
                                                               == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                               ? 
                                                              ((IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT) 
                                                               >> 8U)
                                                               : (IData)(vlSelfRef.__PVT__intc__DOT__VCRWDT)))
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                            ? 
                                                           (0x0000007fU 
                                                            & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRA) 
                                                               >> 8U))
                                                            : 
                                                           ((0x0aU 
                                                             == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                             ? 
                                                            (0x0000007fU 
                                                             & (IData)(vlSelfRef.__PVT__intc__DOT__VCRA))
                                                             : 
                                                            ((0x0bU 
                                                              == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                              ? 
                                                             (0x0000007fU 
                                                              & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRB) 
                                                                 >> 8U))
                                                              : 
                                                             ((0x0cU 
                                                               == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                               ? 
                                                              (0x0000007fU 
                                                               & (IData)(vlSelfRef.__PVT__intc__DOT__VCRB))
                                                               : 
                                                              ((0x0dU 
                                                                == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                                ? 
                                                               (0x0000007fU 
                                                                & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRC) 
                                                                   >> 8U))
                                                                : 
                                                               ((0x0eU 
                                                                 == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED))
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(vlSelfRef.__PVT__intc__DOT__VCRC))
                                                                 : 
                                                                (0x0000007fU 
                                                                 & ((- (IData)(
                                                                               (0x0fU 
                                                                                == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED)))) 
                                                                    & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRD) 
                                                                       >> 8U))))))))))))))))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__core__DOT__ILI_EXP)
                                                     ? 
                                                    (4U 
                                                     | ((IData)(vlSelfRef.__PVT__core__DOT__ILSI) 
                                                        << 1U))
                                                     : vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__IR))));
    __PVT__core__DOT__unnamedblk3__DOT__temp = ((0x00000010U 
                                                 & vlSelfRef.__PVT__core__DOT__PIPE
                                                 .__PVT__EX
                                                 .__PVT__DI[2U])
                                                 ? 
                                                ((8U 
                                                  & vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__DI[2U])
                                                  ? 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__EX
                                                   .__PVT__DI[2U])
                                                   ? 0U
                                                   : (IData)(__PVT__core__DOT__unnamedblk3__DOT__vec))
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__EX
                                                   .__PVT__DI[2U])
                                                   ? 1U
                                                   : 0U))
                                                 : 
                                                ((8U 
                                                  & vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__DI[2U])
                                                  ? 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__EX
                                                   .__PVT__DI[2U])
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(__PVT__core__DOT__unnamedblk3__DOT__ir_imm) 
                                                                   >> 0x0bU)))) 
                                                    << 0x0000000cU) 
                                                   | (IData)(__PVT__core__DOT__unnamedblk3__DOT__ir_imm))
                                                   : 
                                                  (0x000000ffU 
                                                   & (IData)(__PVT__core__DOT__unnamedblk3__DOT__ir_imm)))
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__EX
                                                   .__PVT__DI[2U])
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(__PVT__core__DOT__unnamedblk3__DOT__ir_imm) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & (IData)(__PVT__core__DOT__unnamedblk3__DOT__ir_imm)))
                                                   : 
                                                  (0x0000000fU 
                                                   & (IData)(__PVT__core__DOT__unnamedblk3__DOT__ir_imm)))));
    __PVT__core__DOT__unnamedblk3__DOT__IMM_VAL = (
                                                   (0x00004000U 
                                                    & vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__DI[0U])
                                                    ? 
                                                   (__PVT__core__DOT__unnamedblk3__DOT__temp 
                                                    << 1U)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[1U] 
                                                         >> 0x00000010U)))
                                                     ? __PVT__core__DOT__unnamedblk3__DOT__temp
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[1U] 
                                                          >> 0x00000010U)))
                                                      ? 
                                                     (__PVT__core__DOT__unnamedblk3__DOT__temp 
                                                      << 1U)
                                                      : 
                                                     (__PVT__core__DOT__unnamedblk3__DOT__temp 
                                                      << 2U))));
    __PVT__core__DOT__unnamedblk3__DOT__BP_C = ((((
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[1U] 
                                                         >> 8U))) 
                                                    & (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[0U] 
                                                       >> 0x0000001eU)) 
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
                                                 | ((((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__MA
                                                           .__PVT__DI[1U] 
                                                           >> 1U))) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000001eU)) 
                                                     & (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__MA
                                                        .__PVT__DI[0U] 
                                                        >> 0x0000001fU)) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__MA
                                                            .__PVT__DI[1U] 
                                                            >> 8U))) 
                                                       | (~ 
                                                          (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__MA
                                                           .__PVT__DI[1U] 
                                                           >> 6U)))))
                                                 ? vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__MA
                                                .__PVT__RES
                                                 : 
                                                (((((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__MA
                                                         .__PVT__DI[1U] 
                                                         >> 8U))) 
                                                    & (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[0U] 
                                                       >> 0x0000001eU)) 
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
                                                 (((((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[1U] 
                                                          >> 8U))) 
                                                     & (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__DI[0U] 
                                                        >> 0x0000001eU)) 
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
                                                  ((((((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB
                                                            .__PVT__DI[1U] 
                                                            >> 8U))) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[0U] 
                                                          >> 0x0000001eU)) 
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
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__WB
                                                             .__PVT__DI[1U] 
                                                             >> 1U))) 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[0U] 
                                                           >> 0x0000001eU)) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__WB
                                                          .__PVT__DI[0U] 
                                                          >> 0x0000001fU)))
                                                    ? vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__WB
                                                   .__PVT__RES
                                                    : 
                                                   ((((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__WB2
                                                           .__PVT__DI[1U] 
                                                           >> 8U))) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__EX
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000001eU)) 
                                                     & (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__WB2
                                                        .__PVT__DI[1U] 
                                                        >> 6U))
                                                     ? vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__WB2
                                                    .__PVT__RESA
                                                     : 
                                                    ((((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__WB2
                                                            .__PVT__DI[1U] 
                                                            >> 1U))) 
                                                       & (vlSelfRef.__PVT__core__DOT__PIPE
                                                          .__PVT__EX
                                                          .__PVT__DI[0U] 
                                                          >> 0x0000001eU)) 
                                                      & (vlSelfRef.__PVT__core__DOT__PIPE
                                                         .__PVT__WB2
                                                         .__PVT__DI[0U] 
                                                         >> 0x0000001fU))
                                                      ? vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__WB2
                                                     .__PVT__RESB
                                                      : vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__EX
                                                     .__PVT__R0))))));
    if ((0x00000200U & vlSelfRef.__PVT__core__DOT__PIPE
         .__PVT__EX.__PVT__DI[2U])) {
        if ((0x00000200U & vlSelfRef.__PVT__core__DOT__PIPE
             .__PVT__EX.__PVT__DI[2U])) {
            vlSelfRef.__PVT__core__DOT__REG_C = __PVT__core__DOT__unnamedblk3__DOT__IMM_VAL;
        }
    } else {
        vlSelfRef.__PVT__core__DOT__REG_C = __PVT__core__DOT__unnamedblk3__DOT__BP_C;
    }
    __VdfgRegularize_hebeb780c_0_53 = ((~ ((vlSelfRef.__PVT__core__DOT__PIPE
                                            .__PVT__EX
                                            .__PVT__DI[0U] 
                                            >> 6U) 
                                           | ((IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL) 
                                              | (IData)(vlSelfRef.__PVT__core__DOT__ID_DELAY_SLOT)))) 
                                       & (IData)(vlSelfRef.__Vcellinp__core__INT_REQ));
    vlSelfRef.__PVT__cache__DOT__CTAG_Q[0U] = vlSelfRef.__PVT__cache__DOT__tag0__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CTAG_Q[1U] = vlSelfRef.__PVT__cache__DOT__tag1__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CTAG_Q[2U] = vlSelfRef.__PVT__cache__DOT__tag2__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CTAG_Q[3U] = vlSelfRef.__PVT__cache__DOT__tag3__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CVALID_Q[0U] = vlSelfRef.__PVT__cache__DOT__valid0__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CVALID_Q[1U] = vlSelfRef.__PVT__cache__DOT__valid1__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CVALID_Q[2U] = vlSelfRef.__PVT__cache__DOT__valid2__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    vlSelfRef.__PVT__cache__DOT__CVALID_Q[3U] = vlSelfRef.__PVT__cache__DOT__valid3__DOT__altdpram_component__DOT__mem
        [(0x0000003fU & (vlSelfRef.__PVT__CBUS_A >> 4U))];
    __PVT__cache__DOT__unnamedblk1__DOT__DIRTY = ((IData)(vlSelfRef.__PVT__cache__DOT__INIT) 
                                                  | ((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                                     != vlSelfRef.__PVT__cache__DOT__stlb__DOT__altdpram_component__DOT__mem
                                                     [
                                                     (0x0000003fU 
                                                      & (vlSelfRef.__PVT__CBUS_A 
                                                         >> 4U))]));
    vlSelfRef.__PVT__cache__DOT__LRU_DATA = (vlSelfRef.__PVT__cache__DOT__lru_b__DOT__altdpram_component__DOT__mem
                                             [(0x0000003fU 
                                               & (vlSelfRef.__PVT__CBUS_A 
                                                  >> 4U))] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(__PVT__cache__DOT__unnamedblk1__DOT__DIRTY))))));
    if (vlSelfRef.__PVT__cache__DOT__CACHE_ADDR_WRITE) {
        vlSelfRef.cache__DOT____VlemCond_6 = (0x0000003fU 
                                              & (vlSelfRef.__PVT__CACHE_DI 
                                                 >> 4U));
    } else {
        vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru 
            = (vlSelfRef.__PVT__cache__DOT__lru_a__DOT__altdpram_component__DOT__mem
               [(0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                >> 2U))] & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.__PVT__cache__DOT__INIT) 
                                                           | ((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                                              != vlSelfRef.__PVT__cache__DOT__stla__DOT__altdpram_component__DOT__mem
                                                              [
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                                                  >> 2U))])))))));
        vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__way 
            = vlSelfRef.__PVT__cache__DOT__CACHE_WR_WAY;
        vlSelfRef.__PVT__cache__DOT__LRUSelect__Vstatic__res 
            = ((8U & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__way))
                ? (0x0000000bU | (0x00000034U & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru)))
                : ((4U & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__way))
                    ? (0x00000014U | ((((4U & ((IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru) 
                                               >> 3U)) 
                                        | (1U & ((IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru) 
                                                 >> 3U))) 
                                       << 3U) | (2U 
                                                 & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru))))
                    : ((2U & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__way))
                        ? (0x00000020U | (0x00000019U 
                                          & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru)))
                        : ((1U & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__way))
                            ? (7U & (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru))
                            : (IData)(vlSelfRef.__Vfunc_cache__DOT__LRUSelect__4__lru)))));
        vlSelfRef.cache__DOT____VlemCall_5__LRUSelect 
            = vlSelfRef.__PVT__cache__DOT__LRUSelect__Vstatic__res;
        vlSelfRef.cache__DOT____VlemCond_6 = vlSelfRef.cache__DOT____VlemCall_5__LRUSelect;
    }
    vlSelfRef.__PVT__cache__DOT__LRU_D = vlSelfRef.cache__DOT____VlemCond_6;
    if ((2U & vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
         .__PVT__DI[2U])) {
        if ((2U & vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
             .__PVT__DI[2U])) {
            vlSelfRef.__PVT__core__DOT__ALU_A = vlSelfRef.__PVT__core__DOT__REG_C;
        }
    } else {
        vlSelfRef.__PVT__core__DOT__ALU_A = vlSelfRef.__PVT__core__DOT__REG_A;
    }
    if ((1U & vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
         .__PVT__DI[2U])) {
        if ((1U & vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
             .__PVT__DI[2U])) {
            vlSelfRef.__PVT__core__DOT__ALU_B = vlSelfRef.__PVT__core__DOT__REG_C;
        }
    } else {
        vlSelfRef.__PVT__core__DOT__ALU_B = vlSelfRef.__PVT__core__DOT__REG_B;
    }
    if ((4U == (vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
                .__PVT__DI[1U] >> 0x0000001dU))) {
        __PVT__core__DOT__unnamedblk4__DOT__adder_a 
            = ((vlSelfRef.__PVT__core__DOT__ALU_A << 1U) 
               | (1U & vlSelfRef.__PVT__core__DOT__SR));
        __PVT__core__DOT__unnamedblk4__DOT__adder_code 
            = (0x0000000fU & (1U & (~ ((vlSelfRef.__PVT__core__DOT__SR 
                                        >> 9U) ^ (vlSelfRef.__PVT__core__DOT__SR 
                                                  >> 8U)))));
    } else {
        __PVT__core__DOT__unnamedblk4__DOT__adder_a 
            = vlSelfRef.__PVT__core__DOT__ALU_A;
        __PVT__core__DOT__unnamedblk4__DOT__adder_code 
            = (0x0000000fU & ((vlSelfRef.__PVT__core__DOT__PIPE
                               .__PVT__EX.__PVT__DI[1U] 
                               << 7U) | (vlSelfRef.__PVT__core__DOT__PIPE
                                         .__PVT__EX
                                         .__PVT__DI[1U] 
                                         >> 0x00000019U)));
    }
    __PVT__core__DOT__unnamedblk4__DOT__adder_cmp = 
        (7U & (vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
               .__PVT__DI[1U] >> 0x00000016U));
    __Vfunc_Adder__7__code = __PVT__core__DOT__unnamedblk4__DOT__adder_code;
    __Vfunc_Adder__7__ci = (1U & vlSelfRef.__PVT__core__DOT__SR);
    __Vfunc_Adder__7__b = vlSelfRef.__PVT__core__DOT__ALU_B;
    __Vfunc_Adder__7__a = __PVT__core__DOT__unnamedblk4__DOT__adder_a;
    TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__b2 = 
        (__Vfunc_Adder__7__b ^ (- (IData)((1U & (IData)(__Vfunc_Adder__7__code)))));
    TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__ci2 = 
        (1U & ((2U & (IData)(__Vfunc_Adder__7__code))
                ? ((IData)(__Vfunc_Adder__7__ci) ^ (IData)(__Vfunc_Adder__7__code))
                : (IData)(__Vfunc_Adder__7__code)));
    TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__sum = 
        (0x00000001ffffffffULL & (((QData)((IData)(__Vfunc_Adder__7__a)) 
                                   + (QData)((IData)(TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__b2))) 
                                  + (QData)((IData)(TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__ci2))));
    __Vfunc_Adder__7__Vfuncout = (((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(
                                                               (TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__sum 
                                                                >> 0x20U)) 
                                                       ^ (IData)(__Vfunc_Adder__7__code))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(TOP__SH2_PKG__DOT____PVT__Adder__Vstatic__sum)));
    core__DOT____Vconcswap_1_hf514e05d__0 = __Vfunc_Adder__7__Vfuncout;
    __PVT__core__DOT__unnamedblk4__DOT__ADDER_C = (1U 
                                                   & (IData)(
                                                             (core__DOT____Vconcswap_1_hf514e05d__0 
                                                              >> 0x00000020U)));
    __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES = (IData)(core__DOT____Vconcswap_1_hf514e05d__0);
    __PVT__core__DOT__unnamedblk4__DOT__ADDER_V = (1U 
                                                   & ((~ 
                                                       (((vlSelfRef.__PVT__core__DOT__ALU_A 
                                                          ^ vlSelfRef.__PVT__core__DOT__ALU_B) 
                                                         >> 0x1fU) 
                                                        ^ (IData)(__PVT__core__DOT__unnamedblk4__DOT__adder_code))) 
                                                      & ((vlSelfRef.__PVT__core__DOT__ALU_A 
                                                          ^ __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES) 
                                                         >> 0x1fU)));
    __PVT__core__DOT__unnamedblk4__DOT__ge_hs = (1U 
                                                 & (((((~ 
                                                        (vlSelfRef.__PVT__core__DOT__ALU_A 
                                                         >> 0x1fU)) 
                                                       & (~ 
                                                          (vlSelfRef.__PVT__core__DOT__ALU_B 
                                                           >> 0x1fU))) 
                                                      & (~ 
                                                         (__PVT__core__DOT__unnamedblk4__DOT__ADDER_RES 
                                                          >> 0x1fU))) 
                                                     | (((vlSelfRef.__PVT__core__DOT__ALU_A 
                                                          & vlSelfRef.__PVT__core__DOT__ALU_B) 
                                                         >> 0x1fU) 
                                                        & (~ 
                                                           (__PVT__core__DOT__unnamedblk4__DOT__ADDER_RES 
                                                            >> 0x1fU)))) 
                                                    | (((IData)(__PVT__core__DOT__unnamedblk4__DOT__adder_cmp) 
                                                        ^ 
                                                        (vlSelfRef.__PVT__core__DOT__ALU_A 
                                                         >> 0x1fU)) 
                                                       & ((~ (IData)(__PVT__core__DOT__unnamedblk4__DOT__adder_cmp)) 
                                                          ^ 
                                                          (vlSelfRef.__PVT__core__DOT__ALU_B 
                                                           >> 0x1fU)))));
    __PVT__core__DOT__unnamedblk4__DOT__eq = (1U & 
                                              (~ (0U 
                                                  != __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES)));
    __PVT__core__DOT__unnamedblk4__DOT__log_b = ((0x00000100U 
                                                  & vlSelfRef.__PVT__core__DOT__PIPE
                                                  .__PVT__EX
                                                  .__PVT__DI[0U])
                                                  ? 0x00000080U
                                                  : vlSelfRef.__PVT__core__DOT__ALU_B);
    __Vfunc_Log__8__code = (0x0000000fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                           .__PVT__EX
                                           .__PVT__DI[1U] 
                                           >> 0x00000019U));
    __Vfunc_Log__8__b = __PVT__core__DOT__unnamedblk4__DOT__log_b;
    __Vfunc_Log__8__a = vlSelfRef.__PVT__core__DOT__ALU_A;
    TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2 = (__Vfunc_Log__8__b 
                                                  ^ 
                                                  (- (IData)(
                                                             (1U 
                                                              & (IData)(__Vfunc_Log__8__code)))));
    TOP__SH2_PKG__DOT____PVT__Log__Vstatic__res = (
                                                   (4U 
                                                    & (IData)(__Vfunc_Log__8__code))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(__Vfunc_Log__8__code))
                                                     ? TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2
                                                     : 
                                                    (__Vfunc_Log__8__a 
                                                     | TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2))
                                                    : 
                                                   ((2U 
                                                     & (IData)(__Vfunc_Log__8__code))
                                                     ? 
                                                    (__Vfunc_Log__8__a 
                                                     ^ TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2)
                                                     : 
                                                    (__Vfunc_Log__8__a 
                                                     & TOP__SH2_PKG__DOT____PVT__Log__Vstatic__b2)));
    __Vfunc_Log__8__Vfuncout = TOP__SH2_PKG__DOT____PVT__Log__Vstatic__res;
    __PVT__core__DOT__unnamedblk4__DOT__LOG_RES = __Vfunc_Log__8__Vfuncout;
    __PVT__core__DOT__unnamedblk4__DOT__LOG_Z = (1U 
                                                 & (~ 
                                                    (0U 
                                                     != __PVT__core__DOT__unnamedblk4__DOT__LOG_RES)));
    __PVT__core__DOT__unnamedblk4__DOT__str_eq = (1U 
                                                  & ((((~ 
                                                        (0U 
                                                         != 
                                                         (__PVT__core__DOT__unnamedblk4__DOT__LOG_RES 
                                                          >> 0x18U))) 
                                                       | (~ 
                                                          (0U 
                                                           != 
                                                           (0x000000ffU 
                                                            & (__PVT__core__DOT__unnamedblk4__DOT__LOG_RES 
                                                               >> 0x10U))))) 
                                                      | (~ 
                                                         (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (__PVT__core__DOT__unnamedblk4__DOT__LOG_RES 
                                                              >> 8U))))) 
                                                     | (~ 
                                                        (0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & __PVT__core__DOT__unnamedblk4__DOT__LOG_RES)))));
    __Vfunc_Ext__9__code = (0x0000000fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                           .__PVT__EX
                                           .__PVT__DI[1U] 
                                           >> 0x00000019U));
    __Vfunc_Ext__9__b = vlSelfRef.__PVT__core__DOT__ALU_B;
    __Vfunc_Ext__9__a = vlSelfRef.__PVT__core__DOT__ALU_A;
    TOP__SH2_PKG__DOT____PVT__Ext__Vstatic__res = (
                                                   (4U 
                                                    & (IData)(__Vfunc_Ext__9__code))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(__Vfunc_Ext__9__code))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(__Vfunc_Ext__9__code))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_Ext__9__b 
                                                                      >> 0x0fU)))) 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & __Vfunc_Ext__9__b))
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_Ext__9__b 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0x000000ffU 
                                                         & __Vfunc_Ext__9__b)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(__Vfunc_Ext__9__code))
                                                      ? 
                                                     (0x0000ffffU 
                                                      & __Vfunc_Ext__9__b)
                                                      : 
                                                     (0x000000ffU 
                                                      & __Vfunc_Ext__9__b)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(__Vfunc_Ext__9__code))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(__Vfunc_Ext__9__code))
                                                      ? 
                                                     ((__Vfunc_Ext__9__b 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & __Vfunc_Ext__9__a))
                                                      : 
                                                     ((__Vfunc_Ext__9__b 
                                                       << 0x00000010U) 
                                                      | (__Vfunc_Ext__9__a 
                                                         >> 0x10U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(__Vfunc_Ext__9__code))
                                                      ? 
                                                     ((__Vfunc_Ext__9__b 
                                                       << 0x00000010U) 
                                                      | (__Vfunc_Ext__9__b 
                                                         >> 0x10U))
                                                      : 
                                                     ((0xffff0000U 
                                                       & __Vfunc_Ext__9__b) 
                                                      | ((0x0000ff00U 
                                                          & (__Vfunc_Ext__9__b 
                                                             << 8U)) 
                                                         | (0x000000ffU 
                                                            & (__Vfunc_Ext__9__b 
                                                               >> 8U)))))));
    __Vfunc_Ext__9__Vfuncout = TOP__SH2_PKG__DOT____PVT__Ext__Vstatic__res;
    __PVT__core__DOT__unnamedblk4__DOT__EXT_RES = __Vfunc_Ext__9__Vfuncout;
    __Vfunc_Shifter__10__code = (0x0000000fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__EX
                                                .__PVT__DI[1U] 
                                                >> 0x00000019U));
    __Vfunc_Shifter__10__ci = (1U & vlSelfRef.__PVT__core__DOT__SR);
    __Vfunc_Shifter__10__a = vlSelfRef.__PVT__core__DOT__ALU_A;
    TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__ci2 
        = (1U & ((4U & (IData)(__Vfunc_Shifter__10__code))
                  ? ((2U & (IData)(__Vfunc_Shifter__10__code))
                      ? (IData)(__Vfunc_Shifter__10__ci)
                      : ((1U & (IData)(__Vfunc_Shifter__10__code))
                          ? __Vfunc_Shifter__10__a : 
                         (__Vfunc_Shifter__10__a >> 0x1fU)))
                  : ((1U & ((IData)(__Vfunc_Shifter__10__code) 
                            >> 1U)) && ((1U & (IData)(__Vfunc_Shifter__10__code)) 
                                        && (__Vfunc_Shifter__10__a 
                                            >> 0x1fU)))));
    TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__res 
        = ((8U & (IData)(__Vfunc_Shifter__10__code))
            ? ((4U & (IData)(__Vfunc_Shifter__10__code))
                ? ((2U & (IData)(__Vfunc_Shifter__10__code))
                    ? ((1U & (IData)(__Vfunc_Shifter__10__code))
                        ? (__Vfunc_Shifter__10__a >> 0x10U)
                        : (__Vfunc_Shifter__10__a << 0x00000010U))
                    : ((1U & (IData)(__Vfunc_Shifter__10__code))
                        ? (__Vfunc_Shifter__10__a >> 0x10U)
                        : (__Vfunc_Shifter__10__a << 0x00000010U)))
                : ((2U & (IData)(__Vfunc_Shifter__10__code))
                    ? ((1U & (IData)(__Vfunc_Shifter__10__code))
                        ? (__Vfunc_Shifter__10__a >> 8U)
                        : (__Vfunc_Shifter__10__a << 8U))
                    : ((1U & (IData)(__Vfunc_Shifter__10__code))
                        ? (__Vfunc_Shifter__10__a >> 2U)
                        : (__Vfunc_Shifter__10__a << 2U))))
            : ((1U & (IData)(__Vfunc_Shifter__10__code))
                ? (((IData)(TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__ci2) 
                    << 0x0000001fU) | (__Vfunc_Shifter__10__a 
                                       >> 1U)) : ((__Vfunc_Shifter__10__a 
                                                   << 1U) 
                                                  | (IData)(TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__ci2))));
    TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__co 
        = (1U & ((1U & (IData)(__Vfunc_Shifter__10__code))
                  ? __Vfunc_Shifter__10__a : (__Vfunc_Shifter__10__a 
                                              >> 0x1fU)));
    __Vfunc_Shifter__10__Vfuncout = (((QData)((IData)(TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__co)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(TOP__SH2_PKG__DOT____PVT__Shifter__Vstatic__res)));
    core__DOT____Vconcswap_1_hc7560488__0 = __Vfunc_Shifter__10__Vfuncout;
    __PVT__core__DOT__unnamedblk4__DOT__SHIFT_C = (1U 
                                                   & (IData)(
                                                             (core__DOT____Vconcswap_1_hc7560488__0 
                                                              >> 0x00000020U)));
    __PVT__core__DOT__unnamedblk4__DOT__SHIFT_RES = (IData)(core__DOT____Vconcswap_1_hc7560488__0);
    __PVT__core__DOT__ALU_T = 0U;
    if ((vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
         .__PVT__DI[1U] >> 0x0000001fU)) {
        vlSelfRef.__PVT__core__DOT__ALU_RES = ((0x40000000U 
                                                & vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__EX
                                                .__PVT__DI[1U])
                                                ? vlSelfRef.__PVT__core__DOT__ALU_B
                                                : (
                                                   (0x20000000U 
                                                    & vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__DI[1U])
                                                    ? vlSelfRef.__PVT__core__DOT__ALU_B
                                                    : __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES));
        if ((1U & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                      .__PVT__EX.__PVT__DI[1U] >> 0x0000001eU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                          .__PVT__EX.__PVT__DI[1U] 
                          >> 0x0000001dU)))) {
                __PVT__core__DOT__ALU_T = __PVT__core__DOT__unnamedblk4__DOT__ADDER_C;
            }
        }
    } else if ((0x40000000U & vlSelfRef.__PVT__core__DOT__PIPE
                .__PVT__EX.__PVT__DI[1U])) {
        if ((0x20000000U & vlSelfRef.__PVT__core__DOT__PIPE
             .__PVT__EX.__PVT__DI[1U])) {
            vlSelfRef.__PVT__core__DOT__ALU_RES = __PVT__core__DOT__unnamedblk4__DOT__SHIFT_RES;
            __PVT__core__DOT__ALU_T = __PVT__core__DOT__unnamedblk4__DOT__SHIFT_C;
        } else {
            vlSelfRef.__PVT__core__DOT__ALU_RES = __PVT__core__DOT__unnamedblk4__DOT__EXT_RES;
        }
    } else if ((0x20000000U & vlSelfRef.__PVT__core__DOT__PIPE
                .__PVT__EX.__PVT__DI[1U])) {
        vlSelfRef.__PVT__core__DOT__ALU_RES = __PVT__core__DOT__unnamedblk4__DOT__LOG_RES;
        __PVT__core__DOT__ALU_T = ((0x10000000U & vlSelfRef.__PVT__core__DOT__PIPE
                                    .__PVT__EX.__PVT__DI[1U])
                                    ? (IData)(__PVT__core__DOT__unnamedblk4__DOT__str_eq)
                                    : (IData)(__PVT__core__DOT__unnamedblk4__DOT__LOG_Z));
    } else {
        vlSelfRef.__PVT__core__DOT__ALU_RES = __PVT__core__DOT__unnamedblk4__DOT__ADDER_RES;
        if ((1U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                          .__PVT__EX.__PVT__DI[1U] 
                          >> 0x0000001bU)))) {
            if ((0U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                              .__PVT__EX.__PVT__DI[1U] 
                              >> 0x00000017U)))) {
                __PVT__core__DOT__ALU_T = __PVT__core__DOT__unnamedblk4__DOT__eq;
            } else if ((1U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                     .__PVT__EX.__PVT__DI[1U] 
                                     >> 0x00000017U)))) {
                __PVT__core__DOT__ALU_T = __PVT__core__DOT__unnamedblk4__DOT__ge_hs;
            } else if ((3U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                     .__PVT__EX.__PVT__DI[1U] 
                                     >> 0x00000017U)))) {
                __PVT__core__DOT__ALU_T = ((IData)(__PVT__core__DOT__unnamedblk4__DOT__ge_hs) 
                                           & (~ (IData)(__PVT__core__DOT__unnamedblk4__DOT__eq)));
            }
        } else if ((2U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                 .__PVT__EX.__PVT__DI[1U] 
                                 >> 0x0000001bU)))) {
            __PVT__core__DOT__ALU_T = __PVT__core__DOT__unnamedblk4__DOT__ADDER_C;
        } else if ((3U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                                 .__PVT__EX.__PVT__DI[1U] 
                                 >> 0x0000001bU)))) {
            __PVT__core__DOT__ALU_T = __PVT__core__DOT__unnamedblk4__DOT__ADDER_V;
        }
    }
    vlSelfRef.__PVT__core__DOT__INT_EXP = ((IData)(vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH) 
                                           | (IData)(__VdfgRegularize_hebeb780c_0_53));
    vlSelfRef.__PVT__INT_ACP = ((~ ((IData)(vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH) 
                                    | (IData)(vlSelfRef.__PVT__core__DOT__ID_STALL))) 
                                & (IData)(__VdfgRegularize_hebeb780c_0_53));
    __PVT__cache__DOT__unnamedblk2__DOT__DIRTY = (0x0000000fU 
                                                  & ((((((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                                         != vlSelfRef.__PVT__cache__DOT__stw3__DOT__altdpram_component__DOT__mem
                                                         [
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__CBUS_A 
                                                             >> 4U))]) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                                           != vlSelfRef.__PVT__cache__DOT__stw2__DOT__altdpram_component__DOT__mem
                                                           [
                                                           (0x0000003fU 
                                                            & (vlSelfRef.__PVT__CBUS_A 
                                                               >> 4U))]) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                                           != vlSelfRef.__PVT__cache__DOT__stw1__DOT__altdpram_component__DOT__mem
                                                           [
                                                           (0x0000003fU 
                                                            & (vlSelfRef.__PVT__CBUS_A 
                                                               >> 4U))]) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.cache__DOT__EPOCH) 
                                                            != vlSelfRef.__PVT__cache__DOT__stw0__DOT__altdpram_component__DOT__mem
                                                            [
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__CBUS_A 
                                                                >> 4U))]))) 
                                                     | (- (IData)((IData)(vlSelfRef.__PVT__cache__DOT__INIT)))));
    vlSelfRef.__PVT__cache__DOT__WAY_TAG = ((0x0cU 
                                             & (IData)(vlSelfRef.__PVT__cache__DOT__WAY_TAG)) 
                                            | (((vlSelfRef.__PVT__cache__DOT__CTAG_Q[1U] 
                                                 == 
                                                 (0x0007ffffU 
                                                  & (vlSelfRef.__PVT__CBUS_A 
                                                     >> 0x0aU))) 
                                                << 1U) 
                                               | (vlSelfRef.__PVT__cache__DOT__CTAG_Q[0U] 
                                                  == 
                                                  (0x0007ffffU 
                                                   & (vlSelfRef.__PVT__CBUS_A 
                                                      >> 0x0aU)))));
    vlSelfRef.__PVT__cache__DOT__WAY_TAG = ((3U & (IData)(vlSelfRef.__PVT__cache__DOT__WAY_TAG)) 
                                            | (((vlSelfRef.__PVT__cache__DOT__CTAG_Q[3U] 
                                                 == 
                                                 (0x0007ffffU 
                                                  & (vlSelfRef.__PVT__CBUS_A 
                                                     >> 0x0aU))) 
                                                << 3U) 
                                               | ((vlSelfRef.__PVT__cache__DOT__CTAG_Q[2U] 
                                                   == 
                                                   (0x0007ffffU 
                                                    & (vlSelfRef.__PVT__CBUS_A 
                                                       >> 0x0aU))) 
                                                  << 2U)));
    vlSelfRef.__PVT__cache__DOT__WAY_HIT = ((0x0eU 
                                             & (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT)) 
                                            | (((IData)(vlSelfRef.__PVT__cache__DOT__WAY_TAG) 
                                                & vlSelfRef.__PVT__cache__DOT__CVALID_Q[0U]) 
                                               & (~ (IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY))));
    vlSelfRef.__PVT__cache__DOT__WAY_HIT = ((0x0dU 
                                             & (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT)) 
                                            | (((((IData)(vlSelfRef.__PVT__cache__DOT__WAY_TAG) 
                                                  >> 1U) 
                                                 & vlSelfRef.__PVT__cache__DOT__CVALID_Q[1U]) 
                                                & (~ 
                                                   ((IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY) 
                                                    >> 1U))) 
                                               << 1U));
    vlSelfRef.__PVT__cache__DOT__WAY_HIT = ((0x0bU 
                                             & (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT)) 
                                            | (((((IData)(vlSelfRef.__PVT__cache__DOT__WAY_TAG) 
                                                  >> 2U) 
                                                 & vlSelfRef.__PVT__cache__DOT__CVALID_Q[2U]) 
                                                & (~ 
                                                   ((IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY) 
                                                    >> 2U))) 
                                               << 2U));
    vlSelfRef.__PVT__cache__DOT__WAY_HIT = ((7U & (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT)) 
                                            | (((((IData)(vlSelfRef.__PVT__cache__DOT__WAY_TAG) 
                                                  >> 3U) 
                                                 & vlSelfRef.__PVT__cache__DOT__CVALID_Q[3U]) 
                                                & (~ 
                                                   ((IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY) 
                                                    >> 3U))) 
                                               << 3U));
    if ((3U == (vlSelfRef.__PVT__CBUS_A >> 0x0000001dU))) {
        vlSelfRef.__PVT__cache__DOT__unnamedblk2__DOT__CACHE_ADDR_AREA_DATA 
            = ((0x00000080U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))
                ? ((0x00000040U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))
                    ? ((vlSelfRef.__PVT__cache__DOT__CTAG_Q[3U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | ((vlSelfRef.__PVT__cache__DOT__CVALID_Q[3U] 
                                               & (~ 
                                                  ((IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY) 
                                                   >> 3U))) 
                                              << 2U)))
                    : ((vlSelfRef.__PVT__cache__DOT__CTAG_Q[2U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | ((vlSelfRef.__PVT__cache__DOT__CVALID_Q[2U] 
                                               & (~ 
                                                  ((IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY) 
                                                   >> 2U))) 
                                              << 2U))))
                : ((0x00000040U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))
                    ? ((vlSelfRef.__PVT__cache__DOT__CTAG_Q[1U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | ((vlSelfRef.__PVT__cache__DOT__CVALID_Q[1U] 
                                               & (~ 
                                                  ((IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY) 
                                                   >> 1U))) 
                                              << 2U)))
                    : ((vlSelfRef.__PVT__cache__DOT__CTAG_Q[0U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | ((vlSelfRef.__PVT__cache__DOT__CVALID_Q[0U] 
                                               & (~ (IData)(__PVT__cache__DOT__unnamedblk2__DOT__DIRTY))) 
                                              << 2U)))));
        vlSelfRef.__PVT__cache__DOT__CACHE_DATA = (
                                                   (0x0fU 
                                                    == (IData)(vlSelfRef.__PVT__CBUS_BA))
                                                    ? vlSelfRef.__PVT__cache__DOT__unnamedblk2__DOT__CACHE_ADDR_AREA_DATA
                                                    : 
                                                   ((vlSelfRef.__PVT__cache__DOT__unnamedblk2__DOT__CACHE_ADDR_AREA_DATA 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & vlSelfRef.__PVT__cache__DOT__unnamedblk2__DOT__CACHE_ADDR_AREA_DATA)));
    } else {
        vlSelfRef.__PVT__cache__DOT__CACHE_DATA = (
                                                   ((((IData)(vlSelfRef.__PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem
                                                              [vlSelfRef.__PVT__cache__DOT__ram3__DOT__altsyncram_component__DOT__ab]) 
                                                      << 8U) 
                                                     | vlSelfRef.__PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem
                                                     [vlSelfRef.__PVT__cache__DOT__ram2__DOT__altsyncram_component__DOT__ab]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.__PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem
                                                               [vlSelfRef.__PVT__cache__DOT__ram1__DOT__altsyncram_component__DOT__ab]) 
                                                       << 8U) 
                                                      | vlSelfRef.__PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem
                                                      [vlSelfRef.__PVT__cache__DOT__ram0__DOT__altsyncram_component__DOT__ab]));
    }
    vlSelfRef.__PVT__core__DOT__MA_ADDR = vlSelfRef.__PVT__core__DOT__ALU_RES;
    if ((0U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                      .__PVT__EX.__PVT__DI[1U] >> 0x00000014U)))) {
        vlSelfRef.__PVT__core__DOT__MA_ADDR = vlSelfRef.__PVT__core__DOT__REG_A;
    } else if ((1U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                             .__PVT__EX.__PVT__DI[1U] 
                             >> 0x00000014U)))) {
        vlSelfRef.__PVT__core__DOT__MA_ADDR = vlSelfRef.__PVT__core__DOT__REG_B;
    } else if ((2U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                             .__PVT__EX.__PVT__DI[1U] 
                             >> 0x00000014U)))) {
        vlSelfRef.__PVT__core__DOT__MA_ADDR = vlSelfRef.__PVT__core__DOT__ALU_RES;
    }
    vlSelfRef.__PVT__core__DOT__MA_WD = vlSelfRef.__PVT__core__DOT__ALU_RES;
    if ((0U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                      .__PVT__EX.__PVT__DI[1U] >> 0x00000012U)))) {
        vlSelfRef.__PVT__core__DOT__MA_WD = vlSelfRef.__PVT__core__DOT__REG_A;
    } else if ((1U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                             .__PVT__EX.__PVT__DI[1U] 
                             >> 0x00000012U)))) {
        vlSelfRef.__PVT__core__DOT__MA_WD = vlSelfRef.__PVT__core__DOT__REG_B;
    } else if ((2U == (3U & (vlSelfRef.__PVT__core__DOT__PIPE
                             .__PVT__EX.__PVT__DI[1U] 
                             >> 0x00000012U)))) {
        vlSelfRef.__PVT__core__DOT__MA_WD = vlSelfRef.__PVT__core__DOT__ALU_RES;
    }
    vlSelfRef.__PVT__core__DOT__SR_NEW = (0x000003f3U 
                                          & vlSelfRef.__PVT__core__DOT__SR);
    if ((0x02000000U & vlSelfRef.__PVT__core__DOT__PIPE
         .__PVT__EX.__PVT__DI[0U])) {
        if ((1U & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                      .__PVT__EX.__PVT__DI[0U] >> 0x00000018U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                          .__PVT__EX.__PVT__DI[0U] 
                          >> 0x00000017U)))) {
                vlSelfRef.__PVT__core__DOT__SR_NEW 
                    = ((0xffffff0fU & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                       | ((IData)(vlSelfRef.__PVT__core__DOT__INT_LVL_LATCH) 
                          << 4U));
            }
        }
    } else if ((0x01000000U & vlSelfRef.__PVT__core__DOT__PIPE
                .__PVT__EX.__PVT__DI[0U])) {
        if ((0x00800000U & vlSelfRef.__PVT__core__DOT__PIPE
             .__PVT__EX.__PVT__DI[0U])) {
            vlSelfRef.__PVT__core__DOT__SR_NEW = (0xfffffcffU 
                                                  & vlSelfRef.__PVT__core__DOT__SR_NEW);
            vlSelfRef.__PVT__core__DOT__SR_NEW = (0xfffffffeU 
                                                  & vlSelfRef.__PVT__core__DOT__SR_NEW);
        } else {
            vlSelfRef.__PVT__core__DOT__SR_NEW = ((0xfffffcffU 
                                                   & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                                                  | (((2U 
                                                       & (vlSelfRef.__PVT__core__DOT__REG_B 
                                                          >> 0x0000001eU)) 
                                                      | (vlSelfRef.__PVT__core__DOT__REG_A 
                                                         >> 0x1fU)) 
                                                     << 8U));
            vlSelfRef.__PVT__core__DOT__SR_NEW = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                                                  | ((vlSelfRef.__PVT__core__DOT__REG_A 
                                                      ^ vlSelfRef.__PVT__core__DOT__REG_B) 
                                                     >> 0x1fU));
        }
    } else if ((0x00800000U & vlSelfRef.__PVT__core__DOT__PIPE
                .__PVT__EX.__PVT__DI[0U])) {
        if ((vlSelfRef.__PVT__core__DOT__PIPE.__PVT__EX
             .__PVT__DI[1U] >> 0x0000001fU)) {
            if ((1U & (~ (vlSelfRef.__PVT__core__DOT__PIPE
                          .__PVT__EX.__PVT__DI[1U] 
                          >> 0x0000001eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__core__DOT__PIPE
                     .__PVT__EX.__PVT__DI[1U])) {
                    vlSelfRef.__PVT__core__DOT__SR_NEW 
                        = ((0xfffffffeU & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                           | (1U & vlSelfRef.__PVT__core__DOT__ALU_RES));
                } else {
                    vlSelfRef.__PVT__core__DOT__SR_NEW 
                        = ((0xfffffeffU & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                           | (0x00000100U & ((((vlSelfRef.__PVT__core__DOT__REG_A 
                                                >> 0x1fU) 
                                               ^ (vlSelfRef.__PVT__core__DOT__SR 
                                                  >> 9U)) 
                                              ^ (IData)(__PVT__core__DOT__ALU_T)) 
                                             << 8U)));
                    vlSelfRef.__PVT__core__DOT__SR_NEW 
                        = ((0xfffffffeU & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                           | (1U & (~ ((vlSelfRef.__PVT__core__DOT__REG_A 
                                        >> 0x0000001fU) 
                                       ^ (IData)(__PVT__core__DOT__ALU_T)))));
                }
            }
        } else if ((0x40000000U & vlSelfRef.__PVT__core__DOT__PIPE
                    .__PVT__EX.__PVT__DI[1U])) {
            if ((0x20000000U & vlSelfRef.__PVT__core__DOT__PIPE
                 .__PVT__EX.__PVT__DI[1U])) {
                vlSelfRef.__PVT__core__DOT__SR_NEW 
                    = ((0xfffffffeU & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                       | (IData)(__PVT__core__DOT__ALU_T));
            }
        } else {
            vlSelfRef.__PVT__core__DOT__SR_NEW = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__core__DOT__SR_NEW) 
                                                  | (IData)(__PVT__core__DOT__ALU_T));
        }
    } else {
        vlSelfRef.__PVT__core__DOT__SR_NEW = vlSelfRef.__PVT__core__DOT__ALU_RES;
    }
    vlSelfRef.__PVT__core__DOT__DEC_IR = (((IData)(vlSelfRef.__PVT__core__DOT__RES_EXP) 
                                           | (IData)(vlSelfRef.__PVT__core__DOT__INT_EXP))
                                           ? 0U : (
                                                   ((IData)(vlSelfRef.__PVT__core__DOT__ID_DELAY_SLOT) 
                                                    & (~ 
                                                       (vlSelfRef.__PVT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__DI[0U] 
                                                        >> 0x0000000bU)))
                                                    ? 9U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__core__DOT__IFID_STALL)
                                                     ? vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__EX
                                                    .__PVT__IR
                                                     : vlSelfRef.__PVT__core__DOT__PIPE
                                                    .__PVT__ID
                                                    .__PVT__IR)));
    vlSelfRef.__PVT__IBUS_PREREQ = ((IData)(vlSelfRef.__PVT__CBUS_REQ) 
                                    & ((~ (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                                       & ((~ (IData)(vlSelfRef.__PVT__CBUS_WR)) 
                                          & (((~ (IData)(vlSelfRef.__PVT__cache__DOT__CCR)) 
                                              & (0U 
                                                 == 
                                                 (vlSelfRef.__PVT__CBUS_A 
                                                  >> 0x0000001dU))) 
                                             | (((0U 
                                                  == 
                                                  (vlSelfRef.__PVT__CBUS_A 
                                                   >> 0x0000001dU)) 
                                                 & ((~ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.__PVT__cache__DOT__WAY_HIT))) 
                                                    & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))) 
                                                | ((~ (IData)(vlSelfRef.__PVT__CBUS_TAS)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelfRef.__PVT__CBUS_A 
                                                       >> 0x0000001dU))))))));
    if (vlSelfRef.__PVT__cache__DOT__CACHE_DATA_AREA) {
        vlSelfRef.cache__DOT____VlemCall_2__WayToAddr 
            = (3U & (vlSelfRef.__PVT__CBUS_A >> 0x0aU));
    } else if ((3U == (vlSelfRef.__PVT__CBUS_A >> 0x0000001dU))) {
        vlSelfRef.cache__DOT____VlemCall_2__WayToAddr 
            = (3U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                     >> 6U));
    } else {
        vlSelfRef.__Vfunc_cache__DOT__WayToAddr__1__way 
            = vlSelfRef.__PVT__cache__DOT__WAY_HIT;
        vlSelfRef.__PVT__cache__DOT__WayToAddr__Vstatic__res 
            = ((1U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__1__way))
                ? 0U : ((2U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__1__way))
                         ? 1U : ((4U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__1__way))
                                  ? 2U : ((8U & (IData)(vlSelfRef.__Vfunc_cache__DOT__WayToAddr__1__way))
                                           ? 3U : 0U))));
        vlSelfRef.cache__DOT____VlemCall_2__WayToAddr 
            = vlSelfRef.__PVT__cache__DOT__WayToAddr__Vstatic__res;
    }
    __PVT__cache__DOT__CRAM_RDWAY = vlSelfRef.cache__DOT____VlemCall_2__WayToAddr;
    __PVT__CACHE_DO = ((0xfffffe92U == vlSelfRef.__PVT__CBUS_A)
                        ? ((0xdf000000U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                           << 0x00000018U)) 
                           | ((0x00df0000U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                              << 0x00000010U)) 
                              | ((0x0000df00U & ((IData)(vlSelfRef.__PVT__cache__DOT__CCR) 
                                                 << 8U)) 
                                 | (0xdfU & (IData)(vlSelfRef.__PVT__cache__DOT__CCR)))))
                        : ((IData)(vlSelfRef.__PVT__cache__DOT__IBDATA_RDY)
                            ? vlSelfRef.__PVT__IBUS_DI
                            : vlSelfRef.__PVT__cache__DOT__CACHE_DATA));
    vlSelfRef.__PVT__core__DOT__BR_T = (1U & (((vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__EX
                                                .__PVT__DI[0U] 
                                                >> 0x0000001cU) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__EX
                                                      .__PVT__DI[0U] 
                                                      >> 0x0000001aU))))
                                               ? vlSelfRef.__PVT__core__DOT__SR_NEW
                                               : vlSelfRef.__PVT__core__DOT__SR));
    vlSelfRef.__PVT__cache__DOT__CRAM_RDADDR = (((IData)(__PVT__cache__DOT__CRAM_RDWAY) 
                                                 << 8U) 
                                                | (0x000000ffU 
                                                   & (vlSelfRef.__PVT__CBUS_A 
                                                      >> 2U)));
    vlSelfRef.__PVT__MULT_DI = ((IData)(((8U == (0x0cU 
                                                 & (IData)(vlSelfRef.__PVT__MAC_OP))) 
                                         & (0U != (IData)(vlSelfRef.__PVT__MAC_SEL))))
                                 ? __PVT__CACHE_DO : vlSelfRef.__PVT__core__DOT__MA_WDATA);
    vlSelfRef.__PVT__CBUS_DI = (((0U != (IData)(vlSelfRef.__PVT__MAC_SEL)) 
                                 & ((~ (IData)(vlSelfRef.__PVT__MAC_WE)) 
                                    & (0x0cU == (IData)(vlSelfRef.__PVT__MAC_OP))))
                                 ? vlSelfRef.__PVT__MULT_DO
                                 : __PVT__CACHE_DO);
    __Vfunc_Decode__6__VER = 1U;
    __Vfunc_Decode__6__ILSI = vlSelfRef.__PVT__core__DOT__ILSI;
    __Vfunc_Decode__6__ILI_EXP = vlSelfRef.__PVT__core__DOT__ILI_EXP;
    __Vfunc_Decode__6__INT_EXP = vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH;
    __Vfunc_Decode__6__RES_EXP = vlSelfRef.__PVT__core__DOT__RES_EXP;
    __Vfunc_Decode__6__DS = vlSelfRef.__PVT__core__DOT__ID_DELAY_SLOT;
    __Vfunc_Decode__6__T = vlSelfRef.__PVT__core__DOT__BR_T;
    __Vfunc_Decode__6__STATE = vlSelfRef.__PVT__core__DOT__STATE;
    __Vfunc_Decode__6__IR = vlSelfRef.__PVT__core__DOT__DEC_IR;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN 
        = (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                          >> 8U));
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN 
        = (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                          >> 4U));
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC = 
        ((IData)(__Vfunc_Decode__6__T) == (1U & (~ 
                                                 ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 9U))));
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] = 0U;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] = 0xa0240000U;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] = 4U;
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
        = ((0xffffe0ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
           | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
              << 8U));
    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
        = ((0xffffffc1U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
           | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
              << 1U));
    if (__Vfunc_Decode__6__RES_EXP) {
        if ((4U & (IData)(__Vfunc_Decode__6__STATE))) {
            if ((1U & (~ ((IData)(__Vfunc_Decode__6__STATE) 
                          >> 1U)))) {
                if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000f40U | (0xffffe03fU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000011U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00002000U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000011U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00006000U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            }
        } else if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
            if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00268000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000016U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00268000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000001aU | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            }
        } else if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0xa0000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000011U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x18000000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
        }
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
            = (0x00000014U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
    } else if (__Vfunc_Decode__6__INT_EXP) {
        if ((4U & (IData)(__Vfunc_Decode__6__STATE))) {
            if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
                if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00002000U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000011U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00006000U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else if ((1U & (~ (IData)(__Vfunc_Decode__6__STATE)))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000400U | (0x0000e3ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x08000000U | (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00268000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000001aU | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            }
        } else if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
            if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x12000000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (2U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000fc0U | (0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000e00U | (0x0000e1ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x02264000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            }
        } else if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000fc0U | (0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000400U | (0x0000e3ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x02264000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
        }
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
            = (0x0000001cU | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
    } else if (__Vfunc_Decode__6__ILI_EXP) {
        if ((4U & (IData)(__Vfunc_Decode__6__STATE))) {
            if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
                if ((1U & (~ (IData)(__Vfunc_Decode__6__STATE)))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00002000U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000011U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00006000U | (0xffff81ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
            if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000400U | (0x0000e3ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x08000000U | (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00268000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000001aU | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000fc0U | (0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = ((0x0000e1ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]) 
                       | (0x0000ffffU & (0x00000200U 
                                         | (((IData)(__Vfunc_Decode__6__ILSI)
                                              ? 4U : 3U) 
                                            << 0x0000000aU))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x02264000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            }
        } else if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000fc0U | (0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000400U | (0x0000e3ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x02264000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
        }
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
            = (0x00000018U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
    } else if ((0x00008000U & (IData)(__Vfunc_Decode__6__IR))) {
        if ((0x00004000U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((0x00002000U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0xa0000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (1U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                }
            } else if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000040U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = ((0x0000e0ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]) 
                       | (0x0000ffffU & (0x00000a00U 
                                         | (0x00000100U 
                                            & ((IData)(__Vfunc_Decode__6__IR) 
                                               >> 6U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000000aU | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00208000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (((0x00000010U 
                                           & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 0x0000000aU)) 
                                          | (8U & (
                                                   (~ 
                                                    ((IData)(__Vfunc_Decode__6__IR) 
                                                     >> 0x0eU)) 
                                                   << 3U))) 
                                         << 0x0000000dU)));
            } else if ((0x00000800U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0x00000400U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x40000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000400U | (0x0000e3ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (2U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x04000000U | (0xf3ffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x0024a000U | (0xffc01fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((2U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000068U | (0x0000ff83U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = ((0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                               | (((2U == (3U & ((IData)(__Vfunc_Decode__6__IR) 
                                                 >> 8U)))
                                    ? 0x0490U : ((3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 8U)))
                                                  ? 0x04a0U
                                                  : 0x0480U)) 
                                  << 0x00000016U));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = ((0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]) 
                               | (0x0000ffffU & (((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(__Vfunc_Decode__6__IR) 
                                                       >> 8U)))
                                                   ? 0x0490U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(__Vfunc_Decode__6__IR) 
                                                        >> 8U)))
                                                    ? 0x04a0U
                                                    : 0x0480U)) 
                                                 >> 0x0000000aU)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00180000U | ((0xffc01fffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 8U))) 
                                                 << 0x0000000eU)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00800000U | ((0xe07fffffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | (0x10000000U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(__Vfunc_Decode__6__IR) 
                                                          >> 8U)))) 
                                                    << 0x0000001cU))));
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (8U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else if ((0x00000200U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c0U | (0xffffe03fU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x28000000U | (0x003fffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c0U | (0xffffe03fU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x24000000U | (0x003fffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (9U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                } else if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | (0xffffe03fU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x20000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (9U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000080U | (0xffffe03fU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (8U | (0x0000ffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x20000000U | (0x1fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x20000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (1U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x10800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else if ((0x00000400U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0x00000200U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c0U | (0xffffe03fU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000b00U | (0x0000e0ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x0000000aU | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00020000U | (0xfffcffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00000040U | (0xffffe03fU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000600U | (0x0000e1ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x0000000aU | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x04000000U | (0xf3ffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x0020a000U | ((0xffc01fffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | (0x00030000U 
                                                 & ((IData)(__Vfunc_Decode__6__IR) 
                                                    << 8U))));
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000040U | (0xffffe03fU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000600U | (0x0000e1ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000000aU | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x04000000U | (0xf3ffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0020a000U | ((0xffc01fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x00030000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 8U))));
                }
            } else if ((0x00000200U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                    if (__Vfunc_Decode__6__DS) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else {
                        if ((4U & (IData)(__Vfunc_Decode__6__STATE))) {
                            if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
                                if ((1U & (~ (IData)(__Vfunc_Decode__6__STATE)))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x00002000U 
                                           | (0xffff81ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                }
                            } else if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000040U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x003fffffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000011U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x20000000U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00006000U 
                                       | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            }
                        } else if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
                            if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000400U 
                                       | (0x0000e3ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x08000000U 
                                       | (0xf3ffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00268000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x0000000aU 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            } else {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00000fc0U 
                                       | (0xffffe03fU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00001200U 
                                       | (0x0000e1ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x02264000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000015U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            }
                        } else if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x00000fc0U | (0xffffe03fU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000400U | (0x0000e3ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x02264000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000015U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000018U | (0xffffffe3U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000080U | (0xffffe03fU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000600U | (0x0000e1ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000000aU | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x04000000U | (0xf3ffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00204000U | ((0xffc01fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x00030000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 8U))));
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000080U | (0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000600U | (0x0000e1ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000000aU | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x04000000U | (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00204000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 8U))));
            }
        } else if ((0x00002000U & (IData)(__Vfunc_Decode__6__IR))) {
            if (__Vfunc_Decode__6__DS) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = ((0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                           | (((2U & ((IData)(__Vfunc_Decode__6__IR) 
                                      >> 0x0000000bU)) 
                               | (1U & ((IData)(__Vfunc_Decode__6__IR) 
                                        >> 0x0cU))) 
                              << 0x0000001fU));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000020U | ((0xffffffc0U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (((2U & 
                                               ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 0x0000000bU)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_Decode__6__IR) 
                                                    >> 0x0cU))) 
                                             >> 1U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000a00U | (0x0000e1ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000000eU | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00006800U | ((0xffff81ffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x00000200U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 3U))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00002800U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000040U | ((0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                     << 8U)));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = ((0x0000e0ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]) 
                   | (0x0000ffffU & (0x00000a00U | 
                                     (0x00000100U & 
                                      ((IData)(__Vfunc_Decode__6__IR) 
                                       >> 6U)))));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x0000000aU | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00208000U | ((0xffc01fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | (((0x00000010U 
                                       & ((IData)(__Vfunc_Decode__6__IR) 
                                          >> 0x0000000aU)) 
                                      | (8U & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                                   >> 0x0eU)) 
                                               << 3U))) 
                                     << 0x0000000dU)));
        } else if ((0x00000800U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((0x00000400U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                    if (((IData)(__Vfunc_Decode__6__VER) 
                         & (~ (IData)(__Vfunc_Decode__6__DS)))) {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000a00U | (0x0000e1ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (6U | (0x0000ffe0U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0xdfffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC) 
                                      << 0x0000001dU));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00005800U | ((0xffff81ffU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                                  | (0x00000400U 
                                                     & ((~ 
                                                         ((IData)(__Vfunc_Decode__6__IR) 
                                                          >> 9U)) 
                                                        << 0x0000000aU))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC)
                                        ? 1U : 0U) 
                                      << 2U));
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00001800U | (0xffff81ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((0x00000200U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                    if (__Vfunc_Decode__6__DS) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000a00U | (0x0000e1ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (6U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0xdfffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC) 
                                  << 0x0000001dU));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00005000U | ((0xffff81ffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | (0x00000400U 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 9U)) 
                                                    << 0x0000000aU))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC)
                                    ? 1U : 0U) << 2U));
                    } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00001000U | (0xffff81ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((0x00000100U & (IData)(__Vfunc_Decode__6__IR))) {
                if (__Vfunc_Decode__6__DS) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                } else if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000a00U | (0x0000e1ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (6U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = ((0xdfffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                           | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC) 
                              << 0x0000001dU));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00005000U | ((0xffff81ffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x00000400U 
                                             & ((~ 
                                                 ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 9U)) 
                                                << 0x0000000aU))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = ((0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                           | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__BC)
                                ? 1U : 0U) << 2U));
                } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00001000U | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000080U | (0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0a000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (5U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((0x00000400U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((0x00000200U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000041U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x7ffffffeU 
                                         & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                            << 1U))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (2U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0020a000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 8U))));
            }
        } else if ((0x00000200U & (IData)(__Vfunc_Decode__6__IR))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
        } else {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000081U | ((0xffffe000U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | (0x7ffffffeU & 
                                     ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                      << 1U))));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (2U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00204000U | ((0xffc01fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | (0x00030000U & 
                                     ((IData)(__Vfunc_Decode__6__IR) 
                                      << 8U))));
        }
    } else if ((0x00004000U & (IData)(__Vfunc_Decode__6__IR))) {
        if ((0x00002000U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (5U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            } else if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x08000000U | ((0xe03fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x06000000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000019U))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x40000000U | (0x1fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000010U | (0x0000ffe3U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02000000U | ((0xf03fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x04000000U 
                                             & ((~ (IData)(__Vfunc_Decode__6__IR)) 
                                                << 0x0000001aU))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = ((0x0fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                           | (0x10000000U & ((~ (IData)(__Vfunc_Decode__6__IR)) 
                                             << 0x0000001cU)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (2U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00800000U | ((0xe07fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x10000000U 
                                             & ((~ (IData)(__Vfunc_Decode__6__IR)) 
                                                << 0x0000001cU))));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = ((0xe03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                           | (0x02000000U & ((IData)(__Vfunc_Decode__6__IR) 
                                             << 0x00000019U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x40000000U | (0x1fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                }
            } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c1U | ((0xffffe000U 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((0x7fffff00U 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)) 
                                                 | (0x7ffffffeU 
                                                    & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                       << 1U)))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x2a000000U | (0x003fffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000012U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00000041U | ((0xffffe000U 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((0x7fffff00U 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)) 
                                                 | (0x7ffffffeU 
                                                    & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                       << 1U)))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000016U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x0014a000U | ((0xffc01fffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | (0x00030000U 
                                                 & ((IData)(__Vfunc_Decode__6__IR) 
                                                    << 0x00000010U))));
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x80000000U | (0x7fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000041U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000016U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0014a000U | ((0xffc01fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x00030000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000010U))));
                }
            } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000012U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000041U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000012U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0024a000U | ((0xffc01fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x00030000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000010U))));
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000041U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000012U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0024a000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000010U))));
            }
        } else if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000041U | ((0xffffe000U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | ((0x7fffff00U & 
                                      ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                       << 8U)) | (0x7ffffffeU 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                     << 1U)))));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x0026a000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (2U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
        } else if ((0x00000080U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                            if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x000000c0U 
                                       | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0001a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000015U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x004d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x80000000U 
                                       | (0x7fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (1U | ((0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0015a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000016U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x002d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            }
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        } else {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else if ((0x00000040U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                            if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x000000c0U 
                                       | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0001a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000015U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x004d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x80000000U 
                                       | (0x7fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (1U | ((0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0015a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000016U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x002d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            }
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        } else {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else if ((0x00000020U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((0x00000010U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                            if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                                if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x000000c0U 
                                           | ((0xffffe03fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000200U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x0001a000U 
                                           | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000015U 
                                           | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x004d8000U 
                                           | (0xff807fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x00000020U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x80000000U 
                                           | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (1U | ((0xffffffc0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                                 | (0x7ffffffeU 
                                                    & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                       << 1U))));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000200U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x0015a000U 
                                           | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000016U 
                                           | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x002d8000U 
                                           | (0xff807fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                }
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (4U | (0xffffffe3U 
                                             & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            } else {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            }
                        } else {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                            if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x000000c0U 
                                       | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0001a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000015U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x004d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x80000000U 
                                       | (0x7fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (1U | ((0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0015a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000016U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x002d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            }
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        } else {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | (0x1f800000U & 
                                      ((0x00c30a20U 
                                        >> ((IData)(6U) 
                                            * (3U & 
                                               ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 4U)))) 
                                       << 0x00000017U)));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        if (__Vfunc_Decode__6__DS) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else {
                            if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00000080U 
                                       | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = ((0x7fffffffU 
                                        & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                       | (((2U & ((~ 
                                                   ((IData)(__Vfunc_Decode__6__IR) 
                                                    >> 5U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 5U)))) 
                                          << 0x0000001fU));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = ((0xfffffffeU 
                                        & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                       | (((2U & ((~ 
                                                   ((IData)(__Vfunc_Decode__6__IR) 
                                                    >> 5U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 5U)))) 
                                          >> 1U));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00000020U 
                                       | (0xffffffc1U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000a00U 
                                       | (0x0000e1ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x003fffffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000011U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x20000000U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00006800U 
                                       | ((0xffff81ffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x00000200U 
                                             & ((~ 
                                                 ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 5U)) 
                                                << 9U))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00002800U 
                                       | (0xffff81ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            }
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000a1U | ((0xffffe000U 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | (0x7fffff00U 
                                                 & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                    << 8U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000011U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                           | (((0x00000030U & (IData)(__Vfunc_Decode__6__IR)) 
                               | (8U & ((IData)(__Vfunc_Decode__6__IR) 
                                        << 3U))) << 0x00000016U));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x70000000U | (0x0fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                }
            } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x80000000U | (0x7fffffffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x0016a000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000016U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((2U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000011U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | (0x1f800000U & 
                                      ((0x00c30a20U 
                                        >> ((IData)(6U) 
                                            * (3U & 
                                               ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 4U)))) 
                                       << 0x00000017U)));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (8U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00001041U | ((0xffffe000U 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | (0x7ffffffeU 
                                                 & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                    << 1U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x0016a000U | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000016U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                           | (((0x00000020U & ((IData)(__Vfunc_Decode__6__IR) 
                                               << 3U)) 
                               | ((0x00000010U & ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 1U)) 
                                  | (8U & ((IData)(__Vfunc_Decode__6__IR) 
                                           << 3U)))) 
                              << 0x00000016U));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x60000000U | (0x0fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x10800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c0U | ((0xffffe03fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000400U | (0x0000e3ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | (0x0c000000U & ((0xa4U 
                                                  >> 
                                                  (6U 
                                                   & ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 3U))) 
                                                 << 0x0000001aU)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x02264000U | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000015U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000e1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x7fffff00U 
                                             & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                << 8U))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02264000U | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000015U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                       | (((0x00000020U & ((IData)(__Vfunc_Decode__6__IR) 
                                           << 3U)) 
                           | ((0x00000010U & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 1U)) 
                              | (8U & ((IData)(__Vfunc_Decode__6__IR) 
                                       << 3U)))) << 0x00000016U));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x60000000U | (0x0fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((0x00000010U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                            if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x000000c0U 
                                       | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0001a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000015U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x004d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x80000000U 
                                       | (0x7fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (1U | ((0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x0015a000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000016U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x002d8000U 
                                       | (0xff807fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            }
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        } else {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | (0x1f800000U & 
                                      ((0x00c30a20U 
                                        >> ((IData)(6U) 
                                            * (3U & 
                                               ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 4U)))) 
                                       << 0x00000017U)));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((1U & (~ ((IData)(__Vfunc_Decode__6__STATE) 
                                      >> 2U)))) {
                            if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
                                if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000080U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000200U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x0a000000U 
                                           | (0x003fffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000011U 
                                           | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x10800000U 
                                           | (0xe07fffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                } else {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000060U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x28184000U 
                                           | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x0000fffcU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x00000020U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                }
                            } else {
                                if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000020U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                } else {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x00000080U 
                                           | ((0xffffe03fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000200U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x0024a000U 
                                           | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000011U 
                                           | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                }
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            }
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000100U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x0000000cU | (0xffffffe3U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00220080U | ((0xffc0003fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x000a0000U | ((0xff807fffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | (((0x00000080U 
                                                   & ((~ 
                                                       ((IData)(__Vfunc_Decode__6__IR) 
                                                        >> 4U)) 
                                                      << 7U)) 
                                                  | (0x00000040U 
                                                     & ((IData)(__Vfunc_Decode__6__IR) 
                                                        << 2U))) 
                                                 << 0x0000000fU)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                           | (((0x00000030U & (IData)(__Vfunc_Decode__6__IR)) 
                               | (8U & ((IData)(__Vfunc_Decode__6__IR) 
                                        << 3U))) << 0x00000016U));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x70000000U | (0x0fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                }
            } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x80000000U | (0x7fffffffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x0016a000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000016U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((2U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000011U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | (0x1f800000U & 
                                      ((0x00c30a20U 
                                        >> ((IData)(6U) 
                                            * (3U & 
                                               ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 4U)))) 
                                       << 0x00000017U)));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (8U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (1U | ((0xffffffc0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                     | (0x7ffffffeU 
                                        & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                           << 1U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x0016a000U | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000016U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x000c0000U | ((0xff807fffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | (((0x00000080U 
                                                   & ((~ 
                                                       ((IData)(__Vfunc_Decode__6__IR) 
                                                        >> 4U)) 
                                                      << 7U)) 
                                                  | (0x00000040U 
                                                     & ((IData)(__Vfunc_Decode__6__IR) 
                                                        << 2U))) 
                                                 << 0x0000000fU)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000080U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000010U | (0x0000ffe3U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0ac00000U | ((0x003fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x01000000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000016U))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (1U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x10800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c0U | ((0xffffe03fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000400U | (0x0000e3ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | (0x0c000000U & ((0xa4U 
                                                  >> 
                                                  (6U 
                                                   & ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 3U))) 
                                                 << 0x0000001aU)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x02264000U | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000015U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02264000U | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000015U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00170000U | ((0xff807fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (((0x00000080U 
                                               & ((~ 
                                                   ((IData)(__Vfunc_Decode__6__IR) 
                                                    >> 4U)) 
                                                  << 7U)) 
                                              | (0x00000040U 
                                                 & ((IData)(__Vfunc_Decode__6__IR) 
                                                    << 2U))) 
                                             << 0x0000000fU)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000080U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000010U | (0x0000ffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0ac00000U | ((0x003fffffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x01000000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000016U))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (1U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            } else if (__Vfunc_Decode__6__VER) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0a000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x000000c0U | ((0xffffe03fU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x0001a000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000015U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x004d8000U | (0xff807fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x80000000U | (0x7fffffffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x0015a000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000016U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x002d8000U | (0xff807fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (1U | ((0xffffffc0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                     | (0x7ffffffeU 
                                        & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                           << 1U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | (0x1f800000U & ((0x00c30a20U 
                                                  >> 
                                                  ((IData)(6U) 
                                                   * 
                                                   (3U 
                                                    & ((IData)(__Vfunc_Decode__6__IR) 
                                                       >> 4U)))) 
                                                 << 0x00000017U)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    if (__Vfunc_Decode__6__DS) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x00000080U | ((0xffffe03fU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = ((0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                   | (((2U & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 5U)) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(__Vfunc_Decode__6__IR) 
                                                   >> 5U)))) 
                                      << 0x0000001fU));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = ((0xfffffffeU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                   | (((2U & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 5U)) 
                                              << 1U)) 
                                       | (1U & (~ ((IData)(__Vfunc_Decode__6__IR) 
                                                   >> 5U)))) 
                                      >> 1U));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x00000020U | (0xffffffc1U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000a00U | (0x0000e1ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000011U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00006800U | ((0xffff81ffU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                                  | (0x00000200U 
                                                     & ((~ 
                                                         ((IData)(__Vfunc_Decode__6__IR) 
                                                          >> 5U)) 
                                                        << 9U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00002800U | (0xffff81ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00220080U | ((0xffc0003fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x000a0000U | ((0xff807fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (((0x00000080U 
                                               & ((~ 
                                                   ((IData)(__Vfunc_Decode__6__IR) 
                                                    >> 4U)) 
                                                  << 7U)) 
                                              | (0x00000040U 
                                                 & ((IData)(__Vfunc_Decode__6__IR) 
                                                    << 2U))) 
                                             << 0x0000000fU)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                       | (((0x00000030U & (IData)(__Vfunc_Decode__6__IR)) 
                           | (8U & ((IData)(__Vfunc_Decode__6__IR) 
                                    << 3U))) << 0x00000016U));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x70000000U | (0x0fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            }
        } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (1U | ((0xffffffc0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                     | (0x7ffffffeU 
                                        & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                           << 1U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x0016a000U | (0x00001fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000016U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((2U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000011U | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | (0x1f800000U & ((0x00c30a20U 
                                                  >> 
                                                  ((IData)(6U) 
                                                   * 
                                                   (3U 
                                                    & ((IData)(__Vfunc_Decode__6__IR) 
                                                       >> 4U)))) 
                                                 << 0x00000017U)));
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (8U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x80000000U | (0x7fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (1U | ((0xffffffc0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                 | (0x7ffffffeU & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                   << 1U))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0016a000U | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000016U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x000c0000U | ((0xff807fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (((0x00000080U 
                                               & ((~ 
                                                   ((IData)(__Vfunc_Decode__6__IR) 
                                                    >> 4U)) 
                                                  << 7U)) 
                                              | (0x00000040U 
                                                 & ((IData)(__Vfunc_Decode__6__IR) 
                                                    << 2U))) 
                                             << 0x0000000fU)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                       | (((0x00000020U & ((IData)(__Vfunc_Decode__6__IR) 
                                           << 3U)) 
                           | ((0x00000010U & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 1U)) 
                              | (8U & ((IData)(__Vfunc_Decode__6__IR) 
                                       << 3U)))) << 0x00000016U));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x60000000U | (0x0fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c0U | ((0xffffe03fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000400U | (0x0000e3ffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = ((0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                           | (0x0c000000U & ((0xa4U 
                                              >> (6U 
                                                  & ((IData)(__Vfunc_Decode__6__IR) 
                                                     >> 3U))) 
                                             << 0x0000001aU)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02264000U | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000015U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x02264000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00170000U | ((0xff807fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                      | (((0x00000080U 
                                           & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 4U)) 
                                              << 7U)) 
                                          | (0x00000040U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 2U))) 
                                         << 0x0000000fU)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x000000c0U | ((0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                     << 8U)));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = ((0xf03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                   | (((0x00000020U & ((IData)(__Vfunc_Decode__6__IR) 
                                       << 3U)) | ((0x00000010U 
                                                   & ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 1U)) 
                                                  | (8U 
                                                     & ((IData)(__Vfunc_Decode__6__IR) 
                                                        << 3U)))) 
                      << 0x00000016U));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x60000000U | (0x0fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
        }
    } else if ((0x00002000U & (IData)(__Vfunc_Decode__6__IR))) {
        if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                    if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c1U | ((0xffffe000U 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((0x7fffff00U 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)) 
                                                 | (0x7ffffffeU 
                                                    & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                       << 1U)))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = ((0xe03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                               | (((0x00000060U & ((IData)(__Vfunc_Decode__6__IR) 
                                                   << 5U)) 
                                   | ((IData)((2U == 
                                               (3U 
                                                & (IData)(__Vfunc_Decode__6__IR)))) 
                                      << 4U)) << 0x00000016U));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x1fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00800000U | ((0xe07fffffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__Vfunc_Decode__6__IR))) 
                                                 << 0x0000001cU)));
                    } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                        if (__Vfunc_Decode__6__VER) {
                            if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00220080U 
                                       | ((0xffc0003fU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00490000U 
                                       | ((0xff807fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x00008000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x0000000cU))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x7fffffffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (1U | ((0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U))));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00260000U 
                                       | (0xffc01fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00290000U 
                                       | ((0xff807fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x00008000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x0000000cU))));
                            }
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (4U | (0xffffffe3U 
                                         & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        } else {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        }
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x000000c1U | ((0xffffe000U 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((0x7fffff00U 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)) 
                                                 | (0x7ffffffeU 
                                                    & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                       << 1U)))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = ((0xe03fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                               | (((0x00000060U & ((IData)(__Vfunc_Decode__6__IR) 
                                                   << 5U)) 
                                   | ((IData)((2U == 
                                               (3U 
                                                & (IData)(__Vfunc_Decode__6__IR)))) 
                                      << 4U)) << 0x00000016U));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x1fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00800000U | ((0xe07fffffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__Vfunc_Decode__6__IR))) 
                                                 << 0x0000001cU)));
                    }
                } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02000000U | ((0xe03fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (((0x00000060U 
                                               & ((IData)(__Vfunc_Decode__6__IR) 
                                                  << 5U)) 
                                              | ((IData)(
                                                         (2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(__Vfunc_Decode__6__IR)))) 
                                                 << 4U)) 
                                             << 0x00000016U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x1fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00800000U | ((0xe07fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | ((0U != 
                                              (3U & (IData)(__Vfunc_Decode__6__IR))) 
                                             << 0x0000001cU)));
                } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02000000U | ((0xe03fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (((0x00000060U 
                                               & ((IData)(__Vfunc_Decode__6__IR) 
                                                  << 5U)) 
                                              | ((IData)(
                                                         (2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(__Vfunc_Decode__6__IR)))) 
                                                 << 4U)) 
                                             << 0x00000016U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x1fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x00800000U | ((0xe07fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | ((0U != 
                                              (3U & (IData)(__Vfunc_Decode__6__IR))) 
                                             << 0x0000001cU)));
                }
            } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000081U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0a000000U | ((0x003fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x01c00000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000016U))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x10800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    if (__Vfunc_Decode__6__VER) {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x00220080U | ((0xffc0003fU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00490000U | ((0xff807fffU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                                  | (0x00008000U 
                                                     & ((IData)(__Vfunc_Decode__6__IR) 
                                                        << 0x0000000cU))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x00260000U | (0xffc01fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00290000U | ((0xff807fffU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                                  | (0x00008000U 
                                                     & ((IData)(__Vfunc_Decode__6__IR) 
                                                        << 0x0000000cU))));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x80000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x10800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000081U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0a000000U | ((0x003fffffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x01c00000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000016U))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000081U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0a000000U | ((0x003fffffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x01c00000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000016U))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = ((0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                           | ((IData)((0x000000008c540000ULL 
                                       | (QData)((IData)(
                                                         (0x00000102U 
                                                          | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                              << 9U) 
                                                             | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                                << 2U))))))) 
                              << 0x0000001fU));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (((IData)((0x000000008c540000ULL 
                                     | (QData)((IData)(
                                                       (0x00000102U 
                                                        | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                            << 9U) 
                                                           | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                              << 2U))))))) 
                            >> 1U) | ((IData)(((0x000000008c540000ULL 
                                                | (QData)((IData)(
                                                                  (0x00000102U 
                                                                   | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                                       << 9U) 
                                                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                                         << 2U)))))) 
                                               >> 0x00000020U)) 
                                      << 0x0000001fU));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = ((0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]) 
                           | (0x0000ffffU & ((IData)(
                                                     ((0x000000008c540000ULL 
                                                       | (QData)((IData)(
                                                                         (0x00000102U 
                                                                          | (((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                                              << 9U) 
                                                                             | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                                                << 2U)))))) 
                                                      >> 0x00000020U)) 
                                             >> 1U)));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x006a0000U | ((0xff807fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                          | (0x00018000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x0000000fU))));
                } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x44000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000081U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x34000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x10800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                }
            } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x28000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x24000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                }
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c1U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x20000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000081U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x20000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            }
        } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000081U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x11000000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x000000c1U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x7fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x7ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x02000000U | (0x003fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (0x00000015U | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00244000U | ((0xffc01fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x00030000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000010U))));
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c1U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x02000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000015U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00244000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000010U))));
            }
        } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000081U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x7fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000011U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00244000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000010U))));
            }
        } else {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000081U | ((0xffffe000U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | ((0x7fffff00U & 
                                      ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                       << 8U)) | (0x7ffffffeU 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                     << 1U)))));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000011U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00244000U | ((0xffc01fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | (0x00030000U & 
                                     ((IData)(__Vfunc_Decode__6__IR) 
                                      << 0x00000010U))));
        }
    } else if ((0x00001000U & (IData)(__Vfunc_Decode__6__IR))) {
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
            = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
            = (0x00000081U | ((0xffffe000U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                              | ((0x7fffff00U & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                 | (0x7ffffffeU & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
            = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
            = (0x00264000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
            = (1U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
    } else if ((8U & (IData)(__Vfunc_Decode__6__IR))) {
        if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                    if (__Vfunc_Decode__6__VER) {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x000000c0U | ((0xffffe03fU 
                                                   & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                     << 8U)));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x0002a000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000015U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x004c8000U | (0xff807fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x80000000U | (0x7fffffffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (1U | ((0xffffffc0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                         | (0x7ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U))));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x0016a000U | (0x00001fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                = (0x00000016U | (0x0000ffe0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x002c8000U | (0xff807fffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    } else {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (0x40000000U | (0x3fffffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x00000041U | ((0xffffe000U 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | ((0x3fffff00U 
                                              & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)) 
                                             | (0x3ffffffeU 
                                                & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                   << 1U)))));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                        = (2U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                        = (0x0024a000U | ((0xffc01fffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                          | (0x00030000U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 0x00000010U))));
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x40000000U | (0x3fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000041U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x3fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x3ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (2U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x0024a000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000010U))));
            }
        } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                if ((0U == (0x000000ffU & ((IData)(__Vfunc_Decode__6__IR) 
                                           >> 4U)))) {
                    if (__Vfunc_Decode__6__DS) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else {
                        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                = (0x00000021U | (0xffffffc0U 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00006800U | (0xffff81ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                = (0x00002800U | (0xffff81ffU 
                                                  & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                } else if ((1U == (0x000000ffU & ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 4U)))) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000080U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else if ((2U == (0x000000ffU & ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 4U)))) {
                    if (__Vfunc_Decode__6__DS) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else {
                        if ((1U & (~ ((IData)(__Vfunc_Decode__6__STATE) 
                                      >> 2U)))) {
                            if ((2U & (IData)(__Vfunc_Decode__6__STATE))) {
                                if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000040U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000200U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x003fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000011U 
                                           | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x00002800U 
                                           | (0xffff81ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x10000000U 
                                           | (0xe07fffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                } else {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000040U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000200U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x003fffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000011U 
                                           | (0x0000ffe0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x20000000U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x00006800U 
                                           | (0xffff81ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x00000020U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                }
                            } else {
                                if ((1U & (IData)(__Vfunc_Decode__6__STATE))) {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x80000000U 
                                           | (0x7fffffffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x0000001eU 
                                           | (0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                        = (0x00000020U 
                                           | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                } else {
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                        = (0x7fffffffU 
                                           & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                        = (0x0000001fU 
                                           | (0xffffffc0U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                }
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000200U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                                    = (0x00168000U 
                                       | (0x00001fffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                                    = (0x00000016U 
                                       | (0x0000ffe0U 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                                    = (0x00000020U 
                                       | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                            }
                        }
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x0000000cU | (0xffffffe3U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if (((0U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                               >> 4U))) 
                        || (1U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 4U))))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000040U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00020000U | (0xfffcffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00160000U | ((0xff807fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                      | (((0x00000080U 
                                           & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                                  >> 4U)) 
                                              << 7U)) 
                                          | (0x00000040U 
                                             & ((IData)(__Vfunc_Decode__6__IR) 
                                                << 2U))) 
                                         << 0x0000000fU)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else if ((2U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 4U)))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000e1U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x7fffff00U 
                                         & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                            << 8U))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((0U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                       >> 4U)))) {
                if ((0U != (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                           >> 8U)))) {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else if ((1U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 4U)))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = ((0U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 8U)))
                        ? (0x11800000U | (0xe07fffffU 
                                          & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]))
                        : (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            } else if ((2U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 4U)))) {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x000000c0U | ((0xffffe03fU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                         << 8U)));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000600U | (0x0000e1ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x20000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (0x00000016U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0xf3ffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else if (((0U == (0x000000ffU & ((IData)(__Vfunc_Decode__6__IR) 
                                           >> 4U))) 
                    || (1U == (0x000000ffU & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 4U))))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0xa0000000U | (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = ((0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]) 
                   | (0x0000ffffU & (1U | (0x003ffffcU 
                                           & (((0x00000010U 
                                                & (IData)(__Vfunc_Decode__6__IR))
                                                ? 5U
                                                : 4U) 
                                              << 2U)))));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x10800000U | (0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
        } else if ((2U == (0x000000ffU & ((IData)(__Vfunc_Decode__6__IR) 
                                          >> 4U)))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000200U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0xa02a0000U | (0x00001fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000011U | (0x0000ffe0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x006f8000U | (0xff807fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
        } else {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
        }
    } else if ((4U & (IData)(__Vfunc_Decode__6__IR))) {
        if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
            if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
                if (__Vfunc_Decode__6__VER) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00220080U | ((0xffc0003fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00488000U | (0xff807fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (1U | ((0xffffffc0U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                     | (0x7ffffffeU 
                                        & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                           << 1U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00260000U | (0xffc01fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00288000U | (0xff807fffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (0x40000000U | (0x3fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00000081U | ((0xffffe000U 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | ((0x3fffff00U 
                                          & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                             << 8U)) 
                                         | (0x3ffffffeU 
                                            & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                               << 1U)))));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                    = (1U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                    = (0x00244000U | ((0xffc01fffU 
                                       & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                      | (0x00030000U 
                                         & ((IData)(__Vfunc_Decode__6__IR) 
                                            << 0x00000010U))));
            }
        } else {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x40000000U | (0x3fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00000081U | ((0xffffe000U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | ((0x3fffff00U & 
                                      ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                       << 8U)) | (0x3ffffffeU 
                                                  & ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RBN) 
                                                     << 1U)))));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (1U | (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x00244000U | ((0xffc01fffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | (0x00030000U & 
                                     ((IData)(__Vfunc_Decode__6__IR) 
                                      << 0x00000010U))));
        }
    } else if ((2U & (IData)(__Vfunc_Decode__6__IR))) {
        if ((1U & (IData)(__Vfunc_Decode__6__IR))) {
            if (((0U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                        >> 4U))) || 
                 (2U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                        >> 4U))))) {
                if (((IData)(__Vfunc_Decode__6__VER) 
                     & (~ (IData)(__Vfunc_Decode__6__DS)))) {
                    if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00000080U | ((0xffffe03fU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                              | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                                 << 8U)));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = ((0x7fffffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                               | (((2U & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 5U)) 
                                          << 1U)) | 
                                   (1U & (~ ((IData)(__Vfunc_Decode__6__IR) 
                                             >> 5U)))) 
                                  << 0x0000001fU));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = ((0xfffffffeU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                               | (((2U & ((~ ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 5U)) 
                                          << 1U)) | 
                                   (1U & (~ ((IData)(__Vfunc_Decode__6__IR) 
                                             >> 5U)))) 
                                  >> 1U));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x00000020U | (0xffffffc1U 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x00000800U | (0x0000e3ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                            = (0x003fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                            = (0x0000fffcU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x20000000U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00006800U | ((0xffff81ffU 
                                               & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                                              | (0x00000200U 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_Decode__6__IR) 
                                                      >> 5U)) 
                                                    << 9U))));
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00000020U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                    } else if ((1U == (IData)(__Vfunc_Decode__6__STATE))) {
                        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                            = (0x00002800U | (0xffff81ffU 
                                              & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                    }
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (4U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
                } else {
                    TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                        = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
                }
            } else {
                TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                    = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
            }
        } else if ((((0U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                            >> 4U))) 
                     || (1U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                               >> 4U)))) 
                    || (2U == (0x0000000fU & ((IData)(__Vfunc_Decode__6__IR) 
                                              >> 4U))))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U] 
                = (0x000000c0U | ((0xffffe03fU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U]) 
                                  | ((IData)(TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__RAN) 
                                     << 8U)));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U] 
                = (0x00000400U | (0x0000e3ffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U]));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = ((0xe07fffffU & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]) 
                   | (0x1f800000U & ((0x00410200U >> 
                                      ((IData)(6U) 
                                       * (3U & ((IData)(__Vfunc_Decode__6__IR) 
                                                >> 4U)))) 
                                     << 0x00000017U)));
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x00000040U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
        } else {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
        }
    } else {
        TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
            = (1U | TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]);
    }
    if ((1U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U])) {
        if ((0U == (IData)(__Vfunc_Decode__6__STATE))) {
            TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U] 
                = (0x00000014U | (0xffffffe3U & TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U]));
        }
    }
    __Vfunc_Decode__6__Vfuncout[0U] = TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[0U];
    __Vfunc_Decode__6__Vfuncout[1U] = TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[1U];
    __Vfunc_Decode__6__Vfuncout[2U] = TOP__SH2_PKG__DOT____PVT__Decode__Vstatic__DECI[2U];
    vlSelfRef.__PVT__core__DOT__ID_DECI[0U] = __Vfunc_Decode__6__Vfuncout[0U];
    vlSelfRef.__PVT__core__DOT__ID_DECI[1U] = __Vfunc_Decode__6__Vfuncout[1U];
    vlSelfRef.__PVT__core__DOT__ID_DECI[2U] = __Vfunc_Decode__6__Vfuncout[2U];
    __PVT__core__DOT__unnamedblk5__DOT__mask = (3U 
                                                & (0x0bU 
                                                   >> 
                                                   (6U 
                                                    & (vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__MA
                                                       .__PVT__DI[1U] 
                                                       >> 0x0000000fU))));
    __Vfunc_ByteShiftRigth__11__s = ((~ vlSelfRef.__PVT__core__DOT__PIPE
                                      .__PVT__MA.__PVT__ADDR) 
                                     & (IData)(__PVT__core__DOT__unnamedblk5__DOT__mask));
    __Vfunc_ByteShiftRigth__11__val = vlSelfRef.__PVT__CBUS_DI;
    TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp1 
        = ((2U & (IData)(__Vfunc_ByteShiftRigth__11__s))
            ? (__Vfunc_ByteShiftRigth__11__val >> 0x00000010U)
            : __Vfunc_ByteShiftRigth__11__val);
    TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp0 
        = ((1U & (IData)(__Vfunc_ByteShiftRigth__11__s))
            ? (TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp1 
               >> 8U) : TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp1);
    __Vfunc_ByteShiftRigth__11__Vfuncout = TOP__SH2_PKG__DOT____PVT__ByteShiftRigth__Vstatic__temp0;
    __PVT__core__DOT__unnamedblk5__DOT__temp = __Vfunc_ByteShiftRigth__11__Vfuncout;
    vlSelfRef.__PVT__core__DOT__MA_RDATA = ((0U == 
                                             (3U & 
                                              (vlSelfRef.__PVT__core__DOT__PIPE
                                               .__PVT__MA
                                               .__PVT__DI[1U] 
                                               >> 0x00000010U)))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (__PVT__core__DOT__unnamedblk5__DOT__temp 
                                                                >> 7U)))) 
                                                 << 8U) 
                                                | (0x000000ffU 
                                                   & __PVT__core__DOT__unnamedblk5__DOT__temp))
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__MA
                                                     .__PVT__DI[1U] 
                                                     >> 0x00000010U)))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (__PVT__core__DOT__unnamedblk5__DOT__temp 
                                                                 >> 0x0fU)))) 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & __PVT__core__DOT__unnamedblk5__DOT__temp))
                                                 : __PVT__core__DOT__unnamedblk5__DOT__temp));
    vlSelfRef.__PVT__core__DOT__LOAD_ISSUE = (((vlSelfRef.__PVT__core__DOT__PIPE
                                                .__PVT__EX
                                                .__PVT__DI[1U] 
                                                >> 0x0000000fU) 
                                               | ((vlSelfRef.__PVT__core__DOT__PIPE
                                                   .__PVT__EX
                                                   .__PVT__DI[0U] 
                                                   >> 0x00000014U) 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__EX
                                                      .__PVT__DI[1U] 
                                                      >> 0x0000000eU)))) 
                                              & (((((vlSelfRef.__PVT__core__DOT__PIPE
                                                     .__PVT__EX
                                                     .__PVT__DI[1U] 
                                                     >> 6U) 
                                                    & ((0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__PIPE
                                                           .__PVT__EX
                                                           .__PVT__DI[1U] 
                                                           >> 8U)) 
                                                       == 
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                                           >> 8U)))) 
                                                   & (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                                      >> 7U)) 
                                                  | (((vlSelfRef.__PVT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__DI[1U] 
                                                       >> 6U) 
                                                      & ((0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__PIPE
                                                             .__PVT__EX
                                                             .__PVT__DI[1U] 
                                                             >> 8U)) 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.__PVT__core__DOT__ID_DECI[1U] 
                                                             >> 1U)))) 
                                                     & vlSelfRef.__PVT__core__DOT__ID_DECI[1U])) 
                                                 | (((vlSelfRef.__PVT__core__DOT__PIPE
                                                      .__PVT__EX
                                                      .__PVT__DI[1U] 
                                                      >> 6U) 
                                                     & (0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__PVT__core__DOT__PIPE
                                                            .__PVT__EX
                                                            .__PVT__DI[1U] 
                                                            >> 8U)))) 
                                                    & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                                       >> 0x0000001eU))));
    vlSelfRef.__PVT__core__DOT__NEXT_STATE = (7U & 
                                              (((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__core__DOT__STATE)) 
                                               & (- (IData)(
                                                            ((IData)(vlSelfRef.__PVT__core__DOT__STATE) 
                                                             != 
                                                             (7U 
                                                              & (vlSelfRef.__PVT__core__DOT__ID_DECI[0U] 
                                                                 >> 2U)))))));
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__7(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__MSH__7\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = 
            (0x000000c1U | (0x0000013eU & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_10)));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_3;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_9;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = 
            (0x000000c0U | (((IData)(vlSelfRef.__PVT__IRD_WR_N) 
                             << 8U) | (((IData)(vlSelfRef.__PVT__IWE_N) 
                                        << 2U) | (((IData)(vlSelfRef.__PVT__IRD_N) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__IIVECF_N)))));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = 
            ((((IData)(vlSelfRef.__PVT__IBS_N) << 4U) 
              | (((IData)(vlSelfRef.__PVT__ICS0_N) 
                  << 3U) | ((IData)(vlSelfRef.__PVT__ICS1_N) 
                            << 2U))) | (((IData)(vlSelfRef.__PVT__ICS2_N) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__ICS3_N)));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = 
            (((QData)((IData)(vlSelfRef.__PVT__IA)) 
              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__IDO)));
    }
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__2(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.WAIT_N = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                     & (0x0000000fU 
                                        == (0x0000000fU 
                                            & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))) 
                                 & ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__wait_mode_r)) 
                                    & ((1U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__wait_mode_r))
                                        ? (0U == (0x0000000fU 
                                                  & vlSymsp->TOP.tb_top__DOT__dut__DOT__lfsr))
                                        : ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__wait_mode_r))
                                            ? vlSymsp->TOP.tb_top__DOT__dut__DOT__lfsr
                                            : ((3U 
                                                == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__wait_mode_r))
                                                ? (0U 
                                                   != 
                                                   (3U 
                                                    & vlSymsp->TOP.tb_top__DOT__dut__DOT__lfsr))
                                                : (vlSymsp->TOP.tb_top__DOT__dut__DOT__lfsr 
                                                   >> 5U))))))));
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__3(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_comb__TOP__tb_top__DOT__dut__DOT__MSH__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.DI = (((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__is_rom) 
                     | (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__is_wraml))
                     ? (0x0000ffffU & ((1U & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                      >> 0x00000021U)))
                                        ? vlSymsp->TOP.tb_top__DOT__dut__DOT__cs0w
                                        : (vlSymsp->TOP.tb_top__DOT__dut__DOT__cs0w 
                                           >> 0x00000010U)))
                     : ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6))
                         ? ((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__is_rom)
                             ? vlSymsp->TOP.tb_top__DOT__dut__DOT__rom
                            [(0x00003fffU & (IData)(
                                                    (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                     >> 0x00000022U)))]
                             : ((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__is_wraml)
                                 ? vlSymsp->TOP.tb_top__DOT__dut__DOT__wraml
                                [(0x00003fffU & (IData)(
                                                        (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U)))]
                                 : ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))
                                     ? ((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__tbr)
                                         ? ((0U == 
                                             (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U))))
                                             ? (IData)(vlSelfRef.__PVT__bsc__DOT__BGR)
                                             : ((5U 
                                                 == 
                                                 (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                             >> 0x00000022U))))
                                                 ? vlSymsp->TOP.tb_top__DOT__dut__DOT__lfsr
                                                 : 
                                                ((6U 
                                                  == 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                              >> 0x00000022U))))
                                                  ? vlSymsp->TOP.tb_top__DOT__dut__DOT__cyc
                                                  : 
                                                 ((0x0aU 
                                                   == 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                               >> 0x00000022U))))
                                                   ? (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__lvlM)
                                                   : 
                                                  ((0x0bU 
                                                    == 
                                                    (0x0000003fU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                                >> 0x00000022U))))
                                                    ? (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__lvlS)
                                                    : vlSymsp->TOP.tb_top__DOT__dut__DOT__scr
                                                   [
                                                   (0x00003fffU 
                                                    & (IData)(
                                                              (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                               >> 0x00000022U)))])))))
                                         : ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))
                                                 ? 
                                                (0xa5a5a5a5U 
                                                 ^ 
                                                 ((vlSymsp->TOP.tb_top__DOT__dut__DOT__cyc 
                                                   << 0x00000018U) 
                                                  | ((0x00ff0000U 
                                                      & (vlSymsp->TOP.tb_top__DOT__dut__DOT__cyc 
                                                         << 0x00000010U)) 
                                                     | ((0x0000ff00U 
                                                         & (vlSymsp->TOP.tb_top__DOT__dut__DOT__cyc 
                                                            << 8U)) 
                                                        | (0x000000ffU 
                                                           & vlSymsp->TOP.tb_top__DOT__dut__DOT__cyc)))))
                                                 : vlSymsp->TOP.tb_top__DOT__dut__DOT__wramh
                                                [(0x0000ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                             >> 0x00000022U)))])
                                             : vlSymsp->TOP.tb_top__DOT__dut__DOT__scr
                                            [(0x00003fffU 
                                              & (IData)(
                                                        (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                         >> 0x00000022U)))]))
                                     : vlSymsp->TOP.tb_top__DOT__dut__DOT__abus
                                    [(0x00003fffU & (IData)(
                                                            (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                             >> 0x00000022U)))])))
                         : ((IData)(vlSelfRef.__PVT__bsc__DOT__BGR)
                             ? 0x00000045U : (0x000000ffU 
                                              & ((IData)(0x40U) 
                                                 + (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__lvlM))))));
    vlSelfRef.__PVT__IDI = ((IData)(vlSelfRef.__PVT__bsc__DOT__MST_BUS_RLS)
                             ? (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__SSH.__VdfgRegularize_hebeb780c_0_9)
                             : vlSelfRef.DI);
}

extern const VlUnpacked<SData/*8:0*/, 4> Vtb_top__ConstPool__TABLE_h9b2cab03_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtb_top__ConstPool__TABLE_h537cf6d2_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtb_top__ConstPool__TABLE_h31cf1c10_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_top__ConstPool__TABLE_h0a5b22a4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_top__ConstPool__TABLE_h1628b77a_0;

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__1(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___nba_sequent__TOP__tb_top__DOT__dut__DOT__SSH__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ bsc__DOT____VCase_hadc07db3__0;
    bsc__DOT____VCase_hadc07db3__0 = 0;
    CData/*1:0*/ bsc__DOT____VCase_h296e1a3d__0;
    bsc__DOT____VCase_h296e1a3d__0 = 0;
    CData/*1:0*/ bsc__DOT____VCase_hcbe2bc65__0;
    bsc__DOT____VCase_hcbe2bc65__0 = 0;
    CData/*1:0*/ bsc__DOT____VCase_h74aa2ace__0;
    bsc__DOT____VCase_h74aa2ace__0 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__40__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaSZ__40__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__40__area;
    __Vfunc_bsc__DOT__GetAreaSZ__40__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__40__BCR1;
    __Vfunc_bsc__DOT__GetAreaSZ__40__BCR1 = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__40__BCR2;
    __Vfunc_bsc__DOT__GetAreaSZ__40__BCR2 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__40__dramsz;
    __Vfunc_bsc__DOT__GetAreaSZ__40__dramsz = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaW__41__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaW__41__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaW__41__area;
    __Vfunc_bsc__DOT__GetAreaW__41__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaW__41__WCR;
    __Vfunc_bsc__DOT__GetAreaW__41__WCR = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaLW__42__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaLW__42__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaLW__42__area;
    __Vfunc_bsc__DOT__GetAreaLW__42__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaLW__42__BCR1;
    __Vfunc_bsc__DOT__GetAreaLW__42__BCR1 = 0;
    CData/*3:0*/ __Vfunc_bsc__DOT__SDRAMAreaSel__43__Vfuncout;
    __Vfunc_bsc__DOT__SDRAMAreaSel__43__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMAreaSel__43__BCR1;
    __Vfunc_bsc__DOT__SDRAMAreaSel__43__BCR1 = 0;
    CData/*0:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__44__Vfuncout;
    __Vfunc_bsc__DOT__IsSDRAMArea__44__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__44__area;
    __Vfunc_bsc__DOT__IsSDRAMArea__44__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__44__BCR1;
    __Vfunc_bsc__DOT__IsSDRAMArea__44__BCR1 = 0;
    CData/*0:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__45__Vfuncout;
    __Vfunc_bsc__DOT__IsSDRAMArea__45__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__45__area;
    __Vfunc_bsc__DOT__IsSDRAMArea__45__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__45__BCR1;
    __Vfunc_bsc__DOT__IsSDRAMArea__45__BCR1 = 0;
    CData/*0:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__46__Vfuncout;
    __Vfunc_bsc__DOT__IsSDRAMArea__46__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__46__area;
    __Vfunc_bsc__DOT__IsSDRAMArea__46__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__IsSDRAMArea__46__BCR1;
    __Vfunc_bsc__DOT__IsSDRAMArea__46__BCR1 = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__47__A;
    __Vfunc_bsc__DOT__SDRAMBank__47__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__47__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__47__MCR = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__48__A;
    __Vfunc_bsc__DOT__SDRAMBank__48__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__48__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__48__MCR = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__49__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaSZ__49__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__49__area;
    __Vfunc_bsc__DOT__GetAreaSZ__49__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__49__BCR1;
    __Vfunc_bsc__DOT__GetAreaSZ__49__BCR1 = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__49__BCR2;
    __Vfunc_bsc__DOT__GetAreaSZ__49__BCR2 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__49__dramsz;
    __Vfunc_bsc__DOT__GetAreaSZ__49__dramsz = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__50__A;
    __Vfunc_bsc__DOT__SDRAMBank__50__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__50__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__50__MCR = 0;
    IData/*26:0*/ __Vfunc_bsc__DOT__SDRAMBank__51__A;
    __Vfunc_bsc__DOT__SDRAMBank__51__A = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__SDRAMBank__51__MCR;
    __Vfunc_bsc__DOT__SDRAMBank__51__MCR = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__52__Vfuncout;
    __Vfunc_bsc__DOT__GetAreaSZ__52__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__52__area;
    __Vfunc_bsc__DOT__GetAreaSZ__52__area = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__52__BCR1;
    __Vfunc_bsc__DOT__GetAreaSZ__52__BCR1 = 0;
    SData/*15:0*/ __Vfunc_bsc__DOT__GetAreaSZ__52__BCR2;
    __Vfunc_bsc__DOT__GetAreaSZ__52__BCR2 = 0;
    CData/*1:0*/ __Vfunc_bsc__DOT__GetAreaSZ__52__dramsz;
    __Vfunc_bsc__DOT__GetAreaSZ__52__dramsz = 0;
    IData/*31:0*/ __Vfunc_dmac__DOT__GetAddrInc__53__Vfuncout;
    __Vfunc_dmac__DOT__GetAddrInc__53__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_dmac__DOT__GetAddrInc__53__sz;
    __Vfunc_dmac__DOT__GetAddrInc__53__sz = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*1:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*12:0*/ __Vdly__unnamedblk1__DOT__DIV_CNT;
    __Vdly__unnamedblk1__DOT__DIV_CNT = 0;
    CData/*2:0*/ __Vdly__cache__DOT__EPOCH;
    __Vdly__cache__DOT__EPOCH = 0;
    CData/*5:0*/ __Vdly__cache__DOT__SC_PTR;
    __Vdly__cache__DOT__SC_PTR = 0;
    IData/*31:0*/ __Vdly__core__DOT__PC;
    __Vdly__core__DOT__PC = 0;
    CData/*0:0*/ __Vdly__core__DOT__IF_ACTIVE;
    __Vdly__core__DOT__IF_ACTIVE = 0;
    CData/*0:0*/ __Vdly__core__DOT__VECT_ACTIVE;
    __Vdly__core__DOT__VECT_ACTIVE = 0;
    CData/*0:0*/ __Vdly__core__DOT__INST_SPLIT;
    __Vdly__core__DOT__INST_SPLIT = 0;
    Vtb_top_IFtoID_t__struct__1 __Vdly__core__DOT__SAVE_ID;
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
    IData/*31:0*/ __Vdly__divu__DOT__DVDNTL;
    __Vdly__divu__DOT__DVDNTL = 0;
    IData/*31:0*/ __Vdly__divu__DOT__DVDNTH;
    __Vdly__divu__DOT__DVDNTH = 0;
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
    CData/*0:0*/ __Vdly__bsc__DOT__BREQ;
    __Vdly__bsc__DOT__BREQ = 0;
    CData/*0:0*/ __Vdly__bsc__DOT__SLV_BUS_RLS;
    __Vdly__bsc__DOT__SLV_BUS_RLS = 0;
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
    __Vdly__cache__DOT__EPOCH = vlSelfRef.cache__DOT__EPOCH;
    vlSelfRef.__Vdly__divu__DOT__DIV64 = vlSelfRef.__PVT__divu__DOT__DIV64;
    vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF0 
        = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF0;
    vlSelfRef.__Vdly__divu__DOT__unnamedblk1__DOT__OVF64_33 
        = vlSelfRef.__PVT__divu__DOT__unnamedblk1__DOT__OVF64_33;
    vlSelfRef.__Vdly__divu__DOT__D[0U] = vlSelfRef.__PVT__divu__DOT__D[0U];
    vlSelfRef.__Vdly__divu__DOT__D[1U] = vlSelfRef.__PVT__divu__DOT__D[1U];
    vlSelfRef.__Vdly__divu__DOT__D[2U] = vlSelfRef.__PVT__divu__DOT__D[2U];
    vlSelfRef.__Vdly__divu__DOT__T64 = vlSelfRef.__PVT__divu__DOT__T64;
    vlSelfRef.__Vdly__divu__DOT__R_SIGN = vlSelfRef.__PVT__divu__DOT__R_SIGN;
    vlSelfRef.__Vdly__divu__DOT__D_SIGN = vlSelfRef.__PVT__divu__DOT__D_SIGN;
    vlSelfRef.__Vdly__divu__DOT__Q = vlSelfRef.__PVT__divu__DOT__Q;
    vlSelfRef.__Vdly__divu__DOT__R[0U] = vlSelfRef.__PVT__divu__DOT__R[0U];
    vlSelfRef.__Vdly__divu__DOT__R[1U] = vlSelfRef.__PVT__divu__DOT__R[1U];
    vlSelfRef.__Vdly__divu__DOT__R[2U] = vlSelfRef.__PVT__divu__DOT__R[2U];
    vlSelfRef.__Vdly__divu__DOT__STEP = vlSelfRef.__PVT__divu__DOT__STEP;
    vlSelfRef.__Vdly__intc__DOT__unnamedblk2__DOT__IRL_NORM 
        = vlSelfRef.__PVT__intc__DOT__unnamedblk2__DOT__IRL_NORM;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v0 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v4 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v6 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v8 = 0U;
    vlSelfRef.__VdlySet__intc__DOT__unnamedblk2__DOT__IRL_OLD__v10 = 0U;
    __Vdly__unnamedblk1__DOT__DIV_CNT = vlSelfRef.__PVT__unnamedblk1__DOT__DIV_CNT;
    __Vdly__core__DOT__SLP = vlSelfRef.__PVT__core__DOT__SLP;
    __Vdly__bsc__DOT__BREQ = vlSelfRef.__PVT__bsc__DOT__BREQ;
    vlSelfRef.__Vdly__cache__DOT__CCR = vlSelfRef.__PVT__cache__DOT__CCR;
    __Vdly__bsc__DOT__SLV_BUS_RLS = vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS;
    __VdlySet__dmac__DOT__CH_REQ__v0 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v1 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v2 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v3 = 0U;
    __VdlySet__dmac__DOT__CH_REQ__v4 = 0U;
    vlSelfRef.__Vdly__INTC_NMI_REQ = vlSelfRef.__PVT__INTC_NMI_REQ;
    __Vdly__core__DOT__PC = vlSelfRef.__PVT__core__DOT__PC;
    __Vdly__core__DOT__ILI_EXP = vlSelfRef.__PVT__core__DOT__ILI_EXP;
    __Vdly__core__DOT__RES_EXP = vlSelfRef.__PVT__core__DOT__RES_EXP;
    __Vdly__intc__DOT__VBREQ = vlSelfRef.__PVT__intc__DOT__VBREQ;
    vlSelfRef.__Vdly__cache__DOT__IBREQ = vlSelfRef.__PVT__cache__DOT__IBREQ;
    vlSelfRef.__Vdly__cache__DOT__IBUS_WRITE_PEND = vlSelfRef.__PVT__cache__DOT__IBUS_WRITE_PEND;
    vlSelfRef.__Vdly__cache__DOT__IBUS_READ = vlSelfRef.__PVT__cache__DOT__IBUS_READ;
    vlSelfRef.__Vdly__cache__DOT__IBUS_READARRAY = vlSelfRef.__PVT__cache__DOT__IBUS_READARRAY;
    vlSelfRef.__Vdly__cache__DOT__IBUS_READ_PEND = vlSelfRef.__PVT__cache__DOT__IBUS_READ_PEND;
    vlSelfRef.__Vdly__cache__DOT__IBADDR = vlSelfRef.__PVT__cache__DOT__IBADDR;
    __Vdly__cache__DOT__SC_PTR = vlSelfRef.__PVT__cache__DOT__SC_PTR;
    __VdlySet__core__DOT__regfile__DOT__GR__v0 = 0U;
    __VdlySet__core__DOT__regfile__DOT__GR__v1 = 0U;
    __VdlySet__core__DOT__regfile__DOT__GR__v2 = 0U;
    __Vdly__core__DOT__SAVE_ID = vlSelfRef.__PVT__core__DOT__SAVE_ID;
    __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC 
        = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACW_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC 
        = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MACL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MUL_EXEC;
    __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC 
        = vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__DMUL_EXEC;
    __Vdly__core__DOT__VECT_ACTIVE = vlSelfRef.__PVT__core__DOT__VECT_ACTIVE;
    __Vdly__core__DOT__INST_SPLIT = vlSelfRef.__PVT__core__DOT__INST_SPLIT;
    __Vdly__core__DOT__IF_ACTIVE = vlSelfRef.__PVT__core__DOT__IF_ACTIVE;
    vlSelfRef.__Vdly__core__DOT__MAWB_STALL = vlSelfRef.__PVT__core__DOT__MAWB_STALL;
    vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = vlSelfRef.__PVT__core__DOT__MA_ACTIVE;
    __Vdly__MSBY_SBY = vlSelfRef.__PVT__MSBY_SBY;
    __Vdly__dmac__DOT__DMAOR = vlSelfRef.__PVT__dmac__DOT__DMAOR;
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
    __Vdly__divu__DOT__DVDNTL = vlSelfRef.__PVT__divu__DOT__DVDNTL;
    __Vdly__divu__DOT__DVDNTH = vlSelfRef.__PVT__divu__DOT__DVDNTH;
    __Vdly__core__DOT__INT_REQ_LATCH = vlSelfRef.__PVT__core__DOT__INT_REQ_LATCH;
    __Vdly__frt__DOT__FTCSR = vlSelfRef.__PVT__frt__DOT__FTCSR;
    __Vdly__wdt__DOT__OPEN_BUS = vlSelfRef.__PVT__wdt__DOT__OPEN_BUS;
    __Vdly__bsc__DOT__RTCNT = vlSelfRef.__PVT__bsc__DOT__RTCNT;
    __Vdly__bsc__DOT__RFS_REQ = vlSelfRef.__PVT__bsc__DOT__RFS_REQ;
    __Vdly__frt__DOT__FRC = vlSelfRef.__PVT__frt__DOT__FRC;
    __Vdly__frt__DOT__OCRA = vlSelfRef.__PVT__frt__DOT__OCRA;
    __Vdly__frt__DOT__OCRB = vlSelfRef.__PVT__frt__DOT__OCRB;
    __Vdly__frt__DOT__TEMP = vlSelfRef.__PVT__frt__DOT__TEMP;
    __Vdly__bsc__DOT__BUSY = vlSelfRef.__PVT__bsc__DOT__BUSY;
    __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
        = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN;
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
              & (IData)(vlSelfRef.__PVT__MAC_WE)) & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
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
             & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
            if ((0U != (IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC))) {
                __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC 
                    = (7U & ((IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC) 
                             - (IData)(1U)));
            }
            if ((1U == (IData)(vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC))) {
                __Vdly__mult__DOT__MM_DONE = 1U;
            }
        }
        if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
                                      | ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__snmi_cnt)) 
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
                                vlSelfRef.__PVT__intc__DOT__IPRB 
                                    = ((0x00ffU & (IData)(vlSelfRef.__PVT__intc__DOT__IPRB)) 
                                       | (0x0000ff00U 
                                          & (vlSelfRef.__PVT__cache__DOT__IBDATA 
                                             >> 0x00000010U)));
                            }
                            if ((4U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                vlSelfRef.__PVT__intc__DOT__IPRB 
                                    = (0xff00U & (IData)(vlSelfRef.__PVT__intc__DOT__IPRB));
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
                                            vlSelfRef.__PVT__intc__DOT__VCRC 
                                                = (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.__PVT__intc__DOT__VCRC)) 
                                                   | (0x00007f00U 
                                                      & vlSelfRef.__PVT__cache__DOT__IBDATA));
                                        }
                                        if ((1U & (IData)(vlSelfRef.__PVT__cache__DOT__IBBA))) {
                                            vlSelfRef.__PVT__intc__DOT__VCRC 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.__PVT__intc__DOT__VCRC)) 
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
             & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
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
              & (IData)(vlSelfRef.__PVT__MAC_WE)) & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
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
              & (IData)(vlSelfRef.__PVT__MAC_WE)) & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
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
                                = (1U & (vlSelfRef.__PVT__core__DOT__SR 
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
        __Vfunc_bsc__DOT__GetAreaSZ__40__dramsz = (2U 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                         >> 6U)));
        __Vfunc_bsc__DOT__GetAreaSZ__40__BCR2 = vlSelfRef.__PVT__bsc__DOT__BCR2;
        __Vfunc_bsc__DOT__GetAreaSZ__40__BCR1 = vlSelfRef.__PVT__bsc__DOT__BCR1;
        __Vfunc_bsc__DOT__GetAreaSZ__40__area = (3U 
                                                 & (vlSelfRef.__PVT__IA 
                                                    >> 0x19U));
        vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res 
            = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__area))
                      ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__area))
                          ? ((1U & VL_REDXOR_32((3U 
                                                 & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__BCR1))))
                              ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__dramsz)
                              : ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__BCR2) 
                                 >> 6U)) : ((4U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__BCR1))
                                             ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__dramsz)
                                             : ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__BCR2) 
                                                >> 4U)))
                      : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__area))
                          ? ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__40__BCR2) 
                             >> 2U) : 2U)));
        __Vfunc_bsc__DOT__GetAreaSZ__40__Vfuncout = vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res;
        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__AREA_SZ 
            = __Vfunc_bsc__DOT__GetAreaSZ__40__Vfuncout;
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
            = vlSelfRef.__PVT__bsc__DOT__BUS_STATE;
        if ((8U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
            if ((4U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)))) {
                        if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                            if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
            } else if ((2U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                if ((1U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                    if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                        vlSelfRef.__PVT__IBS_N = 1U;
                        if (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.WAIT_N) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0cU;
                            __Vdly__bsc__DOT__VBUSY = 0U;
                            __Vdly__bsc__DOT__BUSY = 0U;
                        }
                    }
                } else if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                    vlSelfRef.__PVT__ICS0_N = 1U;
                    vlSelfRef.__PVT__ICS1_N = 1U;
                    vlSelfRef.__PVT__ICS2_N = 1U;
                    vlSelfRef.__PVT__ICS3_N = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                    if (((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT)) 
                         & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__FAST_R)))) {
                        vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT 
                            = (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__RFS_WAIT_CNT) 
                                     - (IData)(1U)));
                    } else {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0x0aU;
                    }
                }
            } else if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                if ((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT))) {
                    __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
                        = (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT) 
                                 - (IData)(1U)));
                } else {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
            if ((2U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                if ((1U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                    if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
                } else if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                    if (((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT)) 
                         & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__FAST_R)))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                            = (3U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT) 
                                     - (IData)(1U)));
                    } else if ((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.WAIT_N) 
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
            } else if ((1U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))) {
                    vlSelfRef.__PVT__IWE_N = 0x0fU;
                }
                if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 8U;
                    if ((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) {
                        vlSelfRef.__PVT__ICS0_N = 1U;
                        vlSelfRef.__PVT__ICS1_N = 1U;
                        vlSelfRef.__PVT__ICS2_N = 1U;
                        vlSelfRef.__PVT__ICS3_N = 1U;
                        __Vdly__IRD_WR_N = 1U;
                    }
                }
            } else if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                vlSelfRef.__PVT__IBS_N = 1U;
                if (vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH) {
                    if ((1U & ((IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.WAIT_N) 
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
        } else if ((2U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
            if ((1U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
                if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                    if (((0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT)) 
                         & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__FAST_R)))) {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
                            = (7U & ((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT) 
                                     - (IData)(1U)));
                    } else if (vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.WAIT_N) {
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
            } else if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
            } else {
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 1U;
                vlSelfRef.__PVT__ICS0_N = 1U;
                vlSelfRef.__PVT__ICS1_N = 1U;
                vlSelfRef.__PVT__ICS2_N = 1U;
                vlSelfRef.__PVT__ICS3_N = 1U;
                vlSelfRef.__PVT__IRD_N = 1U;
                vlSelfRef.__PVT__IWE_N = 0x0fU;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) {
            if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
                __Vfunc_bsc__DOT__GetAreaW__41__WCR 
                    = vlSelfRef.__PVT__bsc__DOT__WCR;
                __Vfunc_bsc__DOT__GetAreaW__41__area 
                    = (3U & (vlSelfRef.__PVT__IA >> 0x19U));
                vlSelfRef.__PVT__IBS_N = 1U;
                vlSelfRef.__PVT__bsc__DOT__GetAreaW__Vstatic__res 
                    = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaW__41__area))
                              ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaW__41__area))
                                  ? ((IData)(__Vfunc_bsc__DOT__GetAreaW__41__WCR) 
                                     >> 6U) : ((IData)(__Vfunc_bsc__DOT__GetAreaW__41__WCR) 
                                               >> 4U))
                              : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaW__41__area))
                                  ? ((IData)(__Vfunc_bsc__DOT__GetAreaW__41__WCR) 
                                     >> 2U) : (IData)(__Vfunc_bsc__DOT__GetAreaW__41__WCR))));
                __Vfunc_bsc__DOT__GetAreaW__41__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__GetAreaW__Vstatic__res;
                bsc__DOT____VCase_h74aa2ace__0 = __Vfunc_bsc__DOT__GetAreaW__41__Vfuncout;
                if ((2U & (IData)(bsc__DOT____VCase_h74aa2ace__0))) {
                    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 3U;
                    if ((1U & (IData)(bsc__DOT____VCase_h74aa2ace__0))) {
                        __Vfunc_bsc__DOT__GetAreaLW__42__BCR1 
                            = vlSelfRef.__PVT__bsc__DOT__BCR1;
                        __Vfunc_bsc__DOT__GetAreaLW__42__area 
                            = (3U & (vlSelfRef.__PVT__IA 
                                     >> 0x19U));
                        vlSelfRef.__PVT__bsc__DOT__GetAreaLW__Vstatic__res 
                            = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaLW__42__area))
                                      ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaLW__42__area))
                                          ? ((IData)(__Vfunc_bsc__DOT__GetAreaLW__42__BCR1) 
                                             >> 8U)
                                          : ((IData)(__Vfunc_bsc__DOT__GetAreaLW__42__BCR1) 
                                             >> 8U))
                                      : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaLW__42__area))
                                          ? ((IData)(__Vfunc_bsc__DOT__GetAreaLW__42__BCR1) 
                                             >> 6U)
                                          : ((IData)(__Vfunc_bsc__DOT__GetAreaLW__42__BCR1) 
                                             >> 4U))));
                        __Vfunc_bsc__DOT__GetAreaLW__42__Vfuncout 
                            = vlSelfRef.__PVT__bsc__DOT__GetAreaLW__Vstatic__res;
                        bsc__DOT____VCase_hcbe2bc65__0 
                            = __Vfunc_bsc__DOT__GetAreaLW__42__Vfuncout;
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT 
                            = (7U & (0x0b1aU >> ((IData)(3U) 
                                                 * (IData)(bsc__DOT____VCase_hcbe2bc65__0))));
                    } else {
                        vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 1U;
                    }
                } else if ((1U & (IData)(bsc__DOT____VCase_h74aa2ace__0))) {
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
        } else if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
            __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))) {
            if (((((IData)(vlSelfRef.__PVT__divu__DOT__REG_SEL) 
                   & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ)) 
                  & (0x3fU != (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) 
                 & (~ (IData)(vlSelfRef.__PVT__divu__DOT__BUSY)))) {
                vlSelfRef.__Vdly__divu__DOT__BUSY = 1U;
            } else if (((0x3fU == (IData)(vlSelfRef.__PVT__divu__DOT__STEP)) 
                        & (IData)(vlSelfRef.__PVT__divu__DOT__BUSY))) {
                vlSelfRef.__Vdly__divu__DOT__BUSY = 0U;
            }
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__cache__DOT__CCR))) {
                __Vdly__cache__DOT__EPOCH = ((7U == (IData)(vlSelfRef.cache__DOT__EPOCH))
                                              ? 1U : 
                                             (7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.cache__DOT__EPOCH))));
            }
            if ((((IData)(vlSelfRef.__PVT__bsc__DOT__BUS_SEL) 
                  & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BREQ))) 
                 & (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) {
                __Vdly__bsc__DOT__BREQ = 1U;
            } else if ((((IData)(vlSelfRef.__PVT__bsc__DOT__BREQ) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__PVT__bsc__DOT__BGR)) 
                        & (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) {
                __Vdly__bsc__DOT__SLV_BUS_RLS = 0U;
            } else if (((((((IData)(vlSelfRef.__PVT__bsc__DOT__BREQ) 
                            & (~ (IData)(vlSelfRef.__PVT__IBUS_PREREQ))) 
                           & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                          & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_END)) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) 
                        | ((((IData)(vlSelfRef.__PVT__bsc__DOT__BREQ) 
                             & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                            & (~ (IData)(vlSelfRef.__PVT__RES_SYNC_N))) 
                           & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))))) {
                __Vdly__bsc__DOT__BREQ = 0U;
            } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__bsc__DOT__BREQ)) 
                              & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))))) {
                __Vdly__bsc__DOT__SLV_BUS_RLS = 1U;
            }
            __Vdly__cache__DOT__SC_PTR = (0x0000003fU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__cache__DOT__SC_PTR)));
            if ((0x3fU == (IData)(vlSelfRef.__PVT__cache__DOT__SC_PTR))) {
                vlSelfRef.__PVT__cache__DOT__INIT = 0U;
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
                            ? ((0xff000000U & ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                               << 0x00000010U)) 
                               | (0xff00U & (IData)(vlSelfRef.__PVT__intc__DOT__IPRB)))
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
                                            & ((IData)(vlSelfRef.__PVT__intc__DOT__VCRC) 
                                               << 0x00000010U)) 
                                           | (0x7f7fU 
                                              & (IData)(vlSelfRef.__PVT__intc__DOT__VCRC)))
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
                                 : (0x9ff7U & (0x00008000U 
                                               | (0x00007fffU 
                                                  & (IData)(vlSelfRef.__PVT__bsc__DOT__BCR1))))))));
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
        if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
            if ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__snmi_cnt))) {
                __Vdly__dmac__DOT__DMAOR = (2U | __Vdly__dmac__DOT__DMAOR);
            }
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                       | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) {
                __Vdly__frt__DOT__FTCSR = (0xf1U & (IData)(__Vdly__frt__DOT__FTCSR));
                __Vdly__frt__DOT__FTCSR = (0xfeU & (IData)(__Vdly__frt__DOT__FTCSR));
                __Vdly__frt__DOT__FTCSR = (0x8fU & (IData)(__Vdly__frt__DOT__FTCSR));
            } else {
                if (vlSelfRef.__PVT__frt__DOT__FRC_CE) {
                    if (((IData)(vlSelfRef.__PVT__frt__DOT__FRC) 
                         == (IData)(vlSelfRef.__PVT__frt__DOT__OCRA))) {
                        __Vdly__frt__DOT__FTCSR = (8U 
                                                   | (IData)(__Vdly__frt__DOT__FTCSR));
                    }
                    if (((IData)(vlSelfRef.__PVT__frt__DOT__FRC) 
                         == (IData)(vlSelfRef.__PVT__frt__DOT__OCRB))) {
                        __Vdly__frt__DOT__FTCSR = (4U 
                                                   | (IData)(__Vdly__frt__DOT__FTCSR));
                    }
                    if ((0xffffU == (IData)(vlSelfRef.__PVT__frt__DOT__FRC))) {
                        __Vdly__frt__DOT__FTCSR = (2U 
                                                   | (IData)(__Vdly__frt__DOT__FTCSR));
                    }
                }
                if (vlSelfRef.__PVT__frt__DOT__FTCSR_WRITE) {
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x13U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET)) 
                         & ((IData)(vlSelfRef.__PVT__frt__DOT__FTCSR) 
                            >> 3U))) {
                        __Vdly__frt__DOT__FTCSR = (0xf7U 
                                                   & (IData)(__Vdly__frt__DOT__FTCSR));
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET = 0U;
                    }
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x12U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET)) 
                         & ((IData)(vlSelfRef.__PVT__frt__DOT__FTCSR) 
                            >> 2U))) {
                        __Vdly__frt__DOT__FTCSR = (0xfbU 
                                                   & (IData)(__Vdly__frt__DOT__FTCSR));
                        vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET = 0U;
                    }
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x11U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET)) 
                         & ((IData)(vlSelfRef.__PVT__frt__DOT__FTCSR) 
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
            if (((9U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                 & (IData)(vlSelfRef.__PVT__bsc__DOT__RFS_REQ))) {
                __Vdly__bsc__DOT__RFS_REQ = 0U;
            }
        } else if (vlSelfRef.__PVT__RES_SYNC_N) {
            if (vlSelfRef.__PVT__frt__DOT__FTCSR_READ) {
                if ((8U & (IData)(vlSelfRef.__PVT__frt__DOT__FTCSR))) {
                    vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET = 1U;
                }
                if ((4U & (IData)(vlSelfRef.__PVT__frt__DOT__FTCSR))) {
                    vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET = 1U;
                }
                if ((2U & (IData)(vlSelfRef.__PVT__frt__DOT__FTCSR))) {
                    vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET = 1U;
                }
            }
        } else {
            vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFA_SET = 0U;
            vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OCFB_SET = 0U;
            vlSelfRef.__PVT__frt__DOT__unnamedblk1__DOT__OVF_SET = 0U;
        }
        if (vlSelfRef.__PVT__RES_SYNC_N) {
            if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
            if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
                if ((1U & (((~ ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__snmi_cnt)) 
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
                                             + vlSelfRef.__PVT__core__DOT__PC);
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
                if ((1U & (((((vlSelfRef.__PVT__core__DOT__PC 
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
                                  & (~ (vlSelfRef.__PVT__core__DOT__PC 
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
                    = (0x0000ffffU & ((1U & ((~ (vlSelfRef.__PVT__core__DOT__PC 
                                                 >> 1U)) 
                                             | vlSelfRef.__PVT__core__DOT__PIPE
                                             .__PVT__MA
                                             .__PVT__BC))
                                       ? ((2U & vlSelfRef.__PVT__core__DOT__PC)
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
                    if ((1U & ((~ (vlSelfRef.__PVT__core__DOT__PC 
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
                            = vlSelfRef.__PVT__core__DOT__PC;
                    } else {
                        __Vdly__core__DOT__SAVE_ID.__PVT__IR 
                            = vlSelfRef.__PVT__core__DOT__unnamedblk1__DOT__NEW_IR;
                        __Vdly__core__DOT__SAVE_ID.__PVT__PC 
                            = vlSelfRef.__PVT__core__DOT__PC;
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
                                                  ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                                   >> 0x0000000cU)
                                                   : 
                                                  ((0x0aU 
                                                    == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                                    >> 0x0000000cU)
                                                    : 
                                                   ((0x0bU 
                                                     == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                                     >> 0x0000000cU)
                                                     : 
                                                    ((0x0cU 
                                                      == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                                      >> 0x0000000cU)
                                                      : 
                                                     ((0x0dU 
                                                       == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                                       >> 8U)
                                                       : 
                                                      ((0x0eU 
                                                        == (IData)(vlSelfRef.__PVT__intc__DOT__INT_ACTIVE))
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
                                                        >> 8U)
                                                        : 
                                                       (((IData)(vlSelfRef.__PVT__intc__DOT__IPRB) 
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
                    = (0U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__snmi_cnt));
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
            if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
            if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
        if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
            vlSelfRef.__PVT__cache__DOT__SC_STALE = 
                (((((0U != vlSelfRef.__PVT__cache__DOT__stls__DOT__altdpram_component__DOT__mem
                     [vlSelfRef.__PVT__cache__DOT__SC_PTR]) 
                    & (vlSelfRef.__PVT__cache__DOT__stls__DOT__altdpram_component__DOT__mem
                       [vlSelfRef.__PVT__cache__DOT__SC_PTR] 
                       != (IData)(vlSelfRef.cache__DOT__EPOCH))) 
                   << 4U) | ((((0U != vlSelfRef.__PVT__cache__DOT__STW_S[3U]) 
                               & (vlSelfRef.__PVT__cache__DOT__STW_S[3U] 
                                  != (IData)(vlSelfRef.cache__DOT__EPOCH))) 
                              << 3U) | (((0U != vlSelfRef.__PVT__cache__DOT__STW_S[2U]) 
                                         & (vlSelfRef.__PVT__cache__DOT__STW_S[2U] 
                                            != (IData)(vlSelfRef.cache__DOT__EPOCH))) 
                                        << 2U))) | 
                 ((((0U != vlSelfRef.__PVT__cache__DOT__STW_S[1U]) 
                    & (vlSelfRef.__PVT__cache__DOT__STW_S[1U] 
                       != (IData)(vlSelfRef.cache__DOT__EPOCH))) 
                   << 1U) | ((0U != vlSelfRef.__PVT__cache__DOT__STW_S[0U]) 
                             & (vlSelfRef.__PVT__cache__DOT__STW_S[0U] 
                                != (IData)(vlSelfRef.cache__DOT__EPOCH)))));
            if (vlSelfRef.__PVT__INT_ACP) {
                vlSelfRef.__PVT__intc__DOT__IRL_LVL_SAVE 
                    = vlSelfRef.__PVT__intc__DOT__IRL_LVL;
                vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED 
                    = vlSelfRef.__PVT__intc__DOT__INT_ACTIVE;
            }
            vlSelfRef.__PVT__cache__DOT__SC_SKIP = 
                (((0U != (IData)(vlSelfRef.__PVT__cache__DOT__CVALID_WE)) 
                  | (IData)(vlSelfRef.__PVT__cache__DOT__LRU_WE)) 
                 & ((0x0000003fU & (vlSelfRef.__PVT__cache__DOT__CACHE_WR_ADDR 
                                    >> 2U)) == (IData)(vlSelfRef.__PVT__cache__DOT__SC_PTR)));
            if ((1U & ((vlSelfRef.__PVT__core__DOT__PIPE
                        .__PVT__MA.__PVT__DI[0U] >> 1U) 
                       & (~ (IData)(vlSelfRef.__PVT__core__DOT__MA_STALL))))) {
                vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED = 0U;
            }
            if (vlSelfRef.__PVT__frt__DOT__FRC_CE) {
                __Vdly__frt__DOT__FRC = (0x0000ffffU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__frt__DOT__FRC)));
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
                                if ((0x00000010U & (IData)(vlSelfRef.__PVT__frt__DOT__TOCR))) {
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
            if (((((IData)(vlSelfRef.__PVT__frt__DOT__FRC) 
                   == (IData)(vlSelfRef.__PVT__frt__DOT__OCRA)) 
                  & (IData)(vlSelfRef.__PVT__frt__DOT__FTCSR)) 
                 & (IData)(vlSelfRef.__PVT__frt__DOT__FRC_CE))) {
                __Vdly__frt__DOT__FRC = 0U;
            }
            if ((((((((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                      | (2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                     | (5U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                    | (8U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                   | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                  | (0x0aU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                 | (0x0cU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)))) {
                if (((((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                       & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY))) 
                     & (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                         >> 1U) | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN))))) {
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY = 1U;
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = 0U;
                }
                if (((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                       & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY))) 
                     & (((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_CNT) 
                         >> 1U) | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN))))) {
                    __Vdly__bsc__DOT__DBUSY = 1U;
                }
                if ((((IData)(vlSelfRef.__PVT__VBUS_REQ) 
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) 
                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY)))) {
                    __Vdly__bsc__DOT__VBUSY = 1U;
                }
                if ((((((((((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                            | (5U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                           | (8U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                          | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                         | (0x0aU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                        | (0x0cU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                       & (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY)) 
                      & (~ (IData)(vlSelfRef.__PVT__IRD_WR_N))) 
                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS)))) {
                    if (((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__CBUSY)))) {
                        vlSelfRef.__Vdly__bsc__DOT__CBUSY = 1U;
                    }
                    if (((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                         & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__DBUSY)))) {
                        __Vdly__bsc__DOT__DBUSY = 1U;
                    }
                }
                __Vfunc_bsc__DOT__SDRAMAreaSel__43__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__SDRAMAreaSel__43__Vfuncout 
                    = (((IData)((1U == (3U & (IData)(__Vfunc_bsc__DOT__SDRAMAreaSel__43__BCR1)))) 
                        << 3U) | (4U & (IData)(__Vfunc_bsc__DOT__SDRAMAreaSel__43__BCR1)));
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA 
                    = __Vfunc_bsc__DOT__SDRAMAreaSel__43__Vfuncout;
                __Vfunc_bsc__DOT__IsSDRAMArea__44__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__IsSDRAMArea__44__area 
                    = (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                             >> 0x19U));
                vlSelfRef.__VcaseTableOut1 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__44__BCR1)))));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut1));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 1U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 2U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_bsc__DOT__IsSDRAMArea__44__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__44__area))
                                           ? ((IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_bsc__DOT__IsSDRAMArea__44__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM 
                    = __Vfunc_bsc__DOT__IsSDRAMArea__44__Vfuncout;
                __Vfunc_bsc__DOT__IsSDRAMArea__45__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__IsSDRAMArea__45__area 
                    = (3U & (vlSelfRef.__PVT__DBUS_A 
                             >> 0x19U));
                vlSelfRef.__VcaseTableOut1 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__45__BCR1)))));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut1));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 1U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 2U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_bsc__DOT__IsSDRAMArea__45__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__45__area))
                                           ? ((IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_bsc__DOT__IsSDRAMArea__45__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM 
                    = __Vfunc_bsc__DOT__IsSDRAMArea__45__Vfuncout;
                __Vfunc_bsc__DOT__IsSDRAMArea__46__BCR1 
                    = vlSelfRef.__PVT__bsc__DOT__BCR1;
                __Vfunc_bsc__DOT__IsSDRAMArea__46__area 
                    = (3U & (vlSelfRef.__PVT__IA >> 0x19U));
                vlSelfRef.__VcaseTableOut1 = (7U & 
                                              (0x0001a108U 
                                               >> ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__46__BCR1)))));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 
                    = (1U & (IData)(vlSelfRef.__VcaseTableOut1));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 1U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 
                    = (1U & ((IData)(vlSelfRef.__VcaseTableOut1) 
                             >> 2U));
                vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res 
                    = ((1U & ((IData)(__Vfunc_bsc__DOT__IsSDRAMArea__46__area) 
                              >> 1U)) && ((1U & (IData)(__Vfunc_bsc__DOT__IsSDRAMArea__46__area))
                                           ? ((IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__dram3) 
                                              | (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3))
                                           : (IData)(vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2)));
                __Vfunc_bsc__DOT__IsSDRAMArea__46__Vfuncout 
                    = vlSelfRef.__PVT__bsc__DOT__IsSDRAMArea__Vstatic__res;
                vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM 
                    = __Vfunc_bsc__DOT__IsSDRAMArea__46__Vfuncout;
                vlSelfRef.__PVT__bsc__DOT__VBUS_ACTIVE = 0U;
                if (((((((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                         | (5U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                        | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                       & (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY)) 
                      & (0U != (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NEXT_BA))) 
                     | ((((2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                          | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
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
                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) 
                            & (IData)(vlSelfRef.__PVT__bsc__DOT__BREQ))) {
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
                        } else if ((((((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                       | (2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                      | ((8U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)))) {
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 9U;
                            __Vdly__bsc__DOT__REFRESH_ACTIVE = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
                                = (1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__FAST_R)));
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
                        if ((((((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                | (2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                               | ((8U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                  & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                              | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                             | (0x0aU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)))) {
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
                    } else if (((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                                  & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))) 
                                 & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) 
                                       & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP)))) 
                                | (((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_ACCESS) 
                                    & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT)) 
                                   & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT))))) {
                        __Vfunc_bsc__DOT__SDRAMBank__47__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__47__A 
                            = vlSelfRef.__PVT__IA;
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__47__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__47__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.bsc__DOT____VlemCall_0__SDRAMBank 
                            = vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res;
                        __Vfunc_bsc__DOT__SDRAMBank__48__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__48__A 
                            = (0x07ffffffU & vlSelfRef.__PVT__DBUS_A);
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__48__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__48__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__48__A 
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
                             & ((((((((3U & (vlSelfRef.__PVT__IA 
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
                                     & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                    & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM)))) 
                                | (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT))))) {
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__DBUS_A);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                        } else if (((((((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                        | (2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                       | (((5U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                           & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))) 
                                          & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)))) 
                                      | ((8U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)))) {
                            __Vfunc_bsc__DOT__GetAreaSZ__49__dramsz 
                                = (2U | (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                               >> 6U)));
                            vlSelfRef.__Vdly__bsc__DOT__DBUS_ACTIVE = 1U;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 1U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT 
                                = vlSelfRef.__PVT__dmac__DOT__DMA_LOCK;
                            __Vfunc_bsc__DOT__GetAreaSZ__49__BCR2 
                                = vlSelfRef.__PVT__bsc__DOT__BCR2;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                                = (3U & ((IData)(1U) 
                                         + (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                  >> 0x0000000eU))));
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
                                = (1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__FAST_R)));
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__DBUS_A);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
                                = vlSelfRef.__PVT__bsc__DOT__RFS_REQ;
                            __Vfunc_bsc__DOT__GetAreaSZ__49__BCR1 
                                = vlSelfRef.__PVT__bsc__DOT__BCR1;
                            __Vfunc_bsc__DOT__GetAreaSZ__49__area 
                                = (3U & (vlSelfRef.__PVT__DBUS_A 
                                         >> 0x19U));
                            vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res 
                                = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__area))
                                          ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__area))
                                              ? ((1U 
                                                  & VL_REDXOR_32(
                                                                 (3U 
                                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__BCR1))))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__BCR2) 
                                                  >> 6U))
                                              : ((4U 
                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__BCR1))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__BCR2) 
                                                  >> 4U)))
                                          : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__area))
                                              ? ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__49__BCR2) 
                                                 >> 2U)
                                              : 2U)));
                            __Vfunc_bsc__DOT__GetAreaSZ__49__Vfuncout 
                                = vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res;
                            bsc__DOT____VCase_h296e1a3d__0 
                                = __Vfunc_bsc__DOT__GetAreaSZ__49__Vfuncout;
                            if ((1U != (IData)(bsc__DOT____VCase_h296e1a3d__0))) {
                                if ((2U == (IData)(bsc__DOT____VCase_h296e1a3d__0))) {
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
                                } else if ((3U == (IData)(bsc__DOT____VCase_h296e1a3d__0))) {
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
                            vlSelfRef.__PVT__ICS0_N 
                                = (0U != (3U & (vlSelfRef.__PVT__DBUS_A 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__ICS1_N 
                                = (1U != (3U & (vlSelfRef.__PVT__DBUS_A 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__ICS2_N 
                                = (2U != (3U & (vlSelfRef.__PVT__DBUS_A 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__ICS3_N 
                                = (3U != (3U & (vlSelfRef.__PVT__DBUS_A 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__IBS_N = 0U;
                            __Vdly__IRD_WR_N = (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__DBUS_WE)));
                            vlSelfRef.__PVT__IRD_N 
                                = vlSelfRef.__PVT__DBUS_WE;
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
                    } else if (vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ) {
                        __Vfunc_bsc__DOT__SDRAMBank__50__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__50__A 
                            = vlSelfRef.__PVT__IA;
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__50__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__50__A 
                                                        >> 0x14U)))))));
                        vlSelfRef.bsc__DOT____VlemCall_2__SDRAMBank 
                            = vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res;
                        __Vfunc_bsc__DOT__SDRAMBank__51__MCR 
                            = vlSelfRef.__PVT__bsc__DOT__MCR;
                        __Vfunc_bsc__DOT__SDRAMBank__51__A 
                            = (0x07ffffffU & vlSelfRef.__PVT__cache__DOT__IBADDR);
                        vlSelfRef.__PVT__bsc__DOT__SDRAMBank__Vstatic__res 
                            = (1U & ((0x00000040U & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                      ? ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                        >> 0x12U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                              ? ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                  >> 0x13U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                  >> 0x17U))
                                              : ((0x00000010U 
                                                  & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                                  ? 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                  >> 0x16U)
                                                  : 
                                                 (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                  >> 0x15U))))
                                      : ((0x00000080U 
                                          & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                          ? ((1U & 
                                              ((IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR) 
                                               >> 5U)) 
                                             && ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                        >> 0x11U))))
                                          : ((0x00000020U 
                                              & (IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR))
                                              ? ((1U 
                                                  & ((IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR) 
                                                     >> 4U)) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__51__A 
                                                        >> 0x12U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(__Vfunc_bsc__DOT__SDRAMBank__51__MCR) 
                                                      >> 4U))) 
                                                 && (1U 
                                                     & (__Vfunc_bsc__DOT__SDRAMBank__51__A 
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
                                      & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                     & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)))) 
                                 | ((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                    & (IData)(vlSelfRef.__PVT__bsc__DOT__REFRESH_ACTIVE))) 
                                | (((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                    & (3U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT))) 
                                   & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))))) {
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR);
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
                        } else if (((((((0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                        | (2U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                       | (((5U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                           & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP))) 
                                          & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ)))) 
                                      | ((8U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                                         & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT)))) 
                                     | (7U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                                    | (0x0aU == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)))) {
                            __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT 
                                = (((IData)(vlSelfRef.__PVT__cache__DOT__IBWE) 
                                    & (3U > (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT)))
                                    ? (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT)))
                                    : 0U);
                            __Vfunc_bsc__DOT__GetAreaSZ__52__dramsz 
                                = (2U | (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                               >> 6U)));
                            __Vdly__bsc__DOT__CBUS_ACTIVE = 1U;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 0U;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT 
                                = vlSelfRef.__PVT__cache__DOT__IBLOCK;
                            __Vfunc_bsc__DOT__GetAreaSZ__52__BCR2 
                                = vlSelfRef.__PVT__bsc__DOT__BCR2;
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
                            __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT 
                                = (1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__FAST_R)));
                            __Vdly__IA = (0x07ffffffU 
                                          & vlSelfRef.__PVT__cache__DOT__IBADDR);
                            vlSelfRef.__PVT__ICS0_N 
                                = (0U != (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__ICS1_N 
                                = (1U != (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__ICS2_N 
                                = (2U != (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__ICS3_N 
                                = (3U != (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                                >> 0x19U)));
                            vlSelfRef.__PVT__IBS_N = 0U;
                            __Vdly__IRD_WR_N = (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)));
                            vlSelfRef.__PVT__IRD_N 
                                = vlSelfRef.__PVT__cache__DOT__IBWE;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            __Vfunc_bsc__DOT__GetAreaSZ__52__BCR1 
                                = vlSelfRef.__PVT__bsc__DOT__BCR1;
                            vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT 
                                = (3U & ((((((IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH) 
                                             & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH))) 
                                            & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM)) 
                                           & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)))
                                           ? 0U : 1U) 
                                         + (1U & ((IData)(vlSelfRef.__PVT__bsc__DOT__MCR) 
                                                  >> 0x0000000eU))));
                            __Vfunc_bsc__DOT__GetAreaSZ__52__area 
                                = (3U & (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                         >> 0x19U));
                            vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res 
                                = (3U & ((2U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__area))
                                          ? ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__area))
                                              ? ((1U 
                                                  & VL_REDXOR_32(
                                                                 (3U 
                                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__BCR1))))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__BCR2) 
                                                  >> 6U))
                                              : ((4U 
                                                  & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__BCR1))
                                                  ? (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__dramsz)
                                                  : 
                                                 ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__BCR2) 
                                                  >> 4U)))
                                          : ((1U & (IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__area))
                                              ? ((IData)(__Vfunc_bsc__DOT__GetAreaSZ__52__BCR2) 
                                                 >> 2U)
                                              : 2U)));
                            __Vfunc_bsc__DOT__GetAreaSZ__52__Vfuncout 
                                = vlSelfRef.__PVT__bsc__DOT__GetAreaSZ__Vstatic__res;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH 
                                = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH 
                                = vlSelfRef.__PVT__cache__DOT__IBWE;
                            bsc__DOT____VCase_hadc07db3__0 
                                = __Vfunc_bsc__DOT__GetAreaSZ__52__Vfuncout;
                            __Vdly__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ 
                                = ((IData)(vlSelfRef.__PVT__bsc__DOT__RFS_REQ) 
                                   & (IData)(vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM));
                            if ((1U != (IData)(bsc__DOT____VCase_hadc07db3__0))) {
                                if ((2U == (IData)(bsc__DOT____VCase_hadc07db3__0))) {
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
                                } else if ((3U == (IData)(bsc__DOT____VCase_hadc07db3__0))) {
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
            } else if ((((((((1U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                             | (3U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                            | (4U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                           | (6U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                          | (9U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                         & (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_SEL)) 
                        & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS)))) {
                if (((~ (IData)(vlSelfRef.__PVT__bsc__DOT__VBUSY)) 
                     & (IData)(vlSelfRef.__PVT__VBUS_REQ))) {
                    __Vdly__bsc__DOT__VBUSY = 1U;
                }
                if (((((1U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE)) 
                       | (3U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                      | (4U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
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
                      & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS))) 
                     & (IData)(vlSelfRef.__PVT__bsc__DOT__BUSY))) {
                    vlSelfRef.__Vdly__bsc__DOT__CBUSY2 = 1U;
                }
            }
            if (vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS) {
                __Vdly__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
                __Vdly__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
            }
        } else if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))) {
            if ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                  & (~ (IData)(vlSelfRef.__PVT__cache__DOT__IBWE))) 
                 & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                vlSelfRef.__PVT__frt__DOT__unnamedblk3__DOT__OCR 
                    = ((0x00000010U & (IData)(vlSelfRef.__PVT__frt__DOT__TOCR))
                        ? (IData)(vlSelfRef.__PVT__frt__DOT__OCRB)
                        : (IData)(vlSelfRef.__PVT__frt__DOT__OCRA));
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
                                       & ((IData)(vlSelfRef.__PVT__frt__DOT__ICR) 
                                          >> 8U));
                                __Vdly__frt__DOT__TEMP 
                                    = (0x000000ffU 
                                       & (IData)(vlSelfRef.__PVT__frt__DOT__ICR));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                    vlSelfRef.__PVT__frt__DOT__REG_DO 
                        = (0x000000ffU & ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                           ? ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                               ? (0xe0U 
                                                  | (IData)(vlSelfRef.__PVT__frt__DOT__TOCR))
                                               : (0x83U 
                                                  & (IData)(vlSelfRef.__PVT__frt__DOT__TCR)))
                                           : ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                                               ? (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk3__DOT__OCR)
                                               : ((IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk3__DOT__OCR) 
                                                  >> 8U))));
                } else if ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                    if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                        vlSelfRef.__PVT__frt__DOT__REG_DO 
                            = vlSelfRef.__PVT__frt__DOT__TEMP;
                    } else {
                        vlSelfRef.__PVT__frt__DOT__REG_DO 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__frt__DOT__FRC) 
                                              >> 8U));
                        __Vdly__frt__DOT__TEMP = (0x000000ffU 
                                                  & (IData)(vlSelfRef.__PVT__frt__DOT__FRC));
                    }
                } else {
                    vlSelfRef.__PVT__frt__DOT__REG_DO 
                        = ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)
                            ? (0x8fU & (IData)(vlSelfRef.__PVT__frt__DOT__FTCSR))
                            : (1U | (IData)(vlSelfRef.__PVT__frt__DOT__TIER)));
                }
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))) {
            if (((((~ (IData)(vlSelfRef.__PVT__bsc__DOT__CBUS_EXT_REQ)) 
                   & (IData)(vlSelfRef.__PVT__IBUS_PREREQ)) 
                  & (0U == (IData)(vlSelfRef.__PVT__bsc__DOT__BUS_STATE))) 
                 & (~ (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS)))) {
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
                                                   & (vlSelfRef.__PVT__core__DOT__SR 
                                                      >> 4U));
            } else if (((IData)(vlSelfRef.__PVT__intc__DOT__VBREQ) 
                        & (~ ((IData)(vlSelfRef.__PVT__bsc__DOT__VBUSY) 
                              | (((IData)(vlSelfRef.__PVT__bsc__DOT__BGR) 
                                  | (IData)(vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS)) 
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
        vlSelfRef.__PVT__bsc__DOT__BUS_STATE = vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT;
        if ((((IData)(vlSelfRef.__PVT__core__DOT__REGS_WAE) 
              & (0U == (0x0000001fU & (vlSelfRef.__PVT__core__DOT__PIPE
                                       .__PVT__WB.__PVT__DI[1U] 
                                       >> 8U)))) & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
            vlSelfRef.__PVT__core__DOT__regfile__DOT__GR0 
                = vlSelfRef.__PVT__core__DOT__REGS_WAD;
        }
        if (((IData)(vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH) 
             & (0U == (IData)(vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_ADDR_LATCH)))) {
            vlSelfRef.__PVT__core__DOT__regfile__DOT__GR0 
                = vlSelfRef.__PVT__core__DOT__regfile__DOT__WB_D_LATCH;
        }
        __Vfunc_dmac__DOT__GetAddrInc__53__sz = (3U 
                                                 & (vlSelfRef.__PVT__dmac__DOT__CHCR
                                                    [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                                                    >> 0x0000000aU));
        vlSelfRef.__PVT__dmac__DOT__GetAddrInc__Vstatic__res 
            = ((2U & (IData)(__Vfunc_dmac__DOT__GetAddrInc__53__sz))
                ? 4U : ((1U & (IData)(__Vfunc_dmac__DOT__GetAddrInc__53__sz))
                         ? 2U : 1U));
        __Vfunc_dmac__DOT__GetAddrInc__53__Vfuncout 
            = vlSelfRef.__PVT__dmac__DOT__GetAddrInc__Vstatic__res;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__AR_INC 
            = __Vfunc_dmac__DOT__GetAddrInc__53__Vfuncout;
        vlSelfRef.__PVT__dmac__DOT__unnamedblk2__DOT__TCR_NEXT 
            = (0x00ffffffU & (vlSelfRef.__PVT__dmac__DOT__TCR
                              [vlSelfRef.__PVT__dmac__DOT__DMA_CH] 
                              - (IData)(1U)));
        __VdlySet__dmac__DOT__CH_REQ_CLR__v0 = 1U;
        __Vdly__dmac__DOT__DMA_REQ_CLR = 0U;
        if (((((IData)(vlSelfRef.__PVT__dmac__DOT__DMA_REQ) 
               & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_RD))) 
              & (~ (IData)(vlSelfRef.__PVT__dmac__DOT__DMA_WR))) 
             & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))) {
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
                                  & (IData)(vlSymsp->TOP__tb_top__DOT__dut__DOT__MSH.__VdfgRegularize_hebeb780c_0_42)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41)))))) 
                    & (~ (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV)))) {
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
             & (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV))) {
            __VdlyVal__dmac__DOT__RD_BUF__v3 = vlSelfRef.__PVT__BSC_DBUS_DO;
            __VdlySet__dmac__DOT__RD_BUF__v3 = 1U;
            __Vdly__dmac__DOT__unnamedblk2__DOT__RD_BUF_LATCH = 0U;
        }
        vlSelfRef.__PVT__core__DOT__regfile__DOT__WBE_LATCH = 0U;
        if (vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) {
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
                        if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                          >> 2U)))) {
                                vlSelfRef.__PVT__divu__DOT__DVSR 
                                    = vlSelfRef.__PVT__cache__DOT__IBDATA;
                            }
                        }
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
                            __Vdly__divu__DOT__DVDNTL 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        } else {
                            __Vdly__divu__DOT__DVDNTH 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        }
                    } else if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                         >> 3U)))) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            __Vdly__divu__DOT__DVDNTH 
                                = (- (IData)((vlSelfRef.__PVT__cache__DOT__IBDATA 
                                              >> 0x1fU)));
                            __Vdly__divu__DOT__DVDNTL 
                                = vlSelfRef.__PVT__cache__DOT__IBDATA;
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__dmac__DOT__VCRDMA1 = 0U;
                vlSelfRef.__PVT__dmac__DOT__VCRDMA0 = 0U;
                vlSelfRef.__PVT__divu__DOT__DVSR = 0U;
                vlSelfRef.__PVT__divu__DOT__VCRDIV = 0U;
                __Vdly__divu__DOT__DVDNTL = 0U;
                __Vdly__divu__DOT__DVDNTH = 0U;
                vlSelfRef.__PVT__divu__DOT__DVDNTL2 = 0U;
                vlSelfRef.__PVT__divu__DOT__DVDNTH2 = 0U;
            }
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__RES_SYNC_N)) 
                       | (IData)(vlSelfRef.__PVT__MSBY_SBY)))) {
                vlSelfRef.__PVT__frt__DOT__TOCR = 0U;
                vlSelfRef.__PVT__frt__DOT__TIER = 0U;
                vlSelfRef.__PVT__frt__DOT__ICR = 0U;
                __Vdly__frt__DOT__FTCSR = (0x7fU & (IData)(__Vdly__frt__DOT__FTCSR));
                __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = 0U;
                vlSelfRef.__PVT__frt__DOT__TCR = 0U;
            } else {
                __Vdly__frt__DOT__unnamedblk2__DOT__CAPT 
                    = (1U & ((~ ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__sfti_cnt)) 
                                 ^ ((IData)(vlSelfRef.__PVT__frt__DOT__TCR) 
                                    >> 7U))) & ((IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__FTI_OLD) 
                                                ^ ((IData)(vlSelfRef.__PVT__frt__DOT__TCR) 
                                                   >> 7U))));
                if ((((IData)(vlSelfRef.__PVT__frt__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.__PVT__cache__DOT__IBWE)) 
                     & (IData)(vlSelfRef.__PVT__cache__DOT__IBREQ))) {
                    if ((1U & (~ (vlSelfRef.__PVT__cache__DOT__IBADDR 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                            if ((2U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                if ((1U & vlSelfRef.__PVT__cache__DOT__IBADDR)) {
                                    vlSelfRef.__PVT__frt__DOT__TOCR 
                                        = (0x1fU & vlSelfRef.__PVT__cache__DOT__IBDATA);
                                }
                                if ((1U & (~ vlSelfRef.__PVT__cache__DOT__IBADDR))) {
                                    vlSelfRef.__PVT__frt__DOT__TCR 
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
                                    vlSelfRef.__PVT__frt__DOT__TIER 
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
                    vlSelfRef.__PVT__frt__DOT__ICR 
                        = vlSelfRef.__PVT__frt__DOT__FRC;
                    __Vdly__frt__DOT__FTCSR = (0x00000080U 
                                               | (IData)(__Vdly__frt__DOT__FTCSR));
                }
                if (vlSelfRef.__PVT__frt__DOT__FTCSR_WRITE) {
                    if ((((~ (vlSelfRef.__PVT__cache__DOT__IBDATA 
                              >> 0x17U)) & (IData)(vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__ICF_SET)) 
                         & ((IData)(vlSelfRef.__PVT__frt__DOT__FTCSR) 
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
                __Vdly__divu__DOT__DVDNTH = ((vlSelfRef.__PVT__divu__DOT__DVDNTH 
                                              << 1U) 
                                             | (vlSelfRef.__PVT__divu__DOT__DVDNTL 
                                                >> 0x0000001fU));
                __Vdly__divu__DOT__DVDNTL = ((vlSelfRef.__PVT__divu__DOT__DVDNTL 
                                              << 1U) 
                                             | (1U 
                                                ^ (vlSelfRef.__PVT__divu__DOT__SUM[2U] 
                                                   ^ (IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN))));
            }
            if ((0x25U == (IData)(vlSelfRef.__PVT__divu__DOT__STEP))) {
                __Vdly__divu__DOT__DVDNTH = vlSelfRef.__PVT__divu__DOT__R[0U];
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
                   && (0U == (IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__sfti_cnt)));
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
                            __Vdly__divu__DOT__DVDNTL 
                                = (IData)(vlSelfRef.__PVT__divu__DOT__R64);
                        }
                    } else {
                        __Vdly__divu__DOT__DVDNTL = 
                            ((((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                               ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN)) 
                              << 0x0000001fU) | (0x7fffffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.__PVT__divu__DOT__R_SIGN) 
                                                                   ^ (IData)(vlSelfRef.__PVT__divu__DOT__D_SIGN))))))));
                    }
                    if (vlSelfRef.__PVT__divu__DOT__DIV64) {
                        __Vdly__divu__DOT__DVDNTH = (IData)(
                                                            (vlSelfRef.__PVT__divu__DOT__R64 
                                                             >> 0x20U));
                    }
                } else {
                    __Vdly__divu__DOT__DVDNTL = vlSelfRef.__PVT__divu__DOT__Q;
                }
                vlSelfRef.__PVT__divu__DOT__unnamedblk2__DOT__SND_UPD = 1U;
            }
        } else if (vlSelfRef.__PVT__RES_SYNC_N) {
            if (vlSelfRef.__PVT__frt__DOT__FTCSR_READ) {
                if ((0x00000080U & (IData)(vlSelfRef.__PVT__frt__DOT__FTCSR))) {
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
        __Vdly__cache__DOT__EPOCH = 1U;
        __Vdly__core__DOT__SLP = 1U;
        vlSelfRef.__Vdly__cache__DOT__CCR = 0U;
        vlSelfRef.__Vdly__cache__DOT__CCR = 0U;
        __Vdly__bsc__DOT__BREQ = 0U;
        __Vdly__bsc__DOT__SLV_BUS_RLS = 1U;
        __VdlySet__dmac__DOT__CH_REQ__v4 = 1U;
        vlSelfRef.__Vdly__INTC_NMI_REQ = 0U;
        __Vdly__core__DOT__PC = 0U;
        __VdlySet__core__DOT__regfile__DOT__GR__v2 = 1U;
        vlSelfRef.__Vdly__core__DOT__MA_ACTIVE = 0U;
        __Vdly__core__DOT__IF_ACTIVE = 0U;
        __Vdly__core__DOT__VECT_ACTIVE = 0U;
        __Vdly__core__DOT__INST_SPLIT = 0U;
        vlSelfRef.__Vdly__core__DOT__MAWB_STALL = 0U;
        __Vdly__MSBY_SBY = 0U;
        __Vdly__dmac__DOT__DMAOR = 0U;
        __Vdly__dmac__DOT__DMAOR = (1U | __Vdly__dmac__DOT__DMAOR);
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
        vlSelfRef.__PVT__cache__DOT__SC_STALE = 0U;
        vlSelfRef.__PVT__mult__DOT__SIGNED = 0U;
        vlSelfRef.__PVT__sci__DOT__REG_DO = 0U;
        vlSelfRef.__PVT__UBC__DOT__REG_DO = 0U;
        vlSelfRef.__PVT__core__DOT__VBR = 0U;
        vlSelfRef.__PVT__core__DOT__GBR = 0U;
        __Vdly__core__DOT__RES_EXP = 1U;
        __Vdly__core__DOT__ILI_EXP = 0U;
        vlSelfRef.__PVT__cache__DOT__INIT = 1U;
        __Vdly__cache__DOT__SC_PTR = 0U;
        vlSelfRef.__PVT__cache__DOT__SC_SKIP = 0U;
        vlSelfRef.__PVT__intc__DOT__BUS_DO = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MUL_EXEC = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__DMUL_EXEC = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MACW_EXEC = 0U;
        __Vdly__mult__DOT__unnamedblk1__DOT__MACL_EXEC = 0U;
        vlSelfRef.__PVT__mult__DOT__MACL = 0U;
        vlSelfRef.__PVT__mult__DOT__MACH = 0U;
        vlSelfRef.__PVT__mult__DOT__MACL = 0x01234567U;
        vlSelfRef.__PVT__mult__DOT__MACH = 0x89abcdefU;
        vlSelfRef.__PVT__intc__DOT__INT_ACCEPTED = 0U;
        vlSelfRef.__PVT__dmac__DOT__REG_DO = 0U;
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
        vlSelfRef.__PVT__bsc__DOT__BUS_STATE = 0U;
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
        vlSelfRef.__PVT__frt__DOT__TOCR = 0U;
        vlSelfRef.__PVT__frt__DOT__TIER = 0U;
        __Vdly__frt__DOT__FTCSR = (0x7fU & (IData)(__Vdly__frt__DOT__FTCSR));
        __Vdly__frt__DOT__unnamedblk2__DOT__CAPT = 0U;
        vlSelfRef.__PVT__frt__DOT__ICR = 0U;
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
        vlSelfRef.__PVT__divu__DOT__DVSR = 0U;
        vlSelfRef.__PVT__divu__DOT__VCRDIV = 0U;
        __Vdly__divu__DOT__DVDNTL = 0U;
        __Vdly__divu__DOT__DVDNTH = 0U;
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
        vlSelfRef.__PVT__frt__DOT__TCR = 0U;
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
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__RES_SYNC_N) 
                     << 1U) | (IData)(vlSymsp->TOP.tb_top__DOT__RST_N));
    if ((0U != (0x0010U & Vtb_top__ConstPool__TABLE_h9b2cab03_0
                [__Vtableidx7]))) {
        vlSelfRef.__PVT__sci__DOT__RXI = Vtb_top__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx7];
    }
    if ((0U != (0x0020U & Vtb_top__ConstPool__TABLE_h9b2cab03_0
                [__Vtableidx7]))) {
        vlSelfRef.__PVT__sci__DOT__ERI = Vtb_top__ConstPool__TABLE_h537cf6d2_0
            [__Vtableidx7];
    }
    vlSelfRef.__PVT__mult__DOT__unnamedblk1__DOT__MM_CYC 
        = __Vdly__mult__DOT__unnamedblk1__DOT__MM_CYC;
    vlSelfRef.__PVT__mult__DOT__MM_DONE = __Vdly__mult__DOT__MM_DONE;
    vlSelfRef.__PVT__core__DOT__SAVE_ID = __Vdly__core__DOT__SAVE_ID;
    vlSelfRef.__PVT__core__DOT__PC = __Vdly__core__DOT__PC;
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
    vlSelfRef.cache__DOT__EPOCH = __Vdly__cache__DOT__EPOCH;
    vlSelfRef.__PVT__core__DOT__ILI_EXP = __Vdly__core__DOT__ILI_EXP;
    vlSelfRef.__PVT__core__DOT__RES_EXP = __Vdly__core__DOT__RES_EXP;
    vlSelfRef.__PVT__cache__DOT__SC_PTR = __Vdly__cache__DOT__SC_PTR;
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
    vlSelfRef.__PVT__intc__DOT__VCRC = (((IData)(__Vdly__intc__DOT__VCRC) 
                                         & (IData)(__VdlyMask__intc__DOT__VCRC)) 
                                        | ((IData)(vlSelfRef.__PVT__intc__DOT__VCRC) 
                                           & (~ (IData)(__VdlyMask__intc__DOT__VCRC))));
    __VdlyMask__intc__DOT__VCRC = 0U;
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
    vlSelfRef.__PVT__frt__DOT__OCRA = __Vdly__frt__DOT__OCRA;
    vlSelfRef.__PVT__frt__DOT__OCRB = __Vdly__frt__DOT__OCRB;
    vlSelfRef.__PVT__bsc__DOT__RTCNT = __Vdly__bsc__DOT__RTCNT;
    vlSelfRef.__PVT__bsc__DOT__BUSY = __Vdly__bsc__DOT__BUSY;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT;
    vlSelfRef.__PVT__bsc__DOT__unnamedblk1__DOT__BURST_EN 
        = __Vdly__bsc__DOT__unnamedblk1__DOT__BURST_EN;
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
    vlSelfRef.__PVT__bsc__DOT__BREQ = __Vdly__bsc__DOT__BREQ;
    vlSelfRef.__PVT__IRD_WR_N = __Vdly__IRD_WR_N;
    vlSelfRef.__PVT__IA = __Vdly__IA;
    vlSelfRef.__PVT__core__DOT__SLP = __Vdly__core__DOT__SLP;
    vlSelfRef.__PVT__core__DOT__INST_SPLIT = __Vdly__core__DOT__INST_SPLIT;
    vlSelfRef.__PVT__wdt__DOT__OPEN_BUS = __Vdly__wdt__DOT__OPEN_BUS;
    vlSelfRef.__PVT__frt__DOT__unnamedblk2__DOT__CAPT 
        = __Vdly__frt__DOT__unnamedblk2__DOT__CAPT;
    vlSelfRef.__PVT__frt__DOT__FRC = __Vdly__frt__DOT__FRC;
    vlSelfRef.__PVT__frt__DOT__FTCSR = __Vdly__frt__DOT__FTCSR;
    vlSelfRef.__PVT__bsc__DOT__VBUSY = __Vdly__bsc__DOT__VBUSY;
    vlSelfRef.__PVT__core__DOT__VECT_ACTIVE = __Vdly__core__DOT__VECT_ACTIVE;
    vlSelfRef.__PVT__intc__DOT__VBREQ = __Vdly__intc__DOT__VBREQ;
    vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS = __Vdly__bsc__DOT__SLV_BUS_RLS;
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
    vlSelfRef.__PVT__divu__DOT__DVDNTL = __Vdly__divu__DOT__DVDNTL;
    vlSelfRef.__PVT__divu__DOT__DVDNTH = __Vdly__divu__DOT__DVDNTH;
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
    if (vlSelfRef.__PVT__bsc__DOT__SLV_BUS_RLS) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = 0x01ffU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = 0x1fU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = 0ULL;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = 
            (0x000000c0U | (((IData)(vlSelfRef.__PVT__IRD_WR_N) 
                             << 8U) | (((IData)(vlSelfRef.__PVT__IWE_N) 
                                        << 2U) | (((IData)(vlSelfRef.__PVT__IRD_N) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__PVT__IIVECF_N)))));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = 
            ((((IData)(vlSelfRef.__PVT__IBS_N) << 4U) 
              | (((IData)(vlSelfRef.__PVT__ICS0_N) 
                  << 3U) | ((IData)(vlSelfRef.__PVT__ICS1_N) 
                            << 2U))) | (((IData)(vlSelfRef.__PVT__ICS2_N) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__ICS3_N)));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = 
            (((QData)((IData)(vlSelfRef.__PVT__IA)) 
              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__IDO)));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_top__DOT__RST_N)))) {
        vlSelfRef.__PVT__bsc__DOT__BGR = 0U;
    }
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
    __Vtableidx5 = (4U | ((((((IData)(vlSelfRef.__PVT__WDT_OVF) 
                              << 3U) | ((IData)(vlSelfRef.__PVT__MSBY_SBY) 
                                        << 2U)) | (
                                                   ((IData)(vlSelfRef.__PVT__wdt__DOT__unnamedblk1__DOT__NMI_OLD) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__INTC_NMI_REQ))) 
                           << 4U) | (((IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__MCLK_DIV) 
                                      << 3U) | (((IData)(vlSelfRef.__PVT__RES_SYNC_N) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP.tb_top__DOT__RST_N)))));
    if ((0U != (1U & Vtb_top__ConstPool__TABLE_h31cf1c10_0
                [__Vtableidx5]))) {
        vlSelfRef.__PVT__wdt__DOT__unnamedblk1__DOT__NMI_OLD 
            = Vtb_top__ConstPool__TABLE_h0a5b22a4_0
            [__Vtableidx5];
    }
    if ((0U != (2U & Vtb_top__ConstPool__TABLE_h31cf1c10_0
                [__Vtableidx5]))) {
        vlSelfRef.__PVT__wdt__DOT__SBY_TME = Vtb_top__ConstPool__TABLE_h1628b77a_0
            [__Vtableidx5];
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
