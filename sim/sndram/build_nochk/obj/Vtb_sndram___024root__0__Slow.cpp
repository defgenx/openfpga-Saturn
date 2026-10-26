// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sndram.h for the primary calling header

#include "Vtb_sndram__pch.h"

VL_ATTR_COLD void Vtb_sndram_SH2P_PKG___eval_static__TOP__SH2P_PKG(Vtb_sndram_SH2P_PKG* vlSelf);
VL_ATTR_COLD void Vtb_sndram_SCSPP_PKG___eval_static__TOP__SCSPP_PKG(Vtb_sndram_SCSPP_PKG* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_static__TOP(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___timing_ready(Vtb_sndram___024root* vlSelf);

VL_ATTR_COLD void Vtb_sndram___024root___eval_static(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_static\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sndram_SH2P_PKG___eval_static__TOP__SH2P_PKG((&vlSymsp->TOP__SH2P_PKG));
    Vtb_sndram_SCSPP_PKG___eval_static__TOP__SCSPP_PKG((&vlSymsp->TOP__SCSPP_PKG));
    Vtb_sndram___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__VactTriggered[1U] = (1ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (2ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (4ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (8ULL | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000000800ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000001000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000002000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000004000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000008000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000010000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000020000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__VactTriggered[1U] = (0x0000000000040000ULL 
                                     | vlSelfRef.__VactTriggered[1U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__CLK__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_ram__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__RST_N__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__a_d__0 
        = vlSelfRef.tb_sndram__DOT__a_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__ba_d__0 
        = vlSelfRef.tb_sndram__DOT__ba_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__cas_d__0 
        = vlSelfRef.tb_sndram__DOT__cas_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dqm_d__0 
        = vlSelfRef.tb_sndram__DOT__dqm_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__ras_d__0 
        = vlSelfRef.tb_sndram__DOT__ras_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__we_d__0 
        = vlSelfRef.tb_sndram__DOT__we_d;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__sdr_clk__0 
        = vlSelfRef.tb_sndram__DOT__sdr_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_a__0 
        = vlSelfRef.tb_sndram__DOT__dram_a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ba__0 
        = vlSelfRef.tb_sndram__DOT__dram_ba;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dqm__0 
        = vlSelfRef.tb_sndram__DOT__dram_dqm;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ras_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_ras_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_cas_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_cas_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_we_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_we_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_oe__0 
        = vlSelfRef.tb_sndram__DOT__dram_dq_oe;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_o__0 
        = vlSelfRef.tb_sndram__DOT__dram_dq_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_clk__0 
        = vlSelfRef.tb_sndram__DOT__dram_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dq__0 
        = vlSelfRef.tb_sndram__DOT__dq;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_run__0 = 0U;
    Vtb_sndram___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sndram___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_sndram___024root___stl_sequent__TOP__0(Vtb_sndram___024root* vlSelf);

VL_ATTR_COLD bool Vtb_sndram___024root___eval_stl(Vtb_sndram___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_stl\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sndram___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sndram___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_sndram___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__stl(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_dump_triggers__stl\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_sndram___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__ico(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_dump_triggers__ico\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_sndram___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__act(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_dump_triggers__act\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_sndram___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__nba(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_dump_triggers__nba\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_sndram___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__obs(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_dump_triggers__obs\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__react(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_dump_triggers__react\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sndram___024root___eval_final(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_final\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sndram___024root___eval_static__TOP(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_static__TOP\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    SData/*9:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL;
    tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res;
    tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res = 0;
    SData/*11:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm = 0;
    CData/*7:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp = 0;
    // Body
    vlSelfRef.tb_sndram__DOT__T_RAM = 0x0000221aU;
    vlSelfRef.tb_sndram__DOT__TCO = 0x00000dacU;
    vlSelfRef.tb_sndram__DOT__TIN = 0x000003e8U;
    vlSelfRef.tb_sndram__DOT__CAPV = 1U;
    vlSelfRef.tb_sndram__DOT__clk_ram = 0U;
    vlSelfRef.tb_sndram__DOT__CLK = 0U;
    vlSelfRef.tb_sndram__DOT__RST_N = 0U;
    vlSelfRef.tb_sndram__DOT__clk_run = 0U;
    vlSelfRef.tb_sndram__DOT__MCLK_DIV = 0U;
    vlSelfRef.tb_sndram__DOT__cyc = 0U;
    vlSelfRef.tb_sndram__DOT__in_clk = 0x0369e9e0U;
    vlSelfRef.tb_sndram__DOT__in_clk_i = 0x0369e9e0U;
    vlSelfRef.tb_sndram__DOT__SCSP_DIV = 0U;
    vlSelfRef.tb_sndram__DOT__dot_div = 0U;
    vlSelfRef.tb_sndram__DOT__ce_ph = 0U;
    vlSelfRef.tb_sndram__DOT__init = 1U;
    vlSelfRef.tb_sndram__DOT__old_rd = 0U;
    vlSelfRef.tb_sndram__DOT__old_wr = 0U;
    vlSelfRef.tb_sndram__DOT__brdy_o = 1U;
    vlSelfRef.tb_sndram__DOT__cs2_o = 1U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PHASE = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SO = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SADIR = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_SALOOP = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CUR_LOOPEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__CALC_SO = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__COMP = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__ALLOW = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__EVENT = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED = 0U;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE = 0U;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ATTACK_VOL_CALC = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__DECAY_VOL_CALC = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EVOL = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__NEW_EST = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ERMAX = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__SRAC = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV = 0U;
    tb_sndram__DOT__SCSP__DOT__unnamedblk5__DOT__LEVEL = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__X = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__Y = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__BS = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__B = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__MUL = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__ADDR = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DMA_LEN_NEXT = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayFromLRU__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__Vstatic__res = 0U;
    tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk1__DOT__CACHE_ADDR_AREA_DATA = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__NEW_IR = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk2__DOT__BR_COND = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp = 0U;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN = 0;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET = 0;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaW__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaLW__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__GetAreaSZ__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__dram3 = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram2 = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__sdram3 = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__IsSDRAMArea__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__SDRAMBank__Vstatic__res = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__STATE_NEXT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__AREA_SZ = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__LL = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_IS_SDRAM = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_IS_SDRAM = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_IS_SDRAM = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SAME_BANK_SDRAM = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_AREA = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_LAST = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_PRELAST = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DATA_LATCH = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ = 0U;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk2__DOT__RTCNT_NEW = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CA_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CA_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CDQMN_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CDQMN_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CRDN_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CRDN_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS1N_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_CCS2N_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_CCS2N_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_SEL_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_SEL_INNER = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_END = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_DONE = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_DONE = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_IDX = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_ZERO = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk6__DOT__INT_LVL = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q = 0U;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__cs = 1U;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__cn = 0U;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__fc = 0U;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__sync_old = 0U;
    vlSelfRef.tb_sndram__DOT__sdram__DOT__q_cmd = 7U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dbg = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__cl = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__bl = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__wburst_single = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__mrs_done = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__n_ref_init = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__pre_all_seen = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__edge_n = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__drove_prev = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__t_clk_rise = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__t_cmd_ch = 0ULL;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__CYC_NUM = 0U;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD = 0U;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP_2X_CE = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum = 0U;
}

VL_ATTR_COLD void Vtb_sndram___024root___eval_initial__TOP(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_initial__TOP\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_sndram__DOT____VlemExpr_0;
    IData/*31:0*/ tb_sndram__DOT__unnamedblk1__DOT__i;
    tb_sndram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i = 0;
    VlUnpacked<QData/*63:0*/, 4> tb_sndram__DOT__model__DOT__bank_t_pre;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        tb_sndram__DOT__model__DOT__bank_t_pre[__Vi0] = 0;
    }
    IData/*31:0*/ tb_sndram__DOT__model__DOT__r;
    tb_sndram__DOT__model__DOT__r = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    std::ignore = VL_VALUEPLUSARGS_INI(32, "TCO=%d"s, 
                                       vlSelfRef.tb_sndram__DOT__TCO);
    std::ignore = VL_VALUEPLUSARGS_INI(32, "TIN=%d"s, 
                                       vlSelfRef.tb_sndram__DOT__TIN);
    std::ignore = VL_VALUEPLUSARGS_INI(32, "CAP=%d"s, 
                                       vlSelfRef.tb_sndram__DOT__CAPV);
    std::ignore = VL_VALUEPLUSARGS_INI(32, "T_RAM=%d"s, 
                                       vlSelfRef.tb_sndram__DOT__T_RAM);
    tb_sndram__DOT____VlemExpr_0 = VL_VALUEPLUSARGS_INI(32, "IN_CLK=%d"s, 
                                                        vlSelfRef.tb_sndram__DOT__in_clk_i);
    if (tb_sndram__DOT____VlemExpr_0) {
        vlSelfRef.tb_sndram__DOT__in_clk = (0x03ffffffU 
                                            & vlSelfRef.tb_sndram__DOT__in_clk_i);
    }
    vlSelfRef.tb_sndram__DOT__clk_run = 1U;
    vlSelfRef.tb_sndram__DOT__a_d = 0U;
    vlSelfRef.tb_sndram__DOT__ba_d = 0U;
    vlSelfRef.tb_sndram__DOT__dqm_d = 0U;
    vlSelfRef.tb_sndram__DOT__ras_d = 1U;
    vlSelfRef.tb_sndram__DOT__cas_d = 1U;
    vlSelfRef.tb_sndram__DOT__we_d = 1U;
    vlSelfRef.tb_sndram__DOT__sdr_clk = 1U;
    vlSelfRef.tb_sndram__DOT__oe_d = 0U;
    vlSelfRef.tb_sndram__DOT__o_d = 0U;
    vlSelfRef.tb_sndram__DOT__dq_in_r__strong__en4 = 0U;
    vlSelfRef.tb_sndram__DOT__dq_in_r__strong__out4 = 0U;
    tb_sndram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00010000U, tb_sndram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_sndram__DOT__wramh[(0x0000ffffU 
                                         & tb_sndram__DOT__unnamedblk1__DOT__i)] = 0U;
        tb_sndram__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + tb_sndram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "prog.hex"s,  &(vlSelfRef.tb_sndram__DOT__rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 256, 0, "exp.hex"s,  &(vlSelfRef.tb_sndram__DOT__expv)
                 , 0, ~0ULL);
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[0U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[1U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[2U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[3U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[4U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[5U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[6U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[7U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[8U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[9U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[10U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[11U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[12U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[13U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[14U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[15U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[16U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[17U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[18U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[19U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[20U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[21U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[22U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[23U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[24U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[25U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[26U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[27U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[28U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[29U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[30U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[31U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[0U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[1U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[2U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[3U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[4U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[5U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[6U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[7U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[8U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[9U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[10U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[11U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[12U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[13U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[14U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[15U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[16U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[17U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[18U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[19U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[20U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[21U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[22U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[23U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[24U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[25U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[26U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[27U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[28U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[29U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[30U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[31U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[31U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[16U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[17U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[18U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[19U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[20U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[21U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[22U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[23U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[24U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[25U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[26U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[27U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[28U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[29U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[30U] = 0U;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[31U] = 0U;
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__i);
    }
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__i);
    }
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__i);
    }
    tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem[(0x000003ffU 
                                                                                & tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i)] = 0U;
        tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i 
            = ((IData)(1U) + tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__i);
    }
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem[__Vilp1] = 0ULL;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000003fU)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem[__Vilp2] = 0ULL;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_READMEM_N(true, 27, 4, 0, " "s,  &(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 27, 4, 0, " "s,  &(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, 2, 0, " "s,  &(vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, 2, 0, " "s,  &(vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 20, 4, 0, " "s,  &(vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 8, 0, " "s,  &(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM)
                 , 0, ~0ULL);
    if (VL_TESTPLUSARGS_I("DBG"s)) {
        vlSelfRef.tb_sndram__DOT__model__DOT__dbg = 1U;
    }
    vlSelfRef.tb_sndram__DOT__m_err = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dq_en = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1 = 0xffffU;
    vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out1 = 0U;
    vlSelfRef.tb_sndram__DOT__m_act = 0U;
    vlSelfRef.tb_sndram__DOT__m_rd = 0U;
    vlSelfRef.tb_sndram__DOT__m_wr = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[0U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act[0U] = 0xffffffffc4653600ULL;
    tb_sndram__DOT__model__DOT__bank_t_pre[0U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[1U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act[1U] = 0xffffffffc4653600ULL;
    tb_sndram__DOT__model__DOT__bank_t_pre[1U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[2U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act[2U] = 0xffffffffc4653600ULL;
    tb_sndram__DOT__model__DOT__bank_t_pre[2U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_act[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_rdy[3U] = 0ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__bank_t_act[3U] = 0xffffffffc4653600ULL;
    tb_sndram__DOT__model__DOT__bank_t_pre[3U] = 0ULL;
    tb_sndram__DOT__model__DOT__r = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_sndram__DOT__model__DOT__r)) {
        vlSelfRef.tb_sndram__DOT__model__DOT__row_t[(0x000003ffU 
                                                     & tb_sndram__DOT__model__DOT__r)] = 0ULL;
        tb_sndram__DOT__model__DOT__r = ((IData)(1U) 
                                         + tb_sndram__DOT__model__DOT__r);
    }
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[0U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[1U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[2U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[3U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[4U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[5U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[6U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[7U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[8U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[9U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[10U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[11U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[12U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[13U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[14U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__sl_v[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__dqm_h[15U] = 0U;
    vlSelfRef.tb_sndram__DOT__model__DOT__k = 0x00000010U;
    vlSelfRef.tb_sndram__DOT__model__DOT__last_act_any = 0xffffffffc4653600ULL;
    vlSelfRef.tb_sndram__DOT__model__DOT__last_ref_end = 0ULL;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sndram___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sndram___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_sndram__ConstPool__TABLE_h225c9f2c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_hd11fe979_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_h2047061a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_h7a94dd37_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_hdc2324bb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_sndram__ConstPool__TABLE_hd6bce6fb_0;
extern const VlWide<64>/*2047:0*/ Vtb_sndram__ConstPool__CONST_hc4d6a76a_0;
extern const VlWide<1024>/*32767:0*/ Vtb_sndram__ConstPool__CONST_h65aed1fe_0;

VL_ATTR_COLD void Vtb_sndram___024root___stl_sequent__TOP__0(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___stl_sequent__TOP__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT__REV_OUT;
    tb_sndram__DOT__SCSP__DOT__REV_OUT = 0;
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT__F_SUB;
    tb_sndram__DOT__SCSP__DOT__F_SUB = 0;
    IData/*21:0*/ tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL;
    tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL = 0;
    IData/*16:0*/ tb_sndram__DOT__SCSP__DOT__SO_MOD;
    tb_sndram__DOT__SCSP__DOT__SO_MOD = 0;
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT__STACK_WE;
    tb_sndram__DOT__SCSP__DOT__STACK_WE = 0;
    CData/*6:0*/ tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP;
    tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP = 0;
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6;
    tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6 = 0;
    IData/*31:0*/ tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q;
    tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q = 0;
    CData/*5:0*/ tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0;
    tb_sndram__DOT__SCSP__DOT____Vconcswap_1_h683ab2df__0 = 0;
    CData/*4:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_sndram__DOT__SCSP__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__CACHE_DO;
    tb_sndram__DOT__MSH__DOT__CACHE_DO = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_3__AddrToWay;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res;
    tb_sndram__DOT__MSH__DOT__cache__DOT__AddrToWay__Vstatic__res = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY;
    tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY;
    tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__SLA;
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLA = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__SLB;
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLB = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__VA;
    tb_sndram__DOT__MSH__DOT__cache__DOT__VA = 0;
    CData/*5:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__LRUN;
    tb_sndram__DOT__MSH__DOT__cache__DOT__LRUN = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL;
    tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A;
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B;
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA;
    tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA = 0;
    SData/*11:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm = 0;
    CData/*7:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp = 0;
    QData/*32:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM;
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__LB;
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__LB = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SCO;
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SCO = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__GE;
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__GE = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__CO;
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__CO = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR;
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL;
    tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__intc__DOT__M1;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M1 = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__intc__DOT__M2;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M2 = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__intc__DOT__M3;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M3 = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__opRS;
    tb_sndram__DOT__MSH__DOT__divu__DOT__opRS = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__opRL;
    tb_sndram__DOT__MSH__DOT__divu__DOT__opRL = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW;
    tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__WB1;
    tb_sndram__DOT__MSH__DOT__divu__DOT__WB1 = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__WB0;
    tb_sndram__DOT__MSH__DOT__divu__DOT__WB0 = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__WB3;
    tb_sndram__DOT__MSH__DOT__divu__DOT__WB3 = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__divu__DOT__AT38;
    tb_sndram__DOT__MSH__DOT__divu__DOT__AT38 = 0;
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
    CData/*0:0*/ tb_sndram__DOT__SCU__DOT__CBUS_READ_DONE;
    tb_sndram__DOT__SCU__DOT__CBUS_READ_DONE = 0;
    CData/*0:0*/ tb_sndram__DOT__SCU__DOT__b_idle;
    tb_sndram__DOT__SCU__DOT__b_idle = 0;
    CData/*0:0*/ tb_sndram__DOT__SCU__DOT__b_nreq;
    tb_sndram__DOT__SCU__DOT__b_nreq = 0;
    CData/*0:0*/ tb_sndram__DOT__SCU__DOT__f_wr;
    tb_sndram__DOT__SCU__DOT__f_wr = 0;
    CData/*0:0*/ tb_sndram__DOT__SCU__DOT__dm_idle;
    tb_sndram__DOT__SCU__DOT__dm_idle = 0;
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
    IData/*31:0*/ __Vfunc_ByteShiftRigth__26__Vfuncout;
    __Vfunc_ByteShiftRigth__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ByteShiftRigth__26__val;
    __Vfunc_ByteShiftRigth__26__val = 0;
    CData/*1:0*/ __Vfunc_ByteShiftRigth__26__s;
    __Vfunc_ByteShiftRigth__26__s = 0;
    VlWide<4>/*111:0*/ __VdfgRegularize_hebeb780c_0_4;
    VL_ZERO_W(112, __VdfgRegularize_hebeb780c_0_4);
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_38;
    __VdfgRegularize_hebeb780c_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_46;
    __VdfgRegularize_hebeb780c_0_46 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_85;
    __VdfgRegularize_hebeb780c_0_85 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_92;
    __VdfgRegularize_hebeb780c_0_92 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_102;
    __VdfgRegularize_hebeb780c_0_102 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_103;
    __VdfgRegularize_hebeb780c_0_103 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_104;
    __VdfgRegularize_hebeb780c_0_104 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_105;
    __VdfgRegularize_hebeb780c_0_105 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_106;
    __VdfgRegularize_hebeb780c_0_106 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_113;
    __VdfgRegularize_hebeb780c_0_113 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_118;
    __VdfgRegularize_hebeb780c_0_118 = 0;
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
    IData/*31:0*/ TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp0;
    TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp0 = 0;
    IData/*31:0*/ TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1;
    TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_13;
    IData/*31:0*/ __VExpandSel_Lsb_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    // Body
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__HALF 
        = ((0x0cU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)) 
           | (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA_NEW 
        = (0x07ffffffU & ((IData)(4U) + vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA));
    vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__nxt 
        = (0x07ffffffU & ((IData)(0x02b11000U) + vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_INC 
        = (0x0001ffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_WR = (
                                                   (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                    .__PVT__MA
                                                    .__PVT__DI[1U] 
                                                    >> 0x0000000eU) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE));
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
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WD = 
        ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
           << 0x00000010U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D)) 
         & (- (IData)((1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                >> 0x00000013U))))));
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
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WD = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D) 
         & (- (IData)((1U & (~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                >> 0x00000013U))))));
    if ((0U >= (1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                      >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM_Q 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM
            [(1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                    >> 1U))];
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM_Q 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM
            [(1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                    >> 1U))];
    } else {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_RAM_Q = 0U;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_RAM_Q = 0U;
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_Q = ((0U 
                                                   >= 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                       >> 4U)))
                                                   ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM
                                                  [
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U))]
                                                   : 0U);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT____Vcellinp__decrom__RESET 
        = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N)) 
                 | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_WE = (
                                                   (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD)) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ICI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICF) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
                                                      >> 6U));
    vlSelfRef.tb_sndram__DOT__BDI = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP_DO) 
                                     & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT 
        = (0x00ffffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T
                          [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                          - (IData)(1U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CLR 
        = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_D = (vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF 
                                                 & (- (IData)(
                                                              (3U 
                                                               == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)))));
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
    vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_wr = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_WE) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS))));
    vlSelfRef.tb_sndram__DOT__sdram__DOT__rq_rd = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_RD) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEM_CS));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0_Q = 
        (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q) 
          << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1_Q = 
        (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q) 
          << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_SAME 
        = ((0x0000000fU & (~ (IData)(vlSelfRef.tb_sndram__DOT__CIRL_N))) 
           == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV));
    vlSelfRef.tb_sndram__DOT__dram_clk = (1U & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cn)
                                                 ? (IData)(vlSelfRef.tb_sndram__DOT__clk_ram)
                                                 : 
                                                (~ (IData)(vlSelfRef.tb_sndram__DOT__clk_ram))));
    vlSelfRef.tb_sndram__DOT__dot_ce_r = ((IData)(vlSelfRef.tb_sndram__DOT__ce_ph) 
                                          & (3U == (IData)(vlSelfRef.tb_sndram__DOT__dot_div)));
    vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__ev = 
        ((0x07ffffffU & ((IData)(0x02b11000U) + vlSelfRef.tb_sndram__DOT__SCSP_CEGen__DOT__sum)) 
         >= vlSelfRef.tb_sndram__DOT__in_clk);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__EQA 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC) 
           == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_61 = (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                            >> 3U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_62 = (1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                            >> 2U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_64 = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL
                                                              [
                                                              (1U 
                                                               & (vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                                                                  >> 4U))])));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_84 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                            >> 5U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_TAS = 
        (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
           .__PVT__MA.__PVT__DI[0U] >> 8U) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)) 
         & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SW_A1 = (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST)
                                                      ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT)
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                      >> 4U)));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__intc__FRT_OCI_IRQ 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
               >> 2U)) | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB) 
                          & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TIER) 
                             >> 1U)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_REQ = 
        (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__BCSS_N) 
                  | ((IData)(vlSelfRef.tb_sndram__DOT__BADDT_N) 
                     | (IData)(vlSelfRef.tb_sndram__DOT__BREQ_N)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CLR0 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
              & ((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                 | (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCR 
        = ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR))
            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB)
            : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[0U] 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[1U] 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[2U] 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q;
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[3U] 
        = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q;
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
    vlSelfRef.tb_sndram__DOT__CWAIT_N = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_WAIT) 
                                                  | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_WAIT) 
                                                     | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) 
                                                        | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_RWAIT) 
                                                           | (IData)(vlSelfRef.tb_sndram__DOT__DCC__DOT__MEM_WAIT)))))));
    tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q = ((0U >= 
                                               (1U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT)))
                                               ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM
                                              [(1U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT))]
                                               : 0U);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_CE 
        = (1U & ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS))
                  ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS))
                      ? (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD))
                      : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK128_CE))
                  : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS))
                      ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK32_CE)
                      : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8_CE))));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE)
                                                    ? vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_BUF
                                                    : 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE)
                                                     ? vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF
                                                     : vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM
                                                    [vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR]));
    if ((0U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR5_RA 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR6_RA 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA = 0U;
    } else {
        if ((2U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                  >> 0x00000012U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR5_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR6_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
        }
        if ((2U == (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
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
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_A 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH) 
            << 1U) | (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SGN 
        = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MA 
            ^ vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MB) 
           >> 0x0000001fU);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
        = (vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF 
           & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ) 
           & (0U == (0xd8000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ = 
        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD) 
            & (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))));
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
    vlSelfRef.tb_sndram__DOT__dram_dq_i = (((IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__out3) 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__en3)) 
                                           | ((IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__out4) 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__en4)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WPW 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__PW));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__ERI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__ERI) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                                                      >> 6U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__RXI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__RXI) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                                                      >> 6U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__TXI_IRQ = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TXI) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                                                      >> 7U));
    tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP = ((0x0000007cU 
                                                 & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                                    >> 0x00000012U)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                                      >> 1U)));
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
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2 
            = (0x000001ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SWC9));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WA 
            = ((0x000001e0U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SWC9) 
                               << 5U)) | (0x0000001fU 
                                          & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                             >> 0x00000014U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WA 
            = (0x0000003fU & ((IData)(tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP) 
                              >> 1U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2 
            = (0x0000007fU & (IData)(tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP));
    } else {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WA 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WA 
            = (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2 
            = (0x000001ffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WA 
            = ((0x000001e0U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                               << 5U)) | (0x0000001fU 
                                          & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                             >> 4U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WA 
            = (0x0000003fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                              >> 1U));
    }
    __VdfgRegularize_hebeb780c_0_92 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ)) 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD));
    tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL = (0x003fffffU 
                                                & (((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                                                     << 0x0000000fU) 
                                                    | (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                                                       >> 0x00000011U)) 
                                                   + 
                                                   (0x0000003fU 
                                                    & ((4U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))
                                                        ? 
                                                       ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT) 
                                                        >> 8U)
                                                        : 
                                                       ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                                         << 0x00000019U) 
                                                        | (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                                           >> 7U))))));
    vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en 
        = (((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1) 
            | (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2)) 
           & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = (1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                                                            >> 1U)));
    tb_sndram__DOT__MSH__DOT__divu__DOT__AT38 = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                 & (0x26U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_86 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C) 
                                                 & (3U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE))) 
                          | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA) 
                             & (- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE) 
                                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE)))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__b_c3 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                                & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B)) 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_A) 
                                                      | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                                         | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C))))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX 
        = (7U & ((0x00000080U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)
                  ? ((IData)(5U) + (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                          >> 1U))) : 
                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                  >> 1U)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH 
        = (3U & ((- (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U])) 
                 | ((vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U]
                      ? 1U : 2U) & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U]))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_74 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_76 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = (3U 
                                                 & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                    [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                                    >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = (3U 
                                                 & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                    [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                                    >> 0x0000000eU));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_117 = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND) 
                                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND))));
    tb_sndram__DOT__SCSP__DOT__STACK_WE = ((~ vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7) 
                                           & (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_116 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
                                                  | (0U 
                                                     != vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RTN));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_91 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE 
        = ((1U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD)) 
           & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
              >> 0x00000016U));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS 
        = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                 [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                 >> 0x0000000aU));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__RST_N));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk5__DOT__temp 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
        .__PVT__MA.__PVT__WD;
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W = (0x0007ffffU 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                                                >> 0x00000021U))))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B 
        = ((2U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                  >> 3U)) | (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                   >> 2U)));
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
    tb_sndram__DOT__MSH__DOT__mult__DOT__ACC = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC) 
                                                | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX) 
           ^ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD));
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLA = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT)) 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH) 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                                                        >> 0x0000000aU))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__REG_SEL 
        = ((0xfffffe00U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
           & (0xfffffe05U >= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_SEL 
        = ((0xffffff40U <= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR) 
           & (0xffffff7cU >= vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL 
        = ((0x3fffff9cU == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 2U)) & VL_REDXOR_32(
                                                   (3U 
                                                    & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[0U] 
        = (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[1U] 
        = (0x0007ffffU & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q 
                                  >> 0x13U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[2U] 
        = (0x0007ffffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[3U] 
        = (0x0007ffffU & (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q 
                                  >> 0x13U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCH 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (6U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFH 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (0x18U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCL 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (6U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFL 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (0x18U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    __VdfgRegularize_hebeb780c_0_102 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opZD 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_RRDY) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCU_WRDY));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = (1U 
                                                 & ((~ 
                                                     (0U 
                                                      != 
                                                      (0x0007ffffU 
                                                       & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN 
                                                          >> 1U)))) 
                                                    & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B 
        = (IData)(((0xfffffee0U == (0xfffffff8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (~ (3U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                      >> 1U))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL = 
        ((~ (IData)(((0x00000030U == (0x00000030U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                     & (0U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                     >> 2U)))))) & 
         (0x03fffffeU == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                          >> 6U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((((QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IA)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__IDO))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS)))))));
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLB = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT)) 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH) 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q) 
                                                        >> 0x0000000aU))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS1 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
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
    vlSelfRef.tb_sndram__DOT__SCSP_CE = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP_2X_CE) 
                                         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP_DIV));
    __VdfgRegularize_hebeb780c_0_17 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL 
        = ((~ (0U != (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 6U)))) & (0x00ffffffU 
                                         == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                             >> 8U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE)
                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                  .__PVT__MA
                                                  .__PVT__ADDR
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS2 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_IRL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL) 
           > (0x0000000fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                             >> 4U)));
    tb_sndram__DOT__MSH__DOT__divu__DOT__opRL = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                                                 & (0x17U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    __VdfgRegularize_hebeb780c_0_104 = (1U & (~ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                  >> 3U) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                        >> 1U))))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS3 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY)) 
           & (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE)));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV));
    __VdfgRegularize_hebeb780c_0_103 = (0x0000007fU 
                                        & (((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                             ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q) 
                                                >> 7U)
                                             : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q)) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (Vtb_sndram__ConstPool__TABLE_h225c9f2c_0
                                                            [vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VB] 
                                                            >> 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED) 
                                                                >> 1U))))))));
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
    __Vtemp_4[1U] = (IData)((((QData)((IData)(((0x00000020U 
                                                & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                ? (0x10U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                      >> 3U))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                        >> 4U)))))))
                                                : (
                                                   (0x00000010U 
                                                    & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                    ? 
                                                   (0x0fU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                     >> 3U)))))
                                                    : 
                                                   (0x0000000fU 
                                                    & ((8U 
                                                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                        ? 
                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__IR 
                                                        >> 4U)
                                                        : 
                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__IR 
                                                        >> 8U))))))) 
                              << 0x00000028U) >> 0x00000020U));
    __Vtemp_5[0U] = ((IData)(((QData)((IData)(((4U 
                                                & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                ? (0x10U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                        >> 1U)))))))
                                                : (
                                                   (2U 
                                                    & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                    ? 
                                                   (0x0fU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U]))))
                                                    : 
                                                   (0x0000000fU 
                                                    & ((1U 
                                                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                        ? 
                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__IR 
                                                        >> 8U)
                                                        : 
                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                        .__PVT__EX
                                                        .__PVT__IR 
                                                        >> 4U))))))) 
                              << 0x00000021U)) | (IData)(
                                                         ((QData)((IData)(
                                                                          ((0x00000020U 
                                                                            & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                                            ? 
                                                                           (0x10U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                                >> 3U))))) 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                                >> 4U)))))))
                                                                            : 
                                                                           ((0x00000010U 
                                                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                                             ? 
                                                                            (0x0fU 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                                >> 3U)))))
                                                                             : 
                                                                            (0x0000000fU 
                                                                             & ((8U 
                                                                                & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                                                 ? 
                                                                                (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                                                .__PVT__EX
                                                                                .__PVT__IR 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                                                .__PVT__EX
                                                                                .__PVT__IR 
                                                                                >> 8U))))))) 
                                                          << 0x00000028U)));
    __Vtemp_6[1U] = (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U] 
                       << 0x0000001aU) | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U] 
                                          >> 6U)) | 
                     ((IData)((((QData)((IData)(((4U 
                                                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                  ? 
                                                 (0x10U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                                                       >> 1U)))))))
                                                  : 
                                                 ((2U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                   ? 
                                                  (0x0fU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U]))))
                                                   : 
                                                  (0x0000000fU 
                                                   & ((1U 
                                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U])
                                                       ? 
                                                      (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__IR 
                                                       >> 8U)
                                                       : 
                                                      (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                       .__PVT__EX
                                                       .__PVT__IR 
                                                       >> 4U))))))) 
                                << 0x00000021U) >> 0x00000020U)) 
                      | __Vtemp_4[1U]));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
        = (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[1U] 
             << 0x0000001aU) | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[0U] 
                                >> 6U)) | __Vtemp_5[0U]);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U] 
        = (0x0000ffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q[2U] 
                          >> 6U));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_Q = (
                                                   (0x00ffff00U 
                                                    & (tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & (tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q 
                                                         >> 0x00000010U)));
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
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5_Q 
        = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR5_RA)))
            ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM
           [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR5_RA))]
            : 0U);
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6_Q 
        = ((0U >= (1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR6_RA)))
            ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM
           [(1U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR6_RA))]
            : 0U);
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD)
                           ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)
                           : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA)));
    vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap = 
        ((4U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))
          ? (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cap_n)
          : (IData)(vlSelfRef.tb_sndram__DOT__dram_dq_i));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__WR_DONE 
        = ((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 4U)) & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE) 
                                       & (IData)(__VdfgRegularize_hebeb780c_0_92)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__RD_DONE 
        = ((0x0fffffe8U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                            >> 4U)) & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE)) 
                                       & (IData)(__VdfgRegularize_hebeb780c_0_92)));
    tb_sndram__DOT__SCSP__DOT__SO_MOD = (0x0001ffffU 
                                         & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[0U] 
                                            & (((0x00010000U 
                                                 & (tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL 
                                                    >> 5U)) 
                                                | (0x0000ffffU 
                                                   & (tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL 
                                                      >> 6U))) 
                                               + (0x0000ffffU 
                                                  & (((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[1U] 
                                                         >> 7U)) 
                                                     + 
                                                     (1U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                                                       >> 2U))))))))));
    vlSelfRef.tb_sndram__DOT__dq = (((IData)(vlSelfRef.tb_sndram__DOT__o_d) 
                                     & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__oe_d)))) 
                                    | ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))) 
                                       & ((((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out1) 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1)) 
                                           | ((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out2) 
                                              & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2))) 
                                          & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_94 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
                                                 & (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__AT38));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_93 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF) 
                                                 & (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__AT38));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR 
        = (((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRWAY) 
            << 8U) | (0x000000ffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag23__wren 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) 
                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_WE) 
                    >> 2U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__wren 
        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_WE) 
                 & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram3__wren 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE) 
              >> 3U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram2__wren 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE) 
              >> 2U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram1__wren 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE) 
              >> 1U));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram0__wren 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__OLDB 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q) 
           & (- (IData)((1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VB) 
                               >> (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_77 = (1U 
                                                 & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMD
                                                    [
                                                    ((- (IData)(
                                                                (2U 
                                                                 >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH)))) 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH))] 
                                                    >> 0x00000018U));
    if (tb_sndram__DOT__SCSP__DOT__STACK_WE) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                              >> 1U));
    } else {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_D));
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_DO = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                                                     ? vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q
                                                     : vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA))
                                                      ? 
                                                     ((vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                       << 0x00000010U) 
                                                      | (0x0000ffffU 
                                                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO))
                                                      : 
                                                     ((0xffff0000U 
                                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO) 
                                                      | (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                         >> 0x10U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA))
                                                       ? 
                                                      ((vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                        << 0x00000018U) 
                                                       | ((0x00ff0000U 
                                                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                              << 0x00000010U)) 
                                                          | ((0x0000ff00U 
                                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                                 << 8U)) 
                                                             | (0x000000ffU 
                                                                & vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO))))
                                                       : 
                                                      ((0xff000000U 
                                                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                           << 0x00000010U)) 
                                                       | ((0x00ff0000U 
                                                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                              << 8U)) 
                                                          | ((0x0000ff00U 
                                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO) 
                                                             | (0x000000ffU 
                                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                                   >> 8U))))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA))
                                                       ? 
                                                      ((0xff000000U 
                                                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                           << 8U)) 
                                                       | ((0x00ff0000U 
                                                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO) 
                                                          | ((0x0000ff00U 
                                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                                 >> 8U)) 
                                                             | (0x000000ffU 
                                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                                   >> 0x10U)))))
                                                       : 
                                                      ((0xff000000U 
                                                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO) 
                                                       | ((0x00ff0000U 
                                                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                              >> 8U)) 
                                                          | ((0x0000ff00U 
                                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                                 >> 0x00000010U)) 
                                                             | (vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO 
                                                                >> 0x18U))))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IVECF_RISE 
        = (1U & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CRD_N_OLD) 
                     | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                    >> 1U)));
    tb_sndram__DOT__SCU__DOT__CBUS_READ_DONE = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30) 
                                                & ((5U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                                        >> 2U)) 
                                                      & vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_FULL
                                                      [
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR) 
                                                          >> 2U))])));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_WE 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
            & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE) 
               | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE) 
                  | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE) 
                     | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ) 
                        | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE) 
                           & (IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLA))))))) 
           | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT) 
                 | ((0U != (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                                           >> 0x0000000aU))) 
                    & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH) 
                       != (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                                          >> 0x0000000aU)))))));
    tb_sndram__DOT__MSH__DOT__cache__DOT__VA = (0x0000000fU 
                                                & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                                                    >> 6U) 
                                                   & (- (IData)((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLA)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_SEL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
              | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__VBUS_REQ))));
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) {
        vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__sz 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS;
        vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr 
            = (3U & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q);
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__Vstatic__res 
            = ((0U == (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__sz))
                ? ((((IData)((0U == (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr))) 
                     << 3U) | ((IData)((1U == (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr))) 
                               << 2U)) | (((IData)(
                                                   (2U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr))) 
                                           << 1U) | (IData)(
                                                            (3U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr)))))
                : ((1U == (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__sz))
                    ? ((((2U & ((~ ((IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr) 
                                    >> 1U)) << 1U)) 
                         | (1U & (~ ((IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr) 
                                     >> 1U)))) << 2U) 
                       | ((2U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr)) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr) 
                                   >> 1U)))) : 0x0fU));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT____VlemCall_0__BAFromAddr 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__Vstatic__res;
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT____VlemCall_0__BAFromAddr = 0U;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__DBUS_BA = vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT____VlemCall_0__BAFromAddr;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_BUSY 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE) 
              | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS) 
                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_91))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_96 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCH) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFH));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_95 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SXD) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSUM 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCL) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WS3 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opZD) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND) 
                 | (0x17U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY = 
        ((~ (IData)(vlSelfRef.tb_sndram__DOT__BCSS_N)) 
         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_67 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_68 = (IData)(
                                                        ((0U 
                                                          != 
                                                          (6U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))) 
                                                         | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0 
        = (IData)(((0U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE2 
        = (IData)(((2U == (0x0000000eU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_RD 
        = ((IData)(tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__DMAC_ACT = 
        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL) 
         | (IData)(tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q) 
                          & (- (IData)((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLB)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q 
        = (0x0000000fU & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q) 
                           >> 6U) & (- (IData)((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLB)))));
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
    __VdfgRegularize_hebeb780c_0_113 = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CLK_DIV) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP_CE));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR 
        = ((IData)(tb_sndram__DOT__MSH__DOT__dmac__DOT__REG2_SEL) 
           & (IData)(__VdfgRegularize_hebeb780c_0_17));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL) 
           & (IData)(__VdfgRegularize_hebeb780c_0_17));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IO_AREA 
        = ((0xfffffe92U != vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A) 
           & (7U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                     >> 0x0000001dU)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_AREA 
        = ((6U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                   >> 0x0000001dU)) | (4U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                              >> 0x0000001dU)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG 
        = (((((0x0007ffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                              >> 0x0000000aU)) == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[3U]) 
             << 3U) | (((0x0007ffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                        >> 0x0000000aU)) 
                        == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[2U]) 
                       << 2U)) | (((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[1U] 
                                    == (0x0007ffffU 
                                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                           >> 0x0000000aU))) 
                                   << 1U) | ((0x0007ffffU 
                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                                 >> 0x0000000aU)) 
                                             == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[0U])));
    tb_sndram__DOT__MSH__DOT__intc__DOT__M1 = (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_IRL)
                                                   ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL)
                                                   : 
                                                  (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                   >> 4U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL 
        = ((IData)(__VdfgRegularize_hebeb780c_0_104) 
           & (0x0fffffe1U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                              >> 4U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A 
        = (IData)(((0xfffffe60U == (0xfffffff0U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
                   & (IData)(__VdfgRegularize_hebeb780c_0_104)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS3)
                                                        ? 
                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L 
                                                        >> 0x0000001eU)
                                                        : 
                                                       ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH)
                                                         ? 
                                                        (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L 
                                                         >> 0x0000001dU)
                                                         : 
                                                        (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L 
                                                         >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_100 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS2) 
                                                  | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS3));
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
    tb_sndram__DOT__MSH__DOT__divu__DOT__opRS = ((7U 
                                                  <= (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                                                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0)) 
                                                    & (0x16U 
                                                       >= (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ra = ((0x20U 
                                                 == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_wa = ((0x23U 
                                                 == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_STB = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_83 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_READ_ACK 
        = ((((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT) 
                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_116))) 
            | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)) 
               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86))) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    tb_sndram__DOT__SCU__DOT__dm_idle = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                                         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_117) 
             & ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                & ((7U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
                   & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                       >> 2U) | (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                  >= (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WTN)) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70)))))) 
            | ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
               & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C)) 
                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_C) 
                     & ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                        & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                            >> 2U) | ((0U != (3U & vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA)) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70)))))))) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_IND_DONE 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
           & ((4U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF) 
                 & ((vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_A 
                     == vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IA) 
                    & (2U >= (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND_REG))))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu_i = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ) 
            & (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                                      >> 2U)) 
                                                    & (5U 
                                                       == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))));
    tb_sndram__DOT__SCU__DOT__b_idle = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA 
        = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                  .__PVT__MA.__PVT__DI[1U] >> 6U) & 
                 (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_107 = (1U 
                                                  & ((~ 
                                                      (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                       >> 0x0000000eU)) 
                                                     & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                        >> 0x00000014U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT 
        = ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
               >> 0x0000000eU)) & ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                 >> 0x0000000cU))) 
                                   | (2U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                   >> 0x0000000cU)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0 
        = (1U & ((4U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                         >> 0x0000001dU)) ? (~ VL_REDXOR_32(
                                                            (3U 
                                                             & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                                >> 8U))))
                  : (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                     >> 0x00000019U)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP = (0x000fffffU 
                                                & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP_SA 
                                                   + 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__ADP_PCM8B)
                                                     ? 
                                                    ((0x000e0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (tb_sndram__DOT__SCSP__DOT__SO_MOD 
                                                                        >> 0x00000010U)))) 
                                                         << 0x00000011U)) 
                                                     | tb_sndram__DOT__SCSP__DOT__SO_MOD)
                                                     : 
                                                    ((0x000c0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (tb_sndram__DOT__SCSP__DOT__SO_MOD 
                                                                        >> 0x00000010U)))) 
                                                         << 0x00000012U)) 
                                                     | (tb_sndram__DOT__SCSP__DOT__SO_MOD 
                                                        << 1U)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_GC 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_93) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR)));
    if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_A_RDADDR 
            = (0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR 
                              >> 2U));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH 
            = (3U & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND_CH));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_A_RDADDR 
            = (0x0000003fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR));
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH 
            = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_A) 
                     >> 3U));
    }
    if ((3U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH))) {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DRSEL = 
            (vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DR 
             << 2U);
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL = vlSelfRef.tb_sndram__DOT__SCU__DOT__DSP_DW;
    } else {
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DRSEL = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM
            [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH];
        vlSelfRef.tb_sndram__DOT__SCU__DOT__DWSEL = vlSelfRef.tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM
            [vlSelfRef.tb_sndram__DOT__SCU__DOT__DREG_CH];
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD = 
        ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30) 
         & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP) 
            & ((IData)(tb_sndram__DOT__SCU__DOT__CBUS_READ_DONE) 
               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RD = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30) 
                                                   & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                                      & ((4U 
                                                          > (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                                                         & (((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)) 
                                                             & (IData)(tb_sndram__DOT__SCU__DOT__CBUS_READ_DONE)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74)))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opLS 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF_DEC) 
           & ((4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
              | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                 & (5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))));
    __VdfgRegularize_hebeb780c_0_105 = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_BUSY))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_l = (((6U 
                                                 == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY))) 
                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_d1 = (((0x0fU 
                                                  == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                 | ((9U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY))) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_d0 = (((0x11U 
                                                  == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                 | ((0x0aU 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY))) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_ACK 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)) 
              & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) 
                  & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                         >> 2U)) & ((~ (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WORD) 
                                         >> 1U) | (
                                                   (~ 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_116))) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_POS)))))) 
                                    & (0x22U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))))) 
                 | ((~ (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE))) 
                    & (0x21U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_87 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66) 
                                                 & ((0x27U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__W_SIZE_OK2 
        = (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68)));
    if ((3U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                >> 0x0000001dU))) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk1__DOT__CACHE_ADDR_AREA_DATA 
            = ((0x00000080U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR))
                ? ((0x00000040U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR))
                    ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[3U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | (4U & 
                                              ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q) 
                                               >> 1U))))
                    : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[2U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | (4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q)))))
                : ((0x00000040U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR))
                    ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[1U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | (4U & 
                                              ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q) 
                                               << 1U))))
                    : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[0U] 
                        << 0x0000000aU) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA) 
                                            << 4U) 
                                           | (4U & 
                                              ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q) 
                                               << 2U))))));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA 
            = ((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_BA))
                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk1__DOT__CACHE_ADDR_AREA_DATA
                : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk1__DOT__CACHE_ADDR_AREA_DATA 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk1__DOT__CACHE_ADDR_AREA_DATA)));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA 
            = ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q) 
                 << 0x00000018U) | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q) 
                                    << 0x00000010U)) 
               | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q) 
                   << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q)));
    }
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
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_113));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
           & (IData)(__VdfgRegularize_hebeb780c_0_113));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START32 
        = ((4U == (0x0000001fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__START64 
        = ((0x14U == (0x0000001fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR));
    tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW = ((IData)(__VdfgRegularize_hebeb780c_0_102) 
                                                 & ((0x3fU 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DIVU 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP) 
                 > (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M1))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS1) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_100));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_101 = ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRL) 
                                                  | (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRS));
    tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE) 
            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ)) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT) 
              & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE) 
                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_i3 = (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U] 
                                                 & (IData)(tb_sndram__DOT__SCU__DOT__dm_idle));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_79 = ((IData)(tb_sndram__DOT__SCU__DOT__dm_idle) 
                                                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U])) 
                                                    & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U] 
                                                       | (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U] 
                                                          | vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[2U]))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ind = ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST))
                                                    ? (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_IND_DONE))) 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_WUP = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                                                   & (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE) 
                                                       | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_IND_DONE)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu = ((
                                                   (1U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)) 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN)) 
                                                  | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu_i));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_ACK 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_h = ((((1U 
                                                  == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                 | ((5U 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN)) 
                                               | ((IData)(tb_sndram__DOT__SCU__DOT__b_idle) 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ) 
                                                     & (IData)(
                                                               (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                                [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                                >> 0x0000003dU)))));
    __VdfgRegularize_hebeb780c_0_85 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ)) 
                                       & (IData)(tb_sndram__DOT__SCU__DOT__b_idle));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_B_EXEX 
        = (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
           & ((((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                >> 1U)) == (0x0000001fU 
                                            & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                               .__PVT__MA
                                               .__PVT__DI[1U] 
                                               >> 8U))) 
               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA)) 
              | (((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                  >> 1U)) == (0x0000001fU 
                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                 .__PVT__MA
                                                 .__PVT__DI[1U] 
                                                 >> 1U))) 
                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WB))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_A_EXEX 
        = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
            >> 7U) & ((((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                        >> 8U)) == 
                        (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                        .__PVT__MA.__PVT__DI[1U] 
                                        >> 8U))) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA)) 
                      | (((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                          >> 8U)) == 
                          (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                          .__PVT__MA
                                          .__PVT__DI[1U] 
                                          >> 1U))) 
                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WB))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_C_EXEX 
        = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
            >> 0x0000001eU) & (((0U == (0x0000001fU 
                                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                           .__PVT__MA
                                           .__PVT__DI[1U] 
                                           >> 8U))) 
                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA)) 
                               | ((0U == (0x0000001fU 
                                          & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                             .__PVT__MA
                                             .__PVT__DI[1U] 
                                             >> 1U))) 
                                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WB))));
    tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA = (1U 
                                                  & ((~ 
                                                      (((~ 
                                                         (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                          >> 0x00000013U)) 
                                                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                           >> 0x0000000fU)) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107))) 
                                                     & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                        >> 6U)));
    __VdfgRegularize_hebeb780c_0_118 = (1U & (~ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                  >> 6U) 
                                                 | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL) 
                                                    | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_ANY = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD) 
         | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RD));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSHF 
        = ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRS) 
           | ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRL) 
              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opLS)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TCR_EVW 
        = ((IData)(__VdfgRegularize_hebeb780c_0_105) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD)
               ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                   [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                   >> 3U) & ((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                 [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH] 
                                 >> 8U)) & (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT))))
               : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__EV 
        = ((IData)(__VdfgRegularize_hebeb780c_0_105) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS));
    tb_sndram__DOT__SCU__DOT__f_wr = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_87));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66) 
              & ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                 & ((8U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST)) 
                    & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__W_SIZE_OK2)))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_87) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE) 
                & ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                   & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67)) 
                      & ((0xffU != (0x000000ffU & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                                   >> 1U))) 
                         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68)))))) 
            | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_RDY) 
               & ((0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE)) 
                  & ((0x26U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                     & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__W_SIZE_OK2))))) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
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
    tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6 
        = ((IData)(vlSelfRef.tb_sndram__DOT__RST_N) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT0_CE = (IData)(
                                                            ((2U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                    & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) 
                       & (- (IData)((0x1eU == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                  >> 5U)))))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MEMS_WE = 
        (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                          >> 0x00000013U)))) 
                        | ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                             << 2U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE)) 
                           & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) 
                              & ((0x0000000cU & ((- (IData)((IData)(
                                                                    (0x0700U 
                                                                     == 
                                                                     (0x07c1U 
                                                                      & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))))) 
                                                 << 2U)) 
                                 | (3U & (- (IData)((IData)(
                                                            (0x0701U 
                                                             == 
                                                             (0x07c1U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))))))))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__EFREG_WE = 
        (3U & ((- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                 >> 0x00000013U)))) 
               | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x76U == (0x0000007fU 
                                             & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                >> 4U)))))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__COEF_WE = 
        (3U & ((- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                 >> 0x00000013U)))) 
               | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x0eU == (0x0000001fU 
                                             & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                >> 6U)))))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | ((((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                               << 2U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE)) 
                             & (((0x0000000cU & ((- (IData)((IData)(
                                                                    (0x0600U 
                                                                     == 
                                                                     (0x0701U 
                                                                      & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))))) 
                                                 << 2U)) 
                                 | (3U & (- (IData)((IData)(
                                                            (0x0601U 
                                                             == 
                                                             (0x0701U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))))))) 
                                & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber4 
        = (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                  & (- (IData)((IData)(((0x0400U == 
                                         (0x0600U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)))))) 
                 | (- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                     >> 0x00000013U))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber4 
        = (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x18U == (0x0000003fU 
                                             & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                >> 5U))))))) 
                 | ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE))) 
                    & (- (IData)(((~ (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_WGEN)) 
                                  & (IData)(tb_sndram__DOT__SCSP__DOT__STACK_WE)))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK1____pinNumber4 
        = (3U & (((- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_WGEN) 
                              & (IData)(tb_sndram__DOT__SCSP__DOT__STACK_WE)))) 
                  & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE0_CE)))) 
                 | ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                    & ((- (IData)((0x19U == (0x0000003fU 
                                             & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A) 
                                                >> 5U))))) 
                       & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE = (IData)(
                                                            ((6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)));
    __VdfgRegularize_hebeb780c_0_38 = (IData)(((0U 
                                                == 
                                                (0x0600U 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) 
                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB 
        = ((~ (IData)((0U != (0x00000028U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HBUS 
        = (((4U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                          >> 2U))) | (1U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                   >> 2U)))) 
           & (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LBUS 
        = (((1U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                          >> 2U))) | (5U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                   >> 2U)))) 
           & (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW));
    tb_sndram__DOT__MSH__DOT__divu__DOT__WB0 = (((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW) 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND))) 
                                                & (0U 
                                                   == 
                                                   (0x0000001cU 
                                                    & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)));
    tb_sndram__DOT__MSH__DOT__divu__DOT__WB3 = (((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW) 
                                                 & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND))) 
                                                & (0x0000001cU 
                                                   == 
                                                   (0x0000001cU 
                                                    & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)));
    tb_sndram__DOT__MSH__DOT__divu__DOT__WB1 = ((((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW) 
                                                  & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND))) 
                                                 & (0x0000000cU 
                                                    == 
                                                    (0x0000001cU 
                                                     & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))) 
                                                & (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA))));
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_AREA) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_2__WayToAddr 
            = (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                     >> 0x0aU));
    } else if ((3U == (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                       >> 0x0000001dU))) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_2__WayToAddr 
            = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                     >> 6U));
    } else {
        vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__21__way 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__Vstatic__res 
            = ((1U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__21__way))
                ? 0U : ((2U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__21__way))
                         ? 1U : ((4U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__21__way))
                                  ? 2U : ((8U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__21__way))
                                           ? 3U : 0U))));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_2__WayToAddr 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__Vstatic__res;
    }
    tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY 
        = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_2__WayToAddr;
    tb_sndram__DOT__MSH__DOT__intc__DOT__M2 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DIVU)
                                                ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP)
                                                : (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M1));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_WRITE 
        = ((1U == (0x0000000fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__WR));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_READ 
        = ((1U == (0x0000000fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__RD));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ 
        = ((9U == (0x0000000fU & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__RD));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (0x000000ffU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB))
                                                     ? 
                                                    (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                                      >> 8U) 
                                                     & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0)
                                                          ? 1U
                                                          : 0x7fU) 
                                                        | (- (IData)(
                                                                     ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE2) 
                                                                      | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R60))))))
                                                     : 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__OLDB) 
                                                     >> 8U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = (0x000000ffU 
                                                 & ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WB))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WD) 
                                                     & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE0)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RE2)
                                                           ? 0xf0U
                                                           : 0x7fU)) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R68) 
                                                                          | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__R60))))))))
                                                     : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__OLDB)));
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
    vlSelfRef.tb_sndram__DOT__MSHDI = (Vtb_sndram__ConstPool__TABLE_h7a94dd37_0
                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_10]
                                        ? ((Vtb_sndram__ConstPool__TABLE_hdc2324bb_0
                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_10] 
                                            | (0U != 
                                               (0x0000001fU 
                                                & (IData)(
                                                          (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                           >> 0x00000034U)))))
                                            ? (((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_SEL)
                                                 ? vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_BUF
                                                 : 
                                                ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_SEL)
                                                  ? vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))
                                                   ? 
                                                  (vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_DO 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_SEL) 
                                                                     & ((0x80U 
                                                                         <= 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                                                >> 0x00000020U)))) 
                                                                        & (0x8fU 
                                                                           >= 
                                                                           (0x000000ffU 
                                                                            & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                                                >> 0x00000020U)))))))))))
                                                   : (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IVEC_DO)))) 
                                               | (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33) 
                                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)))))))
                                            : (0x0000ffffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                              >> 0x00000021U)))
                                                   ? vlSelfRef.tb_sndram__DOT__rom
                                                  [
                                                  (0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                              >> 0x00000022U)))]
                                                   : 
                                                  (vlSelfRef.tb_sndram__DOT__rom
                                                   [
                                                   (0x000003ffU 
                                                    & (IData)(
                                                              (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                               >> 0x00000022U)))] 
                                                   >> 0x00000010U))))
                                        : vlSelfRef.tb_sndram__DOT__wramh
                                       [(0x0000ffffU 
                                         & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                    >> 0x00000022U)))]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_99 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_101));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT) 
           | (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL) 
           | (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__BUS_STALL));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ich = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79));
    if (vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_cpu) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_82 = 
            (1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_80 = 
            (1U & (IData)((vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                           [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                           >> 0x0000003fU)));
    } else if (vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_82 = 
            (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                   >> 0x0000001aU));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_80 = 
            (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_RA 
                   >> 0x00000018U));
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_82 = 
            (1U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                   >> 0x0000001aU));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_80 = 
            (1U & (0U != (3U & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WA 
                                >> 0x00000018U))));
    }
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_rack = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_ACK) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_READ_ACK) 
                                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_ACK)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ind = ((IData)(__VdfgRegularize_hebeb780c_0_85) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76));
    tb_sndram__DOT__SCU__DOT__b_nreq = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76)) 
                                        & (IData)(__VdfgRegularize_hebeb780c_0_85));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL 
        = ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                         >> 0x0000001aU))) ? (0x000003f3U 
                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR)
            : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                             >> 0x0000001aU))) ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__GBR
                : ((2U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                 >> 0x0000001aU))) ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__VBR
                    : 0U)));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B 
        = ((0x00000020U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
           .__PVT__MA.__PVT__RES : (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_B_EXEX)) 
                                     & (((((0x0000001fU 
                                            & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                               >> 1U)) 
                                           == (0x0000001fU 
                                               & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                  .__PVT__MA
                                                  .__PVT__DI[1U] 
                                                  >> 8U))) 
                                          & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U]) 
                                         & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                            .__PVT__MA
                                            .__PVT__DI[1U] 
                                            >> 6U)) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD)))
                                     ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE
                                     : (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_B_EXEX)) 
                                         & (((((0x0000001fU 
                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                   >> 1U)) 
                                               == (0x0000001fU 
                                                   & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                      .__PVT__WB
                                                      .__PVT__DI[1U] 
                                                      >> 8U))) 
                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U]) 
                                             & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                .__PVT__WB
                                                .__PVT__DI[1U] 
                                                >> 6U)) 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LD)))
                                         ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                        .__PVT__WB.__PVT__RD
                                         : ((0x00000020U 
                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                             ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR
                                             : ((0U 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                     >> 1U)))
                                                 ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0
                                                 : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B 
        = ((0x00001000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
            ? ((0x00000800U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                ? 0U : ((0x00000400U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                         ? 0U : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID
                        .__PVT__PC)) : ((0x00000800U 
                                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                         ? ((0x00000400U 
                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                             ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                            .__PVT__EX
                                            .__PVT__PC
                                             : ((0xfffffffcU 
                                                 & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC) 
                                                | (3U 
                                                   & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PC 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U] 
                                                                        >> 8U)))))))))
                                         : ((0x00000400U 
                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                             ? tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__SCR_VAL
                                             : tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_B)));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A 
        = (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_A_EXEX)) 
            & (((((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                  >> 8U)) == (0x0000001fU 
                                              & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                 .__PVT__MA
                                                 .__PVT__DI[1U] 
                                                 >> 8U))) 
                 & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                    >> 7U)) & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                               .__PVT__MA.__PVT__DI[1U] 
                               >> 6U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD)))
            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE
            : ((1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U] 
                       >> 6U) | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_A_EXEX)) 
                                 & (((((0x0000001fU 
                                        & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                           >> 8U)) 
                                       == (0x0000001fU 
                                           & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                              .__PVT__WB
                                              .__PVT__DI[1U] 
                                              >> 8U))) 
                                      & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                         >> 7U)) & 
                                     (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                      .__PVT__WB.__PVT__DI[1U] 
                                      >> 6U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LD)))))
                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
               .__PVT__WB.__PVT__RD : ((0x00000080U 
                                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                        ? (1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ)))
                                        : ((0x00001000U 
                                            & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR
                                            : ((0U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                    >> 8U)))
                                                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0
                                                : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A 
        = tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_A;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm 
        = (0x00000fffU & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
           .__PVT__EX.__PVT__IR);
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP)
            ? 0U : (0x000000ffU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH)
                                    ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                        ? ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                                    ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8)
                                                    : 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD)
                                                     ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF)
                                                     : 
                                                    (0x00000040U 
                                                     | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                                    ? 0x0cU
                                                    : 0x0bU))
                                            : ((2U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED))
                                                    ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1)
                                                    : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0))
                                                : (IData)(__VdfgRegularize_hebeb780c_0_103)))
                                        : (IData)(__VdfgRegularize_hebeb780c_0_103))
                                    : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP)
                                        ? (4U | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILSI) 
                                                 << 1U))
                                        : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                       .__PVT__EX.__PVT__IR))));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp 
        = ((0x00000010U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
            ? ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                    ? 0U : (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__vec))
                : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                    ? 1U : 0U)) : ((8U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                    ? ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm) 
                                                           >> 0x0bU)))) 
                                            << 0x0000000cU) 
                                           | (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm))
                                        : (0x000000ffU 
                                           & (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm)))
                                    : ((4U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm)))
                                        : (0x0000000fU 
                                           & (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__ir_imm)))));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL 
        = ((0x00004000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
            ? (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp 
               << 1U) : ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                       >> 0x00000010U)))
                          ? tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp
                          : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                           >> 0x00000010U)))
                              ? (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp 
                                 << 1U) : (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__temp 
                                           << 2U))));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C 
        = (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_C_EXEX)) 
            & ((((0U == (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                        .__PVT__MA.__PVT__DI[1U] 
                                        >> 8U))) & 
                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                  >> 0x0000001eU)) & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                      .__PVT__MA.__PVT__DI[1U] 
                                      >> 6U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD)))
            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE
            : (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BP_C_EXEX)) 
                & ((((0U == (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                            .__PVT__WB
                                            .__PVT__DI[1U] 
                                            >> 8U))) 
                     & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                        >> 0x0000001eU)) & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                            .__PVT__WB
                                            .__PVT__DI[1U] 
                                            >> 6U)) 
                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LD)))
                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
               .__PVT__WB.__PVT__RD : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0));
    if ((0x00000200U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])) {
        if ((0x00000200U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])) {
            vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_C 
                = tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__IMM_VAL;
        }
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_C 
            = tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk3__DOT__BP_C;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_EXP 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_118) 
              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_w0 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE)) 
                                                & (IData)(tb_sndram__DOT__SCU__DOT__f_wr));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_w3 = (((0x28U 
                                                  == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN)) 
                                                | ((IData)(tb_sndram__DOT__SCU__DOT__f_wr) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_dack = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK) 
                                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_4____pinNumber6 
        = (IData)(((4U == (6U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                   & (IData)(tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_2____pinNumber6 
        = (IData)(((0U == (6U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM))) 
                   & (IData)(tb_sndram__DOT__SCSP__DOT____Vcellinp__COEF_DRAM____pinNumber6)));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SAMPLE_CE 
        = ((0x1fU == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__MIR_WE = (3U 
                                                   & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                                       & (- (IData)(
                                                                    ((0x0cU 
                                                                      > 
                                                                      (0x0000000fU 
                                                                       & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) 
                                                                     & (IData)(__VdfgRegularize_hebeb780c_0_38))))) 
                                                      | (- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                                                       >> 0x00000013U))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL = 
        (0x00000fffU & ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_38))) 
                        & ((IData)(1U) << (0x0000000fU 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_ADDR 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB)
            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B)
            : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_A));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_EN 
        = ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD)
              ? ((3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS)) 
                 | VL_REDXOR_2(vlSelfRef.__VdfgRegularize_hebeb780c_0_53))
              : VL_REDXOR_2(vlSelfRef.__VdfgRegularize_hebeb780c_0_54)) 
            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__EV)) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__ASUM_S 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB)) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD)
               ? ((~ (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__TS))) 
                  & (2U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53)))
               : (2U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_SEL 
        = (3U & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSUM)
                   ? 1U : (2U | (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSHF))))))) 
                 & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LBUS)))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WA 
        = ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__WB1)
            ? 1U : (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WPW)
                           ? (1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                    >> 2U)) : ((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__WB0))))) 
                                               & (2U 
                                                  | (- (IData)(
                                                               ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__WB3) 
                                                                | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WS3)))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_98 = ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__WB0) 
                                                 | ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__WB1) 
                                                    | ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__WB3) 
                                                       | (((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW) 
                                                           & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SND))) 
                                                          & (0x00000018U 
                                                             == 
                                                             (0x0000001cU 
                                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR 
        = (((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY) 
            << 8U) | (0x000000ffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                     >> 2U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DMAC 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP) 
            > (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M2)) 
           & ((3U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[1U] 
                            >> 1U))) | (3U == (3U & 
                                               (vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[0U] 
                                                >> 1U)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RWR 
        = ((IData)(__VdfgRegularize_hebeb780c_0_102) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR));
    tb_sndram__DOT__MSH__DOT__CACHE_DO = ((0xfffffe92U 
                                           == vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A)
                                           ? ((0xdf000000U 
                                               & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                                                  << 0x00000018U)) 
                                              | ((0x00df0000U 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                                                     << 0x00000010U)) 
                                                 | ((0x0000df00U 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR) 
                                                        << 8U)) 
                                                    | (0xdfU 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CCR)))))
                                           : ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY)
                                               ? vlSelfRef.tb_sndram__DOT__MSH__DOT__IBUS_DI
                                               : vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IDI = (vlSelfRef.tb_sndram__DOT__MSHDI 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_97 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opZD) 
                                                 | (((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD)) 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest)) 
                                                    | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TF) 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__RAD 
        = (3U & ((0x3fU != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))
                  ? ((- (IData)((1U & (~ ((0x3fU != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))
                                           ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opZD) 
                                              | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest)))
                                           : (0U == 
                                              (7U & 
                                               (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                                >> 2U)))))))) 
                     & (2U | (- (IData)(((0x3fU != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))
                                          ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSUM)
                                          : (7U == 
                                             (7U & 
                                              (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                               >> 2U))))))))
                  : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IF_STALL 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL) 
           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__INT_ACP = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ) 
                                                   & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH)) 
                                                      & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)) 
                                                         & (IData)(__VdfgRegularize_hebeb780c_0_118))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_81 = ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82))) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80)
                                                     ? 2U
                                                     : 1U));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_dr = ((IData)(tb_sndram__DOT__SCU__DOT__b_nreq) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__b_c3));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_dw = ((IData)(tb_sndram__DOT__SCU__DOT__b_nreq) 
                                                & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WRITE_B) 
                                                   & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
                                                      & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__b_c3)) 
                                                         & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_B)) 
                                                            & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_A) 
                                                               | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBRLS)) 
                                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_READ_C))))))));
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B = ((1U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_C
                                                   : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B);
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A = ((2U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_C
                                                   : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP) 
            | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_EXP))
            ? 0U : (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT) 
                     & (~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                           >> 0x0000000bU))) ? 9U : 
                    ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL)
                      ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                     .__PVT__EX.__PVT__IR : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                     .__PVT__ID.__PVT__IR)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CHW_DW_W = 
        ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_dack) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
              & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72)) 
                    & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD)))))) 
          | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_WUP)) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE9 = 
        (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                & (- (IData)((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                    >> 9U))))) | (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST)))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE8 = 
        (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                & (- (IData)((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                    >> 8U))))) | (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST)))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE5 = 
        (3U & (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                & (- (IData)((1U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                    >> 5U))))) | (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                                                >> 0x00000015U))))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                                                  >> 4U)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_WE) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WSEL) 
                                                                  >> 6U)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_DATA 
        = (IData)((0x00000000ffffffffULL & (((1ULL 
                                              | ((QData)((IData)(
                                                                 ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB)
                                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA
                                                                   : vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q))) 
                                                 << 1U)) 
                                             + (((QData)((IData)(
                                                                 (((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__ASUM_S))) 
                                                                   << 3U) 
                                                                  | (7U 
                                                                     & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__ASUM_S))) 
                                                                        ^ 
                                                                        (((0x00000800U 
                                                                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                                           [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH])
                                                                           ? 4U
                                                                           : 
                                                                          ((0x00000400U 
                                                                            & vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR
                                                                            [vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH])
                                                                            ? 2U
                                                                            : 1U)) 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB))))))))))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__ASUM_S)))) 
                                            >> 1U)));
    tb_sndram__DOT__MSH__DOT__intc__DOT__M3 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_DMAC)
                                                ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP)
                                                : (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M2));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI = ((IData)(
                                                           ((8U 
                                                             == 
                                                             (0x0cU 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))))
                                                    ? tb_sndram__DOT__MSH__DOT__CACHE_DO
                                                    : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WDATA);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC 
        = ((0xffff0000U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q 
                           & ((- (IData)((Vtb_sndram__ConstPool__TABLE_hd6bce6fb_0
                                          [((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vV) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vH2) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vL2) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vD))) 
                                             << 3U) 
                                            | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__RAD) 
                                                << 1U) 
                                               | (0x3fU 
                                                  != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))))] 
                                          & (1U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__RAD))))) 
                              << 0x00000010U))) | (0x0000ffffU 
                                                   & (vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q 
                                                      & (- (IData)(Vtb_sndram__ConstPool__TABLE_hd6bce6fb_0
                                                                   [
                                                                   ((((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vV) 
                                                                        << 3U) 
                                                                       | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vH2) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vL2) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__vD))) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__RAD) 
                                                                        << 1U) 
                                                                       | (0x3fU 
                                                                          != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))))])))));
    if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR 
            = (0x0000001fU & ((IData)(tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA)
                               ? ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                     >> 8U)) : ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                 << 0x0000001fU) 
                                                | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                   >> 1U))));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_E 
            = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)) 
               & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) 
                  & (((~ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                           >> 6U) & ((0x0000001fU & 
                                      (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                       >> 1U)) == (0x0000001fU 
                                                   & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                      >> 8U))))) 
                      & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                         >> 0x0000001fU)) | (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA))));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR 
            = (0x0000001fU & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                               .__PVT__WB.__PVT__DI[1U] 
                               << 0x00000018U) | (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                                  .__PVT__WB
                                                  .__PVT__DI[1U] 
                                                  >> 8U)));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_E 
            = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
               & ((~ (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA) 
                       & ((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                          .__PVT__MA
                                          .__PVT__DI[1U] 
                                          >> 8U)) == 
                          (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                          .__PVT__WB
                                          .__PVT__DI[1U] 
                                          >> 8U)))) 
                      | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WB) 
                         & ((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                            .__PVT__MA
                                            .__PVT__DI[1U] 
                                            >> 1U)) 
                            == (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                               .__PVT__WB
                                               .__PVT__DI[1U] 
                                               >> 8U)))))) 
                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP)));
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__RAM_WE 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_E) 
           & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR) 
                  >> 4U)) & (0U != (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
              & (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_DI = (
                                                   ((0U 
                                                     != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL)) 
                                                    & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE)) 
                                                       & (0x0cU 
                                                          == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))
                                                    ? vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DO
                                                    : tb_sndram__DOT__MSH__DOT__CACHE_DO);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI = 
        (((0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL)) 
          & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE)) 
             & (0x0eU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))
          ? vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DO
          : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WDATA);
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__LB 
        = (((0x00000100U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
             ? 0x00000080U : tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B) 
           ^ (- (IData)((1U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                               >> 0x00000019U)))));
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SCO 
        = (1U & ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                  ? tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A
                  : (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                     >> 0x0000001fU)));
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM 
        = (0x00000001ffffffffULL & ((QData)((IData)(
                                                    ((4U 
                                                      == 
                                                      (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                       >> 0x0000001dU))
                                                      ? 
                                                     ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                                       << 1U) 
                                                      | (1U 
                                                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR))
                                                      : tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A))) 
                                    + ((QData)((IData)(
                                                       (1U 
                                                        & (((4U 
                                                             != 
                                                             (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                              >> 0x0000001dU)) 
                                                            & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                               >> 0x0000001aU))
                                                            ? 
                                                           (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                            ^ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0))
                                                            : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0))))) 
                                       + (QData)((IData)(
                                                         (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                                          ^ 
                                                          (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0)))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = ((0x00000010U 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                 ? 0x2eU
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                  ? 0x2eU
                                                  : 0x2fU));
    if ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = 0x2eU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = 0x2eU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_48 = 
            ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
              ? 0x2eU : 0x37U);
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = 
            ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
              ? 0x2fU : 0x2eU);
        vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = 
            ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
              ? 0x69U : 0x2eU);
        vlSelfRef.__VdfgRegularize_hebeb780c_0_48 = 0x37U;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = ((0x00000400U 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                  ? 0x2eU
                                                  : 
                                                 ((0x00000200U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 0x2eU
                                                   : 0x5dU));
    if ((0x00000800U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = 0x2eU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = 0x2eU;
    } else if ((0x00000400U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = 0x2eU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = 0x2eU;
    } else if ((0x00000200U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = 0x2eU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = 0x2eU;
    } else if ((0x00000100U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = 0x2eU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = 0x2eU;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = 0x6cU;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = 
            ((0x00000020U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
              ? 0x2eU : ((0x00000010U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                          ? ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                              ? 0x2fU : 0x2eU) : 0x2eU));
    }
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE4 = 
        (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
               | (- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                   >> 0x00000015U))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE6 = 
        (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40) 
               | (- (IData)((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                           >> 0x0000001cU)))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_WDT 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP) 
              > (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M3)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DW15 
        = (1U & ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A)
                  ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                     >> 0x0000000fU) : (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                                        >> 0x0000001fU)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
        = (0x00000001ffffffffULL & (((QData)((IData)(
                                                     (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_100) 
                                                       | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_101)))
                                                       ? vlSelfRef.__VdfgRegularize_hebeb780c_0_59
                                                       : vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H))) 
                                     & (- (QData)((IData)(
                                                          ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_99) 
                                                           | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest)))))) 
                                    + ((QData)((IData)(
                                                       ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_97) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_95) 
                                                           | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX) 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCL)) 
                                                              | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX) 
                                                                  & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opFH)) 
                                                                 | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CC) 
                                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCH)))))))) 
                                       + ((QData)((IData)(
                                                          ((- (IData)(
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_97) 
                                                                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_95) 
                                                                          | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SX) 
                                                                             & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opCL) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_96))))))) 
                                                           ^ vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC))) 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH))))))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR 
        = ((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS 
        = (((4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
            | (8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO));
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask 
        = (3U & (0x0bU >> (6U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                 .__PVT__MA.__PVT__DI[1U] 
                                 >> 0x0000000fU))));
    __Vfunc_ByteShiftRigth__26__s = ((~ vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                                      .__PVT__MA.__PVT__ADDR) 
                                     & (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask));
    __Vfunc_ByteShiftRigth__26__val = vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_DI;
    TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1 
        = ((2U & (IData)(__Vfunc_ByteShiftRigth__26__s))
            ? (__Vfunc_ByteShiftRigth__26__val >> 0x00000010U)
            : __Vfunc_ByteShiftRigth__26__val);
    TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp0 
        = ((1U & (IData)(__Vfunc_ByteShiftRigth__26__s))
            ? (TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1 
               >> 8U) : TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1);
    __Vfunc_ByteShiftRigth__26__Vfuncout = TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp0;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp 
        = __Vfunc_ByteShiftRigth__26__Vfuncout;
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_RDATA 
        = ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                         .__PVT__MA.__PVT__DI[1U] >> 0x00000010U)))
            ? (((- (IData)((1U & (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp 
                                  >> 7U)))) << 8U) 
               | (0x000000ffU & tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp))
            : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
                             .__PVT__MA.__PVT__DI[1U] 
                             >> 0x00000010U))) ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp 
                                                                  >> 0x0fU)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp))
                : tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE)
            ? vlSelfRef.tb_sndram__DOT__MSH__DOT__IBUS_DI
            : vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI);
    if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_5 
            = (0x0000003fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q));
    } else if (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_5 
            = (0x0000003fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CACHE_DI 
                              >> 4U));
    } else {
        vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                              & (- (IData)((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLA)))));
        vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__way 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__Vstatic__res 
            = ((8U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__way))
                ? (0x0000000bU | (0x00000034U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru)))
                : ((4U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__way))
                    ? (0x00000014U | ((((4U & ((IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru) 
                                               >> 3U)) 
                                        | (1U & ((IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru) 
                                                 >> 3U))) 
                                       << 3U) | (2U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru))))
                    : ((2U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__way))
                        ? (0x00000020U | (0x00000019U 
                                          & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru)))
                        : ((1U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__way))
                            ? (7U & (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru))
                            : (IData)(vlSelfRef.__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru)))));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_4__LRUSelect 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__Vstatic__res;
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_5 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCall_4__LRUSelect;
    }
    tb_sndram__DOT__MSH__DOT__cache__DOT__LRUN = vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____VlemCond_5;
    __VdfgRegularize_hebeb780c_0_46 = (1U & ((0x08000000U 
                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                              ? ((0x04000000U 
                                                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                                  ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR
                                                  : (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SCO))
                                              : ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                                  >> 0x0000001fU) 
                                                 & (0x06000000U 
                                                    == 
                                                    (0x06000000U 
                                                     & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])))));
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__CO 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0) 
           ^ (tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM 
              >> 0x00000020U));
    tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__GE 
        = (1U & ((~ ((IData)((tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM 
                              >> 0x0000001fU)) | ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                                   | tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B) 
                                                  >> 0x0000001fU))) 
                 | ((((~ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                          >> 0x00000016U)) ^ (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                              >> 0x0000001fU)) 
                     & ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                         >> 0x0000001fU) ^ (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                            >> 0x00000016U))) 
                    | ((~ (IData)((tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM 
                                   >> 0x0000001fU))) 
                       & ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                           & tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B) 
                          >> 0x0000001fU)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__M4 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_WDT)
            ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP)
            : (IData)(tb_sndram__DOT__MSH__DOT__intc__DOT__M3));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT 
        = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD) 
                    ^ (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                               >> 0x0000001fU)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HSUM 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_99) 
           | (((IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                        >> 0x00000020U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest)) 
              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_96)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__WRH 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC) 
              | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC) 
                  & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SAT)) 
                     | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW))) 
                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL) 
                     >> 1U) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS)))));
    if ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
            = ((0x40000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                ? tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B
                : ((0x20000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                    ? tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B
                    : (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM)));
        tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR 
            = (1U & (IData)(((0U == (0x60000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])) 
                             & (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__CO))));
    } else if ((0x40000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
            = ((0x20000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                ? ((0x10000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                    ? ((0x08000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                        ? ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                            ? (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                               >> 0x00000010U) : (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                                  << 0x00000010U))
                        : ((0x04000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                            ? ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                ? (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                   >> 8U) : (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                             << 8U))
                            : ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                ? (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                   >> 2U) : (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                             << 2U))))
                    : ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                        ? (((IData)(__VdfgRegularize_hebeb780c_0_46) 
                            << 0x0000001fU) | (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                               >> 1U))
                        : ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                            << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_46))))
                : ((0x08000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                    ? ((((0x04000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                          ? ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                              ? ((0x00ffff00U & ((- (IData)(
                                                            (1U 
                                                             & (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                                                >> 0x0000000fU)))) 
                                                 << 8U)) 
                                 | (0x000000ffU & (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                                   >> 8U)))
                              : (- (IData)((1U & (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                                  >> 7U)))))
                          : (0x000000ffU & ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                             >> 8U) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                             >> 0x00000019U))))))) 
                        << 8U) | (0x000000ffU & tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B))
                    : ((0x04000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                        ? ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                            << 0x00000010U) | (0x0000ffffU 
                                               & ((0x02000000U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                                   ? tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A
                                                   : 
                                                  (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                                   >> 0x00000010U))))
                        : ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                            ? ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                << 0x00000010U) | (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                                   >> 0x00000010U))
                            : ((0xffff0000U & tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B) 
                               | ((0x0000ff00U & (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B 
                                      >> 8U))))))));
        tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR 
            = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                      >> 0x0000001dU) & (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SCO)));
    } else if ((0x20000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
            = ((0x08000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                ? (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                   | tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__LB)
                : ((0x04000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                    ? (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                       ^ tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__LB)
                    : (tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                       & tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__LB)));
        tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR 
            = (1U & ((0x10000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                      ? (~ ((0U != (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
                                    >> 0x00000018U)) 
                            & ((0U != (0x000000ffU 
                                       & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
                                          >> 0x00000010U))) 
                               & ((0U != (0x000000ffU 
                                          & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
                                             >> 8U))) 
                                  & (0U != (0x000000ffU 
                                            & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R))))))
                      : (~ (0U != vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R))));
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R 
            = (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM);
        tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR 
            = (1U & ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                   >> 0x0000001bU)))
                      ? ((0U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                       >> 0x00000017U)))
                          ? (~ (0U != vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R))
                          : ((1U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                           >> 0x00000017U)))
                              ? (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__GE)
                              : (((IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__GE) 
                                  & (0x01800000U == 
                                     (0x01800000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U]))) 
                                 & (0U != vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R))))
                      : ((2U == (3U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                       >> 0x0000001bU)))
                          ? (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__CO)
                          : (IData)(((0x18000000U == 
                                      (0x18000000U 
                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])) 
                                     & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0) 
                                            ^ ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                                ^ tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B) 
                                               >> 0x0000001fU))) 
                                        & ((tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A 
                                            >> 0x0000001fU) 
                                           ^ (IData)(
                                                     (tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__SUM 
                                                      >> 0x0000001fU)))))))));
    }
    if (vlSelfRef.tb_sndram__DOT__MCLK_DIV) {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_D 
            = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH) 
                << 0x0000000aU) | ((0x000003c0U & (
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE)
                                                     ? 
                                                    ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY)) 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                                                        >> 6U))
                                                     : 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE)
                                                      ? 
                                                     (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ADDRWAY) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR)))) 
                                                      | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ADDRWAY)) 
                                                         & (IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__VA)))
                                                      : 
                                                     ((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__VA) 
                                                      | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY) 
                                                         & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE))))))) 
                                                   << 6U)) 
                                   | (IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__LRUN)));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D 
            = ((0x00004000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B
                : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R);
    } else {
        vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LV_D 
            = (0x000003ffU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q));
        vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D 
            = vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__PIPE
            .__PVT__WB.__PVT__RD;
    }
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__W_SCI 
        = (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP) 
            > (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__M4)) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__ERI_IRQ) 
              | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RXI_IRQ) 
                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__TEI) 
                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__sci__DOT__SCR) 
                        >> 2U)) | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__TXI_IRQ)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H_SEL 
        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HBUS)
                  ? (1U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 2U))) : (2U | 
                                              (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HSUM))))))));
    __VdfgRegularize_hebeb780c_0_106 = (1U & ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A 
                                               >> 0x0000001fU) 
                                              ^ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                  >> 9U) 
                                                 ^ (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR_NEW 
        = ((0x02000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
            ? ((0x00000300U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR) 
               | ((0x000000f0U & (((0x01000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                                    ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                       >> 4U) : ((0x00800000U 
                                                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                                                  ? 
                                                 (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                  >> 4U)
                                                  : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH))) 
                                  << 4U)) | (3U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR)))
            : ((0x01000000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                ? ((0x00800000U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                    ? (0x000000f2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR)
                    : ((((2U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B 
                                >> 0x0000001eU)) | 
                         (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A 
                          >> 0x0000001fU)) << 8U) | 
                       ((0x000000f2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR) 
                        | ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B 
                            ^ vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A) 
                           >> 0x0000001fU)))) : ((0x00800000U 
                                                  & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])
                                                  ? 
                                                 ((0x00000200U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR) 
                                                  | ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                      >> 0x0000001fU)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                                       ? 
                                                      (0x01f3U 
                                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR)
                                                       : 
                                                      ((0x20000000U 
                                                        & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                                        ? 
                                                       ((0x000001f2U 
                                                         & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR) 
                                                        | (1U 
                                                           & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R))
                                                        : 
                                                       (((IData)(__VdfgRegularize_hebeb780c_0_106) 
                                                         << 8U) 
                                                        | ((0x000000f2U 
                                                            & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR) 
                                                           | (1U 
                                                              & (~ 
                                                                 ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR 
                                                                   >> 9U) 
                                                                  ^ (IData)(__VdfgRegularize_hebeb780c_0_106))))))))
                                                      : 
                                                     ((0x000001f2U 
                                                       & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR) 
                                                      | (1U 
                                                         & ((0x40000000U 
                                                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                                             ? 
                                                            ((0x20000000U 
                                                              & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])
                                                              ? (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR)
                                                              : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR)
                                                             : (IData)(tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__TR))))))
                                                  : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BR_T 
        = (1U & ((IData)((0x10000000U == (0x1c000000U 
                                          & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U])))
                  ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR_NEW
                  : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__SR));
    __VExpandSel_Lsb_2 = ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP)
                             ? 1U : (3U & (2U | (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH)))))))) 
                           << 9U) | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE) 
                                      << 6U) | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILSI) 
                                                << 5U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CLS 
        = (0x000000ffU & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP) 
                           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH) 
                              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP)))
                           ? (((0U == (0x0000001fU 
                                       & __VExpandSel_Lsb_2))
                                ? 0U : (Vtb_sndram__ConstPool__CONST_hc4d6a76a_0
                                        [(((IData)(7U) 
                                           + __VExpandSel_Lsb_2) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & __VExpandSel_Lsb_2)))) 
                              | (Vtb_sndram__ConstPool__CONST_hc4d6a76a_0
                                 [(__VExpandSel_Lsb_2 
                                   >> 5U)] >> (0x0000001fU 
                                               & __VExpandSel_Lsb_2)))
                           : ((0x00004000U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                               ? ((0x00008000U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                   ? ((0x00002000U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                       ? ((0x00001000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                           : 0x5eU)
                                       : ((0x00001000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? 0xbbU : 
                                          ((0x00000800U 
                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                            ? ((0x00000400U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                    ? 0x30U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 0x30U
                                                      : 
                                                     ((0x00000200U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 
                                                      ((0x00000100U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x97U
                                                        : 0x96U)
                                                       : 
                                                      ((0x00000100U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x95U
                                                        : 0x94U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 0x53U
                                                      : 0x9cU)))
                                                : (
                                                   (0x00000200U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x62U
                                                     : 0x61U)
                                                    : 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x60U
                                                     : 0x5fU)))
                                            : ((0x00000400U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                ? (
                                                   (0x00000200U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0xbcU
                                                     : 0xa2U)
                                                    : 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0xa0U
                                                     : 0x9eU))
                                                : (
                                                   (0x00000200U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 0x34U
                                                         : 0x3dU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 0x90U
                                                         : 0x34U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 0xa3U
                                                         : 0xbfU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 0xa4U
                                                         : 0x34U))))
                                                     : 0xa1U)
                                                    : 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x9fU
                                                     : 0x9dU))))))
                                   : ((0x00002000U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                       ? ((0x00001000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? 0x5cU : 
                                          ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x18U
                                                     : 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x16U
                                                     : 0x15U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x71U
                                                     : 0x72U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x11U
                                                     : 0x10U)))
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x73U
                                                     : 0x86U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x80U
                                                     : 0x7eU))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x6dU
                                                     : 0x70U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x6fU
                                                     : 0x6eU)))))
                                       : ((0x00001000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? 0x5bU : 
                                          ((8U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 0x2fU
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 0x2fU
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? 0x7fU
                                                        : 0x74U)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 
                                                     ((0x00000080U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 0x2eU
                                                       : 
                                                      ((0x00000040U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x2eU
                                                        : 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 
                                                        ((0x00000020U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0x2eU
                                                          : 0x3aU)
                                                         : 
                                                        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                          ? 0x2eU
                                                          : 0x2fU))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 
                                                      ((0x00000080U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x2eU
                                                        : 
                                                       ((0x00000040U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x2eU
                                                         : 
                                                        ((0x00000010U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 0x2eU
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                            ? 0x98U
                                                            : 0x55U))
                                                          : 
                                                         ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                           ? 0x2eU
                                                           : 0x2fU))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? 
                                                       ((0x00000080U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x2eU
                                                         : 
                                                        ((0x00000040U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0x2eU
                                                          : 
                                                         ((0x00000010U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((0x00000020U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x2eU
                                                            : 0x54U)
                                                           : 
                                                          ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                            ? 0x2eU
                                                            : 0x3fU))))
                                                        : 
                                                       ((0x00000080U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x33U
                                                         : 
                                                        ((0x00000040U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0x33U
                                                          : 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                            ? 0x33U
                                                            : 
                                                           ((0x00000010U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x33U
                                                             : 0xb9U))
                                                           : 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x65U
                                                            : 
                                                           ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                             ? 0x33U
                                                             : 0xbaU)))))))))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                     : 
                                                    ((0x00000040U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x44U
                                                         : 0x63U))
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x43U
                                                         : 0x28U)
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x42U
                                                         : 0x2cU))))))
                                                : (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                    : 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                     : 
                                                    ((0x00000020U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                      ? 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x26U
                                                         : 0x25U)))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x24U
                                                         : 0x23U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x22U
                                                         : 0x21U)))))))
                                            : ((0x00000080U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                : (
                                                   (0x00000040U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_48)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_48)
                                                          : 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x2eU
                                                            : 0x8eU)
                                                           : 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x8dU
                                                            : 0x8bU)))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x2eU
                                                            : 0x38U)
                                                           : 0x38U)
                                                          : 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x33U
                                                            : 0x82U)
                                                           : 0x82U))))
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                         : 0x87U)
                                                        : 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x83U
                                                         : 0x85U)))
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24)
                                                          : 
                                                         ((0x00000020U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 0x33U
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x69U
                                                            : 0x33U)))))
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x20U
                                                         : 0x1fU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x1eU
                                                         : 0x1dU))))
                                                     : 
                                                    ((0x00000020U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                      ? 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? 0x36U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                           ? 0x36U
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                            ? 0x36U
                                                            : 0xa8U)))
                                                         : 0x7bU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x1cU
                                                         : 0x1bU)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 0x36U
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? 0x36U
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                           ? 0x36U
                                                           : 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0xa7U
                                                            : 0xa6U))))
                                                        : 
                                                       ((0x00000010U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x78U
                                                         : 0x79U))
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x68U
                                                         : 0x7cU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x1aU
                                                         : 0x19U)))))))))))
                               : ((0x00002000U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                   ? ((0x00008000U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                       ? ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                           : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                               ? 0x2fU
                                               : ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                   ? 0x2fU
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                    ? 0x3fU
                                                    : 
                                                   ((0x00001000U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0xb8U
                                                     : 0xb7U)))))
                                       : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? ((0x00001000U 
                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 9U
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 6U
                                                     : 5U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                     ? 0x2fU
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 0x2fU
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x4aU
                                                        : 0x49U)
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x2bU
                                                        : 0x2aU))))
                                                    : 
                                                   (0x27U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                                      >> 3U))))))))
                                               : ((8U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x14U
                                                     : 0x13U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x12U
                                                     : 0x0fU))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x46U
                                                     : 0x7aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x77U
                                                     : 0x76U))))
                                           : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                               ? ((0x00001000U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x0aU
                                                     : 4U)
                                                    : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x0eU
                                                     : 0x0cU)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                     : 0x66U)))
                                               : ((0x00001000U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 8U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 3U
                                                     : 2U))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x0dU
                                                     : 0x0bU)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x67U
                                                     : 0x64U))))))
                                   : ((0x00001000U 
                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                       ? ((0x00008000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? 0xb6U : 0x56U)
                                       : ((0x00008000U 
                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                           ? ((0x00000800U 
                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                               ? ((0x00000100U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                     ? 0x2dU
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 0x2dU
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 
                                                      ((0x00000400U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x3cU
                                                        : 0x3bU)
                                                       : 
                                                      (((1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                             >> 9U))) 
                                                        == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__BR_T))
                                                        ? 
                                                       ((0x00000400U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 
                                                        ((0x00000200U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0xb4U
                                                          : 0xb5U)
                                                         : 
                                                        ((0x00000200U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0xb2U
                                                          : 0xb3U))
                                                        : 
                                                       ((0x00000400U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 
                                                        ((0x00000200U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0xb0U
                                                          : 0xb1U)
                                                         : 
                                                        ((0x00000200U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 0xaeU
                                                          : 0xafU)))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)
                                                      : 
                                                     ((0x00000400U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 0x33U
                                                       : 
                                                      ((0x00000200U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x33U
                                                        : 0x5dU))))))
                                               : ((0x00000200U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                   : 
                                                  ((0x00000400U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x5aU
                                                     : 0x58U)
                                                    : 
                                                   ((0x00000100U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x59U
                                                     : 0x57U))))
                                           : ((4U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                     ? 0x2fU
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                      ? 0x2fU
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x84U
                                                        : 0x48U)
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 0x75U
                                                        : 0x29U))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x52U
                                                     : 0x4fU))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x51U
                                                     : 0x50U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 0x4eU
                                                     : 0x4dU)))
                                               : ((0x00000080U 
                                                   & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                   : 
                                                  ((0x00000040U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50)
                                                        : 
                                                       ((0x00000800U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                         : 
                                                        ((0x00000400U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                          : 
                                                         ((0x00000200U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                           : 
                                                          ((0x00000100U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                            : 
                                                           ((0x00000010U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12)
                                                             : 
                                                            ((0x00000020U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 
                                                             ((8U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? 0x31U
                                                               : 0x2fU)
                                                              : 0x2fU)))))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                        ? 
                                                       ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                         ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? 
                                                         ((0x00000800U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                           : 
                                                          ((0x00000400U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                            : 
                                                           ((0x00000200U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                             : 
                                                            ((0x00000100U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                              : 
                                                             ((0x00000010U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12)
                                                               : 
                                                              ((0x00000020U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 
                                                               ((8U 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                 ? 0x8cU
                                                                 : 0x2fU)
                                                                : 0x2fU))))))
                                                          : 
                                                         ((0x00000800U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                           : 
                                                          ((0x00000400U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                            : 
                                                           ((0x00000200U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                             : 
                                                            ((0x00000100U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)
                                                              : 
                                                             ((0x00000010U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12)
                                                               : 
                                                              ((0x00000020U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 
                                                               ((8U 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                 ? 0x92U
                                                                 : 0x2fU)
                                                                : 0x2fU))))))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                         ? 
                                                        ((0x00000010U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 
                                                         ((0x00000800U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 0x2eU
                                                           : 
                                                          ((0x00000400U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x2eU
                                                            : 
                                                           ((0x00000200U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x2eU
                                                             : 
                                                            ((0x00000100U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 0x2eU
                                                              : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12)))))
                                                          : 
                                                         ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                           ? 0x2eU
                                                           : 
                                                          ((8U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 
                                                           ((0x00000800U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x2eU
                                                             : 
                                                            ((0x00000400U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 0x2eU
                                                              : 
                                                             ((0x00000200U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? 0x2eU
                                                               : 
                                                              ((0x00000100U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 0x2eU
                                                                : 
                                                               ((0x00000020U 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                 ? 0x88U
                                                                 : 0x3fU)))))
                                                            : 0x3fU)))
                                                         : 
                                                        ((0x00000020U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? 
                                                         ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                           ? 0x33U
                                                           : 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x33U
                                                            : 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 
                                                            ((0x00000800U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 0x33U
                                                              : 
                                                             ((0x00000400U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? 0x33U
                                                               : 
                                                              ((0x00000200U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 0x33U
                                                                : 
                                                               ((0x00000100U 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                 ? 0x33U
                                                                 : 0x81U))))
                                                             : 0xacU)))
                                                          : 
                                                         ((0x00000010U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((0x00000800U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 0x33U
                                                            : 
                                                           ((0x00000400U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x33U
                                                             : 
                                                            ((0x00000200U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 0x33U
                                                              : 
                                                             ((0x00000100U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? 0x33U
                                                               : 
                                                              ((8U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 0x39U
                                                                : 0x33U)))))
                                                           : 
                                                          ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)
                                                            ? 0x33U
                                                            : 
                                                           ((8U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 
                                                            ((0x00000800U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 0x33U
                                                              : 
                                                             ((0x00000400U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? 0x33U
                                                               : 
                                                              ((0x00000200U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 0x33U
                                                                : 
                                                               ((0x00000100U 
                                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                 ? 0x33U
                                                                 : 0x45U))))
                                                             : 0xadU)))))))
                                                      : 
                                                     ((0x00000020U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x47U
                                                         : 0x9bU))
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x4bU
                                                         : 0x9aU)
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0x4cU
                                                         : 0x99U))))
                                                     : 
                                                    ((0x00000020U 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                      ? 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? 0xa9U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                           ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE))
                                                            ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)
                                                            : 
                                                           ((0x00000800U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x33U
                                                             : 
                                                            ((0x00000400U 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                              ? 0x33U
                                                              : 
                                                             ((0x00000200U 
                                                               & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                               ? 0x33U
                                                               : 
                                                              ((0x00000100U 
                                                                & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                                ? 0x33U
                                                                : 0x6cU))))))))
                                                        : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                                      : 
                                                     ((0x00000800U 
                                                       & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                       : 
                                                      ((0x00000400U 
                                                        & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                        ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                        : 
                                                       ((0x00000200U 
                                                         & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                         ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                         : 
                                                        ((0x00000100U 
                                                          & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                          ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                           ? 
                                                          ((0x00000010U 
                                                            & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x40U
                                                             : 0x7dU)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR))
                                                             ? 0x2dU
                                                             : 0x6aU))
                                                           : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))))))))))))));
    __VExpandSel_WordIdx_3 = (0x07fffffcU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CLS) 
                                             << 2U));
    __VdfgRegularize_hebeb780c_0_4[0U] = Vtb_sndram__ConstPool__CONST_h65aed1fe_0
        [__VExpandSel_WordIdx_3];
    __VdfgRegularize_hebeb780c_0_4[1U] = Vtb_sndram__ConstPool__CONST_h65aed1fe_0
        [((IData)(1U) + __VExpandSel_WordIdx_3)];
    __VdfgRegularize_hebeb780c_0_4[2U] = Vtb_sndram__ConstPool__CONST_h65aed1fe_0
        [((IData)(2U) + __VExpandSel_WordIdx_3)];
    __VdfgRegularize_hebeb780c_0_4[3U] = (0x0000ffffU 
                                          & Vtb_sndram__ConstPool__CONST_h65aed1fe_0
                                          [((IData)(3U) 
                                            + __VExpandSel_WordIdx_3)]);
    __Vtemp_13[0U] = ((IData)(((QData)((IData)(((0x00000020U 
                                                 & __VdfgRegularize_hebeb780c_0_4[0U])
                                                 ? 
                                                (0x10U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                    >> 3U))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                      >> 4U)))))))
                                                 : 
                                                ((0x00000010U 
                                                  & __VdfgRegularize_hebeb780c_0_4[0U])
                                                  ? 
                                                 (0x0fU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                   >> 3U)))))
                                                  : 
                                                 (0x0000000fU 
                                                  & ((8U 
                                                      & __VdfgRegularize_hebeb780c_0_4[0U])
                                                      ? 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                      >> 8U)
                                                      : 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                      >> 4U))))))) 
                               << 0x00000021U)) | (IData)(
                                                          ((QData)((IData)(
                                                                           ((4U 
                                                                             & __VdfgRegularize_hebeb780c_0_4[0U])
                                                                             ? 
                                                                            (0x10U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ __VdfgRegularize_hebeb780c_0_4[0U])))) 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                                >> 1U)))))))
                                                                             : 
                                                                            ((2U 
                                                                              & __VdfgRegularize_hebeb780c_0_4[0U])
                                                                              ? 
                                                                             (0x0fU 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & __VdfgRegularize_hebeb780c_0_4[0U]))))
                                                                              : 
                                                                             (0x0000000fU 
                                                                              & ((1U 
                                                                                & __VdfgRegularize_hebeb780c_0_4[0U])
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                                                >> 8U))))))) 
                                                           << 0x00000028U)));
    __Vtemp_13[1U] = ((IData)((((QData)((IData)(((0x00000020U 
                                                  & __VdfgRegularize_hebeb780c_0_4[0U])
                                                  ? 
                                                 (0x10U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                     >> 3U))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                       >> 4U)))))))
                                                  : 
                                                 ((0x00000010U 
                                                   & __VdfgRegularize_hebeb780c_0_4[0U])
                                                   ? 
                                                  (0x0fU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                    >> 3U)))))
                                                   : 
                                                  (0x0000000fU 
                                                   & ((8U 
                                                       & __VdfgRegularize_hebeb780c_0_4[0U])
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                       >> 8U)
                                                       : 
                                                      ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                       >> 4U))))))) 
                                << 0x00000021U) >> 0x00000020U)) 
                      | (IData)((((QData)((IData)((
                                                   (4U 
                                                    & __VdfgRegularize_hebeb780c_0_4[0U])
                                                    ? 
                                                   (0x10U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (~ __VdfgRegularize_hebeb780c_0_4[0U])))) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (__VdfgRegularize_hebeb780c_0_4[0U] 
                                                                         >> 1U)))))))
                                                    : 
                                                   ((2U 
                                                     & __VdfgRegularize_hebeb780c_0_4[0U])
                                                     ? 
                                                    (0x0fU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & __VdfgRegularize_hebeb780c_0_4[0U]))))
                                                     : 
                                                    (0x0000000fU 
                                                     & ((1U 
                                                         & __VdfgRegularize_hebeb780c_0_4[0U])
                                                         ? 
                                                        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR) 
                                                         >> 8U))))))) 
                                  << 0x00000028U) >> 0x00000020U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
        = (__VdfgRegularize_hebeb780c_0_4[1U] | __Vtemp_13[0U]);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[1U] 
        = (__VdfgRegularize_hebeb780c_0_4[2U] | __Vtemp_13[1U]);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[2U] 
        = (0x0000ffffU & __VdfgRegularize_hebeb780c_0_4[3U]);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__NEXT_STATE 
        = (7U & (((IData)(1U) + (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE)) 
                 & (- (IData)(((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__STATE) 
                               != (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                         >> 2U)))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__LOAD_ISSUE 
        = ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
            >> 6U) & (((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                        >> 0x0000000fU) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_107)) 
                      & ((IData)(((0U == (0x00001f00U 
                                          & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U])) 
                                  & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[0U] 
                                     >> 0x0000001eU))) 
                         | ((((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                              >> 8U)) 
                              == (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[1U] 
                                                 >> 1U))) 
                             & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[1U]) 
                            | (((0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[1U] 
                                                >> 8U)) 
                                == (0x0000001fU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[1U] 
                                                   >> 8U))) 
                               & (vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[1U] 
                                  >> 7U))))));
}

bool Vtb_sndram___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sndram___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_sndram___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sndram___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_sndram.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_sndram.clk_ram)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_sndram.RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_sndram.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge 1'h0)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge tb_sndram.clk_ram)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @( tb_sndram.a_d)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @( tb_sndram.ba_d)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @( tb_sndram.cas_d)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @( tb_sndram.dqm_d)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @( tb_sndram.ras_d)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @( tb_sndram.we_d)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @(posedge tb_sndram.sdr_clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @( tb_sndram.dram_a)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @( tb_sndram.dram_ba)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 74 is active: @( tb_sndram.dram_dqm)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 75 is active: @( tb_sndram.dram_ras_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 76 is active: @( tb_sndram.dram_cas_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 77 is active: @( tb_sndram.dram_we_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 78 is active: @( tb_sndram.dram_dq_oe)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 79 is active: @( tb_sndram.dram_dq_o)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 80 is active: @( tb_sndram.dram_clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 81 is active: @( tb_sndram.dq)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 82 is active: @( tb_sndram.clk_run)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___dump_triggers__act_ext\n"); );
    // Locals
    VlUnpacked<QData/*63:0*/, 2> vec;
    IData/*31:0*/ i;
    VlUnpacked<QData/*63:0*/, 2> pre;
    IData/*31:0*/ j;
    // Body
    i = 0U;
    do {
        vec[i] = ext[i];
        i = ((IData)(1U) + i);
    } while ((2U > i));
    Vtb_sndram___024root___dump_triggers__act(vec, tag);
    j = 0U;
    do {
        pre[j] = ext[j];
        j = ((IData)(1U) + j);
    } while ((1U > j));
    do {
        pre[j] = 0ULL;
        j = ((IData)(1U) + j);
    } while ((2U > j));
    Vtb_sndram___024root___dump_triggers__act(pre, 
                                              VL_CONCATN_NNN(tag, " pre"s));
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sndram___024root___ctor_var_reset(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___ctor_var_reset\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_sndram__DOT__init_done = 0;
    vlSelf->tb_sndram__DOT__SCSP_2X_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP_CE = 0;
    vlSelf->tb_sndram__DOT__dot_ce_r = 0;
    vlSelf->tb_sndram__DOT__MSHDI = 0;
    vlSelf->tb_sndram__DOT__CIRL_N = 0;
    vlSelf->tb_sndram__DOT__CWAIT_N = 0;
    vlSelf->tb_sndram__DOT__BDI = 0;
    vlSelf->tb_sndram__DOT__BDO = 0;
    vlSelf->tb_sndram__DOT__SCSP_DO = 0;
    vlSelf->tb_sndram__DOT__BADDT_N = 0;
    vlSelf->tb_sndram__DOT__BDTEN_N = 0;
    vlSelf->tb_sndram__DOT__BREQ_N = 0;
    vlSelf->tb_sndram__DOT__BCSS_N = 0;
    vlSelf->tb_sndram__DOT__SCSP_RAM_Q = 0;
    vlSelf->tb_sndram__DOT__dram_a = 0;
    vlSelf->tb_sndram__DOT__dram_ba = 0;
    vlSelf->tb_sndram__DOT__dram_dqm = 0;
    vlSelf->tb_sndram__DOT__dram_dq_o = 0;
    vlSelf->tb_sndram__DOT__dram_dq_oe = 0;
    vlSelf->tb_sndram__DOT__dram_ras_n = 0;
    vlSelf->tb_sndram__DOT__dram_cas_n = 0;
    vlSelf->tb_sndram__DOT__dram_we_n = 0;
    vlSelf->tb_sndram__DOT__dram_clk = 0;
    vlSelf->tb_sndram__DOT__dram_dq_i = 0;
    vlSelf->tb_sndram__DOT__dbg_scrub_wrap = 0;
    vlSelf->tb_sndram__DOT__dbg_scsp_drop = 0;
    vlSelf->tb_sndram__DOT__dout_a0 = 0;
    vlSelf->tb_sndram__DOT__dout_a1 = 0;
    vlSelf->tb_sndram__DOT__dout_b0 = 0;
    vlSelf->tb_sndram__DOT__dout_b1 = 0;
    vlSelf->tb_sndram__DOT__a_d = 0;
    vlSelf->tb_sndram__DOT__ba_d = 0;
    vlSelf->tb_sndram__DOT__dqm_d = 0;
    vlSelf->tb_sndram__DOT__ras_d = 0;
    vlSelf->tb_sndram__DOT__cas_d = 0;
    vlSelf->tb_sndram__DOT__we_d = 0;
    vlSelf->tb_sndram__DOT__sdr_clk = 0;
    vlSelf->tb_sndram__DOT__oe_d = 0;
    vlSelf->tb_sndram__DOT__o_d = 0;
    vlSelf->tb_sndram__DOT__dq = 0;
    vlSelf->tb_sndram__DOT__m_err = 0;
    vlSelf->tb_sndram__DOT__m_act = 0;
    vlSelf->tb_sndram__DOT__m_rd = 0;
    vlSelf->tb_sndram__DOT__m_wr = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_sndram__DOT__rom[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb_sndram__DOT__wramh[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sndram__DOT__expv[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__ram_q_o = 0;
    vlSelf->tb_sndram__DOT__dq_in_r__strong__out3 = 0;
    vlSelf->tb_sndram__DOT__dq_in_r__strong__en3 = 0;
    vlSelf->tb_sndram__DOT__dq_in_r__strong__out4 = 0;
    vlSelf->tb_sndram__DOT__dq_in_r__strong__en4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCDTACK_N = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR0 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR1 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR3 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR5 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR7 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR8 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR9 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR10 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR11 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR12 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR13 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR14 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR15 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR16 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR17 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR18 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CR19 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP2 = 0;
    VL_ZERO_RESET_W(87, vlSelf->tb_sndram__DOT__SCSP__DOT__OP3);
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP5 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP7 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__NOISE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__ADP = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__WD_READ = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_WD = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MONITOR_CA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MONITOR_SGC = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MONITOR_EG = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_ST = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__REG_ST = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__IO_ST = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_A = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_RD = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_CS = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__REG_A = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__REG_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__REG_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__REG_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__REG_RD = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_MA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_RA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_LEN = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_DIR = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_DAT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_WR = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DMA_EXEC = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CLK_DIV = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CYCLE_NUM = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CYCLE0_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CYCLE1_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SLOT0_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SLOT1_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SAMPLE_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR0_RA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR2_RA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR5_RA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR6_RA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SLOT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__RST = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__KYONEX_RUN = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__KYONEX_PEND = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__KB_SWEEP = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP1_SCR5 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP1_SCR6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__KEY_RAM_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP2_SCR0 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP2_SCR2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__STACK_RGEN = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__STACK_RA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__CUR_W = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__K_W = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__COMP_X = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SO_RAM_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP3_SCR0 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__ADP_SA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__ADP_PCM8B = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__ADP0_CURR = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__ADP0_NEXT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_WD0 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_WD1 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_SCR2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_SCR5 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCNT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EFF_RATE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EFF_RATE_OVR = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EFF_RATE_BIT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__ENV_STEP = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__OP4_SCR6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_2____pinNumber6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__EVOL_RAM_4____pinNumber6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__STACK_WGEN = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__DSP_EXTS[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__MDEC_CT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SFT_REG = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DSP_READ = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DSP_WRITE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SHFT_OUT = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__TEMP_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__TMR_CE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__A = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__WE_N = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__DQM = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_REQ = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_RPEND = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_RRDY = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCU_WRDY = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCPU_RPEND = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCPU_WA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCPU_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCPU_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCPU_WPEND = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SW_A1 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SW_A2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SW_A4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SW_A6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SW_D = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WSEL = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR0_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR2_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR5_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR6_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WE0 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WE4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WE5 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WE6 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WE8 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_WE9 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__SCR_G2____pinNumber4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SWC9 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MIR_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MIR_WA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MIR_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__STACK0_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__STACK1_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK1____pinNumber4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber3 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__COEF_WA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__COEF_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__MADRS_DRAM____pinNumber2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__MPRO_MIR____pinNumber2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__TEMP_RAM_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber4 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT____Vcellinp__TEMP_DRAM____pinNumber2 = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEMS_RAM_Q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEMS_WA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEMS_WD = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__MEMS_WE = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EFREG_WA = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EFREG_WD = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EFREG_WE = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__CBUS_A = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CBUS_DI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CBUS_WR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CBUS_BA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CBUS_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CBUS_TAS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IBUS_DI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__INT_ACP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CACHE_DI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__BSC_DBUS_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__BSC_DBUS_BUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__DMAC_ACT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__VBUS_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__MAC_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__MAC_OP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__MAC_WE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__MULT_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__TXI_IRQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__RXI_IRQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__ERI_IRQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__ICI_IRQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__WDT_OVF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__MSBY_SBY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK2_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK4_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK8_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK16_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK32_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK64_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK128_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK256_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK512_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK1024_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK2048_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK4096_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__CLK8192_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__RES_SYNC_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT____Vcellinp__core__BUS_WAIT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__MULT_DI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__DBUS_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__DBUS_BA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__DBUS_WE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IDI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IDO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IBS_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__ICS0_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__ICS1_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__ICS2_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__ICS3_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IRD_WR_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IWE_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IRD_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__IIVECF_N = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT____Vcellinp__intc__FRT_OCI_IRQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_AREA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IO_AREA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WRADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_D = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_WE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram0__wren = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram1__wren = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram2__wren = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinpt__ram3__wren = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_WE = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__wren = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__data = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag23__wren = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__INIT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__LV_A_RDADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ADDRWAY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__LV_D = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__LV_WE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__GBR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__VBR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__SR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__IR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__PC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__IR = 0;
    VL_ZERO_RESET_W(80, vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__DI);
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__PC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__BC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__IR = 0;
    VL_ZERO_RESET_W(80, vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__DI);
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__PC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__BC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__RES = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__ADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__WD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__IR = 0;
    VL_ZERO_RESET_W(80, vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__DI);
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__PC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__RD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__LOCK = 0;
    VL_ZERO_RESET_W(80, vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI);
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__IF_STALL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__STATE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__SLP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__SR_NEW = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__BR_T = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__ILSI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__LOAD_ISSUE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID.__PVT__IR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID.__PVT__PC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__INT_EXP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__DEC_IR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT____Vcellinp__decrom__RESET = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__NEXT_STATE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_LD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__WB_LD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_WA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_WB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__BP_A_EXEX = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__BP_B_EXEX = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__BP_C_EXEX = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__REG_A = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__REG_B = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__REG_C = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_RDATA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_STALL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__MA_WDATA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__WB_EV = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_D = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_E = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__RAM_WE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__C0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__alu__DOT__R = 0;
    VL_ZERO_RESET_W(86, vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q);
    vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CLS = 0;
    VL_ZERO_RESET_W(80, vlSelf->tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__REG1_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_RD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_EN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_AVAIL[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_ACCESS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__TS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__TCR_EVW = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_A = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__ADDR_B = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__EV = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_EN = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_ADDR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__ASUM_S = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__MW_DATA = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__NEXT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__VB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_A = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__SEL_B = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__REG_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__WD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__WB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__WR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__R60 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__R68 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__RE0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__RE2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_SAME = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__W_IRL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__W_DIVU = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__W_DMAC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__W_WDT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__M4 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__W_SCI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__VBA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__RWR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__OLDB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__REG_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__WR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__START32 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__START64 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__H = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__L = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__vV = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__PW = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__STEP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__OVF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__ZF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__SX = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__SD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__TF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__F3 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__F4 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__F5 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__CC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__SND = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opZD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opS1 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opS2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opS3 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opSH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opCL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opCH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opFL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opFH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__isSide = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__isRest = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__SXD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__WS3 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__WPW = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__WA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__OVF_DEC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__opLS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__RAD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__YSRC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__ADD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__CLR0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__HBUS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__HSUM = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__H_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__LBUS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__LSUM = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__LSHF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__L_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__L_GC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__WT_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__WR_DONE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__RD_DONE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__wdt__DOT__HALF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FRC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FICR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__TIER = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__ICF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OVF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__CKS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_CE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__REG_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__WR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__RD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_WRITE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FTCSR_READ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__CLR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__EQA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_INC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__frt__DOT__OCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__SCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__TEI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__TXI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__RXI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__ERI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__REG_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_EXT_REQ = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_SEL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MACL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MACH = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MA = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MB = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__SAT = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__M0 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__M1 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__SUM = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__OVFL = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__SGN = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__GO = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__LDS = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__CLR = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__OPMW = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__HI = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__DW15 = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__EXEC = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__KN = 0;
    vlSelf->tb_sndram__DOT__MSH__DOT__mult__DOT__WRH = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DAD[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DEN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DMD[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCU__DOT__DSTA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__T0C = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__T1S = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__T1MD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IMS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IST = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ASR0 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ASR1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__AREF = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__RSEL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_DR = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_DW = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_ADD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_HOLD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CRD_N_OLD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IVECF_LVL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_SEL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_SEL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_RW = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_RW = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_SEL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WR = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_RD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IVECF_RISE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IRQV_N_OLD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__VBIN_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__VBOUT_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__HBIN_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__TM0_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__TM1_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__SCSP_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__SM_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__PAD_PEND = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DMA_INT_PEND[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCU__DOT__DMAIL_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__VDP1_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_DMA_END = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_ST = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_ST = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_RDY = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_ST = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_A = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT____Vcellinp__ACACHE____pinNumber4 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DMA_LQ[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__CCACHE_FULL[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCU__DOT__CCACHE_RADDR = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_ST = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_IA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RTN = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WTN = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_EC = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RADD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WADD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_CH = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RUN[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DMA_PEND[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_A = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_PEND_CH = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DREG_CH = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DRSEL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DWSEL = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CW_DR = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CW_DW = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CW_DC = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CW_BE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CH_INIT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CH_INIT_CNT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CH_WA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RBA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_IND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_DSP = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RTN_DEC = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WTN_DEC = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RTN_NEXT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WTN_NEXT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_RA_NEW = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WA_NEW = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_IA_NEW = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__DMA_FACT[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_READ_A = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_READ_B = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_READ_C = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WRITE_A = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WRITE_B = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_WRITE_C = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_LAST = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_IND_REG = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_IND_POS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_WORD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_A1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_WRITE_PAGE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_BUS_EN = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__W_SIZE_OK2 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_READ_ACK = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_DATA_ACK = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_READ_ACK = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_DATA_ACK = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_READ_ACK = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_DATA_ACK = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBUS_IND_DONE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IND_WUP = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CHW_DW_W = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_BUF = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_BUF = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IND_D = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__PUSH_RD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__PUSH_RDD = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__RD_DATA = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__PUSH_ANY = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__BBUS_A1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__b_c3 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_h = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_ind = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_dr = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_dw = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_l = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_d1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_d0 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_ra = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_wa = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_w0 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__f_w3 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__aw_cpu_i = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__aw_cpu = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__aw_dr = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__dm_i3 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__dm_ich = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__dm_ind = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__dm_rack = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__dm_dack = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CW_STB = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBRLS = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__CBREQ = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__TM0 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__TM1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__VBIN_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__VBOUT_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__HBIN_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__TM0_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__TM1_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DSP_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__SCSP_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__SM_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__PAD_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__ = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__ = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__ = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__DMAIL_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__VDP1_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__EXT_INT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__INT_SET = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IVEC_DO = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__IVEC_WAIT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WDI = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WREN = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_DO = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WWAIT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WWAIT1 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WWAIT2 = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_RWAIT = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__kk = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__kk = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__kk = 0;
    vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__kk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__sdram__DOT__cap_n = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__dq_cap = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__icnt = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__i_cmd = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__i_a = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__i_step = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__i_wait = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__v_mode[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__v_row[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__v_col[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__v_wd[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__v_wbe[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__v_wsel[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__scr[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__sdram__DOT__v_act = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__rq_wr = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__rq_rd = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__sc_addr = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__sc_din = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__sc_be = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__sc_wr_p = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__sc_rd_p = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__sc_t0 = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__cyc = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__old_rd = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__old_wr = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__s_act[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__s_wr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__s_dum[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__dl_v[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__dl_t0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__dl_d[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__dl_ld[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__sdram__DOT__dl_wi = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__t_v[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__t_k[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__t_i[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__sdram__DOT__q_a = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_ba = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_dqm = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_dq = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_oe = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_tv = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_ti = 0;
    vlSelf->tb_sndram__DOT__sdram__DOT__q_tk = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__sdram__DOT__scr_q[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__bank_act[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__bank_row[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__bank_t_act[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__bank_t_rdy[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__model__DOT__last_act_any = 0;
    vlSelf->tb_sndram__DOT__model__DOT__last_ref_end = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__row_t[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__model__DOT__dq_en = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__sl_v[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__sl_d[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_sndram__DOT__model__DOT__dqm_h[__Vi0] = 0;
    }
    vlSelf->tb_sndram__DOT__model__DOT__ei = 0;
    vlSelf->tb_sndram__DOT__model__DOT__k = 0;
    vlSelf->tb_sndram__DOT__model__DOT__cmd = 0;
    vlSelf->tb_sndram__DOT__model__DOT__bk = 0;
    vlSelf->tb_sndram__DOT__model__DOT__tnow = 0;
    vlSelf->tb_sndram__DOT__model__DOT__dq__out__strong__en = 0;
    vlSelf->tb_sndram__DOT__model__DOT__dq_out__strong__out1 = 0;
    vlSelf->tb_sndram__DOT__model__DOT__dq_out__strong__en1 = 0;
    vlSelf->tb_sndram__DOT__model__DOT__dq_out__strong__out2 = 0;
    vlSelf->tb_sndram__DOT__model__DOT__dq_out__strong__en2 = 0;
    vlSelf->tb_sndram__DOT__DCC__DOT__MEM_WAIT = 0;
    vlSelf->tb_sndram__DOT__SCSP_CEGen__DOT__ev = 0;
    vlSelf->tb_sndram__DOT__SCSP_CEGen__DOT__nxt = 0;
    vlSelf->__VcaseTableOut1 = 0;
    vlSelf->__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__20__way = 0;
    vlSelf->__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__WayToAddr__21__way = 0;
    vlSelf->__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__way = 0;
    vlSelf->__Vfunc_tb_sndram__DOT__MSH__DOT__cache__DOT__LRUSelect__24__lru = 0;
    vlSelf->__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__addr = 0;
    vlSelf->__Vfunc_tb_sndram__DOT__MSH__DOT__dmac__DOT__BAFromAddr__27__sz = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_24 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_25 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_26 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_28 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_30 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_31 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_33 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_36 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_39 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_40 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_48 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_50 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_54 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_58 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_59 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_61 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_62 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_63 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_64 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_66 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_67 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_68 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_70 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_71 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_72 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_74 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_76 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_77 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_79 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_80 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_81 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_82 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_83 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_84 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_86 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_87 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_90 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_91 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_93 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_94 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_95 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_96 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_97 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_98 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_99 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_100 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_101 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_107 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_116 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_117 = 0;
    vlSelf->__Vintraval_hfed655d3__0 = 0;
    vlSelf->__Vintraval_ha9f8309c__0 = 0;
    vlSelf->__Vintraval_ha80348d5__0 = 0;
    vlSelf->__Vintraval_h4716196b__0 = 0;
    vlSelf->__Vintraval_hfd120d51__0 = 0;
    vlSelf->__Vintraval_h15ceaaae__0 = 0;
    vlSelf->__Vintraval_h3d5f690c__0 = 0;
    vlSelf->__Vintraval_h2002a7ff__0 = 0;
    vlSelf->__Vintraval_hb48577dd__0 = 0;
    vlSelf->__Vintraval_hd5c5750a__0 = 0;
    vlSelf->__Vintraval_h50986b74__0 = 0;
    vlSelf->__Vintraval_h56d20ea6__0 = 0;
    vlSelf->__Vintraval_h289f161a__0 = 0;
    vlSelf->__Vintraval_h9a6e8677__0 = 0;
    vlSelf->__Vintraval_h84b11e51__0 = 0;
    vlSelf->__Vintraval_h56d20ea6__1 = 0;
    vlSelf->__Vintraval_h289f161a__1 = 0;
    vlSelf->__Vintraval_h2e99b720__0 = 0;
    vlSelf->__Vintraval_h14622b3e__0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MCLK_DIV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__cyc = 0;
    vlSelf->__Vdly__tb_sndram__DOT__RST_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP_DIV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__ce_ph = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dot_div = 0;
    vlSelf->__Vdly__tb_sndram__DOT__brdy_o = 0;
    vlSelf->__Vdly__tb_sndram__DOT__cs2_o = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CLK_DIV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CYCLE_NUM = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SWC9 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__areg = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__areg = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__areg = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__areg = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__areg = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__areg = 0;
    VL_ZERO_RESET_W(86, vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__decrom__DOT__Q);
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP3 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RP0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ECWAIT_N_FF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__CIRL_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP_2X_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP_CEGen__DOT__sum = 0;
    vlSelf->__Vdly__tb_sndram__DOT__old_rd = 0;
    vlSelf->__Vdly__tb_sndram__DOT__old_wr = 0;
    vlSelf->__Vdly__tb_sndram__DOT__ram_q_o = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__cs = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__cn = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sync_old = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__fc = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__i_cmd = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__i_a = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__icnt = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__i_step = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__i_wait = 0;
    vlSelf->__Vdly__tb_sndram__DOT__init_done = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__old_wr = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dbg_scsp_drop = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sc_addr = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sc_t0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sc_rd_p = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sc_wr_p = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sc_din = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__sc_be = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__cyc = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__v_act = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__dl_wi = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_cmd = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_a = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_ba = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_dqm = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_dq = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_oe = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_tv = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_tk = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__q_ti = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dout_b1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dout_a1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dout_b0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dout_a0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP_RAM_Q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dbg_scrub_wrap = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_dq_o = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_a = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__old_rd = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_ras_n = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_cas_n = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_we_n = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_ba = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_dqm = 0;
    vlSelf->__Vdly__tb_sndram__DOT__dram_dq_oe = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR5 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP1_SCR6 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__KEY_RAM_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__KYONEX_RUN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk1__DOT__PLFO_WAVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP2 = 0;
    vlSelf->__VdlyMask__tb_sndram__DOT__SCSP__DOT__OP2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__RST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SLOT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__NOISE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_RGEN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__SOUSX = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP2_SCR2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_SA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__ADP_PCM8B = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk2__DOT__LOOP0_DELAYED = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM_D = 0;
    VL_ZERO_RESET_W(87, vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP3);
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__WD_READ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__PHASE_FRAC_RAM_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_CA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_PHASE_FRAC_NEXT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP3_SCR0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_CURR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__ADP0_NEXT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_PCM8B_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_WD0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR5 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP4_SCR6 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP5 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_SGC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MONITOR_EG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk4__DOT__ND_PREV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP6 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__OP7 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__STACK_WGEN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MDEC_CT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_MEMA_REG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_READ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SFT_REG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_OUT_REG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DSP_WRITE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk7__DOT__FRC_REG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__TMR_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk8__DOT__CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk9__DOT__DEXE_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_MA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_RA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_LEN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DIR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_WR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_EXEC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_START = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DQM = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__WE_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCDTACK_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_RRDY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_RPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCU_WRDY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_RPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_RD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_CS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_MEM_WPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__MEM_DEV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCPU_WPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_WD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__DMA_DAT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__REG_WE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__REG_RD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__REG_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__SCU_REG_WPEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__REG_A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__REG_D = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__IO_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__MEM_DEV_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk10__DOT__REG_START = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR15 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__REG_RD_DELAY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR13 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR14 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR6 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR3 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR16 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR19 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR18 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR12 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR10 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR9 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR8 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR7 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__REG_Q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR4 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR11 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR17 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__unnamedblk11__DOT__DMA_EXEC_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR5 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__CR0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__RES_SYNC_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__unnamedblk1__DOT__DIV_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK2_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK4_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK8_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK16_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK32_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK64_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK128_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK256_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK512_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK1024_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK2048_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK4096_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__CLK8192_CE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__SC_PTR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__INIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_UPDATE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WRITE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_READ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_LINE_PURGE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_DATA_WRITE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_ADDR_WRITE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA_RDY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBREQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_WRITE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READARRAY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_BA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBLOCK = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_ADDR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBDATA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBWE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBBURST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CACHE_WR_WAY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__IBUS_READ_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__unnamedblk2__DOT__ARRAY_POS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__CCR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MA_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IF_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VECT_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INST_SPLIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__MAWB_STALL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk1__DOT__SAVE_IR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__IR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__ID.__PVT__PC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__IR = 0;
    VL_ZERO_RESET_W(80, vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__DI);
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__PC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__EX.__PVT__BC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__IR = 0;
    VL_ZERO_RESET_W(80, vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__DI);
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__PC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__BC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__RES = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__ADDR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__MA.__PVT__WD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__IR = 0;
    VL_ZERO_RESET_W(80, vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__DI);
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__PC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__RD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__PIPE.__PVT__WB.__PVT__LOCK = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID.__PVT__IR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SAVE_ID.__PVT__PC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__INT_LVL_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILI_EXP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__ILSI = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SLP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__STATE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__SR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__VBR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__GBR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WBRD_Z = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__RD_SAVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB2_RZ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__WB_LDP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__PR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__GR0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ0_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__unnamedblk1__DOT__DREQ1_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RB_PRIO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_CH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_REQ_CLR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_RD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__LW_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_BURST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_LOCK = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMA_WR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RD_BUF_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__SA_BA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__VCRDMA1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__DMAOR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__rdo__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMI_N_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__INTC_NMI_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_RUN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_HOLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_LVL_SAVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBREQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VBA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACCEPTED = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__FRTIP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VECMD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DIVUIP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__SCIIP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__NMIE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__DMACIP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__WDTIP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__VB = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__BUS_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__L = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__H = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__STEP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F5 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__ZF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SX = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F4 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__TF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__F3 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__CC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__VEC8 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vH2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__PW = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vV = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__vL2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__SND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__OVFIE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__DVSR_CLR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__BUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SLEEP_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__msby__DOT__SBYCR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__MSBY_SBY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__SBY_TME = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__NMI_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__WDT_OVF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__WTCNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WOVF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_OVF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_WTIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_TME = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_CKS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__OVF_SET = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__unnamedblk1__DOT__TM_EN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__OPEN_BUS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__S_RSTS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__IBUS_REQ_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__BUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__wdt__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFA_SET = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OVF_SET = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCFB_SET = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FTI_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FICR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CAPT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICF_SET = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__ICR_READ_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__IEDG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TOCR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TIER = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CKS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__CCLRA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__FRC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__OCRB = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__TEMP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__frt__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TXI = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__TEI = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__RXI = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__ERI = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__SCR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__sci__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IIVECF_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IRD_WR_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VEC_BUF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IRD_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IBS_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__ICS0_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__ICS1_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__ICS2_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__ICS3_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NOP_WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUSY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_EN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__RCD_WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IWE_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__IS_SDRAM_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DAT_BUF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUSY2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__VBUS_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__IDO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__NEXT_BA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__CBUS_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__DBUS_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REFRESH_ACTIVE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__INSERT_WAIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_WE_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BUS_DI_LATCH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DELAYED_RFS_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0;
    vlSelf->__VdlyMask__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__SDRAM_INSERT_NOP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_SKIP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__DBUS_LOCK_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__BURST_SINGLE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_REQ_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__unnamedblk1__DOT__CBUS_LOCK_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BUS_STATE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BGR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__MCR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCOR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCSR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__BCR1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RTCNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__RFS_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__WCR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__bsc__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__UBC__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_DONE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MM_CYC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SIGNED = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__SAT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MACL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MUL_EXEC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__MB = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__mult__DOT__M1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__IVECF_LVL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CRD_N_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CDQM_N_OLD0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__IRQV_N_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__BDO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RTN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WTN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_EC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CW_DC = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CW_DW = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CW_BE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CW_DR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CH_INIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_WAIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_WPOS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_WAIT_CLR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_WPOS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_REQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_WAIT_CLR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DSTA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RFS_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_RFS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_DMA_START = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_A1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_ABUS_ACT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_LONG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ABUS_BUF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_WRITE_PROCESS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__BREQ_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_DMA_START = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_DONE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_A1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CPU_BBUS_ACT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WORD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__BDTEN_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__BADDT_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__BCSS_N = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_IND_POS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_BUF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_READ_PROCESS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_WRITE_PROCESS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__BBUS_WRITE_UNALIGNED = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_DMA_START = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__CBUS_IND_POS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CCACHE_RADDR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RFS_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBUS_RAS_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RADD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WADD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_DSP = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_CH = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_ST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_B = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_IND_REG = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_C = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_RA_ERR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_WA_ERR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_RBA = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_WPOS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_RPOS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_READ_A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_B = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_WRITE_C = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__DMA_ERR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_LAST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DMA_END = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DR = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DSP_DW = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__BBUS_RW_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk2__DOT__ABUS_RW_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBREQ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__CBRLS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__TM1_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__TM1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_MATCH_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__TM0_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__TM0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM0_MATCH_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__TM1_SYNC_EN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk3__DOT__T1MD_ENB_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DSP_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__SM_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__PAD_PEND = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__IMS = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__IMS_OB = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__IST = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk5__DOT__TM1_SYNC_ALLOW = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__VBIN_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__INT_SET = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__VBOUT_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__HBIN_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__TM0_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__TM1_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DSP_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__SCSP_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__SM_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__PAD_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__2__KET__ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__1__KET__ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMA_INT__BRA__0__KET__ = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__DMAIL_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__VDP1_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__EXT_INT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_STATE = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_WAIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__unnamedblk7__DOT__IVEC_WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__IVEC_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_WDI = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_A = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_WREN = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_WAIT_DELAY = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_RWAIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__T0C = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__T1S = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__T1MD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ASR0 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__ASR1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__AREF = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__RSEL = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_DO = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT1 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__REG_WWAIT2 = 0;
    vlSelf->__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__RD_N_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__DCC__DOT__MEM_WAIT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__FAULT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WAIT_CNT = 0;
    vlSelf->__Vdly__tb_sndram__DOT__DCC__DOT__unnamedblk1__DOT__WE_N_OLD = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q = 0;
    vlSelf->__Vdly__tb_sndram__DOT__sdram__DOT__cap_n = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__wramh__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__wramh__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__wramh__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_DRAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MADRS_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR6__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR5__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR2__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR0__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v6 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__mem__v7 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__TEMP_RAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MPRO_MIR__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__SCR_MIR__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__EFREG_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__MEMS_RAM__DOT__MEM__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__COEF_RAM__DOT__MEM__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DW__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DR__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CH_DC__DOT__MEM__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__a_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__a_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__ba_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__ba_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__dqm_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__dqm_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__ras_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__ras_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__cas_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__cas_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__we_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__we_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__oe_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__oe_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__o_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__o_d__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdr_clk__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdr_clk__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__dq_in_r__strong__out3__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__dq_in_r__strong__out3__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__dq_in_r__strong__en3__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__dq_in_r__strong__en3__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__v_row__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__v_row__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__s_wr__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_v__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_t0__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_t0__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_v__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_t0__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_t0__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__s_wr__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__s_act__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v6 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v6 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v6 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_v__v7 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_k__v7 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__t_i__v7 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__dl_d__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_d__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__dl_d__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__sdram__DOT__dl_ld__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__sdram__DOT__scr_q__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr_q__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__scr__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__dl_v__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__t_v__v8 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__v_col__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__sdram__DOT__v_mode__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCSP__DOT__DSP_EXTS__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v4 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v5 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v6 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v7 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR_TE_OLD__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v8 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CH_REQ_CLR__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__CHCR__v9 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__DRCR_RS__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__dmac__DOT__tcr__DOT__T__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v3 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v6 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v6 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v7 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v8 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v8 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v9 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v9 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v10 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v10 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DMD__v11 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMD__v11 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v8 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v9 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v10 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v10 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DAD__v11 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v11 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DAD__v12 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_FILL__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_FILL__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v2 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__CCACHE_FULL__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v3 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v4 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v1 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_INT_PEND__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_RUN__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DMA_PEND__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v3 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v4 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v5 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v5 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v6 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v7 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v8 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v9 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v9 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v10 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v10 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v11 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v12 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v13 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v13 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__SCU__DOT__DEN__v14 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v14 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__SCU__DOT__DEN__v15 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2 = 0;
    vlSelf->__VdlyVal__tb_sndram__DOT__model__DOT__dq_en__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__model__DOT__dq_en__v0 = 0;
    vlSelf->__VdlySet__tb_sndram__DOT__m_drive__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_ram__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__RST_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__a_d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__ba_d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__cas_d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dqm_d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__ras_d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__we_d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__sdr_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ba__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dqm__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ras_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_cas_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_we_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_oe__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__dq__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_run__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
