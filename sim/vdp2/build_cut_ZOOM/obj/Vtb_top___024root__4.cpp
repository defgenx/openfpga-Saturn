// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root___nba_comb__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_9__RxCTAddr;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT____VlemCall_8__RxCTAddr;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT____VlemCall_5__RxScreenOver;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT____VlemCall_4__RxScreenOver;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSA0;
    tb_top__DOT__u_dut__DOT__RDBSA0 = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSA1;
    tb_top__DOT__u_dut__DOT__RDBSA1 = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSB0;
    tb_top__DOT__u_dut__DOT__RDBSB0 = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__RDBSB1;
    tb_top__DOT__u_dut__DOT__RDBSB1 = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__RPW_EN;
    tb_top__DOT__u_dut__DOT__RPW_EN = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W = 0;
    CData/*2:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W = 0;
    CData/*2:0*/ __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__18__RxOVR;
    __Vfunc_RxScreenOver__18__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__18__RxOFFX;
    __Vfunc_RxScreenOver__18__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__18__RxOFFY;
    __Vfunc_RxScreenOver__18__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__18__RxPLSZ;
    __Vfunc_RxScreenOver__18__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__18__RxBMSZ;
    __Vfunc_RxScreenOver__18__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__18__RxBMEN;
    __Vfunc_RxScreenOver__18__RxBMEN = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__19__RxOVR;
    __Vfunc_RxScreenOver__19__RxOVR = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__19__RxOFFX;
    __Vfunc_RxScreenOver__19__RxOFFX = 0;
    SData/*15:0*/ __Vfunc_RxScreenOver__19__RxOFFY;
    __Vfunc_RxScreenOver__19__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxScreenOver__19__RxPLSZ;
    __Vfunc_RxScreenOver__19__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__19__RxBMSZ;
    __Vfunc_RxScreenOver__19__RxBMSZ = 0;
    CData/*0:0*/ __Vfunc_RxScreenOver__19__RxBMEN;
    __Vfunc_RxScreenOver__19__RxBMEN = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__23__RxKAst;
    __Vfunc_RxCTAddr__23__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__23__RxKA;
    __Vfunc_RxCTAddr__23__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__23__RxKTAOS;
    __Vfunc_RxCTAddr__23__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__23__RxKDBS;
    __Vfunc_RxCTAddr__23__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__24__RxKAst;
    __Vfunc_RxCTAddr__24__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__24__RxKA;
    __Vfunc_RxCTAddr__24__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__24__RxKTAOS;
    __Vfunc_RxCTAddr__24__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__24__RxKDBS;
    __Vfunc_RxCTAddr__24__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__25__Vfuncout;
    __Vfunc_RxCTAddr__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__25__RxKAst;
    __Vfunc_RxCTAddr__25__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__25__RxKA;
    __Vfunc_RxCTAddr__25__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__25__RxKTAOS;
    __Vfunc_RxCTAddr__25__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__25__RxKDBS;
    __Vfunc_RxCTAddr__25__RxKDBS = 0;
    IData/*18:0*/ __Vfunc_RxCTAddr__26__Vfuncout;
    __Vfunc_RxCTAddr__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_RxCTAddr__26__RxKAst;
    __Vfunc_RxCTAddr__26__RxKAst = 0;
    QData/*34:0*/ __Vfunc_RxCTAddr__26__RxKA;
    __Vfunc_RxCTAddr__26__RxKA = 0;
    CData/*2:0*/ __Vfunc_RxCTAddr__26__RxKTAOS;
    __Vfunc_RxCTAddr__26__RxKTAOS = 0;
    CData/*0:0*/ __Vfunc_RxCTAddr__26__RxKDBS;
    __Vfunc_RxCTAddr__26__RxKDBS = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__Vfuncout;
    __Vfunc_WinTest__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W0HIT;
    __Vfunc_WinTest__92__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W1HIT;
    __Vfunc_WinTest__92__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W0E;
    __Vfunc_WinTest__92__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__W1E;
    __Vfunc_WinTest__92__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__92__LOG;
    __Vfunc_WinTest__92__LOG = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__Vfuncout;
    __Vfunc_WinTest__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W0HIT;
    __Vfunc_WinTest__109__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W1HIT;
    __Vfunc_WinTest__109__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__WSHIT;
    __Vfunc_WinTest__109__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W0E;
    __Vfunc_WinTest__109__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__W1E;
    __Vfunc_WinTest__109__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__SWE;
    __Vfunc_WinTest__109__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__109__LOG;
    __Vfunc_WinTest__109__LOG = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__Vfuncout;
    __Vfunc_WinTest__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W0HIT;
    __Vfunc_WinTest__110__W0HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W1HIT;
    __Vfunc_WinTest__110__W1HIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__WSHIT;
    __Vfunc_WinTest__110__WSHIT = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W0E;
    __Vfunc_WinTest__110__W0E = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__W1E;
    __Vfunc_WinTest__110__W1E = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__SWE;
    __Vfunc_WinTest__110__SWE = 0;
    CData/*0:0*/ __Vfunc_WinTest__110__LOG;
    __Vfunc_WinTest__110__LOG = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs;
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs = 0;
    CData/*0:0*/ TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res = 0;
    // Body
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__108__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__108__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__108__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__108__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__108__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__108__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__108__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__108__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__108__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__108__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__108__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__108__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__108__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__108__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__108__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__108__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__108__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__108__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__108__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__108__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__108__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__108__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxW_EN[1U] = 0U;
    __Vfunc_WinTest__109__LOG = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                 >> 0x0000001fU);
    __Vfunc_WinTest__109__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        >> 0x0000001dU) 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__109__W1E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x0000001bU));
    __Vfunc_WinTest__109__W0E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x00000019U));
    __Vfunc_WinTest__109__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000001cU)));
    __Vfunc_WinTest__109__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000001aU)));
    __Vfunc_WinTest__109__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x00000018U)));
    if (__Vfunc_WinTest__109__SWE) {
        if (__Vfunc_WinTest__109__W1E) {
            if (__Vfunc_WinTest__109__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__109__WSHIT) 
                        & (IData)(__Vfunc_WinTest__109__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__109__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__109__WSHIT) 
                        | (IData)(__Vfunc_WinTest__109__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__109__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                       & (IData)(__Vfunc_WinTest__109__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                       | (IData)(__Vfunc_WinTest__109__W1HIT));
            }
        } else if (__Vfunc_WinTest__109__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                   & (IData)(__Vfunc_WinTest__109__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__109__WSHIT) 
                   | (IData)(__Vfunc_WinTest__109__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__109__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__109__WSHIT;
        }
    } else if (__Vfunc_WinTest__109__W1E) {
        if (__Vfunc_WinTest__109__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__109__W1HIT) 
                   & (IData)(__Vfunc_WinTest__109__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__109__W1HIT) 
                   | (IData)(__Vfunc_WinTest__109__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__109__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__109__W1HIT;
        }
    } else if (__Vfunc_WinTest__109__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__109__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__109__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__109__Vfuncout = ((IData)(__Vfunc_WinTest__109__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_dut__DOT__SW_EN = __Vfunc_WinTest__109__Vfuncout;
    __Vfunc_WinTest__110__LOG = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x0000000fU));
    __Vfunc_WinTest__110__SWE = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        >> 0x0000000dU) 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                          >> 0x00000014U)));
    __Vfunc_WinTest__110__W1E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 0x0000000bU));
    __Vfunc_WinTest__110__W0E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                       >> 9U));
    __Vfunc_WinTest__110__WSHIT = (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                  >> 0x0000001fU)) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000000cU)));
    __Vfunc_WinTest__110__W1HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 0x0000000aU)));
    __Vfunc_WinTest__110__W0HIT = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                                         ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                            >> 8U)));
    if (__Vfunc_WinTest__110__SWE) {
        if (__Vfunc_WinTest__110__W1E) {
            if (__Vfunc_WinTest__110__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = (((IData)(__Vfunc_WinTest__110__WSHIT) 
                        & (IData)(__Vfunc_WinTest__110__W1HIT)) 
                       & (IData)(__Vfunc_WinTest__110__W0HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = (((IData)(__Vfunc_WinTest__110__WSHIT) 
                        | (IData)(__Vfunc_WinTest__110__W1HIT)) 
                       | (IData)(__Vfunc_WinTest__110__W0HIT));
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                       & (IData)(__Vfunc_WinTest__110__W1HIT));
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                       | (IData)(__Vfunc_WinTest__110__W1HIT));
            }
        } else if (__Vfunc_WinTest__110__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                   & (IData)(__Vfunc_WinTest__110__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__110__WSHIT) 
                   | (IData)(__Vfunc_WinTest__110__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__110__WSHIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__110__WSHIT;
        }
    } else if (__Vfunc_WinTest__110__W1E) {
        if (__Vfunc_WinTest__110__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__110__W1HIT) 
                   & (IData)(__Vfunc_WinTest__110__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__110__W1HIT) 
                   | (IData)(__Vfunc_WinTest__110__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__110__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__110__W1HIT;
        }
    } else if (__Vfunc_WinTest__110__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__110__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__110__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__110__Vfuncout = ((IData)(__Vfunc_WinTest__110__LOG)
                                       ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                       : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN = __Vfunc_WinTest__110__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[0U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__104__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000017U));
            vlSelfRef.__Vfunc_WinTest__104__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 0x00000015U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__104__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000013U));
            vlSelfRef.__Vfunc_WinTest__104__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000011U));
            vlSelfRef.__Vfunc_WinTest__104__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__104__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x00000012U)));
            vlSelfRef.__Vfunc_WinTest__104__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x00000010U)));
            if (vlSelfRef.__Vfunc_WinTest__104__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__104__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__104__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__104__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__104__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__104__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__104__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__104__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__104__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__104__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__104__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__104__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__104__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__104__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__104__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[1U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__105__LOG = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                   >> 0x0000001fU);
            vlSelfRef.__Vfunc_WinTest__105__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 0x0000001dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__105__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x0000001bU));
            vlSelfRef.__Vfunc_WinTest__105__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x00000019U));
            vlSelfRef.__Vfunc_WinTest__105__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 0x0000001cU)));
            vlSelfRef.__Vfunc_WinTest__105__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x0000001aU)));
            vlSelfRef.__Vfunc_WinTest__105__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x00000018U)));
            if (vlSelfRef.__Vfunc_WinTest__105__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__105__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__105__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__105__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__105__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__105__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__105__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__105__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__105__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__105__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__105__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__105__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__105__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__105__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__105__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[2U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__106__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 7U));
            vlSelfRef.__Vfunc_WinTest__106__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 5U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__106__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 3U));
            vlSelfRef.__Vfunc_WinTest__106__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 1U));
            vlSelfRef.__Vfunc_WinTest__106__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 4U)));
            vlSelfRef.__Vfunc_WinTest__106__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 2U)));
            vlSelfRef.__Vfunc_WinTest__106__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U]));
            if (vlSelfRef.__Vfunc_WinTest__106__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__106__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__106__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__106__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__106__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__106__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__106__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__106__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__106__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__106__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__106__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__106__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__106__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__106__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__106__Vfuncout));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[3U] = 
        ([&]() {
            vlSelfRef.__Vfunc_WinTest__107__LOG = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x0000000fU));
            vlSelfRef.__Vfunc_WinTest__107__SWE = (1U 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                       >> 0x0000000dU) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                         >> 0x00000014U)));
            vlSelfRef.__Vfunc_WinTest__107__W1E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 0x0000000bU));
            vlSelfRef.__Vfunc_WinTest__107__W0E = (1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                                                      >> 9U));
            vlSelfRef.__Vfunc_WinTest__107__WSHIT = 
                (1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001fU)) ^ 
                       (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                        >> 0x0000000cU)));
            vlSelfRef.__Vfunc_WinTest__107__W1HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW1_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 0x0000000aU)));
            vlSelfRef.__Vfunc_WinTest__107__W0HIT = 
                (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TW0_HIT) 
                       ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[19U] 
                          >> 8U)));
            if (vlSelfRef.__Vfunc_WinTest__107__SWE) {
                if (vlSelfRef.__Vfunc_WinTest__107__W1E) {
                    if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                                & (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT)) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = (((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                                | (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT)) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                               & (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT));
                        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                            = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                               | (IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT));
                    }
                } else if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__WSHIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__107__WSHIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__107__WSHIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__107__W1E) {
                if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT) 
                           & (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = ((IData)(vlSelfRef.__Vfunc_WinTest__107__W1HIT) 
                           | (IData)(vlSelfRef.__Vfunc_WinTest__107__W0HIT));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                        = vlSelfRef.__Vfunc_WinTest__107__W1HIT;
                    vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                        = vlSelfRef.__Vfunc_WinTest__107__W1HIT;
                }
            } else if (vlSelfRef.__Vfunc_WinTest__107__W0E) {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                    = vlSelfRef.__Vfunc_WinTest__107__W0HIT;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                    = vlSelfRef.__Vfunc_WinTest__107__W0HIT;
            } else {
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
                vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
            }
            vlSelfRef.__Vfunc_WinTest__107__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_WinTest__107__LOG)
                    ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                    : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
        }(), (IData)(vlSelfRef.__Vfunc_WinTest__107__Vfuncout));
    __Vfunc_WinTest__92__LOG = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                      >> 7U));
    __Vfunc_WinTest__92__W1E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                      >> 3U));
    __Vfunc_WinTest__92__W0E = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                      >> 1U));
    __Vfunc_WinTest__92__W1HIT = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem
                                         [(0x0000003fU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp) 
                                              - (IData)(8U)))] 
                                         >> 1U) ^ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U] 
                                                   >> 2U)));
    __Vfunc_WinTest__92__W0HIT = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__g_ml__DOT__mem
                                        [(0x0000003fU 
                                          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__whit8__DOT__wp) 
                                             - (IData)(8U)))] 
                                        ^ vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[18U]));
    if (__Vfunc_WinTest__92__W1E) {
        if (__Vfunc_WinTest__92__W0E) {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = ((IData)(__Vfunc_WinTest__92__W1HIT) 
                   & (IData)(__Vfunc_WinTest__92__W0HIT));
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = ((IData)(__Vfunc_WinTest__92__W1HIT) 
                   | (IData)(__Vfunc_WinTest__92__W0HIT));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
                = __Vfunc_WinTest__92__W1HIT;
            vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
                = __Vfunc_WinTest__92__W1HIT;
        }
    } else if (__Vfunc_WinTest__92__W0E) {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and 
            = __Vfunc_WinTest__92__W0HIT;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or 
            = __Vfunc_WinTest__92__W0HIT;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and = 0U;
        vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or = 0U;
    }
    __Vfunc_WinTest__92__Vfuncout = ((IData)(__Vfunc_WinTest__92__LOG)
                                      ? (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_and)
                                      : (IData)(vlSymsp->TOP__REF_VDP2_PKG.WinTest__Vstatic__log_or));
    tb_top__DOT__u_dut__DOT__RPW_EN = __Vfunc_WinTest__92__Vfuncout;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W = vlSelfRef.tb_top__DOT__u_dut__DOT__CYA0;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout 
        = (0x0000000fU & ((0U == (3U & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T)))
                           ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W) 
                              >> 0x0cU) : ((1U == (3U 
                                                   & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T)))
                                            ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W) 
                                               >> 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__T)))
                                                ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W) 
                                                   >> 4U)
                                                : (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__W)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0 = __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__3__Vfuncout;
    if ((0x00000100U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U])) {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W 
            = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld) 
                      >> (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                >> 2U)))) ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__g_ml__DOT__mem
               [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                       >> 2U))] : 0U);
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_0__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__4__W)))));
        tb_top__DOT__u_dut__DOT__RDBSA1 = (3U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                    >> 2U)));
    } else {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYA0;
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_0__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__5__W)))));
        tb_top__DOT__u_dut__DOT__RDBSA1 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U]);
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1 = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_0__CyNib;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W = vlSelfRef.tb_top__DOT__u_dut__DOT__CYB0;
    __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout 
        = (0x0000000fU & ((0U == (3U & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T)))
                           ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W) 
                              >> 0x0cU) : ((1U == (3U 
                                                   & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T)))
                                            ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W) 
                                               >> 8U)
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__T)))
                                                ? ((IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W) 
                                                   >> 4U)
                                                : (IData)(__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__W)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0 = __Vfunc_tb_top__DOT__u_dut__DOT__CyNib__6__Vfuncout;
    if ((0x00000200U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U])) {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W 
            = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld) 
                      >> (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                                >> 2U)))) ? vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__g_ml__DOT__mem
               [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CYT) 
                       >> 2U))] : 0U);
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_1__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__7__W)))));
        tb_top__DOT__u_dut__DOT__RDBSB1 = (3U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                  << 0x0000001aU) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                    >> 6U)));
    } else {
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYT;
        vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__CYB0;
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_1__CyNib 
            = (0x0000000fU & ((0U == (3U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T)))
                               ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W) 
                                  >> 0x0cU) : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T)))
                                                ? ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W) 
                                                   >> 8U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__T)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W) 
                                                    >> 4U)
                                                    : (IData)(vlSelfRef.__Vfunc_tb_top__DOT__u_dut__DOT__CyNib__8__W)))));
        tb_top__DOT__u_dut__DOT__RDBSB1 = (3U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                    >> 4U)));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1 = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_1__CyNib;
    tb_top__DOT__u_dut__DOT__RDBSA0 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U]);
    tb_top__DOT__u_dut__DOT__RDBSB0 = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                             >> 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | (((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1PN) | (((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1PN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1PN) | ((((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | ((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                .__PVT__ON) & ((0U 
                                                == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                               | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                  .__PVT__ON))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | (((((4U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                  .__PVT__ON)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((5U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((6U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1CH) | (((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1CH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1CH) | ((((((7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | ((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                   .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                 .__PVT__ON) & ((0U 
                                                 == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                   .__PVT__ON))) 
                               & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | (((((((0x0cU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                   .__PVT__ON)) & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA0VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxA1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxA1VS) | (((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__VCSC) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                  .__PVT__ON) & ((0U 
                                                  == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                                 | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                    .__PVT__ON))) 
                                & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB0VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB0VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxB1VS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxB1VS) | ((((((((0x0dU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)) 
                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                     .__PVT__VCSC) 
                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                   .__PVT__ON) & ((0U 
                                                   == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                                  | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                                     .__PVT__ON))) 
                                 & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                    .__PVT__ON)) & 
                                (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH))) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxPN_FETCH[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA0PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA1PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((2U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA0PN);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1PN 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA1PN);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0PN 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB0PN);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1PN 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1PN) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA0CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA1CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1CH) | (((3U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CH 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA0CH);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA1CH);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CH 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0CH) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH) 
                                & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                                .__PVT__ON) << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CH 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB1CH);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA0CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxA1CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSA1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB0CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB0)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxB1CT) | (((1U == (IData)(tb_top__DOT__u_dut__DOT__RDBSB1)) 
                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA0CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxA1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxA1CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB0CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB0CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxB1CT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxB1CT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxCRCT 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxCRCT) | (((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                 >> 0x0000000fU) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                               & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                               .__PVT__ON));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxCRCT 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
           .__PVT__RxCRCT);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxCTTP 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxCTTP) | vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTTP[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxCTTP 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxCTTP) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTTP[1U]) 
                               << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__AxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1))) 
            & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
               >> 8U)) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__BxNA 
        = ((((0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0)) 
             | (0x0fU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1))) 
            & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
               >> 9U)) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NOACCESS));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LS_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LW 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LW_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RPA 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RPB 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RCTA 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RCTB 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__R0RP 
        = ((2U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
                         >> 0x00000010U))) ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__R0RPMSB)
            : vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[3U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RP_POS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__BS 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__LN 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxX[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[0U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[0U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[1U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[1U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[2U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[2U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__NxY[3U] 
        = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[3U] 
                          >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxX[0U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxX[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxX[1U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxX[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxY[0U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxY[0U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U].__PVT__RxY[1U] 
        = (vlSelfRef.tb_top__DOT__u_dut__DOT__RxY[1U] 
           >> 0x00000010U);
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D2 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n0d2__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4)
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                 >> 0x0000000dU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF8)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000cU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n0d0__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF4) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_HF8))
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                 >> 0x0000000cU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_QT4)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000dU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D3 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n1d3__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4)
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                 >> 0x0000000dU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF8)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000cU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1 = (0x000000ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__n1d1__DOT__g_ml__DOT__mem
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                               ^ 
                                                               (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF4) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_HF8))
                                                                 ? 
                                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                 >> 0x0000000cU)
                                                                 : 
                                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_QT4)
                                                                  ? 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000dU)
                                                                  : 
                                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                  >> 0x0000000bU)))))] 
                                                           >> 
                                                           (0x00000038U 
                                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                                                >> 8U) 
                                                               << 3U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP = (1U 
                                                & ((0x00020000U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_dut__DOT__RPW_EN) 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
                                                       >> 0x00000010U))
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U] 
                                                    >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0xffffc007U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxX[0U]) << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U] = 
        ((0x007fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[0U]) << 0x00000017U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0xfffffffcU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxY[0U] >> 9U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0xfe003fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxX[1U]) << 0x0000000eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0xffffe003U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[1U]) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0x01ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxX[2U]) << 0x00000019U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U] = 
        ((0x00007ff0U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U]) 
         | (0x00007fffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxX[2U] >> 7U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0xff001fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[2U]) << 0x0000000dU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U] = 
        ((0x0000000fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[7U]) 
         | (0x00007fffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxX[3U]) 
                           << 4U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U] = 
        ((0x00ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[5U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                    .__PVT__NxY[3U]) << 0x00000018U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U] = 
        ((0xfffffff8U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[6U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__NxY[3U] >> 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0x7fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RxX[0U] << 0x0000001fU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U] = 
        ((0xfffff800U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U]) 
         | (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxX[0U] >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0xfff8007fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (0x0007ff80U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxY[0U] << 7U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffff01fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00000fe0U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                           >> 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffffefU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00000010U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                           >> 0x0000001aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffff7U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                  >> 0x0000001aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffffbU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
                  >> 0x0000001aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffffeU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U] = 
        ((0xff8007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[4U]) 
         | (0x007ff800U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxX[1U] << 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0x8007ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (0x7ff80000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxY[1U] << 0x00000013U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffc07fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x003f8000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffbfffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00004000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffdfffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00002000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffffefffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00001000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
                           >> 0x00000010U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfffffffdU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[1U]) 
            << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0xffffffbfU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__R0RP << 6U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0x01ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0xfe000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           << 9U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xfeffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x01000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           >> 6U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xff7fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00800000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           >> 6U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U] = 
        ((0xffbfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[0U]) 
         | (0x00400000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                           >> 6U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffc07U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x000003f8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                           >> 0x0000000dU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffffbU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                  >> 0x0000001cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffffdU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                  >> 0x0000001cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffffeU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U] 
                  >> 0x0000001cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfff01fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x000fe000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffffefffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00001000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 0x00000012U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffff7ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00000800U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 0x00000012U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xfffffbffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00000400U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
                           >> 0x00000012U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xc07fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x3f800000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           << 7U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffbfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00400000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           >> 8U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffdfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00200000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           >> 8U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xffefffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x00100000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
                           >> 8U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xffffff01U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x000000feU & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                           >> 0x0000000fU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffffeU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                  >> 0x0000001eU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0x7fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x80000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                           << 2U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U] = 
        ((0xbfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[1U]) 
         | (0x40000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U] 
                           << 2U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffc07ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x0003f800U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 5U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffbffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00000400U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 0x00000014U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffdffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00000200U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 0x00000014U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffffeffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00000100U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U] 
                           >> 0x00000014U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xf01fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x0fe00000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           << 5U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xffefffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00100000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           >> 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfff7ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00080000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           >> 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xfffbffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x00040000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U] 
                           >> 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0x7fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x80000000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U] 
                           << 0x0000000fU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U] = 
        ((0xffffffc0U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[3U]) 
         | (0x0000003fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U] 
                           >> 0x00000011U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xbfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x40000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xdfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x20000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U] = 
        ((0xefffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP4_D[2U]) 
         | (0x10000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA0CH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA1CH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB0CH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB1CH;
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__R0RP;
    __Vfunc_RxScreenOver__18__RxBMEN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__18__RxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__18__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__18__RxOFFY = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxY[tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__18__RxOFFX = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxX[tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP];
    __Vfunc_RxScreenOver__18__RxOVR = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__PN_RP]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__18__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__18__RxBMEN) {
        if (__Vfunc_RxScreenOver__18__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__18__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__18__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__18__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__18__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__18__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_dut__DOT____VlemCall_4__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[0U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_4__RxScreenOver;
    __Vfunc_RxScreenOver__19__RxBMEN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
        .__PVT__BMEN;
    __Vfunc_RxScreenOver__19__RxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
        .__PVT__BMSZ;
    __Vfunc_RxScreenOver__19__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__PLSZ;
    __Vfunc_RxScreenOver__19__RxOFFY = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxY[1U];
    __Vfunc_RxScreenOver__19__RxOFFX = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__RxX[1U];
    __Vfunc_RxScreenOver__19__RxOVR = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__OVR;
    if ((3U == (IData)(__Vfunc_RxScreenOver__19__RxOVR))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
    } else if (__Vfunc_RxScreenOver__19__RxBMEN) {
        if (__Vfunc_RxScreenOver__19__RxBMSZ) {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xfe00U;
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xfe00U;
            vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xff00U;
        }
    } else if ((2U & (IData)(__Vfunc_RxScreenOver__19__RxPLSZ))) {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx = 0xf000U;
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf000U;
    } else {
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx 
            = ((1U & (IData)(__Vfunc_RxScreenOver__19__RxPLSZ))
                ? 0xf000U : 0xf800U);
        vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my = 0xf800U;
    }
    TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res 
        = ((0U != (IData)(__Vfunc_RxScreenOver__19__RxOVR)) 
           && ((0U != ((IData)(__Vfunc_RxScreenOver__19__RxOFFX) 
                       & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__mx))) 
               | (0U != ((IData)(__Vfunc_RxScreenOver__19__RxOFFY) 
                         & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxScreenOver__Vstatic__my)))));
    tb_top__DOT__u_dut__DOT____VlemCall_5__RxScreenOver 
        = TOP__REF_VDP2_PKG__DOT__RxScreenOver__Vstatic__res;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[1U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_5__RxScreenOver;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA0PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxA1PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB0PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxB1PN;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB1PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB1CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB1CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB1PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB1CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxB1CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA1PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA1CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxA1CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB0PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxB0CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxB0CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (7U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA0PN) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (0x0bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA0CH) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (0x0dU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA0CT) 
                                                      << 1U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA = (
                                                   (0x0eU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)) 
                                                   | (1U 
                                                      & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA0PN 
                                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                           .__PVT__RxA0CH) 
                                                          | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                          .__PVT__RxA0CT) 
                                                         >> 1U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxB1VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxB1CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxB1CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA));
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (
                                                   (0x0fU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0PN) 
                                                      << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (
                                                   (0x17U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0CH) 
                                                      << 3U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (
                                                   (0x1bU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)) 
                                                   | ((0U 
                                                       != vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__NxA0VS) 
                                                      << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA = (0x1cU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA));
    if ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA));
    }
    if ((2U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__NxA0CH) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0VS))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (1U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)));
    }
    if ((4U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (2U | (0x1cU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA)));
    }
    if ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0PN | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
               .__PVT__NxA0CH))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA 
            = (3U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA));
    }
    tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP;
    __Vfunc_RxCTAddr__23__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__23__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__23__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP];
    __Vfunc_RxCTAddr__23__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst
        [tb_top__DOT__u_dut__DOT__unnamedblk2__DOT__CT_RP];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__23__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__23__RxKAst))) 
                                      + __Vfunc_RxCTAddr__23__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__23__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_dut__DOT____VlemCall_8__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR[0U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_8__RxCTAddr;
    __Vfunc_RxCTAddr__24__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__24__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__24__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__24__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__24__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__24__RxKAst))) 
                                      + __Vfunc_RxCTAddr__24__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__24__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    tb_top__DOT__u_dut__DOT____VlemCall_9__RxCTAddr 
        = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR[1U] 
        = tb_top__DOT__u_dut__DOT____VlemCall_9__RxCTAddr;
    __Vfunc_RxCTAddr__25__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__25__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__25__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[0U];
    __Vfunc_RxCTAddr__25__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[0U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__25__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__25__RxKAst))) 
                                      + __Vfunc_RxCTAddr__25__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__25__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__25__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTA_ADDR = __Vfunc_RxCTAddr__25__Vfuncout;
    __Vfunc_RxCTAddr__26__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KDBS;
    __Vfunc_RxCTAddr__26__RxKTAOS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
        .__PVT__KTAOS;
    __Vfunc_RxCTAddr__26__RxKA = vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[1U];
    __Vfunc_RxCTAddr__26__RxKAst = vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[1U];
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
        = (0x0007ffffU & (IData)((0x000000000007ffffULL 
                                  & (((((QData)((IData)(__Vfunc_RxCTAddr__26__RxKTAOS)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_RxCTAddr__26__RxKAst))) 
                                      + __Vfunc_RxCTAddr__26__RxKA) 
                                     >> 0x00000010U))));
    TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr 
        = ((IData)(__Vfunc_RxCTAddr__26__RxKDBS) ? TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs
            : (0x0007fffeU & (TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__offs 
                              << 1U)));
    __Vfunc_RxCTAddr__26__Vfuncout = TOP__REF_VDP2_PKG__DOT__RxCTAddr__Vstatic__addr;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTB_ADDR = __Vfunc_RxCTAddr__26__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC = 0U;
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          >> 1U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          >> 2U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          >> 3U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
         .__PVT__BMEN)) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC 
            = (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC));
    }
    __VdfgRegularize_hebeb780c_0_8 = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                            | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                  | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA;
    vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR = 0U;
    if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH) 
         & (((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
               .__PVT__LZMX) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                   >> 2U))) & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                               >> 0x00000010U)) 
            | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                  .__PVT__LSCX | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                  .__PVT__LSCY) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                 .__PVT__LZMX) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                                  >> 2U)) & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                             >> 0x00000011U))))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NxLS_ADDR
            [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_POS) 
                    >> 2U))];
    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH) 
                & (vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[0U] 
                   | vlSelfRef.tb_top__DOT__u_dut__DOT__LWE[1U]))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__LW_ADDR
            [vlSelfRef.tb_top__DOT__u_dut__DOT__LW_POS];
    } else if ((((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                      >> 0x00000014U)) & (IData)((0x00010000U 
                                                  != 
                                                  (0x00030000U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])))) 
                 | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH) 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                        >> 0x00000014U)) & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x00030000U 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U]))))) 
                | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                    | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH)) 
                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                      >> 0x00000015U)))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RxRP_ADDR;
    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH) 
                & (IData)((0U != (0x00300000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTA_ADDR;
    } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH) 
                & (IData)((0U != (0x00300000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTB_ADDR;
    } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__BS_ADDR;
    } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ADDR 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__LN_ADDR;
    }
    __VdfgRegularize_hebeb780c_0_7 = ((2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))) 
                                              >> 1U) 
                                             << 1U)) 
                                      | (IData)(__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_62 = (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U] 
                                                    >> 2U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U] 
                                                    >> 2U));
    __VdfgRegularize_hebeb780c_0_6 = ((4U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))) 
                                              >> 2U) 
                                             << 2U)) 
                                      | (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNINC = ((8U 
                                                   & (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U]))) 
                                                       >> 3U) 
                                                      << 3U)) 
                                                  | (IData)(__VdfgRegularize_hebeb780c_0_6));
}

void Vtb_top___024root___nba_comb__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_misc[0U] = ((0xf0000000U & vlSelfRef.r_misc[0U]) 
                            | ((0x0ff00000U & (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                                               << 0x0000000cU)) 
                               | ((((0x000003fcU & 
                                     (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                                      >> 0x0000000eU)) 
                                    | ((((((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                           >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R)) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HSYNC))))) 
                                   << 0x0000000aU) 
                                  | (((((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VSYNC)) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT3)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK))))) 
                                       << 7U) | (((
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__INTERLACE_INT)) 
                                                  << 6U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__INTERLACE_INT) 
                                                    << 5U))) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                         << 2U) | (IData)(vlSelfRef.tb_top__DOT__r_VRES))))));
    vlSelfRef.r_misc[0U] = ((0x0fffffffU & vlSelfRef.r_misc[0U]) 
                            | (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                               << 0x0000001cU));
    vlSelfRef.r_misc[1U] = ((0xfff00000U & vlSelfRef.r_misc[1U]) 
                            | ((0x0ffffff0U & ((IData)(vlSelfRef.tb_top__DOT__r_FBDO) 
                                               << 4U)) 
                               | (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                                                 >> 4U))));
    vlSelfRef.r_misc[1U] = ((0xf80fffffU & vlSelfRef.r_misc[1U]) 
                            | ((((((2U & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WLOCK) 
                                           | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RRDY)) 
                                              | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RRDY)) 
                                                 | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRDY)) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BURST) 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT) 
                                                          >> 3U)))))) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VINT)))) 
                                  << 5U) | (((2U & 
                                              ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HINT)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R)) 
                                            << 3U)) 
                                | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                                    << 2U) | ((2U & 
                                               ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HTIM)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VTIM)))))) 
                               << 0x00000014U));
    vlSelfRef.r_misc[1U] = ((0x07ffffffU & vlSelfRef.r_misc[1U]) 
                            | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RD)
                                 ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_DO)
                                 : ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_RD)
                                     ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_DO)
                                     : ((0U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                   >> 0x00000010U)))
                                         ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_Q)
                                         : ((1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                               >> 0x00000010U)))
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_Q)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                     >> 0x00000010U)))
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_Q)
                                                 : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_Q)))))) 
                               << 0x0000001bU));
    vlSelfRef.r_misc[2U] = (0x000007ffU & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RD)
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_DO)
                                             : ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_RD)
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_DO)
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                      >> 0x00000010U)))
                                                  ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA0_Q)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                       >> 0x00000010U)))
                                                   ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMA1_Q)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_RA 
                                                        >> 0x00000010U)))
                                                    ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB0_Q)
                                                    : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAMB1_Q)))))) 
                                           >> 5U));
    vlSelfRef.d_misc[0U] = ((0xf0000000U & vlSelfRef.d_misc[0U]) 
                            | ((0x0ff00000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                                               << 0x0000000cU)) 
                               | ((((0x000003fcU & 
                                     (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                                      >> 0x0000000eU)) 
                                    | ((((((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                           >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HSYNC))))) 
                                   << 0x0000000aU) 
                                  | (((((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VSYNC)) 
                                               << 2U)) 
                                        | ((2U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT3)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK))))) 
                                       << 7U) | (((
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__INTERLACE_INT)) 
                                                  << 6U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__INTERLACE_INT) 
                                                    << 5U))) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                         << 2U) | (IData)(vlSelfRef.tb_top__DOT__d_VRES))))));
    vlSelfRef.d_misc[0U] = ((0x0fffffffU & vlSelfRef.d_misc[0U]) 
                            | (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                               << 0x0000001cU));
    vlSelfRef.d_misc[1U] = ((0xfff00000U & vlSelfRef.d_misc[1U]) 
                            | ((0x0ffffff0U & ((IData)(vlSelfRef.tb_top__DOT__d_FBDO) 
                                               << 4U)) 
                               | (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                                                 >> 4U))));
    vlSelfRef.d_misc[1U] = ((0xf80fffffU & vlSelfRef.d_misc[1U]) 
                            | ((((((2U & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WLOCK) 
                                           | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RRDY)) 
                                              | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RRDY)) 
                                                 | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WRDY)) 
                                                    | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BURST) 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT) 
                                                          >> 3U)))))) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VINT)))) 
                                  << 5U) | (((2U & 
                                              ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HINT)) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)) 
                                            << 3U)) 
                                | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                                    << 2U) | ((2U & 
                                               ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HTIM)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VTIM)))))) 
                               << 0x00000014U));
    vlSelfRef.d_misc[1U] = ((0x07ffffffU & vlSelfRef.d_misc[1U]) 
                            | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RD)
                                 ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_DO)
                                 : ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_RD)
                                     ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_DO)
                                     : ((0U == (3U 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                   >> 0x00000010U)))
                                         ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_Q)
                                         : ((1U == 
                                             (3U & 
                                              (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                               >> 0x00000010U)))
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_Q)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                     >> 0x00000010U)))
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_Q)
                                                 : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_Q)))))) 
                               << 0x0000001bU));
    vlSelfRef.d_misc[2U] = (0x000007ffU & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RD)
                                             ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_DO)
                                             : ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_RD)
                                                 ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_DO)
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                      >> 0x00000010U)))
                                                  ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_Q)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                       >> 0x00000010U)))
                                                   ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_Q)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                                                        >> 0x00000010U)))
                                                    ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_Q)
                                                    : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_Q)))))) 
                                           >> 5U));
}

void Vtb_top___024root___nba_comb__TOP__5(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__N_PCNT;
    tb_top__DOT__u_dut__DOT__N_PCNT = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__N_X;
    tb_top__DOT__u_dut__DOT__N_X = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__N_Y;
    tb_top__DOT__u_dut__DOT__N_Y = 0;
    CData/*1:0*/ tb_top__DOT__u_dut__DOT__N_MPI;
    tb_top__DOT__u_dut__DOT__N_MPI = 0;
    SData/*15:0*/ tb_top__DOT__u_dut__DOT__N_MPW;
    tb_top__DOT__u_dut__DOT__N_MPW = 0;
    CData/*2:0*/ tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7;
    tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7 = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__N_PNA;
    tb_top__DOT__u_dut__DOT__N_PNA = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__R_PSET;
    tb_top__DOT__u_dut__DOT__R_PSET = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_PX;
    tb_top__DOT__u_dut__DOT__R_PX = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_PY;
    tb_top__DOT__u_dut__DOT__R_PY = 0;
    CData/*3:0*/ tb_top__DOT__u_dut__DOT__R_MPI;
    tb_top__DOT__u_dut__DOT__R_MPI = 0;
    SData/*15:0*/ tb_top__DOT__u_dut__DOT__R_MPW;
    tb_top__DOT__u_dut__DOT__R_MPW = 0;
    CData/*3:0*/ tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7;
    tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7 = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__R_PNA;
    tb_top__DOT__u_dut__DOT__R_PNA = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__NC_X;
    tb_top__DOT__u_dut__DOT__NC_X = 0;
    SData/*10:0*/ tb_top__DOT__u_dut__DOT__NC_Y;
    tb_top__DOT__u_dut__DOT__NC_Y = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__N_CH01;
    tb_top__DOT__u_dut__DOT__N_CH01 = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__N_CH23;
    tb_top__DOT__u_dut__DOT__N_CH23 = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__R_CSET;
    tb_top__DOT__u_dut__DOT__R_CSET = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_CX;
    tb_top__DOT__u_dut__DOT__R_CX = 0;
    SData/*11:0*/ tb_top__DOT__u_dut__DOT__R_CY;
    tb_top__DOT__u_dut__DOT__R_CY = 0;
    IData/*18:0*/ tb_top__DOT__u_dut__DOT__R_CHA;
    tb_top__DOT__u_dut__DOT__R_CHA = 0;
    CData/*3:0*/ tb_top__DOT__u_dut__DOT__HCTB;
    tb_top__DOT__u_dut__DOT__HCTB = 0;
    IData/*23:0*/ tb_top__DOT__u_dut__DOT__RB2_D;
    tb_top__DOT__u_dut__DOT__RB2_D = 0;
    CData/*7:0*/ tb_top__DOT__u_dut__DOT__RB3_D;
    tb_top__DOT__u_dut__DOT__RB3_D = 0;
    CData/*0:0*/ tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc;
    tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc = 0;
    CData/*1:0*/ __Vfunc_NxPNMapIdx__9__Vfuncout;
    __Vfunc_NxPNMapIdx__9__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NxPNMapIdx__9__NxPN_CNT;
    __Vfunc_NxPNMapIdx__9__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNMapIdx__9__NxOFFX;
    __Vfunc_NxPNMapIdx__9__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNMapIdx__9__NxOFFY;
    __Vfunc_NxPNMapIdx__9__NxOFFY = 0;
    CData/*1:0*/ __Vfunc_NxPNMapIdx__9__NxPLSZ;
    __Vfunc_NxPNMapIdx__9__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNMapIdx__9__NxZMHF;
    __Vfunc_NxPNMapIdx__9__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNMapIdx__9__NxZMQT;
    __Vfunc_NxPNMapIdx__9__NxZMQT = 0;
    IData/*18:0*/ __Vfunc_NxPNAddr2__10__Vfuncout;
    __Vfunc_NxPNAddr2__10__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr2__10__NxPN_CNT;
    __Vfunc_NxPNAddr2__10__NxPN_CNT = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr2__10__NxOFFX;
    __Vfunc_NxPNAddr2__10__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxPNAddr2__10__NxOFFY;
    __Vfunc_NxPNAddr2__10__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxPNAddr2__10__NxMP;
    __Vfunc_NxPNAddr2__10__NxMP = 0;
    CData/*5:0*/ __Vfunc_NxPNAddr2__10__NxMPe;
    __Vfunc_NxPNAddr2__10__NxMPe = 0;
    CData/*1:0*/ __Vfunc_NxPNAddr2__10__NxPLSZ;
    __Vfunc_NxPNAddr2__10__NxPLSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxCHSZ;
    __Vfunc_NxPNAddr2__10__NxCHSZ = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxPNB;
    __Vfunc_NxPNAddr2__10__NxPNB = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxZMHF;
    __Vfunc_NxPNAddr2__10__NxZMHF = 0;
    CData/*0:0*/ __Vfunc_NxPNAddr2__10__NxZMQT;
    __Vfunc_NxPNAddr2__10__NxZMQT = 0;
    CData/*3:0*/ __Vfunc_RxPNMapIdx__11__Vfuncout;
    __Vfunc_RxPNMapIdx__11__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_RxPNMapIdx__11__RxOFFX;
    __Vfunc_RxPNMapIdx__11__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNMapIdx__11__RxOFFY;
    __Vfunc_RxPNMapIdx__11__RxOFFY = 0;
    CData/*1:0*/ __Vfunc_RxPNMapIdx__11__RxPLSZ;
    __Vfunc_RxPNMapIdx__11__RxPLSZ = 0;
    IData/*18:0*/ __Vfunc_RxPNAddr2__12__Vfuncout;
    __Vfunc_RxPNAddr2__12__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr2__12__RxOFFX;
    __Vfunc_RxPNAddr2__12__RxOFFX = 0;
    SData/*11:0*/ __Vfunc_RxPNAddr2__12__RxOFFY;
    __Vfunc_RxPNAddr2__12__RxOFFY = 0;
    CData/*2:0*/ __Vfunc_RxPNAddr2__12__RxMP;
    __Vfunc_RxPNAddr2__12__RxMP = 0;
    CData/*5:0*/ __Vfunc_RxPNAddr2__12__RxMPe;
    __Vfunc_RxPNAddr2__12__RxMPe = 0;
    CData/*1:0*/ __Vfunc_RxPNAddr2__12__RxPLSZ;
    __Vfunc_RxPNAddr2__12__RxPLSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr2__12__RxCHSZ;
    __Vfunc_RxPNAddr2__12__RxCHSZ = 0;
    CData/*0:0*/ __Vfunc_RxPNAddr2__12__RxPNB;
    __Vfunc_RxPNAddr2__12__RxPNB = 0;
    IData/*18:0*/ __Vfunc_NxCHAddr2__15__Vfuncout;
    __Vfunc_NxCHAddr2__15__Vfuncout = 0;
    VlUnpacked<IData/*31:0*/, 2> __Vfunc_NxCHAddr2__15__NxPN;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vfunc_NxCHAddr2__15__NxPN[__Vi0] = 0;
    }
    CData/*2:0*/ __Vfunc_NxCHAddr2__15__NxCH_CNT;
    __Vfunc_NxCHAddr2__15__NxCH_CNT = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__15__NxOFFX;
    __Vfunc_NxCHAddr2__15__NxOFFX = 0;
    SData/*10:0*/ __Vfunc_NxCHAddr2__15__NxOFFY;
    __Vfunc_NxCHAddr2__15__NxOFFY = 0;
    CData/*2:0*/ __Vfunc_NxCHAddr2__15__NxCHCN;
    __Vfunc_NxCHAddr2__15__NxCHCN = 0;
    CData/*0:0*/ __Vfunc_NxCHAddr2__15__NxCHSZ;
    __Vfunc_NxCHAddr2__15__NxCHSZ = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_59;
    __VdfgRegularize_hebeb780c_0_59 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_60;
    __VdfgRegularize_hebeb780c_0_60 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_61;
    __VdfgRegularize_hebeb780c_0_61 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_66;
    __VdfgRegularize_hebeb780c_0_66 = 0;
    IData/*18:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr = 0;
    IData/*31:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN = 0;
    SData/*10:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX = 0;
    CData/*4:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs = 0;
    CData/*3:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs = 0;
    CData/*3:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs = 0;
    CData/*2:0*/ TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt = 0;
    CData/*1:0*/ TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK;
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX;
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX = 0;
    IData/*18:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr = 0;
    CData/*1:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK = 0;
    SData/*10:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX = 0;
    SData/*8:0*/ TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr = 0;
    IData/*18:0*/ TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr;
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr = 0;
    SData/*8:0*/ TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr;
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr = 0;
    IData/*31:0*/ __VExpandSel_Lsb_1;
    IData/*31:0*/ __VExpandSel_Lsb_2;
    IData/*31:0*/ __VExpandSel_Lsb_3;
    IData/*31:0*/ __VExpandSel_Lsb_4;
    IData/*31:0*/ __VExpandSel_Lsb_5;
    // Body
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WE = ((7U 
                                                  == 
                                                  ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                                                   | (4U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                                         << 1U)))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R));
    __VdfgRegularize_hebeb780c_0_66 = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                             [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL] 
                                             >> 1U));
    __VdfgRegularize_hebeb780c_0_1 = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL]);
    __VdfgRegularize_hebeb780c_0_0 = (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL]);
    tb_top__DOT__u_dut__DOT__N_PCNT = ((IData)(__VdfgRegularize_hebeb780c_0_66)
                                        ? 0U : vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT
                                       [(1U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                         [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])]);
    tb_top__DOT__u_dut__DOT__R_CSET = (1U & ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__g_m10k__DOT__q[3U] 
                                                >> 6U)));
    tb_top__DOT__u_dut__DOT__R_PSET = ((IData)(__VdfgRegularize_hebeb780c_0_1) 
                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__R0RP);
    if ((1U & (IData)(__VdfgRegularize_hebeb780c_0_0))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[0U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[0U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[1U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[1U];
    } else {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[0U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[0U];
        vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23[1U] 
            = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[1U];
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(7U & ((IData)(4U) + (1U & (IData)(__VdfgRegularize_hebeb780c_0_0))))];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(7U & ((IData)(2U) + (1U & (IData)(__VdfgRegularize_hebeb780c_0_0))))];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U]
        [(7U & ((IData)(6U) + (1U & (IData)(__VdfgRegularize_hebeb780c_0_0))))];
    __VExpandSel_Lsb_1 = ((IData)(0x0000005dU) + (0x0000003fU 
                                                  & ((IData)(0x0000000bU) 
                                                     * (IData)(__VdfgRegularize_hebeb780c_0_0))));
    tb_top__DOT__u_dut__DOT__NC_X = (0x000007ffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_1))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000aU) 
                                                   + __VExpandSel_Lsb_1) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_1)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_1 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_1))));
    __VExpandSel_Lsb_2 = ((IData)(0x00000031U) + (0x0000003fU 
                                                  & ((IData)(0x0000000bU) 
                                                     * (IData)(__VdfgRegularize_hebeb780c_0_0))));
    tb_top__DOT__u_dut__DOT__NC_Y = (0x000007ffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_2))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000aU) 
                                                   + __VExpandSel_Lsb_2) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_2)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_2 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_2))));
    tb_top__DOT__u_dut__DOT__N_X = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxX[__VdfgRegularize_hebeb780c_0_0];
    tb_top__DOT__u_dut__DOT__N_Y = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
        .__PVT__NxY[__VdfgRegularize_hebeb780c_0_0];
    __VExpandSel_Lsb_3 = ((IData)(0x00000019U) + (0x0000001fU 
                                                  & ((IData)(0x0000000cU) 
                                                     * (IData)(tb_top__DOT__u_dut__DOT__R_CSET))));
    tb_top__DOT__u_dut__DOT__R_CX = (0x00000fffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_3))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000bU) 
                                                   + __VExpandSel_Lsb_3) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_3)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_3 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_3))));
    __VExpandSel_Lsb_4 = ((IData)(1U) + (0x0000001fU 
                                         & ((IData)(0x0000000cU) 
                                            * (IData)(tb_top__DOT__u_dut__DOT__R_CSET))));
    tb_top__DOT__u_dut__DOT__R_CY = (0x00000fffU & 
                                     (((0U == (0x0000001fU 
                                               & __VExpandSel_Lsb_4))
                                        ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                [(((IData)(0x0000000bU) 
                                                   + __VExpandSel_Lsb_4) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_4)))) 
                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                         [(__VExpandSel_Lsb_4 
                                           >> 5U)] 
                                         >> (0x0000001fU 
                                             & __VExpandSel_Lsb_4))));
    tb_top__DOT__u_dut__DOT__R_PX = (0x00000fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__RxX[tb_top__DOT__u_dut__DOT__R_PSET]);
    tb_top__DOT__u_dut__DOT__R_PY = (0x00000fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__RxY[tb_top__DOT__u_dut__DOT__R_PSET]);
    __Vfunc_NxCHAddr2__15__NxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [(2U | (1U & (IData)(__VdfgRegularize_hebeb780c_0_0)))]
        .__PVT__CHSZ;
    __Vfunc_NxCHAddr2__15__NxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [(2U | (1U & (IData)(__VdfgRegularize_hebeb780c_0_0)))]
        .__PVT__CHCN;
    __Vfunc_NxCHAddr2__15__NxOFFY = tb_top__DOT__u_dut__DOT__NC_Y;
    __Vfunc_NxCHAddr2__15__NxOFFX = tb_top__DOT__u_dut__DOT__NC_X;
    __Vfunc_NxCHAddr2__15__NxCH_CNT = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT
        [(2U | (1U & (IData)(__VdfgRegularize_hebeb780c_0_0)))];
    __Vfunc_NxCHAddr2__15__NxPN = vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN23;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
        = ((0U == (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
            ? __Vfunc_NxCHAddr2__15__NxPN[0U] : ((1U 
                                                  == (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                                                  ? __Vfunc_NxCHAddr2__15__NxPN
                                                 [(1U 
                                                   & (IData)(__Vfunc_NxCHAddr2__15__NxCH_CNT))]
                                                  : __Vfunc_NxCHAddr2__15__NxPN[0U]));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX 
        = __Vfunc_NxCHAddr2__15__NxOFFX;
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs 
        = (0x0000000fU & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__OFFX) 
                          ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                              >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs 
        = (0x0000000fU & ((IData)(__Vfunc_NxCHAddr2__15__NxOFFY) 
                          ^ (- (IData)((TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                        >> 0x0000001fU)))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt 
        = (7U & ((IData)(__Vfunc_NxCHAddr2__15__NxCH_CNT) 
                 ^ (- (IData)((1U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                     >> 0x0000001eU))))));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs 
        = ((IData)(__Vfunc_NxCHAddr2__15__NxCHSZ) ? 
           ((0x00000010U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs) 
                            << 1U)) | ((8U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__x_offs)) 
                                       | (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs))))
            : (7U & (IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__y_offs)));
    TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr 
        = (0x0007ffffU & ((4U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                           ? ((2U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                               ? 0U : ((1U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                                        ? 0U : (((0x0007fff0U 
                                                  & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                     << 4U)) 
                                                 + 
                                                 ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                                  << 4U)) 
                                                + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                   << 1U))))
                           : ((2U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                               ? (((0x0007fff0U & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                                   << 4U)) 
                                   + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                      << 3U)) + (6U 
                                                 & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                                    << 1U)))
                               : ((1U & (IData)(__Vfunc_NxCHAddr2__15__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                          << 2U)) + 
                                      (2U & ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((0x0007fff0U 
                                       & (TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__PN 
                                          << 4U)) + 
                                      ((IData)(TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__cell_offs) 
                                       << 1U))))));
    __Vfunc_NxCHAddr2__15__Vfuncout = TOP__REF_VDP2_PKG__DOT__NxCHAddr2__Vstatic__addr;
    tb_top__DOT__u_dut__DOT__N_CH23 = __Vfunc_NxCHAddr2__15__Vfuncout;
    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[(1U 
                                                   & (IData)(__VdfgRegularize_hebeb780c_0_0))]
        .__PVT__BMEN) {
        vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY = tb_top__DOT__u_dut__DOT__NC_Y;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX = tb_top__DOT__u_dut__DOT__NC_X;
        vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))];
        vlSelfRef.__Vfunc_NxBMAddr__13__NxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs 
            = ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ))
                ? ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ))
                    ? ((0x0000ff80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00007f80U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U))))
                : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBMSZ))
                    ? ((0x00007fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U)))
                    : ((0x00003fc0U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFY) 
                                       << 6U)) | (0x0000003fU 
                                                  & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxOFFX) 
                                                     >> 3U)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                            ? 0U : 
                                           ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                              << 0x00000010U) 
                                             + (0x0007fff0U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                                   << 4U))) 
                                            + ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                   ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                        << 0x00000010U) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxCHCN))
                                       ? ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 2U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                                   << 1U)))
                                       : ((((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxMP) 
                                            << 0x00000010U) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__offs) 
                                              << 1U)) 
                                          + (6U & ((IData)(vlSelfRef.__Vfunc_NxBMAddr__13__NxBM_CNT) 
                                                   << 1U)))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_2__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_NxCHAddr__14__NxZMQT = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__ZMQT;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxZMHF = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__ZMHF;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__CHSZ;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFY = tb_top__DOT__u_dut__DOT__NC_Y;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX = tb_top__DOT__u_dut__DOT__NC_X;
        vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT
            [(1U & (IData)(__VdfgRegularize_hebeb780c_0_0))];
        vlSelfRef.__Vfunc_NxCHAddr__14__NxPN = vlSelfRef.tb_top__DOT__u_dut__DOT__NC_PN;
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK 
            = (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxZMQT) 
                << 1U) | ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxZMQT) 
                          | (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxZMHF)));
        if ((0U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__14__NxPN
                [((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX) 
                                  + (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                                      & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)) 
                                     << 3U)));
        } else if ((1U == (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))) {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__14__NxPN
                [(1U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                         >> 1U) & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK)))];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX) 
                                  + (8U & (((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ZM_MASK) 
                                              << 3U)))));
        } else {
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                = vlSelfRef.__Vfunc_NxCHAddr__14__NxPN[0U];
            vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX 
                = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFX));
        }
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__OFFX) 
                              ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxOFFY) 
                              ^ (- (IData)((vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt 
            = (7U & ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCH_CNT) 
                     ^ (- (IData)((1U & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                         >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                            ? 0U : 
                                           (((0x0007fff0U 
                                              & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                                 << 4U)) 
                                             + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                                << 4U)) 
                                            + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                   ? (((0x0007fff0U 
                                        & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                           << 4U)) 
                                       + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                          << 3U)) + 
                                      (6U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                             << 1U)))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_NxCHAddr__14__NxCHCN))
                                       ? (((0x0007fff0U 
                                            & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                               << 4U)) 
                                           + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                              << 2U)) 
                                          + (2U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__ch_cnt) 
                                                   << 1U)))
                                       : ((0x0007fff0U 
                                           & (vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__PN 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_2__NxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.NxCHAddr__Vstatic__addr;
    }
    tb_top__DOT__u_dut__DOT__N_CH01 = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_2__NxBMAddr;
    __Vfunc_NxPNMapIdx__9__NxZMQT = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMQT;
    __Vfunc_NxPNMapIdx__9__NxZMHF = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMHF;
    __Vfunc_NxPNMapIdx__9__NxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__PLSZ;
    __Vfunc_NxPNMapIdx__9__NxOFFY = tb_top__DOT__u_dut__DOT__N_Y;
    __Vfunc_NxPNMapIdx__9__NxOFFX = tb_top__DOT__u_dut__DOT__N_X;
    __Vfunc_NxPNMapIdx__9__NxPN_CNT = tb_top__DOT__u_dut__DOT__N_PCNT;
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNMapIdx__9__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNMapIdx__9__NxZMQT) 
                      | (IData)(__Vfunc_NxPNMapIdx__9__NxZMHF)));
    TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX = 
        (0x000007ffU & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFX) 
                        + (((IData)(__Vfunc_NxPNMapIdx__9__NxPN_CNT) 
                            & (IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__ZM_MASK)) 
                           << 3U)));
    __Vfunc_NxPNMapIdx__9__Vfuncout = ((0U == (IData)(__Vfunc_NxPNMapIdx__9__NxPLSZ))
                                        ? ((2U & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFY) 
                                                  >> 8U)) 
                                           | (1U & 
                                              ((IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX) 
                                               >> 9U)))
                                        : ((1U == (IData)(__Vfunc_NxPNMapIdx__9__NxPLSZ))
                                            ? ((2U 
                                                & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFY) 
                                                   >> 8U)) 
                                               | (1U 
                                                  & ((IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX) 
                                                     >> 0x0aU)))
                                            : ((2U 
                                                & ((IData)(__Vfunc_NxPNMapIdx__9__NxOFFY) 
                                                   >> 9U)) 
                                               | (1U 
                                                  & ((IData)(TOP__VDP2_PKG__DOT__NxPNMapIdx__Vstatic__OFFX) 
                                                     >> 0x0aU)))));
    tb_top__DOT__u_dut__DOT__N_MPI = __Vfunc_NxPNMapIdx__9__Vfuncout;
    if (((~ (IData)(__VdfgRegularize_hebeb780c_0_1)) 
         & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
         .__PVT__BMEN)) {
        vlSelfRef.__Vfunc_RxBMAddr__16__RxBMSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
            .__PVT__BMSZ;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
            .__PVT__CHCN;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFY = tb_top__DOT__u_dut__DOT__R_CY;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFX = tb_top__DOT__u_dut__DOT__R_CX;
        vlSelfRef.__Vfunc_RxBMAddr__16__RxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
            [tb_top__DOT__u_dut__DOT__R_CSET].__PVT__MP;
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
            = ((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxBMSZ)
                ? ((0x0003fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFX)))
                : ((0x0001fe00U & ((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFY) 
                                   << 9U)) | (0x000001ffU 
                                              & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxOFFX))));
        vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                             << 0x00000010U) 
                                            + (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                               << 1U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                   ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                       << 0x00000010U) 
                                      + (0x0003fffeU 
                                         & vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxCHCN))
                                       ? (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0001fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 1U)))
                                       : (((IData)(vlSelfRef.__Vfunc_RxBMAddr__16__RxMP) 
                                           << 0x00000010U) 
                                          + (0x0000fffeU 
                                             & (vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__offs 
                                                >> 2U)))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_3__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxBMAddr__Vstatic__addr;
    } else {
        vlSelfRef.__Vfunc_RxCHAddr__17__RxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
            [__VdfgRegularize_hebeb780c_0_1].__PVT__CHSZ;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
            [__VdfgRegularize_hebeb780c_0_1].__PVT__CHCN;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFY = tb_top__DOT__u_dut__DOT__R_CY;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFX = tb_top__DOT__u_dut__DOT__R_CX;
        vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[1U]
            [__VdfgRegularize_hebeb780c_0_1];
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFX) 
                              ^ (- (IData)((1U & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                                  >> 0x0000001eU))))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxOFFY) 
                              ^ (- (IData)((vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                            >> 0x0000001fU)))));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs 
            = ((IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHSZ)
                ? ((0x00000010U & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs) 
                                   << 1U)) | ((8U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs)) 
                                              | (7U 
                                                 & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs))))
                : (7U & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__y_offs)));
        vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr 
            = (0x0007ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                   ? 0U : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                            ? 0U : 
                                           ((0x0007fff0U 
                                             & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                                << 4U)) 
                                            + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                                << 4U) 
                                               | (0x0000000eU 
                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                     << 1U))))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                   ? ((0x0007fff0U 
                                       & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                          << 4U)) + 
                                      (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                        << 3U) | (6U 
                                                  & (IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs))))
                                   : ((1U & (IData)(vlSelfRef.__Vfunc_RxCHAddr__17__RxCHCN))
                                       ? ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                              << 4U)) 
                                          + (((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                              << 2U) 
                                             | (2U 
                                                & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__x_offs) 
                                                   >> 1U))))
                                       : ((0x0007fff0U 
                                           & (vlSelfRef.__Vfunc_RxCHAddr__17__RxPNx 
                                              << 4U)) 
                                          + ((IData)(vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__cell_offs) 
                                             << 1U))))));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_3__RxBMAddr 
            = vlSymsp->TOP__REF_VDP2_PKG.RxCHAddr__Vstatic__addr;
    }
    tb_top__DOT__u_dut__DOT__R_CHA = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_3__RxBMAddr;
    __Vfunc_RxPNMapIdx__11__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__R_PSET].__PVT__PLSZ;
    __Vfunc_RxPNMapIdx__11__RxOFFY = tb_top__DOT__u_dut__DOT__R_PY;
    __Vfunc_RxPNMapIdx__11__RxOFFX = tb_top__DOT__u_dut__DOT__R_PX;
    __Vfunc_RxPNMapIdx__11__Vfuncout = ((0U == (IData)(__Vfunc_RxPNMapIdx__11__RxPLSZ))
                                         ? ((0x0000000cU 
                                             & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFY) 
                                                >> 7U)) 
                                            | (3U & 
                                               ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFX) 
                                                >> 9U)))
                                         : ((1U == (IData)(__Vfunc_RxPNMapIdx__11__RxPLSZ))
                                             ? ((0x0000000cU 
                                                 & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFY) 
                                                    >> 7U)) 
                                                | (3U 
                                                   & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFX) 
                                                      >> 0x0aU)))
                                             : ((0x0000000cU 
                                                 & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFY) 
                                                    >> 8U)) 
                                                | (3U 
                                                   & ((IData)(__Vfunc_RxPNMapIdx__11__RxOFFX) 
                                                      >> 0x0aU)))));
    tb_top__DOT__u_dut__DOT__R_MPI = __Vfunc_RxPNMapIdx__11__Vfuncout;
    tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7 
        = (((IData)(__VdfgRegularize_hebeb780c_0_0) 
            << 1U) | (1U & ((IData)(tb_top__DOT__u_dut__DOT__N_MPI) 
                            >> 1U)));
    tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7 
        = (((IData)(tb_top__DOT__u_dut__DOT__R_PSET) 
            << 3U) | (7U & ((IData)(tb_top__DOT__u_dut__DOT__R_MPI) 
                            >> 1U)));
    tb_top__DOT__u_dut__DOT__N_MPW = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld) 
                                             >> (IData)(tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7)))
                                       ? vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__g_ml__DOT__mem
                                      [tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber7]
                                       : 0U);
    tb_top__DOT__u_dut__DOT__R_MPW = ((1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld) 
                                             >> (IData)(tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7)))
                                       ? vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__g_ml__DOT__mem
                                      [tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber7]
                                       : 0U);
    __Vfunc_NxPNAddr2__10__NxZMQT = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMQT;
    __Vfunc_NxPNAddr2__10__NxZMHF = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__ZMHF;
    __Vfunc_NxPNAddr2__10__NxPNB = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                          [__VdfgRegularize_hebeb780c_0_0]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_NxPNAddr2__10__NxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__CHSZ;
    __Vfunc_NxPNAddr2__10__NxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__PLSZ;
    __Vfunc_NxPNAddr2__10__NxMPe = (0x0000003fU & (
                                                   (1U 
                                                    & (IData)(tb_top__DOT__u_dut__DOT__N_MPI))
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_dut__DOT__N_MPW) 
                                                    >> 8U)
                                                    : (IData)(tb_top__DOT__u_dut__DOT__N_MPW)));
    __Vfunc_NxPNAddr2__10__NxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
        [__VdfgRegularize_hebeb780c_0_0].__PVT__MP;
    __Vfunc_NxPNAddr2__10__NxOFFY = tb_top__DOT__u_dut__DOT__N_Y;
    __Vfunc_NxPNAddr2__10__NxOFFX = tb_top__DOT__u_dut__DOT__N_X;
    __Vfunc_NxPNAddr2__10__NxPN_CNT = tb_top__DOT__u_dut__DOT__N_PCNT;
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK 
        = (((IData)(__Vfunc_NxPNAddr2__10__NxZMQT) 
            << 1U) | ((IData)(__Vfunc_NxPNAddr2__10__NxZMQT) 
                      | (IData)(__Vfunc_NxPNAddr2__10__NxZMHF)));
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX = 
        (0x000007ffU & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFX) 
                        + (((IData)(__Vfunc_NxPNAddr2__10__NxPN_CNT) 
                            & (IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__ZM_MASK)) 
                           << 3U)));
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_NxPNAddr2__10__NxPLSZ))
            ? (((IData)(__Vfunc_NxPNAddr2__10__NxMP) 
                << 6U) | ((0x0000003cU & (IData)(__Vfunc_NxPNAddr2__10__NxMPe)) 
                          | ((2U & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_NxPNAddr2__10__NxPLSZ))
                ? (((IData)(__Vfunc_NxPNAddr2__10__NxMP) 
                    << 6U) | ((0x0000003eU & (IData)(__Vfunc_NxPNAddr2__10__NxMPe)) 
                              | (1U & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_NxPNAddr2__10__NxMP) 
                 << 6U) | (IData)(__Vfunc_NxPNAddr2__10__NxMPe))));
    TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr = 
        ((IData)(__Vfunc_NxPNAddr2__10__NxPNB) ? ((IData)(__Vfunc_NxPNAddr2__10__NxCHSZ)
                                                   ? 
                                                  (((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                                    << 0x0000000aU) 
                                                   | ((0x000003e0U 
                                                       & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                                          << 1U)) 
                                                      | (0x0000001fU 
                                                         & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                            >> 4U))))
                                                   : 
                                                  ((0x0007f000U 
                                                    & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                                       << 0x0000000cU)) 
                                                   | ((0x00000fc0U 
                                                       & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                                          << 3U)) 
                                                      | (0x0000003fU 
                                                         & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                            >> 3U)))))
          : ((IData)(__Vfunc_NxPNAddr2__10__NxCHSZ)
              ? ((0x0007f800U & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000bU)) | 
                 ((0x000007c0U & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                  << 2U)) | (0x0000003eU 
                                             & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                >> 3U))))
              : ((0x0007e000U & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000dU)) | 
                 ((0x00001f80U & ((IData)(__Vfunc_NxPNAddr2__10__NxOFFY) 
                                  << 4U)) | (0x0000007eU 
                                             & ((IData)(TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__OFFX) 
                                                >> 2U))))));
    __Vfunc_NxPNAddr2__10__Vfuncout = TOP__VDP2_PKG__DOT__NxPNAddr2__Vstatic__addr;
    tb_top__DOT__u_dut__DOT__N_PNA = __Vfunc_NxPNAddr2__10__Vfuncout;
    __Vfunc_RxPNAddr2__12__RxPNB = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
                                          [__VdfgRegularize_hebeb780c_0_1]
                                          .__PVT__PNC 
                                          >> 0x0000000fU));
    __Vfunc_RxPNAddr2__12__RxCHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG
        [__VdfgRegularize_hebeb780c_0_1].__PVT__CHSZ;
    __Vfunc_RxPNAddr2__12__RxPLSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__R_PSET].__PVT__PLSZ;
    __Vfunc_RxPNAddr2__12__RxMPe = (0x0000003fU & (
                                                   (1U 
                                                    & (IData)(tb_top__DOT__u_dut__DOT__R_MPI))
                                                    ? 
                                                   ((IData)(tb_top__DOT__u_dut__DOT__R_MPW) 
                                                    >> 8U)
                                                    : (IData)(tb_top__DOT__u_dut__DOT__R_MPW)));
    __Vfunc_RxPNAddr2__12__RxMP = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
        [tb_top__DOT__u_dut__DOT__R_PSET].__PVT__MP;
    __Vfunc_RxPNAddr2__12__RxOFFY = tb_top__DOT__u_dut__DOT__R_PY;
    __Vfunc_RxPNAddr2__12__RxOFFX = tb_top__DOT__u_dut__DOT__R_PX;
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr 
        = ((2U & (IData)(__Vfunc_RxPNAddr2__12__RxPLSZ))
            ? (((IData)(__Vfunc_RxPNAddr2__12__RxMP) 
                << 6U) | ((0x0000003cU & (IData)(__Vfunc_RxPNAddr2__12__RxMPe)) 
                          | ((2U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                    >> 8U)) | (1U & 
                                               ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                >> 9U)))))
            : ((1U & (IData)(__Vfunc_RxPNAddr2__12__RxPLSZ))
                ? (((IData)(__Vfunc_RxPNAddr2__12__RxMP) 
                    << 6U) | ((0x0000003eU & (IData)(__Vfunc_RxPNAddr2__12__RxMPe)) 
                              | (1U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                       >> 9U)))) : 
               (((IData)(__Vfunc_RxPNAddr2__12__RxMP) 
                 << 6U) | (IData)(__Vfunc_RxPNAddr2__12__RxMPe))));
    TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr = 
        ((IData)(__Vfunc_RxPNAddr2__12__RxPNB) ? ((IData)(__Vfunc_RxPNAddr2__12__RxCHSZ)
                                                   ? 
                                                  (((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                                    << 0x0000000aU) 
                                                   | ((0x000003e0U 
                                                       & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                                          << 1U)) 
                                                      | (0x0000001fU 
                                                         & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                            >> 4U))))
                                                   : 
                                                  ((0x0007f000U 
                                                    & ((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                                       << 0x0000000cU)) 
                                                   | ((0x00000fc0U 
                                                       & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                                          << 3U)) 
                                                      | (0x0000003fU 
                                                         & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                            >> 3U)))))
          : ((IData)(__Vfunc_RxPNAddr2__12__RxCHSZ)
              ? ((0x0007f800U & ((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000bU)) | 
                 ((0x000007c0U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                  << 2U)) | (0x0000003eU 
                                             & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                >> 3U))))
              : ((0x0007e000U & ((IData)(TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__map_addr) 
                                 << 0x0000000dU)) | 
                 ((0x00001f80U & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFY) 
                                  << 4U)) | (0x0000007eU 
                                             & ((IData)(__Vfunc_RxPNAddr2__12__RxOFFX) 
                                                >> 2U))))));
    __Vfunc_RxPNAddr2__12__Vfuncout = TOP__VDP2_PKG__DOT__RxPNAddr2__Vstatic__addr;
    tb_top__DOT__u_dut__DOT__R_PNA = __Vfunc_RxPNAddr2__12__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__UO = (0x0007ffffU 
                                             & ((2U 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                                 [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                 ? vlSelfRef.tb_top__DOT__u_dut__DOT__RxCT_ADDR
                                                [__VdfgRegularize_hebeb780c_0_1]
                                                 : 
                                                ((4U 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                  ? tb_top__DOT__u_dut__DOT__R_CHA
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV
                                                   [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                   ? tb_top__DOT__u_dut__DOT__R_PNA
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                                    [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                    ? 
                                                   ((0x0007fffeU 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[32U]) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_OFFS) 
                                                     << 1U))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                                     [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL])
                                                     ? 
                                                    ((IData)(__VdfgRegularize_hebeb780c_0_66)
                                                      ? tb_top__DOT__u_dut__DOT__N_CH23
                                                      : tb_top__DOT__u_dut__DOT__N_CH01)
                                                     : 
                                                    (tb_top__DOT__u_dut__DOT__N_PNA 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV
                                                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__USEL] 
                                                                      >> 4U)))))))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__AD = (((QData)((IData)(
                                                              ((vlSelfRef.tb_top__DOT__u_dut__DOT__UO 
                                                                << 0x00000010U) 
                                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__HA[2U]))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HA[1U]) 
                                                                 << 0x00000010U) 
                                                                | vlSelfRef.tb_top__DOT__u_dut__DOT__HA[0U]))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH = ((3U 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__UO 
                                                     >> 0x00000010U)) 
                                                 == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USEL));
    vlSelfRef.tb_top__DOT__u_dut__DOT__HVS = (((((vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U] 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                                << 3U) 
                                               | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U] 
                                                      >> 2U)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__MT = (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH) 
                                                << 1U) 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U]) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U]) 
                                                 << 1U) 
                                                | vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 0U;
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
          & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
             >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                          >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
             >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                          >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if (((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
          & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
             >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                          >> 9U) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U]) 
                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (1U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
           >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
           >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
           >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
           >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
           >> 2U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
           >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
           >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
           >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (4U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[0U] 
           >> 3U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)) 
         & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
              >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
            | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
            .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[1U] 
           >> 3U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 1U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[2U] 
           >> 3U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 2U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKCH[3U] 
           >> 3U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                     >> 3U)) & (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U]) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                .__PVT__BMEN))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN = 
            (8U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
    }
    tb_top__DOT__u_dut__DOT__HCTB = (((((vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[3U] 
                                         >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                       << 3U) | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[2U] 
                                                     >> 1U)) 
                                                 << 2U)) 
                                     | ((2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[1U] 
                                                 >> 1U) 
                                                << 1U) 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT))) 
                                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[0U] 
                                              >> 1U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[0U] 
        = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                  .__PVT__NxA0PN & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1PN & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                             >> 1U)))
                     ? 1U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((0x0eU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[0U] 
        = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                  .__PVT__NxA0CH & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1CH & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                             >> 1U)))
                     ? 1U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS 
        = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxVS) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0VS 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1VS) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0VS) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1VS)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVSS[0U] 
        = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                  .__PVT__NxA0VS & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1VS & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                             >> 1U)))
                     ? 1U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0VS 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_CNT[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[0U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[1U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0PN >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1PN & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                     ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxB0PN 
                                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((0x0dU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[1U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0CH >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1CH & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                     ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxB0CH 
                                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS 
        = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxVS) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0VS 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1VS) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0VS) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1VS)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVSS[1U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0VS >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__NxA1VS & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                     ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxB0VS 
                                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_CNT[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[1U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (4U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[2U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0PN >> 2U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1PN >> 2U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((4U & 
                                              (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__NxB0PN 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((0x0bU & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (4U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[2U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0CH >> 2U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1CH >> 2U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((4U & 
                                              (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__NxB0CH 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[2U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxPN) | (8U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0PN 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1PN) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0PN) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1PN)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPNS[3U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0PN >> 3U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1PN >> 3U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((1U & 
                                              ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                .__PVT__NxB0PN 
                                                >> 3U) 
                                               & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                  >> 2U)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
        = ((7U & vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
            .__PVT__NxCH) | (8U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA0CH 
                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                     .__PVT__NxA1CH) 
                                    | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__NxB0CH) 
                                   | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxB1CH)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[3U] 
        = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                   .__PVT__NxA0CH >> 3U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
            ? 0U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__NxA1CH >> 3U) & 
                           ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                            >> 1U))) ? 1U : ((1U & 
                                              ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                .__PVT__NxB0CH 
                                                >> 3U) 
                                               & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                  >> 2U)))
                                              ? 2U : 3U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN_EN[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_CNT[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH_EN[3U] 
        = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[3U];
    tb_top__DOT__u_dut__DOT__RB2_D = 0U;
    tb_top__DOT__u_dut__DOT__RB3_D = 0U;
    tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc 
        = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[0U]);
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00bfffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00400000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CT 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CT) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CT) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CT) 
                                            << 0x00000016U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fcffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                 .__PVT__RxA0CT 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CT 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                        .__PVT__RxB0CT 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x00000010U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00efffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00100000U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCRCT 
                                            << 0x00000014U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffbfffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00004000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0PN 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1PN) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0PN) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1PN) 
                                            << 0x0000000eU)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fff3ffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                 .__PVT__RxA0PN 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1PN 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                        .__PVT__RxB0PN 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x0000000aU));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffeffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[0U]) 
                                         << 8U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffffbfU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000040U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCTTP 
                                            << 6U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffffefU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000010U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CH 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CH) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CH) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CH) 
                                            << 4U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffffcU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                .__PVT__RxA0CH 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                          ? 0U : ((1U 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                      .__PVT__RxA1CH 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                         >> 1U)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxB0CH 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 2U)))
                                                    ? 2U
                                                    : 3U))));
    __VExpandSel_Lsb_5 = ((IData)(0x00000019U) + (0x0000001fU 
                                                  & ((IData)(0x0000000cU) 
                                                     * (IData)(tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc))));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0xf8U & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (7U & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_5))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                 [(
                                                   ((IData)(2U) 
                                                    + __VExpandSel_Lsb_5) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_5)))) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                                  [
                                                  (__VExpandSel_Lsb_5 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_5)))));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0xbfU & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (0x00000040U 
                                         & (tb_top__DOT__u_dut__DOT__RB2_D 
                                            << 2U)));
    tb_top__DOT__u_dut__DOT__unnamedblk20__DOT__CH_RPc = 1U;
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x007fffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00800000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CT 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CT) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CT) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CT) 
                                            << 0x00000016U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00f3ffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                  .__PVT__RxA0CT 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (2U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CT 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                         .__PVT__RxB0CT 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x00000012U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00dfffffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00200000U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCRCT 
                                            << 0x00000014U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ff7fffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00008000U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0PN 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1PN) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0PN) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1PN) 
                                            << 0x0000000eU)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffcfffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                  .__PVT__RxA0PN 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (2U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1PN 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                         .__PVT__RxB0PN 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 0x0000000cU));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffdffU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[1U]) 
                                         << 9U));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffff7fU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000080U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxCTTP 
                                            << 6U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00ffffdfU 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (0x00000020U 
                                         & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA0CH 
                                               | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                               .__PVT__RxA1CH) 
                                              | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                              .__PVT__RxB0CH) 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB1CH) 
                                            << 4U)));
    tb_top__DOT__u_dut__DOT__RB2_D = ((0x00fffff3U 
                                       & tb_top__DOT__u_dut__DOT__RB2_D) 
                                      | (((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                  .__PVT__RxA0CH 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                           ? 0U : (
                                                   (2U 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                       .__PVT__RxA1CH 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                         .__PVT__RxB0CH 
                                                         >> 1U) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                           >> 2U)))
                                                     ? 2U
                                                     : 3U))) 
                                         << 2U));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0xc7U & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (0x00000038U 
                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[1U] 
                                            >> 2U)));
    tb_top__DOT__u_dut__DOT__RB3_D = ((0x7fU & (IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                      | (0x00000080U 
                                         & (tb_top__DOT__u_dut__DOT__RB2_D 
                                            << 2U)));
    __VdfgRegularize_hebeb780c_0_9 = (1U & (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                          & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT))))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 0U;
    if ((1U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[0U]))));
    }
    if ((2U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[1U]))));
    }
    if ((4U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[2U]))));
    }
    if ((8U & (IData)(tb_top__DOT__u_dut__DOT__HCTB))) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN = 
            ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
             | (3U & ((IData)(1U) << (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBV[3U]))));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HVS) 
                                                 | (IData)(tb_top__DOT__u_dut__DOT__HCTB));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x0007ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__BS << 0x00000014U) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__LN << 0x00000013U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x00187fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__LS << 0x00000012U) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__LS_POS << 0x0000000fU))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001f9fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__LW << 0x0000000eU) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__LW_POS << 0x0000000dU))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ffdffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[0U]) 
                           << 9U)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ffbffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[1U]) 
                           << 0x0000000aU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ff7ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[2U]) 
                           << 0x0000000bU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001fefffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__NxPN_FETCH[3U]) 
                           << 0x0000000cU)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001ffe7fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__R0RP << 8U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                   .__PVT__RCTA 
                                                   << 7U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001fff9fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                            .__PVT__RCTB << 6U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                   .__PVT__RPA 
                                                   << 5U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0x3fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
            .__PVT__RP_POS << 0x0000001eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U] = 
        ((0x001fffe0U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[2U]) 
         | (0x001fffffU & ((0x3ffffff0U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RPB 
                                           << 4U)) 
                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                              .__PVT__RP_POS >> 2U))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xc3ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxPN 
            << 0x0000001aU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffffff0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCH 
            << 4U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffffcfffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | (vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxVS 
            << 0x0000000cU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        (0xf0ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfff3ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[0U]) << 0x00000012U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xcfffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCHS[0U]) << 0x0000001cU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xfeffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[0U]) << 0x00000018U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffcfffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[1U]) << 0x00000014U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0x3fffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCHS[1U]) << 0x0000001eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xfdffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[1U]) << 0x00000019U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xff3fffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[2U]) << 0x00000016U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffffffcU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0.__PVT__NxCHS[2U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xfbffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[2U]) << 0x0000001aU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfcffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPNS[3U]) << 0x00000018U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffffff3U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCHS[3U]) << 2U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xf7ffffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxCH_EN[3U]) << 0x0000001bU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xffff3fffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPN_CNT[0U]) << 0x0000000eU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffffcffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxVSS[0U]) << 8U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffcffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxPN_CNT[1U]) << 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U] = 
        ((0xfffff3ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[1U]) 
         | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                    .__PVT__NxVSS[1U]) << 0x0000000aU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U] = 
        ((0xff000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP2_D[0U]) 
         | tb_top__DOT__u_dut__DOT__RB2_D);
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x000001ffffffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                                                      .__PVT__LS 
                                                                      << 4U) 
                                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                     .__PVT__NxPN))) 
                                                    << 0x00000029U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003e1fffffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                    .__PVT__NxCH)) 
                                                    << 0x00000025U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fff81ffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                              .__PVT__NxCH_CNT[1U]) 
                                                                      << 3U) 
                                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                     .__PVT__NxCH_CNT[0U]))) 
                                                    << 0x00000019U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fe07fffffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                              .__PVT__NxCH_CNT[3U]) 
                                                                      << 3U) 
                                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                                                                     .__PVT__NxCH_CNT[2U]))) 
                                                    << 0x0000001fU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003ffffe01ffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(tb_top__DOT__u_dut__DOT__RB3_D)) 
                                                    << 0x00000011U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003ffffffeffffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                                                                     >> 0x0000001fU))) 
                                                    << 0x00000010U));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fffffff7fffULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U] 
                                                                        >> 0x0000001eU)))) 
                                                    << 0x0000000fU));
    vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D = ((0x00003fffffff8000ULL 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__TAP3_D) 
                                                 | (IData)((IData)(
                                                                   (0x00007fffU 
                                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U]))));
    __VdfgRegularize_hebeb780c_0_61 = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                              & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                             | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U]) 
                                                | ((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U])))));
    __VdfgRegularize_hebeb780c_0_60 = ((2U & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                 >> 1U) 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH)) 
                                               | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                     >> 1U) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                       >> 1U)) 
                                                   | (((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                       >> 1U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                            >> 1U)))) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                        >> 1U)))) 
                                              << 1U)) 
                                       | (IData)(__VdfgRegularize_hebeb780c_0_61));
    __VdfgRegularize_hebeb780c_0_59 = ((4U & (((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                  >> 2U) 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                    >> 2U)) 
                                                | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                    & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                       >> 2U)) 
                                                   | (((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                       >> 2U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                            >> 2U))))) 
                                               | ((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__UMATCH))) 
                                              << 2U)) 
                                       | (IData)(__VdfgRegularize_hebeb780c_0_60));
    vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNEN = ((8U 
                                                  & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[3U] 
                                                        >> 3U) 
                                                       & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                                          >> 3U)) 
                                                      | (((IData)(__VdfgRegularize_hebeb780c_0_9) 
                                                          >> 3U) 
                                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[2U] 
                                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[2U] 
                                                                >> 3U)) 
                                                            | ((vlSelfRef.tb_top__DOT__u_dut__DOT__HM[1U] 
                                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[1U] 
                                                                   >> 3U)) 
                                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__HM[0U] 
                                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__BKPN[0U] 
                                                                     >> 3U)))))) 
                                                     << 3U)) 
                                                 | (IData)(__VdfgRegularize_hebeb780c_0_59));
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__4(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__5(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__6(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_comb__TOP__1(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__8(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_body__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_body__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT;
            if (vlSelfRef.RES_N) {
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ) 
                     & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT) 
                           >> 3U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__WADDR 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__WADDR)));
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_RDREQ) 
                     & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR)));
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ) 
                      & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_RDREQ))) 
                     & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT) 
                           >> 3U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT)));
                } else if ((((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ)) 
                             & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_RDREQ)) 
                            & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT) 
                                          - (IData)(1U)));
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ) 
                     & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT) 
                           >> 3U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__WADDR 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__WADDR)));
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_RDREQ) 
                     & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR)));
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ) 
                      & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_RDREQ))) 
                     & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT) 
                           >> 3U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT)));
                } else if ((((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_WRREQ)) 
                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_RDREQ)) 
                            & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT) 
                                          - (IData)(1U)));
                }
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT = 0U;
                vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR = 0U;
                vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__WADDR = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT = 0U;
                vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR = 0U;
                vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__WADDR = 0U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_top___024root___nba_sequent__TOP__4(vlSelf);
        Vtb_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                = (0x0003ffffU & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem
                                          [vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR] 
                                          >> 0x00000012U)));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_23 
                = (0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem
                                         [vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR]));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_22 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__altdpram_component__DOT__mem
                                 [vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__RADDR] 
                                 >> 0x00000010U)));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_4 
                = (0x0003ffffU & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem
                                          [vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR] 
                                          >> 0x00000012U)));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_25 
                = (0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem
                                         [vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR]));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_24 
                = (3U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__altdpram_component__DOT__mem
                                 [vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__RADDR] 
                                 >> 0x00000010U)));
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT 
                = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT 
                = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_RDREQ 
                = (1U & (~ ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__fifo__DOT__AMOUNT))) 
                            | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__FIFO_RDREQ 
                = (1U & (~ ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__fifo__DOT__AMOUNT))) 
                            | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_WRITE_PEND))));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R 
                = ((IData)(vlSelfRef.CE_R) & (3U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R 
                = ((IData)(vlSelfRef.CE_R) & (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wpn 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap4__DOT__wp) 
                         + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wpn 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__wp) 
                         + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wpn 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__wp) 
                         + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W 
                = ((0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                 >> 4U))) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R));
            vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RPW_WE 
                = ((0x17U >= (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU)))) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W));
            vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__r_xp____pinNumber2 
                = ((0x15U == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU)))) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W));
            vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__r_dx____pinNumber2 
                = ((0x0eU == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU)))) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_58 
                = (IData)(((0x40000000U == (0xc0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])) 
                           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPST_W)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__USEL 
                = (3U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__USL) 
                         | (- (IData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WHIT_EN)))));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_57 
                = (IData)((((4U == (6U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)) 
                           & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])));
        }
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__5(vlSelf);
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");
    }
    if (VL_UNLIKELY(((vlSelfRef.RST_N & 0xfeU)))) {
        Verilated::overWidthError("RST_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.CE_R & 0xfeU)))) {
        Verilated::overWidthError("CE_R");
    }
    if (VL_UNLIKELY(((vlSelfRef.CE_F & 0xfeU)))) {
        Verilated::overWidthError("CE_F");
    }
    if (VL_UNLIKELY(((vlSelfRef.RES_N & 0xfeU)))) {
        Verilated::overWidthError("RES_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.CS_N & 0xfeU)))) {
        Verilated::overWidthError("CS_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.AD_N & 0xfeU)))) {
        Verilated::overWidthError("AD_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.DTEN_N & 0xfeU)))) {
        Verilated::overWidthError("DTEN_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.REQ_N & 0xfeU)))) {
        Verilated::overWidthError("REQ_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.PAL & 0xfeU)))) {
        Verilated::overWidthError("PAL");
    }
    if (VL_UNLIKELY(((vlSelfRef.EXLAT_N & 0xfeU)))) {
        Verilated::overWidthError("EXLAT_N");
    }
}
#endif  // VL_DEBUG
