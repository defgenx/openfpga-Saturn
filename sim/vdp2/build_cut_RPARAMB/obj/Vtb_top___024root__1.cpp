// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_hb568d580_0;
extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_h1f995f22_0;
extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_h1f80d28f_0;
extern const VlWide<32>/*1023:0*/ Vtb_top__ConstPool__CONST_h181bee66_0;
extern const VlUnpacked<SData/*9:0*/, 8> Vtb_top__ConstPool__TABLE_h46723ff3_0;
extern const VlUnpacked<SData/*9:0*/, 64> Vtb_top__ConstPool__TABLE_h33db5abf_0;

void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_NxLSSMask__31__NxLSS;
    __Vfunc_NxLSSMask__31__NxLSS = 0;
    QData/*39:0*/ __Vfunc_CTData__38__Vfuncout;
    __Vfunc_CTData__38__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_CTData__38__RxKMD;
    __Vfunc_CTData__38__RxKMD = 0;
    CData/*0:0*/ __Vfunc_CTData__38__RxKDBS;
    __Vfunc_CTData__38__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_CTData__38__DW;
    __Vfunc_CTData__38__DW = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__39__Vfuncout;
    __Vfunc_ScrnIncToRC__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__39__P;
    __Vfunc_ScrnIncToRC__39__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__40__Vfuncout;
    __Vfunc_ScrnIncToRC__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__40__P;
    __Vfunc_ScrnIncToRC__40__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__41__Vfuncout;
    __Vfunc_MatrParamToRC__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__41__P;
    __Vfunc_MatrParamToRC__41__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__42__Vfuncout;
    __Vfunc_MatrParamToRC__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__42__P;
    __Vfunc_MatrParamToRC__42__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__43__Vfuncout;
    __Vfunc_ScrnIncToRC__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__43__P;
    __Vfunc_ScrnIncToRC__43__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__44__Vfuncout;
    __Vfunc_ScrnIncToRC__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__44__P;
    __Vfunc_ScrnIncToRC__44__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__45__Vfuncout;
    __Vfunc_MatrParamToRC__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__45__P;
    __Vfunc_MatrParamToRC__45__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__46__Vfuncout;
    __Vfunc_MatrParamToRC__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__46__P;
    __Vfunc_MatrParamToRC__46__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__47__Vfuncout;
    __Vfunc_ScrnCoordToRC__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__47__P;
    __Vfunc_ScrnCoordToRC__47__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__48__Vfuncout;
    __Vfunc_ScrnCoordToRC__48__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__48__P;
    __Vfunc_ScrnCoordToRC__48__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__49__Vfuncout;
    __Vfunc_MatrParamToRC__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__49__P;
    __Vfunc_MatrParamToRC__49__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__50__Vfuncout;
    __Vfunc_MatrParamToRC__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__50__P;
    __Vfunc_MatrParamToRC__50__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__51__Vfuncout;
    __Vfunc_ScrnCoordToRC__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__51__P;
    __Vfunc_ScrnCoordToRC__51__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__52__Vfuncout;
    __Vfunc_ScrnCoordToRC__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__52__P;
    __Vfunc_ScrnCoordToRC__52__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__53__Vfuncout;
    __Vfunc_MatrParamToRC__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__53__P;
    __Vfunc_MatrParamToRC__53__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__54__Vfuncout;
    __Vfunc_MatrParamToRC__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__54__P;
    __Vfunc_MatrParamToRC__54__P = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__55__Vfuncout;
    __Vfunc_ScrnStartToRC__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__55__P;
    __Vfunc_ScrnStartToRC__55__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__56__Vfuncout;
    __Vfunc_ScrnCoordToRC__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__56__P;
    __Vfunc_ScrnCoordToRC__56__P = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__57__Vfuncout;
    __Vfunc_ScrnStartToRC__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__57__P;
    __Vfunc_ScrnStartToRC__57__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__58__Vfuncout;
    __Vfunc_ScrnCoordToRC__58__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__58__P;
    __Vfunc_ScrnCoordToRC__58__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__59__Vfuncout;
    __Vfunc_MatrParamToRC__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__59__P;
    __Vfunc_MatrParamToRC__59__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__60__Vfuncout;
    __Vfunc_MatrParamToRC__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__60__P;
    __Vfunc_MatrParamToRC__60__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__61__Vfuncout;
    __Vfunc_ScrnCoordToRC__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__61__P;
    __Vfunc_ScrnCoordToRC__61__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__62__Vfuncout;
    __Vfunc_ScrnCoordToRC__62__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__62__P;
    __Vfunc_ScrnCoordToRC__62__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__63__Vfuncout;
    __Vfunc_ScrnCoordToRC__63__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__63__P;
    __Vfunc_ScrnCoordToRC__63__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__64__Vfuncout;
    __Vfunc_ScrnCoordToRC__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__64__P;
    __Vfunc_ScrnCoordToRC__64__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__65__Vfuncout;
    __Vfunc_MatrParamToRC__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__65__P;
    __Vfunc_MatrParamToRC__65__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__66__Vfuncout;
    __Vfunc_MatrParamToRC__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__66__P;
    __Vfunc_MatrParamToRC__66__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__67__Vfuncout;
    __Vfunc_ScrnCoordToRC__67__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__67__P;
    __Vfunc_ScrnCoordToRC__67__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__68__Vfuncout;
    __Vfunc_ScrnCoordToRC__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__68__P;
    __Vfunc_ScrnCoordToRC__68__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__69__Vfuncout;
    __Vfunc_ScrnCoordToRC__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__69__P;
    __Vfunc_ScrnCoordToRC__69__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__70__Vfuncout;
    __Vfunc_ScrnCoordToRC__70__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__70__P;
    __Vfunc_ScrnCoordToRC__70__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__71__Vfuncout;
    __Vfunc_ScrnCoordToRC__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__71__P;
    __Vfunc_ScrnCoordToRC__71__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__72__Vfuncout;
    __Vfunc_ScrnCoordToRC__72__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__72__P;
    __Vfunc_ScrnCoordToRC__72__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__73__Vfuncout;
    __Vfunc_MatrParamToRC__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__73__P;
    __Vfunc_MatrParamToRC__73__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__74__Vfuncout;
    __Vfunc_MatrParamToRC__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__74__P;
    __Vfunc_MatrParamToRC__74__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__75__Vfuncout;
    __Vfunc_ScrnCoordToRC__75__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__75__P;
    __Vfunc_ScrnCoordToRC__75__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__76__Vfuncout;
    __Vfunc_ScrnCoordToRC__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__76__P;
    __Vfunc_ScrnCoordToRC__76__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__77__Vfuncout;
    __Vfunc_ScrnCoordToRC__77__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__77__P;
    __Vfunc_ScrnCoordToRC__77__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__78__Vfuncout;
    __Vfunc_ScrnCoordToRC__78__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__78__P;
    __Vfunc_ScrnCoordToRC__78__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__79__Vfuncout;
    __Vfunc_MatrParamToRC__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__79__P;
    __Vfunc_MatrParamToRC__79__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__80__Vfuncout;
    __Vfunc_MatrParamToRC__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__80__P;
    __Vfunc_MatrParamToRC__80__P = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__81__Vfuncout;
    __Vfunc_ShiftToRC__81__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__81__P;
    __Vfunc_ShiftToRC__81__P = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__82__Vfuncout;
    __Vfunc_ShiftToRC__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__82__P;
    __Vfunc_ShiftToRC__82__P = 0;
    IData/*31:0*/ __Vfunc_TblAddrToRC__83__P;
    __Vfunc_TblAddrToRC__83__P = 0;
    QData/*34:0*/ __Vfunc_AddrIncToRA__84__Vfuncout;
    __Vfunc_AddrIncToRA__84__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_AddrIncToRA__84__P;
    __Vfunc_AddrIncToRA__84__P = 0;
    QData/*34:0*/ __Vfunc_AddrIncToRA__85__Vfuncout;
    __Vfunc_AddrIncToRA__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_AddrIncToRA__85__P;
    __Vfunc_AddrIncToRA__85__P = 0;
    QData/*34:0*/ __Vfunc_AddrIncToRA__86__Vfuncout;
    __Vfunc_AddrIncToRA__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_AddrIncToRA__86__P;
    __Vfunc_AddrIncToRA__86__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__87__Vfuncout;
    __Vfunc_ScallingToRC__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__87__P;
    __Vfunc_ScallingToRC__87__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__88__Vfuncout;
    __Vfunc_ScallingToRC__88__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__88__P;
    __Vfunc_ScallingToRC__88__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__89__Vfuncout;
    __Vfunc_ScallingToRC__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__89__P;
    __Vfunc_ScallingToRC__89__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__90__Vfuncout;
    __Vfunc_ScallingToRC__90__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__90__P;
    __Vfunc_ScallingToRC__90__P = 0;
    IData/*31:0*/ __Vfunc_MultRC__91__Vfuncout;
    __Vfunc_MultRC__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__91__a;
    __Vfunc_MultRC__91__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__91__b;
    __Vfunc_MultRC__91__b = 0;
    SData/*15:0*/ __Vfunc_PNData__94__PNC;
    __Vfunc_PNData__94__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__94__CHSZ;
    __Vfunc_PNData__94__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__94__CHCN;
    __Vfunc_PNData__94__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__94__DW;
    __Vfunc_PNData__94__DW = 0;
    SData/*15:0*/ __Vfunc_PNData__95__PNC;
    __Vfunc_PNData__95__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__95__CHSZ;
    __Vfunc_PNData__95__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__95__CHCN;
    __Vfunc_PNData__95__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__95__DW;
    __Vfunc_PNData__95__DW = 0;
    SData/*15:0*/ __Vfunc_PNData__96__PNC;
    __Vfunc_PNData__96__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__96__CHSZ;
    __Vfunc_PNData__96__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__96__CHCN;
    __Vfunc_PNData__96__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__96__DW;
    __Vfunc_PNData__96__DW = 0;
    SData/*15:0*/ __Vfunc_PNData__97__PNC;
    __Vfunc_PNData__97__PNC = 0;
    CData/*0:0*/ __Vfunc_PNData__97__CHSZ;
    __Vfunc_PNData__97__CHSZ = 0;
    CData/*2:0*/ __Vfunc_PNData__97__CHCN;
    __Vfunc_PNData__97__CHCN = 0;
    SData/*15:0*/ __Vfunc_PNData__97__DW;
    __Vfunc_PNData__97__DW = 0;
    CData/*1:0*/ __Vfunc_NxLSSMask__163__NxLSS;
    __Vfunc_NxLSSMask__163__NxLSS = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__175__Vfuncout;
    __Vfunc_MatrParamToRC__175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__175__P;
    __Vfunc_MatrParamToRC__175__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__176__Vfuncout;
    __Vfunc_MatrParamToRC__176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__176__P;
    __Vfunc_MatrParamToRC__176__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__179__Vfuncout;
    __Vfunc_MatrParamToRC__179__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__179__P;
    __Vfunc_MatrParamToRC__179__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__180__Vfuncout;
    __Vfunc_MatrParamToRC__180__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__180__P;
    __Vfunc_MatrParamToRC__180__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__183__Vfuncout;
    __Vfunc_MatrParamToRC__183__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__183__P;
    __Vfunc_MatrParamToRC__183__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__184__Vfuncout;
    __Vfunc_MatrParamToRC__184__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__184__P;
    __Vfunc_MatrParamToRC__184__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__187__Vfuncout;
    __Vfunc_MatrParamToRC__187__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__187__P;
    __Vfunc_MatrParamToRC__187__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__188__Vfuncout;
    __Vfunc_MatrParamToRC__188__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__188__P;
    __Vfunc_MatrParamToRC__188__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__193__Vfuncout;
    __Vfunc_MatrParamToRC__193__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__193__P;
    __Vfunc_MatrParamToRC__193__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__194__Vfuncout;
    __Vfunc_MatrParamToRC__194__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__194__P;
    __Vfunc_MatrParamToRC__194__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__199__Vfuncout;
    __Vfunc_MatrParamToRC__199__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__199__P;
    __Vfunc_MatrParamToRC__199__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__200__Vfuncout;
    __Vfunc_MatrParamToRC__200__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__200__P;
    __Vfunc_MatrParamToRC__200__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__207__Vfuncout;
    __Vfunc_MatrParamToRC__207__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__207__P;
    __Vfunc_MatrParamToRC__207__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__208__Vfuncout;
    __Vfunc_MatrParamToRC__208__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__208__P;
    __Vfunc_MatrParamToRC__208__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__213__Vfuncout;
    __Vfunc_MatrParamToRC__213__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__213__P;
    __Vfunc_MatrParamToRC__213__P = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__214__Vfuncout;
    __Vfunc_MatrParamToRC__214__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MatrParamToRC__214__P;
    __Vfunc_MatrParamToRC__214__P = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__215__Vfuncout;
    __Vfunc_ShiftToRC__215__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__215__P;
    __Vfunc_ShiftToRC__215__P = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__216__Vfuncout;
    __Vfunc_ShiftToRC__216__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ShiftToRC__216__P;
    __Vfunc_ShiftToRC__216__P = 0;
    CData/*7:0*/ __Vfunc_ColorOffset__260__C;
    __Vfunc_ColorOffset__260__C = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__260__COA;
    __Vfunc_ColorOffset__260__COA = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__260__COB;
    __Vfunc_ColorOffset__260__COB = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__260__COEN;
    __Vfunc_ColorOffset__260__COEN = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__260__COSL;
    __Vfunc_ColorOffset__260__COSL = 0;
    CData/*7:0*/ __Vfunc_Shadow__261__C;
    __Vfunc_Shadow__261__C = 0;
    CData/*0:0*/ __Vfunc_Shadow__261__SDEN;
    __Vfunc_Shadow__261__SDEN = 0;
    CData/*7:0*/ __Vfunc_ColorOffset__262__C;
    __Vfunc_ColorOffset__262__C = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__262__COA;
    __Vfunc_ColorOffset__262__COA = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__262__COB;
    __Vfunc_ColorOffset__262__COB = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__262__COEN;
    __Vfunc_ColorOffset__262__COEN = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__262__COSL;
    __Vfunc_ColorOffset__262__COSL = 0;
    CData/*7:0*/ __Vfunc_Shadow__263__C;
    __Vfunc_Shadow__263__C = 0;
    CData/*0:0*/ __Vfunc_Shadow__263__SDEN;
    __Vfunc_Shadow__263__SDEN = 0;
    CData/*7:0*/ __Vfunc_ColorOffset__264__C;
    __Vfunc_ColorOffset__264__C = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__264__COA;
    __Vfunc_ColorOffset__264__COA = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__264__COB;
    __Vfunc_ColorOffset__264__COB = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__264__COEN;
    __Vfunc_ColorOffset__264__COEN = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__264__COSL;
    __Vfunc_ColorOffset__264__COSL = 0;
    CData/*7:0*/ __Vfunc_Shadow__265__C;
    __Vfunc_Shadow__265__C = 0;
    CData/*0:0*/ __Vfunc_Shadow__265__SDEN;
    __Vfunc_Shadow__265__SDEN = 0;
    IData/*31:0*/ __VExpandSel_Lsb_1;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    // Body
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH) 
                              | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH))))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH)))) {
                                    if ((1U & (~ ((
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT)) 
                                                  | (IData)(
                                                            (0U 
                                                             == 
                                                             (0x003f0000U 
                                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U]))))))) {
                                        if (((((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                                               | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                                              | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH))) {
                                            if ((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                                                          >> 2U) 
                                                         & (0U 
                                                            == 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS 
                                                    = 
                                                    (0x0000007fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS)));
                                            }
                                            if ((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                                                          >> 2U) 
                                                         & (0x00010000U 
                                                            == 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS 
                                                    = 
                                                    (0x0000007fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS)));
                                            }
                                            if ((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                                                          >> 2U) 
                                                         & (0x00020000U 
                                                            == 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS 
                                                    = 
                                                    (0x0000007fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS)));
                                            }
                                            if ((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                                                          >> 2U) 
                                                         & (0x00030000U 
                                                            == 
                                                            (0x00030000U 
                                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__NxVS_ADDR))))) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS 
                                                    = 
                                                    (0x0000007fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LS_FETCH)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LW_FETCH)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPA_FETCH) 
                                  | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RPB_FETCH))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCTA_FETCH)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCTB_FETCH)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_FETCH)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LN_FETCH)))) {
                                        if ((1U & (~ 
                                                   (((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT)) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VB_INT)) 
                                                    | (IData)(
                                                              (0U 
                                                               == 
                                                               (0x003f0000U 
                                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U]))))))) {
                                            if ((((
                                                   (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NCH_FETCH)) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_FETCH)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RCH_FETCH)) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CT_FETCH)) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NVCS_FETCH))) {
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v0 = 1U;
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))) {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                                                             >> 1U)))) {
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 
                                                            = 
                                                            (3U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT
                                                                          [
                                                                          (1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 
                                                            = 
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0 = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))) {
                                                    if (
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                                                             >> 1U)))) {
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 
                                                            = 
                                                            (3U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT
                                                                          [
                                                                          (1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 
                                                            = 
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1 = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                                                             >> 1U)))) {
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 
                                                            = 
                                                            (3U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT
                                                                          [
                                                                          (1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 
                                                            = 
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2 = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x00000010U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))) {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7 = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                                                             >> 1U)))) {
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 
                                                            = 
                                                            (3U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT
                                                                          [
                                                                          (1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 
                                                            = 
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3 = 1U;
                                                    }
                                                }
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v0 = 1U;
                                                if (
                                                    ((0U 
                                                      != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                      .__PVT__RxA0CT) 
                                                     & (0U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                            [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__] 
                                                            >> 0x10U))))) {
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2 
                                                        = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A0VA__BRA__0__KET__;
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2 = 1U;
                                                }
                                                if (
                                                    ((0U 
                                                      != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                      .__PVT__RxA1CT) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                            [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__] 
                                                            >> 0x10U))))) {
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3 
                                                        = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_A1VA__BRA__0__KET__;
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3 = 1U;
                                                }
                                                if (
                                                    ((0U 
                                                      != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                      .__PVT__RxB0CT) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                            [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__] 
                                                            >> 0x10U))))) {
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4 
                                                        = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B0VA__BRA__0__KET__;
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4 = 1U;
                                                }
                                                if (
                                                    ((0U 
                                                      != vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                                                      .__PVT__RxB1CT) 
                                                     & (3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__RxCT_ADDR
                                                            [vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__] 
                                                            >> 0x10U))))) {
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5 
                                                        = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_B1VA__BRA__0__KET__;
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5 = 1U;
                                                }
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v0 = 1U;
                                                if (
                                                    (1U 
                                                     & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                                                         >> 3U) 
                                                        & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                           [
                                                           (3U 
                                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]
                                                           .__PVT__BMEN)))) {
                                                    if (
                                                        ((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                              [
                                                              (3U 
                                                               & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                              >> 0x10U))) 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                            .__PVT__NxPN_FETCH
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0 = 1U;
                                                    }
                                                }
                                                if (
                                                    (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA) 
                                                      >> 3U) 
                                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                     [
                                                     (3U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))]
                                                     .__PVT__BMEN)) {
                                                    if (
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1 = 1U;
                                                    }
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA))])));
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 
                                                        = 
                                                        (3U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A0VA));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                                                         >> 3U) 
                                                        & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                           [
                                                           (3U 
                                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]
                                                           .__PVT__BMEN)))) {
                                                    if (
                                                        ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                              [
                                                              (3U 
                                                               & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                              >> 0x10U))) 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                            .__PVT__NxPN_FETCH
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2 = 1U;
                                                    }
                                                }
                                                if (
                                                    (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA) 
                                                      >> 3U) 
                                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                     [
                                                     (3U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))]
                                                     .__PVT__BMEN)) {
                                                    if (
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3 = 1U;
                                                    }
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA))])));
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 
                                                        = 
                                                        (3U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_A1VA));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                                                         >> 3U) 
                                                        & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                           [
                                                           (3U 
                                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]
                                                           .__PVT__BMEN)))) {
                                                    if (
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                              [
                                                              (3U 
                                                               & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                              >> 0x10U))) 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                            .__PVT__NxPN_FETCH
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4 = 1U;
                                                    }
                                                }
                                                if (
                                                    (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA) 
                                                      >> 3U) 
                                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                     [
                                                     (3U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))]
                                                     .__PVT__BMEN)) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5 = 1U;
                                                    }
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA))])));
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 
                                                        = 
                                                        (3U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B0VA));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                                                         >> 3U) 
                                                        & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                           [
                                                           (3U 
                                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]
                                                           .__PVT__BMEN)))) {
                                                    if (
                                                        ((3U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                              [
                                                              (3U 
                                                               & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                                                              >> 0x10U))) 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                            .__PVT__NxPN_FETCH
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC
                                                            [
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6 = 1U;
                                                    }
                                                }
                                                if (
                                                    (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA) 
                                                      >> 3U) 
                                                     & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                     [
                                                     (3U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))]
                                                     .__PVT__BMEN)) {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__NxCH_ADDR
                                                             [
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))] 
                                                             >> 0x10U)))) {
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11 = 1U;
                                                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 
                                                            = 
                                                            (7U 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT
                                                                          [
                                                                          (3U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))])));
                                                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 
                                                            = 
                                                            (3U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7 = 1U;
                                                    }
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT
                                                                      [
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA))])));
                                                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 
                                                        = 
                                                        (3U 
                                                         & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_B1VA));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3 = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((7U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                        | (4U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                 << 1U))))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v4 = 1U;
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_FETCH_START_EN) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v6 = 1U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v8 = 1U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v12 = 1U;
            }
            if ((3U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                        & (~ (4U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                    << 1U)))))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v4 = 1U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v8 = 1U;
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__LW) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                    .__PVT__LW_POS;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__LW_WD 
                    = ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__LWE
                    [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N]) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxSX__v0 
                        = (0x000003ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__LW_WD 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxSX__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v0 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxEX__v0 
                        = (0x000003ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__LW_WD);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxEX__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxSX__v1 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__WPSX
                        [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N];
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxSX__v1 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v1 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxEX__v1 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__WPEX
                        [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N];
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxEX__v1 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk9__DOT__N;
                }
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH) 
                 & (7U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX) 
                           | (4U & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                    << 1U)))))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v0 
                    = (0x0007ffffU & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NX[0U] 
                                       + vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[0U]) 
                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[0U]));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v1 
                    = (0x0007ffffU & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NX[1U] 
                                       + vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[1U]) 
                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[1U]));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v2 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[2U] 
                                         + vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[2U])));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v3 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[3U] 
                                         + vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[3U])));
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                         .__PVT__LS_POS >> 2U));
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__LS) {
                if ((0U == vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                     .__PVT__LS_POS)) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_VCNT 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_VCNT)));
                    if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_VCNT) 
                          == (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[63U] 
                                             >> 0x0000000cU))) 
                         | (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_VCNT = 0U;
                    }
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_WD 
                    = ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
                __Vfunc_NxLSSMask__163__NxLSS = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                    [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                    .__PVT__LSS;
                vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask 
                    = (7U & (0x0ec8U >> ((IData)(3U) 
                                         * (IData)(__Vfunc_NxLSSMask__163__NxLSS))));
                vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_24__NxLSSMask 
                    = vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_RD 
                    = (0U == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WSCRNY) 
                               & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_24__NxLSSMask)) 
                              & (6U | (3U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)))));
                if ((0U == (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                            .__PVT__LS_POS))) {
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NX__v4 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v4 = 1U;
                    if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                        [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                        .__PVT__LSCX) {
                        if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_RD) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v0 
                                = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                                                  .__PVT__SCX 
                                                  + 
                                                  (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_WD 
                                                   >> 8U)));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v0 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v0 = 1U;
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                            .__PVT__SCX;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v1 = 1U;
                    }
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NX__v5 
                        = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v5 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v2 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                        [(2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))]
                        .__PVT__SCX;
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v2 
                        = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                } else if ((1U == (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__LS_POS))) {
                    if ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                         [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                         .__PVT__LSCY & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_RD))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v0 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                              [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                                              .__PVT__SCY 
                                              + (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_WD 
                                                 >> 8U)));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v0 = 1U;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                    } else if (((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)) 
                                | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD
                                [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2])) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                            .__PVT__SCY;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v1 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v1 
                            = (((3U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD))
                                ? 0U : vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                               .__PVT__ZMY);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v2 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NY
                                              [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2] 
                                              + ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))
                                                  ? 
                                                 (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                                                  .__PVT__ZMY 
                                                  << 1U)
                                                  : vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                                 [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                                                 .__PVT__ZMY)));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v2 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NY__v2 = 1U;
                    }
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0 = 1U;
                    if (((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT)) 
                         | vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD
                         [(2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))])) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v2 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [(2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))]
                            .__PVT__SCY;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v2 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v2 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v3 
                            = (((3U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD)) 
                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD))
                                ? 0U : 0x00000100U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v3 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v4 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NY
                                              [(2U 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))] 
                                              + ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))
                                                  ? 0x00000200U
                                                  : 0x00000100U)));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v4 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NY__v4 = 1U;
                    }
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1 
                        = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1 = 1U;
                } else if ((2U == (3U & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__LS_POS))) {
                    if (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                        [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                        .__PVT__LZMX) {
                        if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_RD) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__LZMX__v0 
                                = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__LS_WD 
                                                  >> 8U));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__LZMX__v0 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v0 = 1U;
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__LZMX__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                            .__PVT__ZMX;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__LZMX__v1 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v1 = 1U;
                    }
                    if ((1U & (((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_VCNT))) 
                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                   [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]
                                   .__PVT__MZE)) | 
                               (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NMOSY__v0 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NY
                                              [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2] 
                                              + vlSelfRef.tb_top__DOT__u_ref__DOT__NSY
                                              [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2]));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NMOSY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v0 = 1U;
                    }
                    if ((1U & (((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_VCNT))) 
                                | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG
                                   [(2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))]
                                   .__PVT__MZE)) | 
                               (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NMOSY__v1 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NY
                                              [(2U 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))] 
                                              + vlSelfRef.tb_top__DOT__u_ref__DOT__NSY
                                              [(2U 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2))]));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NMOSY__v1 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__N2));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v1 = 1U;
                    }
                }
            }
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                 .__PVT__RPA | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                 .__PVT__RPB)) {
                if (((((((((4U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__RP_POS)) 
                           | (5U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                     .__PVT__RP_POS))) 
                          | (0x0cU == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) 
                         | (0x0dU == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) 
                        | (0x0eU == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                     .__PVT__RP_POS))) 
                       | (0x0fU == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                    .__PVT__RP_POS))) 
                      | (0x10U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__RP_POS))) 
                     | (0x11U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                  .__PVT__RP_POS)))) {
                    if ((4U != (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                .__PVT__RP_POS))) {
                        if ((5U != (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                    .__PVT__RP_POS))) {
                            if ((0x0cU == (0x0000001fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                           .__PVT__RP_POS))) {
                                __Vfunc_MatrParamToRC__175__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_A;
                                __Vfunc_MatrParamToRC__175__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__175__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__175__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__175__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__175__Vfuncout;
                                __Vfunc_MatrParamToRC__176__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_D;
                                __Vfunc_MatrParamToRC__176__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__176__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__176__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__176__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__176__Vfuncout;
                            } else if ((0x0dU == (0x0000001fU 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                  .__PVT__RP_POS))) {
                                __Vfunc_MatrParamToRC__179__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_B;
                                __Vfunc_MatrParamToRC__179__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__179__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__179__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__179__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__179__Vfuncout;
                                __Vfunc_MatrParamToRC__180__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_E;
                                __Vfunc_MatrParamToRC__180__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__180__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__180__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__180__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__180__Vfuncout;
                            } else if ((0x0eU == (0x0000001fU 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                  .__PVT__RP_POS))) {
                                __Vfunc_MatrParamToRC__183__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_A;
                                __Vfunc_MatrParamToRC__183__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__183__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__183__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__183__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__183__Vfuncout;
                                __Vfunc_MatrParamToRC__184__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_D;
                                __Vfunc_MatrParamToRC__184__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__184__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__184__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__184__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__184__Vfuncout;
                            } else if ((0x0fU == (0x0000001fU 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                  .__PVT__RP_POS))) {
                                __Vfunc_MatrParamToRC__187__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_B;
                                __Vfunc_MatrParamToRC__187__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__187__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__187__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__187__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__187__Vfuncout;
                                __Vfunc_MatrParamToRC__188__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_E;
                                __Vfunc_MatrParamToRC__188__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__188__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__188__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__188__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__188__Vfuncout;
                            } else if ((0x10U == (0x0000001fU 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                                  .__PVT__RP_POS))) {
                                __Vfunc_MatrParamToRC__193__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_C;
                                __Vfunc_MatrParamToRC__193__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__193__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__193__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__193__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__193__Vfuncout;
                                __Vfunc_MatrParamToRC__194__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_F;
                                __Vfunc_MatrParamToRC__194__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__194__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__194__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__194__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__194__Vfuncout;
                            } else {
                                __Vfunc_MatrParamToRC__199__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_A;
                                __Vfunc_MatrParamToRC__199__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__199__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__199__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__199__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__199__Vfuncout;
                                __Vfunc_MatrParamToRC__200__P 
                                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_D;
                                __Vfunc_MatrParamToRC__200__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__200__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__200__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__200__P));
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__200__Vfuncout;
                            }
                        }
                    }
                } else if ((0x12U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    __Vfunc_MatrParamToRC__207__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_B;
                    __Vfunc_MatrParamToRC__207__Vfuncout 
                        = ((((0x0000fff0U & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__207__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                             | (0x0000000fU & (__Vfunc_MatrParamToRC__207__P 
                                               >> 0x00000010U))) 
                            << 0x00000010U) | (0x0000ffc0U 
                                               & __Vfunc_MatrParamToRC__207__P));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                        = __Vfunc_MatrParamToRC__207__Vfuncout;
                    __Vfunc_MatrParamToRC__208__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_E;
                    __Vfunc_MatrParamToRC__208__Vfuncout 
                        = ((((0x0000fff0U & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__208__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                             | (0x0000000fU & (__Vfunc_MatrParamToRC__208__P 
                                               >> 0x00000010U))) 
                            << 0x00000010U) | (0x0000ffc0U 
                                               & __Vfunc_MatrParamToRC__208__P));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                        = __Vfunc_MatrParamToRC__208__Vfuncout;
                } else if ((0x13U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    __Vfunc_MatrParamToRC__213__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_C;
                    __Vfunc_MatrParamToRC__213__Vfuncout 
                        = ((((0x0000fff0U & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__213__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                             | (0x0000000fU & (__Vfunc_MatrParamToRC__213__P 
                                               >> 0x00000010U))) 
                            << 0x00000010U) | (0x0000ffc0U 
                                               & __Vfunc_MatrParamToRC__213__P));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                        = __Vfunc_MatrParamToRC__213__Vfuncout;
                    __Vfunc_MatrParamToRC__214__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_F;
                    __Vfunc_MatrParamToRC__214__Vfuncout 
                        = ((((0x0000fff0U & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__214__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                             | (0x0000000fU & (__Vfunc_MatrParamToRC__214__P 
                                               >> 0x00000010U))) 
                            << 0x00000010U) | (0x0000ffc0U 
                                               & __Vfunc_MatrParamToRC__214__P));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                        = __Vfunc_MatrParamToRC__214__Vfuncout;
                } else if ((0x14U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    __Vfunc_ShiftToRC__215__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_MX;
                    __Vfunc_ShiftToRC__215__Vfuncout 
                        = ((((0x0000c000U & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_ShiftToRC__215__P 
                                                            >> 0x0000001dU)))) 
                                             << 0x0000000eU)) 
                             | (0x00003fffU & (__Vfunc_ShiftToRC__215__P 
                                               >> 0x00000010U))) 
                            << 0x00000010U) | (0x0000ffc0U 
                                               & __Vfunc_ShiftToRC__215__P));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
                        = __Vfunc_ShiftToRC__215__Vfuncout;
                    __Vfunc_ShiftToRC__216__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_MY;
                    __Vfunc_ShiftToRC__216__Vfuncout 
                        = ((((0x0000c000U & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_ShiftToRC__216__P 
                                                            >> 0x0000001dU)))) 
                                             << 0x0000000eU)) 
                             | (0x00003fffU & (__Vfunc_ShiftToRC__216__P 
                                               >> 0x00000010U))) 
                            << 0x00000010U) | (0x0000ffc0U 
                                               & __Vfunc_ShiftToRC__216__P));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
                        = __Vfunc_ShiftToRC__216__Vfuncout;
                } else if ((0x15U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA = 0U;
                }
            }
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE 
                = (0x0000007eU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE) 
                                  << 1U));
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                 == ((((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                        ? 0x01a8U : 0x018bU) - (IData)(1U)) 
                     - (IData)(1U)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE 
                    = (1U | (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE));
            }
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Xst 
                                                 >> 0x10U);
            } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Yst 
                                                 >> 0x10U);
            } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DXst 
                                                 >> 0x10U);
            } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DYst 
                                                 >> 0x10U);
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DX 
                                                 >> 0x10U);
            } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DY 
                                                 >> 0x10U);
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
             | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                   >> 1U)))) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__NPN_FETCH) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[0U] 
                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[0U]));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v1 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[1U] 
                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[1U]));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v2 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[2U]));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v3 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[3U]));
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__R0DOT_FETCH 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                            .__PVT__MZE)));
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__R0DOT_FETCH) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOTDC 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RxDC[0U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOTCDP 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__RxCDP[0U];
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[0U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__MZE)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[1U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__MZE)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[2U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                            .__PVT__MZE)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[3U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                            .__PVT__MZE)));
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[0U]) {
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                    .__PVT__ON) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__RxDC[1U];
                    vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__RxCDP[1U];
                } else if (((0U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0
                                                  [
                                                  ((8U 
                                                    & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                        >> 0x0000000cU) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                         >> 8U)))] 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP4
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                            = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0
                               [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                         >> 0x0000000cU) 
                                        << 3U)) | (7U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                      >> 8U)))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                    >> 0x0000000cU))];
                    }
                } else if (((0U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__ZMQT)) {
                    if ((0x00001000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2
                                                  [
                                                  ((8U 
                                                    & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                        >> 0x0000000dU) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                         >> 8U)))] 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP6
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                        >> 0x0000000dU))];
                        } else {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                                = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2
                                   [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                             >> 0x0000000dU) 
                                            << 3U)) 
                                     | (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                              >> 8U)))]);
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP2
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                        >> 0x0000000dU))];
                        }
                    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                            = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0
                                              [((8U 
                                                 & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                     >> 0x0000000dU) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                      >> 8U)))] 
                                              >> 4U));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP4
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                    >> 0x0000000dU))];
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                            = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0
                               [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                         >> 0x0000000dU) 
                                        << 3U)) | (7U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                      >> 8U)))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                    >> 0x0000000dU))];
                    }
                } else if (((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                            .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U])) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2
                                [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                          >> 0x0000000cU) 
                                         << 3U)) | 
                                  (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                         >> 8U)))];
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP2
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0
                            [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                      >> 0x0000000cU) 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                   >> 8U)))];
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                    >> 0x0000000cU))];
                    }
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTDC 
                        = (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3
                                      [(0x0000000fU 
                                        & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                           >> 8U))]) 
                              << 8U) | vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                             [(0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                              >> 8U))]) 
                            << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2
                                                        [
                                                        (0x0000000fU 
                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                            >> 8U))]) 
                                                << 8U) 
                                               | vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0
                                               [(0x0000000fU 
                                                 & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                                    >> 8U))]));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOTCDP 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0
                        [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
                                >> 0x0000000bU))];
                }
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[1U]) {
                if (((0U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                      .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                     .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                                                  [
                                                  ((8U 
                                                    & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                        >> 0x0000000cU) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                         >> 8U)))] 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP5
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                            = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                               [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                         >> 0x0000000cU) 
                                        << 3U)) | (7U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                      >> 8U)))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                    >> 0x0000000cU))];
                    }
                } else if (((0U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__ZMQT)) {
                    if ((0x00001000U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                                = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3
                                                  [
                                                  ((8U 
                                                    & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                        >> 0x0000000dU) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                         >> 8U)))] 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP7
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                        >> 0x0000000dU))];
                        } else {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                                = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3
                                   [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                             >> 0x0000000dU) 
                                            << 3U)) 
                                     | (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                              >> 8U)))]);
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP3
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                        >> 0x0000000dU))];
                        }
                    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                            = (0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                                              [((8U 
                                                 & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                     >> 0x0000000dU) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                      >> 8U)))] 
                                              >> 4U));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP5
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                    >> 0x0000000dU))];
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                            = (0x0000000fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                               [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                         >> 0x0000000dU) 
                                        << 3U)) | (7U 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                      >> 8U)))]);
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                    >> 0x0000000dU))];
                    }
                } else if (((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                            .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U])) {
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3
                                [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                          >> 0x0000000cU) 
                                         << 3U)) | 
                                  (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                         >> 8U)))];
                            vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP3
                                [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                            [((8U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                      >> 0x0000000cU) 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                                   >> 8U)))];
                        vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1
                            [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                    >> 0x0000000cU))];
                    }
                } else {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTDC 
                        = ((vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3
                            [(0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                             >> 8U))] 
                            << 8U) | vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1
                           [(0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                            >> 8U))]);
                    vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOTCDP 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1
                        [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
                                >> 0x0000000bU))];
                }
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[2U]) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOTDC 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2
                    [(0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[2U] 
                                     >> 8U))];
                vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOTCDP 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP2
                    [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[2U] 
                            >> 0x0000000bU))];
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk20__DOT__NxDOT_FETCH[3U]) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOTDC 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3
                    [(0x0000000fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[3U] 
                                     >> 8U))];
                vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOTCDP 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP3
                    [(1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[3U] 
                            >> 0x0000000bU))];
            }
        }
        if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL) 
               & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N))) 
              & (~ (IData)(vlSelfRef.DTEN_N))) & (~ (IData)(vlSelfRef.REQ_N)))) {
            if ((0x0092U == (0x000001feU & (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                            << 1U)))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v2 = 1U;
            } else if ((0x0096U == (0x000001feU & (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                                   << 1U)))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v3 = 1U;
            }
        }
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[0U] 
            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                              + vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[0U]));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[1U] 
            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                              + vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[1U]));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[2U] 
            = (0x0007ffffU & ((IData)(0x00000100U) 
                              + vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U]));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[3U] 
            = (0x0007ffffU & ((IData)(0x00000100U) 
                              + vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U]));
        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) 
             | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                   >> 1U)))) {
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FETCH) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[0U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v2 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v3 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[3U];
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_HCNT 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT)));
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT) 
                     == (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                        >> 8U)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_HCNT = 0U;
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX__v0 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[0U] 
                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[0U]));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX__v1 
                    = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[1U] 
                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[1U]));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX__v2 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[2U]));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX__v3 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[3U]));
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__R0DOT_FETCH 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                            .__PVT__MZE)));
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__R0DOT_FETCH) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOTDC 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__RxDC[0U];
                vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOTCDP 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__RxCDP[0U];
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[0U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__MZE)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[1U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__MZE)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[2U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                            .__PVT__MZE)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[3U] 
                = (1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT))) 
                         | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                            .__PVT__MZE)));
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[0U]) {
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                    .__PVT__ON) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__RxDC[1U];
                    vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__RxCDP[1U];
                } else if (((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0) 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP4
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                            = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                    >> 0x0000000cU))];
                    }
                } else if (((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__ZMQT)) {
                    if ((0x00001000U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D2) 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP6
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                        >> 0x0000000dU))];
                        } else {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                                = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D2));
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP2
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                        >> 0x0000000dU))];
                        }
                    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0) 
                                              >> 4U));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP4
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                    >> 0x0000000dU))];
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                            = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                    >> 0x0000000dU))];
                    }
                } else if (((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U])) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D2;
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP2
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                    >> 0x0000000cU))];
                    }
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTDC 
                        = ((((0x0000ff00U & ((IData)(
                                                     (vlSelfRef.tb_top__DOT__u_dut__DOT__n0d3__DOT__g_ml__DOT__mem
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_59] 
                                                      >> 
                                                      (0x00000038U 
                                                       & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                           >> 8U) 
                                                          << 3U)))) 
                                             << 8U)) 
                             | (0x000000ffU & (IData)(
                                                      (vlSelfRef.tb_top__DOT__u_dut__DOT__n0d1__DOT__g_ml__DOT__mem
                                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_59] 
                                                       >> 
                                                       (0x00000038U 
                                                        & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                            >> 8U) 
                                                           << 3U)))))) 
                            << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D2) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N0_D0)));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOTCDP 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0
                        [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                >> 0x0000000bU))];
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[1U]) {
                if (((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                      .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                     .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1) 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP5
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                            = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                    >> 0x0000000cU))];
                    }
                } else if (((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__ZMQT)) {
                    if ((0x00001000U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D3) 
                                                  >> 4U));
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP7
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                        >> 0x0000000dU))];
                        } else {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                                = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D3));
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP3
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                        >> 0x0000000dU))];
                        }
                    } else if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1) 
                                              >> 4U));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP5
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                    >> 0x0000000dU))];
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                            = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                    >> 0x0000000dU))];
                    }
                } else if (((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                             .__PVT__CHCN) & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__ZMHF)) {
                    if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                        if ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U])) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D3;
                            vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP3
                                [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                        >> 0x0000000cU))];
                        }
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1
                            [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                    >> 0x0000000cU))];
                    }
                } else {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTDC 
                        = (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D3) 
                            << 8U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__N1_D1));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOTCDP 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1
                        [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
                                >> 0x0000000bU))];
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[2U]) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOTDC 
                    = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__n2d2__DOT__g_ml__DOT__mem
                                              [(1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                   ^ 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U] 
                                                    >> 0x0000000bU)))] 
                                              >> (0x00000038U 
                                                  & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U] 
                                                      >> 8U) 
                                                     << 3U)))));
                vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOTCDP 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP2
                    [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U] 
                            >> 0x0000000bU))];
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk28__DOT__NxDOT_FETCH[3U]) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOTDC 
                    = (0x000000ffU & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__n3d3__DOT__g_ml__DOT__mem
                                              [(1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                   ^ 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U] 
                                                    >> 0x0000000bU)))] 
                                              >> (0x00000038U 
                                                  & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U] 
                                                      >> 8U) 
                                                     << 3U)))));
                vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOTCDP 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP3
                    [(1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U] 
                            >> 0x0000000bU))];
            }
        }
        if (vlSelfRef.CE_R) {
            if (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                  >> 0x0000001aU) & vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[0U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[0U] 
                    = ((0x00080000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((0x00040000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00040000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[0U] 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                             >> 0x0000000eU));
                if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__94__DW = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[0U] 
                                                  >> 0x10U);
                        __Vfunc_PNData__94__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__94__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__94__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__94__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__94__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__94__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__94__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__94__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__94__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__94__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__94__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__94__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__94__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__94__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__94__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__94__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__94__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__94__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__94__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__94__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__94__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__94__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__94__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__94__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__94__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__94__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__94__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__94__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__94__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__94__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_30__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_31 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_30__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_31 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[0U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_31;
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 
                        = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__ZMQT | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                              .__PVT__ZMHF) & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[0U]) 
                            << 2U) | ((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                       .__PVT__ZMQT 
                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[0U] 
                                          >> 1U)) << 1U));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v0 = 1U;
                }
            }
            if (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                  >> 0x0000001bU) & vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[1U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[1U] 
                    = ((0x00200000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((0x00100000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00100000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[1U] 
                    = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                             >> 0x00000010U));
                if ((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__94__DW = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[1U] 
                                                  >> 0x10U);
                        __Vfunc_PNData__94__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__94__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__94__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__94__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__94__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__94__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__94__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__94__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__94__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__94__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__94__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__94__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__94__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__94__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__94__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__94__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__94__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__94__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__94__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__94__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__94__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__94__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__94__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__94__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__94__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__94__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__94__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__94__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__94__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__94__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_30__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_31 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_30__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_31 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[1U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_31;
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 
                        = (1U | ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__ZMQT | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                    .__PVT__ZMHF) & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[1U]) 
                                  << 2U) | ((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                             .__PVT__ZMQT 
                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[1U] 
                                                >> 1U)) 
                                            << 1U)));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v1 = 1U;
                }
            }
            if (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                  >> 0x0000001cU) & vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[2U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[2U] 
                    = ((0x00800000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((0x00400000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00400000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[2U] = 0U;
                if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__95__DW = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[2U] 
                                                  >> 0x10U);
                        __Vfunc_PNData__95__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__95__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__95__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__95__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__95__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__95__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__95__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__95__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__95__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__95__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__95__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__95__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__95__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__95__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__95__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__95__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__95__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__95__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__95__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__95__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__95__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__95__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__95__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__95__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__95__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__95__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__95__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__95__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__95__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__95__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_32__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_33 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_32__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_33 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[2U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v2 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_33;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v2 = 1U;
                }
            }
            if (((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                  >> 0x0000001dU) & vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U]
                 .__PVT__NxPN_EN[3U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[3U] 
                    = ((0x02000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                        ? ((0x01000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x01000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_CNT[3U] = 0U;
                if ((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
                    if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                         .__PVT__PNC)) {
                        __Vfunc_PNData__95__DW = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[3U] 
                                                  >> 0x10U);
                        __Vfunc_PNData__95__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                            .__PVT__CHCN;
                        __Vfunc_PNData__95__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                            .__PVT__CHSZ;
                        __Vfunc_PNData__95__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                            .__PVT__PNC;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x80000000U & (((IData)(__Vfunc_PNData__95__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__95__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001fU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x40000000U & (((IData)(__Vfunc_PNData__95__DW) 
                                                  << 0x00000014U) 
                                                 & ((~ 
                                                     ((IData)(__Vfunc_PNData__95__PNC) 
                                                      >> 0x0000000eU)) 
                                                    << 0x0000001eU))));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (0x30000000U & ((IData)(__Vfunc_PNData__95__PNC) 
                                                 << 0x00000014U)));
                        if (__Vfunc_PNData__95__CHSZ) {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__95__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__95__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__95__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__95__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((((4U & ((IData)(__Vfunc_PNData__95__PNC) 
                                               >> 2U)) 
                                        | (3U & ((((IData)(__Vfunc_PNData__95__PNC) 
                                                   >> 2U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(__Vfunc_PNData__95__PNC) 
                                                                    >> 0x0000000eU)))))) 
                                                 | (((IData)(__Vfunc_PNData__95__DW) 
                                                     >> 0x0aU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(__Vfunc_PNData__95__PNC) 
                                                                     >> 0x0000000eU)))))))) 
                                       << 0x0000000cU) 
                                      | ((0x00000ffcU 
                                          & ((IData)(__Vfunc_PNData__95__DW) 
                                             << 2U)) 
                                         | (3U & (IData)(__Vfunc_PNData__95__PNC)))));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | (((0U != (IData)(__Vfunc_PNData__95__CHCN))
                                        ? (0x00000070U 
                                           & ((IData)(__Vfunc_PNData__95__DW) 
                                              >> 8U))
                                        : ((0x00000070U 
                                            & ((IData)(__Vfunc_PNData__95__PNC) 
                                               >> 1U)) 
                                           | (0x0000000fU 
                                              & ((IData)(__Vfunc_PNData__95__DW) 
                                                 >> 0x0cU)))) 
                                      << 0x00000010U));
                            vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                                = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                                   | ((0x00007000U 
                                       & ((IData)(__Vfunc_PNData__95__PNC) 
                                          << 0x0000000aU)) 
                                      | ((0x00000c00U 
                                          & ((((IData)(__Vfunc_PNData__95__PNC) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(__Vfunc_PNData__95__PNC) 
                                                                 >> 0x0000000eU)))))) 
                                              | (((IData)(__Vfunc_PNData__95__DW) 
                                                  >> 0x0aU) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_PNData__95__PNC) 
                                                                  >> 0x0000000eU)))))) 
                                             << 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (IData)(__Vfunc_PNData__95__DW)))));
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_32__PNData 
                            = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_33 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_32__PNData;
                    } else {
                        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_33 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_WD[3U];
                    }
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v3 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCond_33;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v3 = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F)))) {
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x019dU : 0x0181U) - (IData)(1U))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_VISIBLE_LINES) 
                        | (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY 
                        = (0x000001ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY)));
                    if ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNY = 0U;
                    }
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__CH_RP 
                = (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[0U]);
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCT 
                = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCT) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CT 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CT) 
                                            | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CT) 
                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CT)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCTS[0U] 
                = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                          .__PVT__RxA0CT & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                    ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__RxA1CT & 
                                   ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                    >> 1U))) ? 1U : 
                            ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__RxB0CT 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCRCT 
                = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCRCT) | (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__RxCRCT));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxPN 
                = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxPN) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0PN 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1PN) 
                                            | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0PN) 
                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1PN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxPNS[0U] 
                = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                          .__PVT__RxA0PN & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                    ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__RxA1PN & 
                                   ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                    >> 1U))) ? 1U : 
                            ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__RxB0PN 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxOVR 
                = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxOVR) | vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[0U]);
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCTTP 
                = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCTTP) | (1U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__RxCTTP));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCH 
                = ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCH) | (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CH 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CH) 
                                            | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CH) 
                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CH)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCHS[0U] 
                = ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                          .__PVT__RxA0CH & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                    ? 0U : ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__RxA1CH & 
                                   ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                    >> 1U))) ? 1U : 
                            ((1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                    .__PVT__RxB0CH 
                                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                       >> 2U))) ? 2U
                              : 3U)));
            __VExpandSel_Lsb_1 = ((IData)(0x00000019U) 
                                  + (0x0000001fU & 
                                     ((IData)(0x0000000cU) 
                                      * (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__CH_RP))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCELLX[0U] 
                = (7U & (((0U == (0x0000001fU & __VExpandSel_Lsb_1))
                           ? 0U : (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                                   [(((IData)(2U) + __VExpandSel_Lsb_1) 
                                     >> 5U)] << ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & __VExpandSel_Lsb_1)))) 
                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4
                            [(__VExpandSel_Lsb_1 >> 5U)] 
                            >> (0x0000001fU & __VExpandSel_Lsb_1))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCT_EN[0U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CT_EN[0U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__CH_RP = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCT 
                = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCT) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CT 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CT) 
                                            | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CT) 
                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CT)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCTS[1U] 
                = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxA0CT >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                    ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__RxA1CT & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                             ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB0CT 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCRCT 
                = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCRCT) | (2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__RxCRCT));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxPN 
                = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxPN) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0PN 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1PN) 
                                            | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0PN) 
                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1PN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxPNS[1U] 
                = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxA0PN >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                    ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__RxA1PN & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                             ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB0PN 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxOVR 
                = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxOVR) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RxSCRN_OVER[1U]) 
                                      << 1U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCTTP 
                = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCTTP) | (2U & vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                       .__PVT__RxCTTP));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCH 
                = ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                    .__PVT__RxCH) | (2U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA0CH 
                                             | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxA1CH) 
                                            | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                            .__PVT__RxB0CH) 
                                           | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                           .__PVT__RxB1CH)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCHS[1U] 
                = ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                           .__PVT__RxA0CH >> 1U) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                    ? 0U : ((2U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                   .__PVT__RxA1CH & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT)))
                             ? 1U : ((1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                             .__PVT__RxB0CH 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MT) 
                                               >> 2U)))
                                      ? 2U : 3U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCELLX[1U] 
                = (7U & (vlSelfRef.tb_top__DOT__u_dut__DOT__VA4[1U] 
                         >> 5U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U].__PVT__RxCT_EN[1U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CT_EN[1U];
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[1U].__PVT__RxCT_EN[0U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                .__PVT__RxCT_EN[0U];
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RBG_PIPE[1U].__PVT__RxCT_EN[1U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[0U]
                .__PVT__RxCT_EN[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v4 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][0U];
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v4 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v5 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v8 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][4U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v9 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][5U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v10 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][6U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v11 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][7U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE__v0 
                = (((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                             >> 0x00000029U)) & (0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                                     .__PVT__CHCN 
                                                     >> 1U))))
                    ? vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][0U]
                    : vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U]);
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE__v0 
                = ((1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                   >> 0x00000029U)) 
                          & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                             .__PVT__CHCN >> 2U))) ? 
                   (((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                              >> 0x0000000fU)) << 0x0000001eU) 
                    | (0x00007fffU & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q)))
                    : ((1U & ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                                       >> 0x0000002aU)) 
                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                 .__PVT__CHCN >> 1U)))
                        ? vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][1U]
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U]));
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[0U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_RP 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                         >> 8U));
            if ((0x00004000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[0U] 
                    = ((0x00000800U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? ((0x00000400U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00000400U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                if (((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                      [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_RP]
                      .__PVT__OVR) & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                                      >> 8U))) {
                    __Vfunc_PNData__96__DW = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                        [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_RP]
                        .__PVT__OVPNR;
                    __Vfunc_PNData__96__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__96__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__96__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__96__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__96__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__96__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__96__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__96__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__96__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__96__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__96__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__96__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__96__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__96__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__96__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__96__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__96__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__96__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__96__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__96__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__96__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__96__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__96__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__96__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__96__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__96__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__96__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__96__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__96__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__96__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_34__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_34__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0 = 1U;
                } else if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                            .__PVT__PNC)) {
                    __Vfunc_PNData__97__DW = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[0U] 
                                              >> 0x10U);
                    __Vfunc_PNData__97__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__97__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__97__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__97__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__97__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__97__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__97__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__97__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__97__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__97__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__97__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__97__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__97__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__97__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__97__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__97__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__97__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__97__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__97__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__97__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__97__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__97__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__97__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__97__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__97__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__97__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__97__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__97__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__97__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__97__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_35__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_35__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[0U];
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2 = 1U;
                }
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0 
                = (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                           [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_RP]
                           .__PVT__OVR >> 1U) & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                                                 >> 8U)) 
                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                            >> 6U)));
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0 = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__PN_RP = 1U;
            if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[1U] 
                    = ((0x00002000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                        ? ((0x00001000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((0x00001000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                if (((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                      .__PVT__OVR) & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                                      >> 9U))) {
                    __Vfunc_PNData__96__DW = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                        .__PVT__OVPNR;
                    __Vfunc_PNData__96__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__96__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__96__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__96__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__96__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__96__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__96__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__96__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__96__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__96__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__96__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__96__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__96__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__96__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__96__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__96__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__96__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__96__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__96__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__96__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__96__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__96__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__96__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__96__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__96__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__96__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__96__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__96__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__96__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__96__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_34__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_34__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3 = 1U;
                } else if ((0x00008000U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                            .__PVT__PNC)) {
                    __Vfunc_PNData__97__DW = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[1U] 
                                              >> 0x10U);
                    __Vfunc_PNData__97__CHCN = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                        .__PVT__CHCN;
                    __Vfunc_PNData__97__CHSZ = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                        .__PVT__CHSZ;
                    __Vfunc_PNData__97__PNC = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                        .__PVT__PNC;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0x7fffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x80000000U & (((IData)(__Vfunc_PNData__97__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__97__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001fU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xbfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x40000000U & (((IData)(__Vfunc_PNData__97__DW) 
                                              << 0x00000014U) 
                                             & ((~ 
                                                 ((IData)(__Vfunc_PNData__97__PNC) 
                                                  >> 0x0000000eU)) 
                                                << 0x0000001eU))));
                    vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                        = ((0xcfffffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                           | (0x30000000U & ((IData)(__Vfunc_PNData__97__PNC) 
                                             << 0x00000014U)));
                    if (__Vfunc_PNData__97__CHSZ) {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__97__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__97__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__97__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__97__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((((4U & ((IData)(__Vfunc_PNData__97__PNC) 
                                           >> 2U)) 
                                    | (3U & ((((IData)(__Vfunc_PNData__97__PNC) 
                                               >> 2U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(__Vfunc_PNData__97__PNC) 
                                                                >> 0x0000000eU)))))) 
                                             | (((IData)(__Vfunc_PNData__97__DW) 
                                                 >> 0x0aU) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(__Vfunc_PNData__97__PNC) 
                                                                 >> 0x0000000eU)))))))) 
                                   << 0x0000000cU) 
                                  | ((0x00000ffcU & 
                                      ((IData)(__Vfunc_PNData__97__DW) 
                                       << 2U)) | (3U 
                                                  & (IData)(__Vfunc_PNData__97__PNC)))));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xff80ffffU & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | (((0U != (IData)(__Vfunc_PNData__97__CHCN))
                                    ? (0x00000070U 
                                       & ((IData)(__Vfunc_PNData__97__DW) 
                                          >> 8U)) : 
                                   ((0x00000070U & 
                                     ((IData)(__Vfunc_PNData__97__PNC) 
                                      >> 1U)) | (0x0000000fU 
                                                 & ((IData)(__Vfunc_PNData__97__DW) 
                                                    >> 0x0cU)))) 
                                  << 0x00000010U));
                        vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res 
                            = ((0xffff8000U & vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res) 
                               | ((0x00007000U & ((IData)(__Vfunc_PNData__97__PNC) 
                                                  << 0x0000000aU)) 
                                  | ((0x00000c00U & 
                                      ((((IData)(__Vfunc_PNData__97__PNC) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(__Vfunc_PNData__97__PNC) 
                                                           >> 0x0000000eU)))))) 
                                        | (((IData)(__Vfunc_PNData__97__DW) 
                                            >> 0x0aU) 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PNData__97__PNC) 
                                                            >> 0x0000000eU)))))) 
                                       << 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (IData)(__Vfunc_PNData__97__DW)))));
                    }
                    vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_35__PNData 
                        = vlSymsp->TOP__REF_VDP2_PKG.PNData__Vstatic__res;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_35__PNData;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4 = 1U;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk12__DOT__RPN_WD[1U];
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5 = 1U;
                }
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1 
                = (1U & (((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                           .__PVT__OVR >> 1U) & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                                                 >> 9U)) 
                         | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U] 
                            >> 7U)));
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v6 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v7 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U];
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[1U].__PVT__AxNA 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__AxNA;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE[1U].__PVT__BxNA 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                .__PVT__BxNA;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__R0_RP;
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[0U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[1U];
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v3 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[2U];
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START_EN) 
                 | (7U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX)))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NVCSY__v0 
                    = (vlSelfRef.tb_top__DOT__u_dut__DOT__VS[0U] 
                       & (- (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                     .__PVT__VCSC & 
                                     (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                      .__PVT__MZE)))));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NVCSY__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NVCSY__v1 
                    = (vlSelfRef.tb_top__DOT__u_dut__DOT__VS[1U] 
                       & (- (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                     .__PVT__VCSC & 
                                     (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                      .__PVT__MZE)))));
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FETCH) {
                if ((7U == (7U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX) 
                                  | (4U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                           << 1U)))))) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v4 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[0U]);
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v4 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v5 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[1U]);
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v6 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[2U]);
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v7 
                        = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk27__DOT__X[3U]);
                }
            }
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                               >> 0x0000002dU)))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v8 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[0U]);
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v8 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v9 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[1U]);
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v10 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[2U]);
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v11 
                    = (0x000007ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[3U]);
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F)))) {
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX)));
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x01b9U : 0x019dU) - (IData)(1U))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_VISIBLE_LINES) 
                        | (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX = 0U;
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__TBL_ACT)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH)))) {
                    if ((1U & (~ ((((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT)) 
                                    | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT)) 
                                   | (IData)((0U == 
                                              (0x003f0000U 
                                               & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U])))) 
                                  | (~ ((((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH) 
                                            | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                           | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH)) 
                                          | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                                        | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH))))))) {
                        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                             & (0U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v0 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 1U) & (0U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v1 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 2U) & (0U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v2 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 3U) & (0U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v3 = 1U;
                        }
                        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                             & (1U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v4 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 1U) & (1U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v5 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 2U) & (1U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v6 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 3U) & (1U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v7 = 1U;
                        }
                        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                             & (2U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v8 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 1U) & (2U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v9 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 2U) & (2U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v10 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 3U) & (2U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v11 = 1U;
                        }
                        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                             & (3U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[0U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v12 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 1U) & (3U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[1U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v13 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 2U) & (3U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[2U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v14 = 1U;
                        }
                        if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPN) 
                              >> 3U) & (3U == (3U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBV[3U])))) {
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v15 = 1U;
                        }
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX0 = 1U;
        } else if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX0 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            if ((7U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                        | (4U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                 << 1U))))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP0__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP0__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP0__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[0U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP6__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP6[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP6__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP6__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[6U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP1__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP1__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP1__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP2__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP2[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP2__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP2__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP3__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP3[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP3__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP3__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[3U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP4__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP4[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP4__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP4__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[4U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP5__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP5[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP5__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP5__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[5U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP7__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP7[1U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP7__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP7__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[7U];
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__NDC_PTR 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR)));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v2 = 1U;
            }
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__tap3__DOT__g_m10k__DOT__q 
                               >> 0x0000002dU)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_HCNT = 0U;
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 
                = ((((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                     | (0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1))) 
                    | (0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0))) 
                   | (0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0 = 1U;
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1 
                = ((((1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                     | (1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1))) 
                    | (1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0))) 
                   | (1U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2 
                = ((((2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                     | (2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1))) 
                    | (2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0))) 
                   | (2U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3 
                = ((((3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA0)) 
                     | (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPA1))) 
                    | (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB0))) 
                   | (3U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCPB1)));
            vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                   & (3U | (4U & ((~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                      >> 1U)) << 2U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N 
                = (1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                            >> 3U)));
            if ((1U & ((((vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                          .__PVT__RxA0CT | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                          .__PVT__RxA1CT) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                         .__PVT__RxB0CT) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                        .__PVT__RxB1CT) | vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                       .__PVT__RxCRCT))) {
                __Vfunc_AddrIncToRA__85__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_d0__DOT__g_ml__DOT__mem[28U];
                __Vfunc_AddrIncToRA__85__Vfuncout = 
                    (((QData)((IData)((0x000001ffU 
                                       & (- (IData)(
                                                    (1U 
                                                     & (__Vfunc_AddrIncToRA__85__P 
                                                        >> 0x00000019U))))))) 
                      << 0x0000001aU) | (QData)((IData)(
                                                        (0x03ffffc0U 
                                                         & __Vfunc_AddrIncToRA__85__P))));
                vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_27__AddrIncToRA 
                    = __Vfunc_AddrIncToRA__85__Vfuncout;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAx__v1 
                    = (0x00000007ffffffffULL & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[0U] 
                                                + vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_27__AddrIncToRA));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v1 = 1U;
                __Vfunc_AddrIncToRA__86__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_d1__DOT__g_ml__DOT__mem[29U];
                __Vfunc_AddrIncToRA__86__Vfuncout = 
                    (((QData)((IData)((0x000001ffU 
                                       & (- (IData)(
                                                    (1U 
                                                     & (__Vfunc_AddrIncToRA__86__P 
                                                        >> 0x00000019U))))))) 
                      << 0x0000001aU) | (QData)((IData)(
                                                        (0x03ffffc0U 
                                                         & __Vfunc_AddrIncToRA__86__P))));
                vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_28__AddrIncToRA 
                    = __Vfunc_AddrIncToRA__86__Vfuncout;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAx__v2 
                    = (0x00000007ffffffffULL & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[1U] 
                                                + vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_28__AddrIncToRA));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v2 = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH)))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS 
                            = ((0x20U & (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS)) 
                               | (0x0000001fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS))));
                        if ((0x17U == (0x0000001fU 
                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS)))) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS 
                                = (0x00000020U & ((~ 
                                                   ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS) 
                                                    >> 5U)) 
                                                  << 5U));
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                                  | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH))))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH)))) {
                                        if ((1U & (~ 
                                                   (((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT)) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT)) 
                                                    | (IData)(
                                                              (0U 
                                                               == 
                                                               (0x003f0000U 
                                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))))) {
                                            if ((((
                                                   (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                                                  | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH))) {
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN));
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0 = 1U;
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v1 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CTEN) 
                                                        >> 1U));
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNEN));
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0 = 1U;
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v1 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNEN) 
                                                        >> 1U));
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v2 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNEN) 
                                                        >> 2U));
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v3 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNEN) 
                                                        >> 3U));
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0 
                                                    = 
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN));
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0 = 1U;
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v1 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN) 
                                                        >> 1U));
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v2 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN) 
                                                        >> 2U));
                                                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v3 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN) 
                                                        >> 3U));
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[0U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0 = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[1U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1 = 1U;
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[2U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2 = 1U;
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_BMINC))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[3U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNINC))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0 
                                                        = 
                                                        (3U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0 = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_PNINC))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1 
                                                        = 
                                                        (3U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1 = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0 = 1U;
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1 = 1U;
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2 = 1U;
                                                }
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__E_CHEN))) {
                                                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3 
                                                        = 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U])));
                                                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3 = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT) 
                 & (0x01feU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS = 0U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v16 = 1U;
            }
            if ((0x00004000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N 
                    = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                             >> 0x0000000dU));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__LW_WD 
                    = ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__LWE
                    [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N]) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxSX__v0 
                        = (0x000003ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__LW_WD 
                                          >> 0x10U));
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxSX__v0 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v0 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxEX__v0 
                        = (0x000003ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__LW_WD);
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxEX__v0 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N;
                } else {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxSX__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__WPSX
                        [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N];
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxSX__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v1 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxEX__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__WPEX
                        [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N];
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxEX__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__N;
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RP_WD 
                = ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                        ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                        ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_USE 
                = (IData)((0U != (0x00500000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_RP 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[2U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RCT_WD 
                = ((0x00400000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                    ? (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PIPE[1U]
                       .__PVT__RxCT_EN[0U] ? ((0x00020000U 
                                               & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                                               ? ((0x00010000U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                                                   : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                                               : ((0x00010000U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[0U])
                                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                                                   : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF))
                        : 0U) : vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_Q);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_SEL 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_USE)
                          ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_RP)
                          : (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                             >> 6U)));
            __Vfunc_CTData__38__RxKDBS = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_SEL]
                .__PVT__KDBS;
            __Vfunc_CTData__38__RxKMD = vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_SEL]
                .__PVT__KMD;
            __Vfunc_CTData__38__DW = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_USE)
                                       ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RCT_WD
                                       : vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RP_WD);
            vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                = ((0x0000007fffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                   | ((QData)((IData)((__Vfunc_CTData__38__DW 
                                       >> 0x1fU))) 
                      << 0x00000027U));
            vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                = ((0x00000080ffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                   | ((QData)((IData)((0x0000007fU 
                                       & ((__Vfunc_CTData__38__DW 
                                           >> 0x18U) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(__Vfunc_CTData__38__RxKDBS))))))))) 
                      << 0x00000020U));
            vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                = ((0x000000ff0000ffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                   | ((QData)((IData)((0x0000ffffU 
                                       & ((3U == (IData)(__Vfunc_CTData__38__RxKMD))
                                           ? ((IData)(__Vfunc_CTData__38__RxKDBS)
                                               ? ((0x0000e000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (__Vfunc_CTData__38__DW 
                                                                     >> 0x1eU)))) 
                                                      << 0x0000000dU)) 
                                                  | (0x00001fffU 
                                                     & (__Vfunc_CTData__38__DW 
                                                        >> 0x12U)))
                                               : (__Vfunc_CTData__38__DW 
                                                  >> 8U))
                                           : ((IData)(__Vfunc_CTData__38__RxKDBS)
                                               ? ((0x0000ffe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (__Vfunc_CTData__38__DW 
                                                                     >> 0x1eU)))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & (__Vfunc_CTData__38__DW 
                                                        >> 0x1aU)))
                                               : ((0x0000ff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (__Vfunc_CTData__38__DW 
                                                                     >> 0x17U)))) 
                                                      << 8U)) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_CTData__38__DW 
                                                        >> 0x10U)))))))) 
                      << 0x00000010U));
            vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                = ((0x000000ffffff0000ULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                   | (IData)((IData)((0x0000ffffU & 
                                      ((3U == (IData)(__Vfunc_CTData__38__RxKMD))
                                        ? ((IData)(__Vfunc_CTData__38__RxKDBS)
                                            ? (0x00003000U 
                                               & (__Vfunc_CTData__38__DW 
                                                  >> 4U))
                                            : (0x0000ff00U 
                                               & (__Vfunc_CTData__38__DW 
                                                  << 8U)))
                                        : ((IData)(__Vfunc_CTData__38__RxKDBS)
                                            ? (0x0000ffc0U 
                                               & (__Vfunc_CTData__38__DW 
                                                  >> 0x0000000aU))
                                            : __Vfunc_CTData__38__DW))))));
            __Vfunc_CTData__38__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_D 
                = __Vfunc_CTData__38__Vfuncout;
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_USE) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_D;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v0 = 1U;
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_RP) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v1 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_D;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v1 = 1U;
                }
            } else {
                if ((0x00000080U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v2 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_D;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v2 = 1U;
                }
                if ((0x00000040U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) {
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v3 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__CT_D;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v3 = 1U;
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__LS_FETCH) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VS_OFFS = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LW_FETCH)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPA_FETCH) 
                              | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RPB_FETCH))))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTA_FETCH)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCTB_FETCH)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_FETCH)))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LN_FETCH)))) {
                                    if ((1U & (~ ((
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT)) 
                                                  | (IData)(
                                                            (0U 
                                                             == 
                                                             (0x003f0000U 
                                                              & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U]))))))) {
                                        if (((((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH)) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH)) 
                                               | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH)) 
                                              | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH)) 
                                             | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH))) {
                                            if ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                  | (0U 
                                                     != 
                                                     (0x0cU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HVS)))) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53))) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VS_OFFS 
                                                    = 
                                                    (0x0000007fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VS_OFFS)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((3U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                        & (~ (4U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                    << 1U)))))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v4 = 1U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v4 = 1U;
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START_EN) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v8 = 1U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v4 = 1U;
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v8 = 1U;
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH) 
                 & (7U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX) 
                           | (4U & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                    << 1U)))))) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v0 
                    = (0x0007ffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NX[0U] 
                                       + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[0U]) 
                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[0U]));
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v1 
                    = (0x0007ffffU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__NX[1U] 
                                       + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[1U]) 
                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[1U]));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v2 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[2U] 
                                         + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[2U])));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v3 
                    = (0x0007ffffU & ((IData)(0x00000100U) 
                                      + (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[3U] 
                                         + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__CX[3U])));
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                         >> 0x00000011U));
            if ((0x00040000U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])) {
                if ((0U == (7U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000fU)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_VCNT 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_VCNT)));
                    if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_VCNT) 
                          == (0x0000000fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[63U] 
                                             >> 0x0000000cU))) 
                         | (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_VCNT = 0U;
                    }
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_WD 
                    = ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                        ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RB1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RB0_BUF)
                        : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_BANK_2))
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__RA1_BUF
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__RA0_BUF));
                __Vfunc_NxLSSMask__31__NxLSS = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                    [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                    .__PVT__LSS;
                vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask 
                    = (7U & (0x0ec8U >> ((IData)(3U) 
                                         * (IData)(__Vfunc_NxLSSMask__31__NxLSS))));
                vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_16__NxLSSMask 
                    = vlSymsp->TOP__REF_VDP2_PKG.NxLSSMask__Vstatic__mask;
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_RD 
                    = (0U == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WSCRNY) 
                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_16__NxLSSMask)) 
                              & (6U | (3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)))));
                if ((0U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                  >> 0x0000000fU)))) {
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NX__v4 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v4 = 1U;
                    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                        [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                        .__PVT__LSCX) {
                        if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_RD) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v0 
                                = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                                                  .__PVT__SCX 
                                                  + 
                                                  (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_WD 
                                                   >> 8U)));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v0 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v0 = 1U;
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                            .__PVT__SCX;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v1 = 1U;
                    }
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NX__v5 
                        = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v5 = 1U;
                    vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v2 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                        [(2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))]
                        .__PVT__SCX;
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v2 
                        = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                } else if ((1U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                         >> 0x0000000fU)))) {
                    if ((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                         [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                         .__PVT__LSCY & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_RD))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v0 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                              [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                                              .__PVT__SCY 
                                              + (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_WD 
                                                 >> 8U)));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v0 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v0 = 1U;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v0 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                    } else if (((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)) 
                                | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD
                                [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2])) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                            .__PVT__SCY;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v1 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v1 
                            = (((3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD))
                                ? 0U : vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                               [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                               .__PVT__ZMY);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v2 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NY
                                              [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2] 
                                              + ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))
                                                  ? 
                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                                                  .__PVT__ZMY 
                                                  << 1U)
                                                  : vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                                 [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                                                 .__PVT__ZMY)));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v2 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NY__v2 = 1U;
                    }
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD__v0 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD__v0 = 1U;
                    if (((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)) 
                         | vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD
                         [(2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))])) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v2 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [(2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))]
                            .__PVT__SCY;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v2 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v2 = 1U;
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v3 
                            = (((3U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD)) 
                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD))
                                ? 0U : 0x00000100U);
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v3 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v4 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NY
                                              [(2U 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))] 
                                              + ((3U 
                                                  == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))
                                                  ? 0x00000200U
                                                  : 0x00000100U)));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v4 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NY__v4 = 1U;
                    }
                    vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD__v1 
                        = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                    vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD__v1 = 1U;
                } else if ((2U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                         >> 0x0000000fU)))) {
                    if (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                        [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                        .__PVT__LZMX) {
                        if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_RD) {
                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__LZMX__v0 
                                = (0x000007ffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__LS_WD 
                                                  >> 8U));
                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__LZMX__v0 
                                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v0 = 1U;
                        }
                    } else {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__LZMX__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                            [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                            .__PVT__ZMX;
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__LZMX__v1 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v1 = 1U;
                    }
                    if ((1U & (((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_VCNT))) 
                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                   [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]
                                   .__PVT__MZE)) | 
                               (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NMOSY__v0 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NY
                                              [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2] 
                                              + vlSelfRef.tb_top__DOT__u_dut__DOT__NSY
                                              [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2]));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NMOSY__v0 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v0 = 1U;
                    }
                    if ((1U & (((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_VCNT))) 
                                | (~ vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG
                                   [(2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))]
                                   .__PVT__MZE)) | 
                               (0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))))) {
                        vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NMOSY__v1 
                            = (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NY
                                              [(2U 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))] 
                                              + vlSelfRef.tb_top__DOT__u_dut__DOT__NSY
                                              [(2U 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2))]));
                        vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NMOSY__v1 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__N2));
                        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v1 = 1U;
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__SUMY;
            vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__SUMX;
            if ((IData)((0U != (0x00000030U & vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U])))) {
                if ((1U & (~ ((((((((4U == (0x0000001fU 
                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                << 2U) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))) 
                                    | (5U == (0x0000001fU 
                                              & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                    >> 0x0000001eU))))) 
                                   | (0x0cU == (0x0000001fU 
                                                & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                      >> 0x0000001eU))))) 
                                  | (0x0dU == (0x0000001fU 
                                               & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) 
                                 | (0x0eU == (0x0000001fU 
                                              & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                    >> 0x0000001eU))))) 
                                | (0x0fU == (0x0000001fU 
                                             & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                   >> 0x0000001eU))))) 
                               | (0x10U == (0x0000001fU 
                                            & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                << 2U) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU))))) 
                              | (0x11U == (0x0000001fU 
                                           & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                 >> 0x0000001eU)))))))) {
                    if ((0x12U != (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                        if ((0x13U != (0x0000001fU 
                                       & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                           << 2U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                           >> 0x0000001eU))))) {
                            if ((0x14U != (0x0000001fU 
                                           & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                 >> 0x0000001eU))))) {
                                if ((0x15U != (0x0000001fU 
                                               & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                                    if ((0x16U != (0x0000001fU 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                         >> 0x0000001eU))))) {
                                        if ((0x17U 
                                             == (0x0000001fU 
                                                 & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                       >> 0x0000001eU))))) {
                                            __Vfunc_TblAddrToRC__83__P 
                                                = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                [(0x0000001fU 
                                                  & Vtb_top__ConstPool__CONST_hb568d580_0
                                                  [
                                                  (0x0000001fU 
                                                   & ((0x07fffffcU 
                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                          << 2U)) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                         >> 0x0000001eU)))])];
                                            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_25__TblAddrToRC 
                                                = (0xffffffc0U 
                                                   & __Vfunc_TblAddrToRC__83__P);
                                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAst__v0 
                                                = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_25__TblAddrToRC;
                                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAst__v0 
                                                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N;
                                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAst__v0 = 1U;
                                            __Vfunc_AddrIncToRA__84__P 
                                                = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                                [(0x0000001fU 
                                                  & Vtb_top__ConstPool__CONST_h1f995f22_0
                                                  [
                                                  (0x0000001fU 
                                                   & ((0x07fffffcU 
                                                       & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                          << 2U)) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                         >> 0x0000001eU)))])];
                                            __Vfunc_AddrIncToRA__84__Vfuncout 
                                                = (
                                                   ((QData)((IData)(
                                                                    (0x000001ffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (__Vfunc_AddrIncToRA__84__P 
                                                                                >> 0x00000019U))))))) 
                                                    << 0x0000001aU) 
                                                   | (QData)((IData)(
                                                                     (0x03ffffc0U 
                                                                      & __Vfunc_AddrIncToRA__84__P))));
                                            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_26__AddrIncToRA 
                                                = __Vfunc_AddrIncToRA__84__Vfuncout;
                                            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAy__v0 
                                                = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAy
                                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N] 
                                                      + vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_26__AddrIncToRA));
                                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAy__v0 
                                                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N;
                                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v0 = 1U;
                                            if ((0x01ffU 
                                                 == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT))) {
                                                vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAy__v1 
                                                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N;
                                                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v1 = 1U;
                                            }
                                            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAx__v0 
                                                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__N;
                                            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v0 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((4U == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))) 
                           | (5U == (0x0000001fU & 
                                     ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                       << 2U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                 >> 0x0000001eU))))) 
                          | (0x0cU == (0x0000001fU 
                                       & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                           << 2U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                           >> 0x0000001eU))))) 
                         | (0x0dU == (0x0000001fU & 
                                      ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                        << 2U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU))))) 
                        | (0x0eU == (0x0000001fU & 
                                     ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                       << 2U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                 >> 0x0000001eU))))) 
                       | (0x0fU == (0x0000001fU & (
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                      >> 0x0000001eU))))) 
                      | (0x10U == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) 
                     | (0x11U == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                    >> 0x0000001eU)))))) {
                    if ((4U != (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                << 2U) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU))))) {
                        if ((5U != (0x0000001fU & (
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                      >> 0x0000001eU))))) {
                            if ((0x0cU == (0x0000001fU 
                                           & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                 >> 0x0000001eU))))) {
                                vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY = 0U;
                                vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX = 0U;
                                vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB = 0U;
                                vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB = 0U;
                                __Vfunc_MatrParamToRC__41__P 
                                    = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                                    [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f80d28f_0
                                      [(0x0000001fU 
                                        & ((0x07fffffcU 
                                            & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U)) 
                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                              >> 0x0000001eU)))])];
                                __Vfunc_MatrParamToRC__41__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__41__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__41__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__41__P));
                                vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                                    = __Vfunc_MatrParamToRC__41__Vfuncout;
                                __Vfunc_MatrParamToRC__42__P 
                                    = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                                    [(0x0000001fU & Vtb_top__ConstPool__CONST_h181bee66_0
                                      [(0x0000001fU 
                                        & ((0x07fffffcU 
                                            & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U)) 
                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                              >> 0x0000001eU)))])];
                                __Vfunc_MatrParamToRC__42__Vfuncout 
                                    = ((((0x0000fff0U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_MatrParamToRC__42__P 
                                                            >> 0x00000013U)))) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_MatrParamToRC__42__P 
                                               >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_MatrParamToRC__42__P));
                                vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                                    = __Vfunc_MatrParamToRC__42__Vfuncout;
                                __Vfunc_ScrnIncToRC__39__P 
                                    = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                    [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f995f22_0
                                      [(0x0000001fU 
                                        & ((0x07fffffcU 
                                            & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U)) 
                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                              >> 0x0000001eU)))])];
                                __Vfunc_ScrnIncToRC__39__Vfuncout 
                                    = ((((0x0000fff8U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_ScrnIncToRC__39__P 
                                                            >> 0x00000012U)))) 
                                             << 3U)) 
                                         | (7U & (__Vfunc_ScrnIncToRC__39__P 
                                                  >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_ScrnIncToRC__39__P));
                                vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                                    = __Vfunc_ScrnIncToRC__39__Vfuncout;
                                __Vfunc_ScrnIncToRC__40__P 
                                    = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                    [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f995f22_0
                                      [(0x0000001fU 
                                        & ((0x07fffffcU 
                                            & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U)) 
                                           | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                              >> 0x0000001eU)))])];
                                __Vfunc_ScrnIncToRC__40__Vfuncout 
                                    = ((((0x0000fff8U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (__Vfunc_ScrnIncToRC__40__P 
                                                            >> 0x00000012U)))) 
                                             << 3U)) 
                                         | (7U & (__Vfunc_ScrnIncToRC__40__P 
                                                  >> 0x00000010U))) 
                                        << 0x00000010U) 
                                       | (0x0000ffc0U 
                                          & __Vfunc_ScrnIncToRC__40__P));
                                vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                                    = __Vfunc_ScrnIncToRC__40__Vfuncout;
                            } else {
                                if ((0x0dU != (0x0000001fU 
                                               & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                                    if ((0x0eU == (0x0000001fU 
                                                   & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                         >> 0x0000001eU))))) {
                                        vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY = 0U;
                                        vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX = 0U;
                                    } else if ((0x0fU 
                                                != 
                                                (0x0000001fU 
                                                 & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                       >> 0x0000001eU))))) {
                                        if ((0x10U 
                                             != (0x0000001fU 
                                                 & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                       >> 0x0000001eU))))) {
                                            __Vfunc_ScrnCoordToRC__68__P 
                                                = (0x0000ffffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                   [
                                                   (0x0000001fU 
                                                    & Vtb_top__ConstPool__CONST_hb568d580_0
                                                    [
                                                    (0x0000001fU 
                                                     & ((0x07fffffcU 
                                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                            << 2U)) 
                                                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                           >> 0x0000001eU)))])]);
                                            __Vfunc_ScrnCoordToRC__68__Vfuncout 
                                                = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_ScrnCoordToRC__68__P) 
                                                                   >> 0x0000000dU)))) 
                                                    << 0x0000001eU) 
                                                   | (0x3fff0000U 
                                                      & ((IData)(__Vfunc_ScrnCoordToRC__68__P) 
                                                         << 0x00000010U)));
                                            vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY 
                                                = __Vfunc_ScrnCoordToRC__68__Vfuncout;
                                            __Vfunc_ScrnCoordToRC__67__P 
                                                = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                                   [
                                                   (0x0000001fU 
                                                    & Vtb_top__ConstPool__CONST_hb568d580_0
                                                    [
                                                    (0x0000001fU 
                                                     & ((0x07fffffcU 
                                                         & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                            << 2U)) 
                                                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                           >> 0x0000001eU)))])] 
                                                   >> 0x10U);
                                            __Vfunc_ScrnCoordToRC__67__Vfuncout 
                                                = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(__Vfunc_ScrnCoordToRC__67__P) 
                                                                   >> 0x0000000dU)))) 
                                                    << 0x0000001eU) 
                                                   | (0x3fff0000U 
                                                      & ((IData)(__Vfunc_ScrnCoordToRC__67__P) 
                                                         << 0x00000010U)));
                                            vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX 
                                                = __Vfunc_ScrnCoordToRC__67__Vfuncout;
                                        }
                                    }
                                }
                                if ((0x0dU == (0x0000001fU 
                                               & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB = 0U;
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB = 0U;
                                    __Vfunc_MatrParamToRC__45__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f80d28f_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__45__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__45__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__45__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__45__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                                        = __Vfunc_MatrParamToRC__45__Vfuncout;
                                    __Vfunc_MatrParamToRC__46__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h181bee66_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__46__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__46__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__46__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__46__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                                        = __Vfunc_MatrParamToRC__46__Vfuncout;
                                    __Vfunc_ScrnIncToRC__43__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f995f22_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_ScrnIncToRC__43__Vfuncout 
                                        = ((((0x0000fff8U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__43__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                             | (7U 
                                                & (__Vfunc_ScrnIncToRC__43__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_ScrnIncToRC__43__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                                        = __Vfunc_ScrnIncToRC__43__Vfuncout;
                                    __Vfunc_ScrnIncToRC__44__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f995f22_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_ScrnIncToRC__44__Vfuncout 
                                        = ((((0x0000fff8U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__44__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                             | (7U 
                                                & (__Vfunc_ScrnIncToRC__44__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_ScrnIncToRC__44__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                                        = __Vfunc_ScrnIncToRC__44__Vfuncout;
                                } else if ((0x0eU == 
                                            (0x0000001fU 
                                             & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                   >> 0x0000001eU))))) {
                                    __Vfunc_ScrnCoordToRC__48__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__48__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__48__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__48__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB 
                                        = __Vfunc_ScrnCoordToRC__48__Vfuncout;
                                    __Vfunc_ScrnCoordToRC__47__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__47__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__47__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__47__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB 
                                        = __Vfunc_ScrnCoordToRC__47__Vfuncout;
                                    __Vfunc_MatrParamToRC__49__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f80d28f_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__49__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__49__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__49__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__49__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                                        = __Vfunc_MatrParamToRC__49__Vfuncout;
                                    __Vfunc_MatrParamToRC__50__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h181bee66_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__50__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__50__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__50__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__50__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                                        = __Vfunc_MatrParamToRC__50__Vfuncout;
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem
                                        [(1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   >> 3U)))];
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__r_xst__DOT__g_ml__DOT__mem
                                        [(1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   >> 3U)))];
                                } else if ((0x0fU == 
                                            (0x0000001fU 
                                             & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                   >> 0x0000001eU))))) {
                                    __Vfunc_ScrnCoordToRC__52__P 
                                        = (0x0000ffffU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])]);
                                    __Vfunc_ScrnCoordToRC__52__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__52__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__52__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB 
                                        = __Vfunc_ScrnCoordToRC__52__Vfuncout;
                                    __Vfunc_ScrnCoordToRC__51__P 
                                        = (0x0000ffffU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])]);
                                    __Vfunc_ScrnCoordToRC__51__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__51__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__51__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB 
                                        = __Vfunc_ScrnCoordToRC__51__Vfuncout;
                                    __Vfunc_MatrParamToRC__53__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f80d28f_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__53__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__53__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__53__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__53__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                                        = __Vfunc_MatrParamToRC__53__Vfuncout;
                                    __Vfunc_MatrParamToRC__54__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h181bee66_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__54__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__54__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__54__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__54__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                                        = __Vfunc_MatrParamToRC__54__Vfuncout;
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem
                                        [(1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   >> 3U)))];
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__r_yst__DOT__g_ml__DOT__mem
                                        [(1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   >> 3U)))];
                                } else if ((0x10U == 
                                            (0x0000001fU 
                                             & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                   >> 0x0000001eU))))) {
                                    __Vfunc_ScrnCoordToRC__58__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__58__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__58__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__58__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB 
                                        = __Vfunc_ScrnCoordToRC__58__Vfuncout;
                                    __Vfunc_ScrnCoordToRC__56__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__56__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__56__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__56__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB 
                                        = __Vfunc_ScrnCoordToRC__56__Vfuncout;
                                    __Vfunc_MatrParamToRC__59__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f80d28f_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__59__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__59__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__59__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__59__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                                        = __Vfunc_MatrParamToRC__59__Vfuncout;
                                    __Vfunc_MatrParamToRC__60__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h181bee66_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__60__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__60__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__60__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__60__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                                        = __Vfunc_MatrParamToRC__60__Vfuncout;
                                    __Vfunc_ScrnStartToRC__55__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f995f22_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_ScrnStartToRC__55__Vfuncout 
                                        = ((((0x0000e000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnStartToRC__55__P 
                                                                >> 0x0000001cU)))) 
                                                 << 0x0000000dU)) 
                                             | (0x00001fffU 
                                                & (__Vfunc_ScrnStartToRC__55__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_ScrnStartToRC__55__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                                        = __Vfunc_ScrnStartToRC__55__Vfuncout;
                                    __Vfunc_ScrnStartToRC__57__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f995f22_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_ScrnStartToRC__57__Vfuncout 
                                        = ((((0x0000e000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnStartToRC__57__P 
                                                                >> 0x0000001cU)))) 
                                                 << 0x0000000dU)) 
                                             | (0x00001fffU 
                                                & (__Vfunc_ScrnStartToRC__57__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_ScrnStartToRC__57__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                                        = __Vfunc_ScrnStartToRC__57__Vfuncout;
                                } else {
                                    __Vfunc_ScrnCoordToRC__64__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__64__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__64__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__64__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB 
                                        = __Vfunc_ScrnCoordToRC__64__Vfuncout;
                                    __Vfunc_ScrnCoordToRC__62__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_hb568d580_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__62__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__62__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__62__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB 
                                        = __Vfunc_ScrnCoordToRC__62__Vfuncout;
                                    __Vfunc_MatrParamToRC__65__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h1f80d28f_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__65__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__65__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__65__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__65__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                                        = __Vfunc_MatrParamToRC__65__Vfuncout;
                                    __Vfunc_MatrParamToRC__66__P 
                                        = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                                        [(0x0000001fU 
                                          & Vtb_top__ConstPool__CONST_h181bee66_0
                                          [(0x0000001fU 
                                            & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                                    __Vfunc_MatrParamToRC__66__Vfuncout 
                                        = ((((0x0000fff0U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__66__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (__Vfunc_MatrParamToRC__66__P 
                                                   >> 0x00000010U))) 
                                            << 0x00000010U) 
                                           | (0x0000ffc0U 
                                              & __Vfunc_MatrParamToRC__66__P));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                                        = __Vfunc_MatrParamToRC__66__Vfuncout;
                                    __Vfunc_ScrnCoordToRC__61__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_h1f995f22_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__61__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__61__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__61__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                                        = __Vfunc_ScrnCoordToRC__61__Vfuncout;
                                    __Vfunc_ScrnCoordToRC__63__P 
                                        = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                                           [(0x0000001fU 
                                             & Vtb_top__ConstPool__CONST_h1f995f22_0
                                             [(0x0000001fU 
                                               & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                                           >> 0x10U);
                                    __Vfunc_ScrnCoordToRC__63__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_ScrnCoordToRC__63__P) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000001eU) 
                                           | (0x3fff0000U 
                                              & ((IData)(__Vfunc_ScrnCoordToRC__63__P) 
                                                 << 0x00000010U)));
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                                        = __Vfunc_ScrnCoordToRC__63__Vfuncout;
                                }
                            }
                        }
                    }
                } else {
                    if ((0x12U != (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                        if ((0x13U != (0x0000001fU 
                                       & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                           << 2U) | 
                                          (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                           >> 0x0000001eU))))) {
                            if ((0x14U != (0x0000001fU 
                                           & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                               << 2U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                 >> 0x0000001eU))))) {
                                if ((0x15U == (0x0000001fU 
                                               & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY = 0U;
                                    vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX = 0U;
                                }
                            }
                        }
                    }
                    if ((0x12U == (0x0000001fU & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU))))) {
                        __Vfunc_ScrnCoordToRC__72__P 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_hb568d580_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])]);
                        __Vfunc_ScrnCoordToRC__72__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__72__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__72__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB 
                            = __Vfunc_ScrnCoordToRC__72__Vfuncout;
                        __Vfunc_ScrnCoordToRC__70__P 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_hb568d580_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])]);
                        __Vfunc_ScrnCoordToRC__70__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__70__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__70__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB 
                            = __Vfunc_ScrnCoordToRC__70__Vfuncout;
                        __Vfunc_MatrParamToRC__73__P 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                            [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f80d28f_0
                              [(0x0000001fU & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                        __Vfunc_MatrParamToRC__73__Vfuncout 
                            = ((((0x0000fff0U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__73__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                 | (0x0000000fU & (__Vfunc_MatrParamToRC__73__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_MatrParamToRC__73__P));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                            = __Vfunc_MatrParamToRC__73__Vfuncout;
                        __Vfunc_MatrParamToRC__74__P 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                            [(0x0000001fU & Vtb_top__ConstPool__CONST_h181bee66_0
                              [(0x0000001fU & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                        __Vfunc_MatrParamToRC__74__Vfuncout 
                            = ((((0x0000fff0U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__74__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                 | (0x0000000fU & (__Vfunc_MatrParamToRC__74__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_MatrParamToRC__74__P));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                            = __Vfunc_MatrParamToRC__74__Vfuncout;
                        __Vfunc_ScrnCoordToRC__69__P 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f995f22_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])]);
                        __Vfunc_ScrnCoordToRC__69__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__69__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__69__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                            = __Vfunc_ScrnCoordToRC__69__Vfuncout;
                        __Vfunc_ScrnCoordToRC__71__P 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f995f22_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])]);
                        __Vfunc_ScrnCoordToRC__71__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__71__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__71__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                            = __Vfunc_ScrnCoordToRC__71__Vfuncout;
                    } else if ((0x13U == (0x0000001fU 
                                          & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU))))) {
                        __Vfunc_ScrnCoordToRC__78__P 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_hb568d580_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                               >> 0x10U);
                        __Vfunc_ScrnCoordToRC__78__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__78__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__78__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB 
                            = __Vfunc_ScrnCoordToRC__78__Vfuncout;
                        __Vfunc_ScrnCoordToRC__76__P 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_b__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_hb568d580_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                               >> 0x10U);
                        __Vfunc_ScrnCoordToRC__76__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__76__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__76__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB 
                            = __Vfunc_ScrnCoordToRC__76__Vfuncout;
                        __Vfunc_MatrParamToRC__79__P 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                            [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f80d28f_0
                              [(0x0000001fU & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                        __Vfunc_MatrParamToRC__79__Vfuncout 
                            = ((((0x0000fff0U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__79__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                 | (0x0000000fU & (__Vfunc_MatrParamToRC__79__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_MatrParamToRC__79__P));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                            = __Vfunc_MatrParamToRC__79__Vfuncout;
                        __Vfunc_MatrParamToRC__80__P 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                            [(0x0000001fU & Vtb_top__ConstPool__CONST_h181bee66_0
                              [(0x0000001fU & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                        __Vfunc_MatrParamToRC__80__Vfuncout 
                            = ((((0x0000fff0U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_MatrParamToRC__80__P 
                                                                >> 0x00000013U)))) 
                                                 << 4U)) 
                                 | (0x0000000fU & (__Vfunc_MatrParamToRC__80__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_MatrParamToRC__80__P));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                            = __Vfunc_MatrParamToRC__80__Vfuncout;
                        __Vfunc_ScrnCoordToRC__75__P 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f995f22_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                               >> 0x10U);
                        __Vfunc_ScrnCoordToRC__75__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__75__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__75__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                            = __Vfunc_ScrnCoordToRC__75__Vfuncout;
                        __Vfunc_ScrnCoordToRC__77__P 
                            = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_a__DOT__g_ml__DOT__mem
                               [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f995f22_0
                                 [(0x0000001fU & ((0x07fffffcU 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                      << 2U)) 
                                                  | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                     >> 0x0000001eU)))])] 
                               >> 0x10U);
                        __Vfunc_ScrnCoordToRC__77__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__77__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__77__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                            = __Vfunc_ScrnCoordToRC__77__Vfuncout;
                    } else if ((0x14U == (0x0000001fU 
                                          & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB = 0U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB = 0U;
                        __Vfunc_ShiftToRC__81__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_m__DOT__g_ml__DOT__mem
                            [(0x0000001fU & Vtb_top__ConstPool__CONST_h1f80d28f_0
                              [(0x0000001fU & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                        __Vfunc_ShiftToRC__81__Vfuncout 
                            = ((((0x0000c000U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ShiftToRC__81__P 
                                                                >> 0x0000001dU)))) 
                                                 << 0x0000000eU)) 
                                 | (0x00003fffU & (__Vfunc_ShiftToRC__81__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ShiftToRC__81__P));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA 
                            = __Vfunc_ShiftToRC__81__Vfuncout;
                        __Vfunc_ShiftToRC__82__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_n__DOT__g_ml__DOT__mem
                            [(0x0000001fU & Vtb_top__ConstPool__CONST_h181bee66_0
                              [(0x0000001fU & ((0x07fffffcU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                                   << 2U)) 
                                               | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                  >> 0x0000001eU)))])];
                        __Vfunc_ShiftToRC__82__Vfuncout 
                            = ((((0x0000c000U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ShiftToRC__82__P 
                                                                >> 0x0000001dU)))) 
                                                 << 0x0000000eU)) 
                                 | (0x00003fffU & (__Vfunc_ShiftToRC__82__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ShiftToRC__82__P));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA 
                            = __Vfunc_ShiftToRC__82__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA = 0x00010000U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA = 0x00010000U;
                    } else if ((0x15U == (0x0000001fU 
                                          & ((vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[2U] 
                                              << 2U) 
                                             | (vlSelfRef.tb_top__DOT__u_dut__DOT__tap2__DOT__g_m10k__DOT__q[1U] 
                                                >> 0x0000001eU))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB = 0U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB = 0U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA = 0U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA = 0U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA = 0U;
                        vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA = 0U;
                    }
                }
            }
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE 
                = (0x0000007eU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                  << 1U));
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                 == ((((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                        ? 0x01a8U : 0x018bU) - (IData)(1U)) 
                     - (IData)(1U)))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE 
                    = (1U | (IData)(vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE));
            }
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))))))] 
                                                 >> 0x10U);
            } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))))))] 
                                                 >> 0x10U);
            } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))))))] 
                                                 >> 0x10U);
            } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))))))] 
                                                 >> 0x10U);
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))))))] 
                                                 >> 0x10U);
            } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (vlSelfRef.tb_top__DOT__u_dut__DOT__rp_fr__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000010U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))))))] 
                                                 >> 0x10U);
            }
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                                                     >> 1U))))))]);
            } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                                                     >> 1U))))))]);
            } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                                                     >> 1U))))))]);
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                                                     >> 1U))))))]);
            } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                                                     >> 1U))))))]);
            } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__d_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__rp_ff__DOT__g_ml__DOT__mem
                                                 [(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                     ? 1U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                      ? 3U
                                                      : 
                                                     ((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                       ? 4U
                                                       : 
                                                      ((0x00000020U 
                                                        & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE))
                                                        ? 5U
                                                        : 6U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE) 
                                                                     >> 1U))))))]);
            }
        }
        if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
               & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N))) 
              & (~ (IData)(vlSelfRef.DTEN_N))) & (~ (IData)(vlSelfRef.REQ_N)))) {
            if ((0x0092U == (0x000001feU & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                            << 1U)))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD__v2 = 1U;
            } else if ((0x0096U == (0x000001feU & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                                   << 1U)))) {
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk7__DOT__SCYN_UPD__v3 = 1U;
            }
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX0 = 1U;
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Xst);
            } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Yst);
            } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DXst);
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DYst);
            } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DX);
            } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE))) {
                vlSelfRef.tb_top__DOT__r_FBDO = (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DY);
            }
        } else if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX0 = 0U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__ADD1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem
                    [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                            >> 1U))];
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                     .__PVT__KTE & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                                    .__PVT__KMD))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                        = (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U]);
                } else {
                    __Vfunc_ScallingToRC__87__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem
                        [(0x0000001fU & (0x000de758U 
                                         >> ((IData)(5U) 
                                             * (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))))];
                    __Vfunc_ScallingToRC__87__Vfuncout 
                        = (((- (IData)((1U & (__Vfunc_ScallingToRC__87__P 
                                              >> 0x00000017U)))) 
                            << 0x00000018U) | (0x00ffffffU 
                                               & __Vfunc_ScallingToRC__87__P));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                        = __Vfunc_ScallingToRC__87__Vfuncout;
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT2 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem
                    [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                            >> 1U))];
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__ADD1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem
                    [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                            >> 1U))];
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                     .__PVT__KTE & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                                       .__PVT__KMD 
                                       >> 1U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                        = (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U]);
                } else {
                    __Vfunc_ScallingToRC__88__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem
                        [(0x0000001fU & (0x000de758U 
                                         >> ((IData)(5U) 
                                             * (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))))];
                    __Vfunc_ScallingToRC__88__Vfuncout 
                        = (((- (IData)((1U & (__Vfunc_ScallingToRC__88__P 
                                              >> 0x00000017U)))) 
                            << 0x00000018U) | (0x00ffffffU 
                                               & __Vfunc_ScallingToRC__88__P));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                        = __Vfunc_ScallingToRC__88__Vfuncout;
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT2 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem
                    [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                            >> 1U))];
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__ADD1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__r_yp__DOT__g_ml__DOT__mem
                [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                        >> 1U))];
            if ((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
                 .__PVT__KTE & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
                                .__PVT__KMD))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                    = (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U]);
            } else {
                __Vfunc_ScallingToRC__89__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem
                    [(0x0000001fU & (0x000de758U >> 
                                     ((IData)(5U) * (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))))];
                __Vfunc_ScallingToRC__89__Vfuncout 
                    = (((- (IData)((1U & (__Vfunc_ScallingToRC__89__P 
                                          >> 0x00000017U)))) 
                        << 0x00000018U) | (0x00ffffffU 
                                           & __Vfunc_ScallingToRC__89__P));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                    = __Vfunc_ScallingToRC__89__Vfuncout;
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__r_spy__DOT__g_ml__DOT__mem
                [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                        >> 1U))];
        } else {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__ADD1 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__r_xp__DOT__g_ml__DOT__mem
                [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                        >> 1U))];
            if ((vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
                 .__PVT__KTE & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[0U]
                                   .__PVT__KMD >> 1U)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                    = (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U]);
            } else {
                __Vfunc_ScallingToRC__90__P = vlSelfRef.tb_top__DOT__u_dut__DOT__rp_k__DOT__g_ml__DOT__mem
                    [(0x0000001fU & (0x000de758U >> 
                                     ((IData)(5U) * (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))))];
                __Vfunc_ScallingToRC__90__Vfuncout 
                    = (((- (IData)((1U & (__Vfunc_ScallingToRC__90__P 
                                          >> 0x00000017U)))) 
                        << 0x00000018U) | (0x00ffffffU 
                                           & __Vfunc_ScallingToRC__90__P));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1 
                    = __Vfunc_ScallingToRC__90__Vfuncout;
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__r_spx__DOT__g_ml__DOT__mem
                [(1U & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                        >> 1U))];
        }
        __Vfunc_MultRC__91__b = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT2;
        __Vfunc_MultRC__91__a = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__MULT1;
        vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__91__a), 
                          VL_EXTENDS_QI(64,32, __Vfunc_MultRC__91__b));
        __Vfunc_MultRC__91__Vfuncout = (IData)((vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                                >> 0x10U));
        vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_29__MultRC 
            = __Vfunc_MultRC__91__Vfuncout;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES 
            = (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__ADD1 
               + vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_29__MultRC);
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC) {
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxX__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH[0U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxX__v0 = 1U;
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RPxLCSD__v0 
                    = (0x0000007fU & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U] 
                                              >> 0x00000020U)));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxY__v0 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH[1U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RPxLCSD__v1 
                    = (0x0000007fU & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U] 
                                              >> 0x00000020U)));
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxX__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH[2U];
                vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxY__v1 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES;
            }
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxCTTP__v0 
                = ((IData)(((0x00020000U == (0x00030000U 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[27U])) 
                            & (vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U] 
                               >> 0x00000027U))) ? 
                   ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U] 
                             >> 0x00000027U)) & vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                    .__PVT__KTE) : ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__CTD
                                             [vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[3U]] 
                                             >> 0x00000027U)) 
                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG
                                    [vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[3U]]
                                    .__PVT__KTE));
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v0 = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__R0RPMSB 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U] 
                                 >> 0x00000027U)));
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxCTTP__v1 
                = ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U] 
                            >> 0x00000027U)) & vlSelfRef.tb_top__DOT__u_dut__DOT__RPxREG[1U]
                   .__PVT__KTE);
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v1 = 1U;
        }
        if (vlSelfRef.RES_N) {
            if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_SEL) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL)) 
                  | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL)) 
                 & (~ (IData)(vlSelfRef.REQ_N)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_RD 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL;
                vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RD 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL;
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL)) 
                  | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL)) 
                 & (~ (IData)(vlSelfRef.REQ_N)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_RD 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL;
                vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RD 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL;
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber4) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld 
                    = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber5))));
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber4) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld 
                    = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld) 
                       | (0x00ffU & ((IData)(1U) << 
                                     (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__A))));
            }
            if (vlSelfRef.CE_F) {
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_SEL) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                     & (~ (IData)(vlSelfRef.REQ_N)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_DO 
                        = ((1U & ((2U <= (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                >> 0x0000000cU)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__A
                                   : (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                      >> 0x0000000aU)))
                            ? vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__ab]
                            : vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__ab]);
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                     & (~ (IData)(vlSelfRef.REQ_N)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REG_RRDY = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                     & (~ (IData)(vlSelfRef.REQ_N)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_DO 
                        = ((1U & ((2U <= (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                >> 0x0000000cU)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__A
                                   : (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                      >> 0x0000000aU)))
                            ? vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__ab]
                            : vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__ab]);
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                     & (~ (IData)(vlSelfRef.REQ_N)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REG_RRDY = 0U;
                }
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                   << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                 == Vtb_top__ConstPool__TABLE_h46723ff3_0
                 [vlSelfRef.tb_top__DOT__r_HRES])) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__HINT = 1U;
            }
            if ((0U == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                         << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__HINT = 0U;
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                   << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)) 
                 == Vtb_top__ConstPool__TABLE_h33db5abf_0
                 [(((IData)(vlSelfRef.PAL) << 5U) | 
                   (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                     << 3U) | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))])) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VINT = 1U;
            }
            if ((0x03feU == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                              << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__VINT = 0U;
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N))) 
                  & (~ (IData)(vlSelfRef.DTEN_N))) 
                 & (~ (IData)(vlSelfRef.REQ_N)))) {
                if ((0x00000080U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                  >> 6U)))) {
                        if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__A 
                                          >> 4U)))) {
                                if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                            if ((1U 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                    = 
                                                    ((0xffff0000U 
                                                      & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[0U]) 
                                                     | (0x01ffU 
                                                        & (IData)(vlSelfRef.DI)));
                                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                    = 
                                                    (0xffffU 
                                                     | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[0U]);
                                            } else {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                    = 
                                                    ((0x0000ffffU 
                                                      & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[0U]) 
                                                     | (0x01ff0000U 
                                                        & ((IData)(vlSelfRef.DI) 
                                                           << 0x00000010U)));
                                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                    = 
                                                    (0xffff0000U 
                                                     | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[0U]);
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[1U]) 
                                                   | (0x01ffU 
                                                      & (IData)(vlSelfRef.DI)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[1U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[1U]) 
                                                   | (0x01ff0000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[1U]);
                                        }
                                    } else if ((2U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[2U]) 
                                                   | (0x01ffU 
                                                      & (IData)(vlSelfRef.DI)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[2U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[2U]) 
                                                   | (0x01ff0000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[2U]);
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[3U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[3U]) 
                                               | (0x007fU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[3U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[3U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[3U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[3U]) 
                                               | (0x007f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[3U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[3U]);
                                    }
                                } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[4U] 
                                                = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[4U]) 
                                                   | (0x1f1fU 
                                                      & (IData)(vlSelfRef.DI)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[4U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[4U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[4U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[4U]) 
                                                   | (0x001f0000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[4U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[4U]);
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[5U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[5U]) 
                                               | (0x1f1fU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[5U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[5U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[5U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[5U]) 
                                               | (0x1f1f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[5U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[5U]);
                                    }
                                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[6U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[6U]) 
                                               | (0x1f1fU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[6U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[6U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[6U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[6U]) 
                                               | (0x1f1f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[6U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[6U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[7U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[7U]) 
                                           | (0x1f1fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[7U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[7U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[7U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[7U]) 
                                           | (0x1f1f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[7U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[7U]);
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((0x00000020U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((0x00000010U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[8U] 
                                                = (0xffff0000U 
                                                   & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[8U]);
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[8U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[8U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[8U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[8U]) 
                                                   | (0x00070000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[8U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[8U]);
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[9U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[9U]) 
                                               | (0x0707U 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[9U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[9U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[9U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[9U]) 
                                               | (0x07070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[9U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[9U]);
                                    }
                                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[10U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[10U]) 
                                               | (0x0707U 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[10U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[10U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[10U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[10U]) 
                                               | (0x07070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[10U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[10U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[11U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[11U]) 
                                           | (0x0707U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[11U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[11U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[11U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[11U]) 
                                           | (0x07070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[11U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[11U]);
                                }
                            } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[12U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[12U]) 
                                               | (0x03ffU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[12U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[12U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[12U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[12U]) 
                                               | (0xf77f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[12U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[12U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[13U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[13U]) 
                                           | (0x03ffU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[13U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[13U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[13U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[13U]) 
                                           | (0x003f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[13U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[13U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[14U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[14U]) 
                                           | (0x0077U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[14U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[14U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[14U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[14U]) 
                                           | (0x77770000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[14U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[14U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[15U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[15U]) 
                                       | (0x013fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[15U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[15U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[15U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[15U]) 
                                       | (0x373f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[15U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[15U]);
                            }
                        } else if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[16U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[16U]) 
                                               | (0xfffeU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[16U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[16U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[16U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[16U]) 
                                               | (0x80070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[16U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[16U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[17U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[17U]) 
                                           | (0xfffeU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[17U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[17U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[17U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[17U]) 
                                           | (0x80070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[17U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[17U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[18U]) 
                                           | (0xbf8fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[18U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[18U]) 
                                           | (0xbfbf0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[18U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[18U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[19U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[19U]) 
                                       | (0xbfbfU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[19U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[19U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[19U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[19U]) 
                                       | (0xbfbf0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[19U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[19U]);
                            }
                        } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[20U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[20U]) 
                                           | (0x01ffU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[20U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[20U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[20U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[20U]) 
                                           | (0x03ff0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[20U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[20U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[21U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[21U]) 
                                       | (0x01ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[21U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[21U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[21U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[21U]) 
                                       | (0x03ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[21U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[21U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[22U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[22U]) 
                                       | (0x01ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[22U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[22U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[22U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[22U]) 
                                       | (0x03ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[22U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[22U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[23U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[23U]) 
                                   | (0x01ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[23U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[23U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[23U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[23U]) 
                                   | (0x03ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[23U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[23U]);
                        }
                    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[24U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[24U]) 
                                               | (0xfffeU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[24U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[24U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[24U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[24U]) 
                                               | (0x00070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[24U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[24U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[25U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[25U]) 
                                           | (IData)(vlSelfRef.DI));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[25U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[25U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[25U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[25U]) 
                                           | ((IData)(vlSelfRef.DI) 
                                              << 0x00000010U));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[25U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[25U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[26U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[26U]) 
                                           | (0x0707U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[26U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[26U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[26U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[26U]) 
                                           | (0x1f1f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[26U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[26U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[27U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[27U]) 
                                       | (0x0707U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[27U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[27U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[27U] 
                                    = (0x0000ffffU 
                                       & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[27U]);
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[27U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[27U]);
                            }
                        } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[28U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[28U]) 
                                           | (IData)(vlSelfRef.DI));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[28U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[28U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[28U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[28U]) 
                                           | (0x80070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[28U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[28U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[29U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[29U]) 
                                       | (IData)(vlSelfRef.DI));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[29U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[29U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[29U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[29U]) 
                                       | (0x80070000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[29U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[29U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[30U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[30U]) 
                                       | (0xfffeU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[30U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[30U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[30U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[30U]) 
                                       | (0x00070000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[30U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[30U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[31U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[31U]) 
                                   | (0xfffeU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[31U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[31U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[31U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[31U]) 
                                   | (0x00070000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[31U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[31U]);
                        }
                    } else if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[32U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[32U]) 
                                           | (0xfffeU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[32U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[32U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[32U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[32U]) 
                                           | (0x00070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[32U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[32U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[33U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[33U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[33U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[33U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[33U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[33U]) 
                                       | (0x03030000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[33U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[33U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[34U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[34U]) 
                                       | (0x07ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[34U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[34U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[34U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[34U]) 
                                       | (0x07ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[34U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[34U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[35U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[35U]) 
                                   | (0x07ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[35U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[35U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[35U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[35U]) 
                                   | (0x07ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[35U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[35U]);
                        }
                    } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[36U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[36U]) 
                                       | (0xff00U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[36U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[36U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[36U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[36U]) 
                                       | (0x00070000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[36U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[36U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[37U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[37U]) 
                                   | (0xff00U & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[37U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[37U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[37U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[37U]) 
                                   | (0x00070000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[37U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[37U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[38U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[38U]) 
                                   | (0xff00U & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[38U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[38U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[38U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[38U]) 
                                   | (0x07ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[38U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[38U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[39U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[39U]) 
                               | (0xff00U & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[39U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[39U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[39U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[39U]) 
                               | (0x07ff0000U & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[39U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[39U]);
                    }
                } else if ((0x00000020U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((0x00000010U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[40U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[40U]) 
                                               | (0xff00U 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[40U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[40U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[40U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[40U]) 
                                               | (0x00070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[40U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[40U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[41U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[41U]) 
                                           | (0xff00U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[41U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[41U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[41U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[41U]) 
                                           | (0x00070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[41U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[41U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[42U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[42U]) 
                                           | (0xff00U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[42U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[42U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[42U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[42U]) 
                                           | (0x07ff0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[42U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[42U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[43U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[43U]) 
                                       | (0xff00U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[43U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[43U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[43U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[43U]) 
                                       | (0x07ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[43U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[43U]);
                            }
                        } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[44U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[44U]) 
                                           | (0x3f3fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[44U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[44U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[44U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[44U]) 
                                           | (0x3f3f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[44U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[44U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[45U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[45U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[45U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[45U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[45U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[45U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[45U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[45U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[46U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[46U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[46U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[46U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[46U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[46U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[46U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[46U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[47U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[47U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[47U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[47U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[47U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[47U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[47U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[47U]);
                        }
                    } else if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[48U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[48U]) 
                                           | (0x3f3fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[48U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[48U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[48U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[48U]) 
                                           | (0x3f3f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[48U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[48U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[49U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[49U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[49U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[49U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[49U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[49U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[49U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[49U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[50U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[50U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[50U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[50U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[50U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[50U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[50U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[50U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[51U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[51U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[51U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[51U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[51U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[51U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[51U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[51U]);
                        }
                    } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[52U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[52U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[52U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[52U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[52U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[52U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[52U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[52U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[53U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[53U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[53U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[53U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[53U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[53U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[53U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[53U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[54U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[54U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[54U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[54U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[54U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[54U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[54U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[54U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[55U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[55U]) 
                               | (0x3f3fU & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[55U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[55U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[55U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[55U]) 
                               | (0x3f3f0000U & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[55U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[55U]);
                    }
                } else if ((0x00000010U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[56U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[56U]) 
                                           | (0x0077U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[56U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[56U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[56U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[56U]) 
                                           | (0x77770000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[56U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[56U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[57U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[57U]) 
                                       | (IData)(vlSelfRef.DI));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[57U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[57U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[57U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[57U]) 
                                       | (0xc3ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[57U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[57U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[58U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[58U]) 
                                       | (0xc3ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[58U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[58U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[58U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[58U]) 
                                       | (0xc3ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[58U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[58U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[59U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[59U]) 
                                   | (0xc3ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[59U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[59U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[59U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[59U]) 
                                   | (0xc3ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[59U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[59U]);
                        }
                    } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[60U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[60U]) 
                                       | (0x0037U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[60U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[60U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[60U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[60U]) 
                                       | (0x37370000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[60U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[60U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[61U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[61U]) 
                                   | (0x7733U & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[61U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[61U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[61U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[61U]) 
                                   | (0x3f7f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[61U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[61U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[62U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[62U]) 
                                   | (IData)(vlSelfRef.DI));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[62U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[62U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[62U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[62U]) 
                                   | (0x001f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[62U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[62U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[63U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[63U]) 
                               | (0xff1fU & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[63U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[63U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[63U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[63U]) 
                               | (0x1f1f0000U & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[63U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[63U]);
                    }
                } else if ((8U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[64U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[64U]) 
                                       | (IData)(vlSelfRef.DI));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[64U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[64U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[64U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[64U]) 
                                       | ((IData)(vlSelfRef.DI) 
                                          << 0x00000010U));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[64U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[64U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[65U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[65U]) 
                                   | (IData)(vlSelfRef.DI));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[65U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[65U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[65U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[65U]) 
                                   | ((IData)(vlSelfRef.DI) 
                                      << 0x00000010U));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[65U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[65U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[66U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[66U]) 
                                   | (IData)(vlSelfRef.DI));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[66U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[66U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[66U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[66U]) 
                                   | ((IData)(vlSelfRef.DI) 
                                      << 0x00000010U));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[66U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[66U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[67U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[67U]) 
                               | (IData)(vlSelfRef.DI));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[67U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[67U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[67U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[67U]) 
                               | ((IData)(vlSelfRef.DI) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[67U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[67U]);
                    }
                } else if ((4U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[68U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[68U]) 
                                   | (0xb3ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[68U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[68U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[68U] 
                                = (0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[68U]);
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[68U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[68U]);
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U]) 
                               | (0x8000U & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U]);
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__A)) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[71U] 
                        = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[71U]) 
                           | (0x0303U & (IData)(vlSelfRef.DI)));
                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U] 
                        = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U]);
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[71U] 
                        = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[71U]) 
                           | (0x81f30000U & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U] 
                        = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U]);
                }
            }
            if (vlSelfRef.CE_R) {
                if (((~ (IData)(vlSelfRef.CS_N)) & (IData)(vlSelfRef.AD_N))) {
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY))))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY = 2U;
                    }
                    if ((1U & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY))))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY = 2U;
                    }
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__CELLX 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX)));
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x01a9U : 0x018dU) - (IData)(1U))) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__CELLX = 0U;
                }
                if (((~ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                         >> 0x0000001fU)) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DISP_INT = 0U;
                }
                if ((((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                       >> 0x0000001fU) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK)) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__DISP_INT = 1U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                       << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                     == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                          ? 0x03e0U : 0x03dfU))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HTIM = 1U;
                    if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                         == (0x000003ffU & ((IData)(1U) 
                                            + (Vtb_top__ConstPool__TABLE_h33db5abf_0
                                               [(((IData)(vlSelfRef.PAL) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                                     << 3U) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))] 
                                               >> 1U))))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VTIM = 1U;
                    } else if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__VTIM = 0U;
                    }
                } else if ((0x03f8U == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                                         << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__HTIM = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x0162U : 0x0142U) - (IData)(1U))) 
                     | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                        == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                              ? 0x01a9U : 0x018dU) 
                            - (IData)(1U))))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NOACCESS = 1U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                             == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                  ? 0x0165U : 0x0145U)) 
                            | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                               == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                    ? 0x01abU : 0x018fU)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NOACCESS = 0U;
                }
                if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY) 
                                          - (IData)(1U)));
                }
                if ((1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY))) 
                           & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RRDY))))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REG_RRDY = 1U;
                }
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                       << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)) 
                     == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                          ? 0x03e0U : 0x03dfU))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HTIM = 1U;
                    if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                         == (0x000003ffU & ((IData)(1U) 
                                            + (Vtb_top__ConstPool__TABLE_h33db5abf_0
                                               [(((IData)(vlSelfRef.PAL) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__r_VRES) 
                                                     << 3U) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__r_HRES)))] 
                                               >> 1U))))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VTIM = 1U;
                    } else if ((0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__VTIM = 0U;
                    }
                } else if ((0x03f8U == (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                                         << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__HTIM = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                            ? 0x0162U : 0x0142U) - (IData)(1U))) 
                     | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                        == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                              ? 0x01a9U : 0x018dU) 
                            - (IData)(1U))))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NOACCESS = 1U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                             == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                  ? 0x0165U : 0x0145U)) 
                            | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                               == ((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                    ? 0x01abU : 0x018fU)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__NOACCESS = 0U;
                }
                if ((0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY) 
                                          - (IData)(1U)));
                }
                if ((1U & ((~ (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY))) 
                           & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RRDY))))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REG_RRDY = 1U;
                }
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) {
                if (((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                      & (0U == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY))) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RRDY)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__REG_DO 
                        = ((0U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                   << 1U)) ? (0x81f3U 
                                              & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                 >> 0x00000010U))
                            : ((2U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                       << 1U)) ? (0x0303U 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U])
                                : ((4U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                           << 1U)) ? 
                                   (0x030fU & ((0x0000ff00U 
                                                & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[70U] 
                                                   >> 0x00000010U)) 
                                               | ((((2U 
                                                     & (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VBLANK) 
                                                         | (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP))) 
                                                        << 1U)) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HBLANK)) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.PAL)))))
                                    : ((6U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                               << 1U))
                                        ? (0x8000U 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[70U])
                                        : ((8U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                                   << 1U))
                                            ? (0x03ffU 
                                               & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] 
                                                  >> 0x00000010U))
                                            : ((0x000aU 
                                                == 
                                                ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                                 << 1U))
                                                ? (0x03ffU 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U])
                                                : (
                                                   (0x000eU 
                                                    == 
                                                    ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                                     << 1U))
                                                    ? 
                                                   (0xb3ffU 
                                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U])
                                                    : 0U)))))));
                    if (((2U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                 << 1U)) & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                               >> 9U)))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] 
                            = ((0xfc00ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U]) 
                               | (((0x00040000U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U])
                                    ? (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                                        << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT))
                                    : (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                                        << 1U) | (IData)(
                                                         (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                                                           >> 1U) 
                                                          & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                             >> 0x00000011U))))) 
                                  << 0x00000010U));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] 
                            = ((0xfffffc00U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U]) 
                               | (((3U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                 >> 0x00000016U))) 
                                   & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                         >> 0x00000012U)))
                                   ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT)
                                   : ((IData)(((0x00c00000U 
                                                == 
                                                (0x00c00000U 
                                                 & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U])) 
                                               & (((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))) 
                                                  | (~ 
                                                     (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                      >> 0x00000012U)))))
                                       ? (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)) 
                                           & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))))
                                       : (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)))));
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U] 
                            = (0x02000000U | vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U]);
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U] 
                            = (0x02000000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U]);
                    }
                    if ((4U == ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA) 
                                << 1U))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U] 
                            = (0xfcffffffU & vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U]);
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U] 
                            = (0x03000000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U]);
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R))) {
                if ((((~ (IData)(vlSelfRef.EXLAT_N)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__EXLAT_N_OLD)) 
                     & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                        >> 9U))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] 
                        = ((0xfc00ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U]) 
                           | (((0x00040000U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U])
                                ? (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT9) 
                                    << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT))
                                : (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HCT) 
                                    << 1U) | (IData)(
                                                     (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                                                       >> 1U) 
                                                      & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                         >> 0x00000011U))))) 
                              << 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U] 
                        = ((0xfffffc00U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[69U]) 
                           | (((3U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                             >> 0x00000016U))) 
                               & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                     >> 0x00000012U)))
                               ? (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT)
                               : ((IData)(((0x00c00000U 
                                            == (0x00c00000U 
                                                & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U])) 
                                           & (((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))) 
                                              | (~ 
                                                 (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                                                  >> 0x00000012U)))))
                                   ? (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                       << 1U) | ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__ODD)) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LSMD))))
                                   : (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT) 
                                       << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VCT0)))));
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U] 
                        = (0x02000000U | vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U]);
                    vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U] 
                        = (0x02000000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U]);
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b1____pinNumber4) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld 
                    = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A))));
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a1____pinNumber4) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld 
                    = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A))));
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b0____pinNumber4) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld 
                    = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A))));
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a0____pinNumber4) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld 
                    = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A))));
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                   << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)) 
                 == Vtb_top__ConstPool__TABLE_h46723ff3_0
                 [vlSelfRef.tb_top__DOT__d_HRES])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__HINT = 1U;
            }
            if ((0U == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                         << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__HINT = 0U;
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                   << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)) 
                 == Vtb_top__ConstPool__TABLE_h33db5abf_0
                 [(((IData)(vlSelfRef.PAL) << 5U) | 
                   (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                     << 3U) | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))])) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VINT = 1U;
            }
            if ((0x03feU == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                              << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__VINT = 0U;
            }
            if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N))) 
                  & (~ (IData)(vlSelfRef.DTEN_N))) 
                 & (~ (IData)(vlSelfRef.REQ_N)))) {
                if ((0x00000080U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                  >> 6U)))) {
                        if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                          >> 4U)))) {
                                if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                            if ((1U 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                    = 
                                                    ((0xffff0000U 
                                                      & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[0U]) 
                                                     | (0x01ffU 
                                                        & (IData)(vlSelfRef.DI)));
                                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                    = 
                                                    (0xffffU 
                                                     | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[0U]);
                                            } else {
                                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                    = 
                                                    ((0x0000ffffU 
                                                      & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[0U]) 
                                                     | (0x01ff0000U 
                                                        & ((IData)(vlSelfRef.DI) 
                                                           << 0x00000010U)));
                                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                    = 
                                                    (0xffff0000U 
                                                     | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[0U]);
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[1U]) 
                                                   | (0x01ffU 
                                                      & (IData)(vlSelfRef.DI)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[1U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[1U]) 
                                                   | (0x01ff0000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[1U]);
                                        }
                                    } else if ((2U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[2U]) 
                                                   | (0x01ffU 
                                                      & (IData)(vlSelfRef.DI)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[2U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[2U]) 
                                                   | (0x01ff0000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[2U]);
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[3U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[3U]) 
                                               | (0x007fU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[3U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[3U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[3U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[3U]) 
                                               | (0x007f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[3U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[3U]);
                                    }
                                } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[4U] 
                                                = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[4U]) 
                                                   | (0x1f1fU 
                                                      & (IData)(vlSelfRef.DI)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[4U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[4U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[4U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[4U]) 
                                                   | (0x001f0000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[4U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[4U]);
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[5U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[5U]) 
                                               | (0x1f1fU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[5U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[5U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[5U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[5U]) 
                                               | (0x1f1f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[5U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[5U]);
                                    }
                                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[6U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[6U]) 
                                               | (0x1f1fU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[6U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[6U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[6U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[6U]) 
                                               | (0x1f1f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[6U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[6U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[7U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[7U]) 
                                           | (0x1f1fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[7U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[7U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[7U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[7U]) 
                                           | (0x1f1f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[7U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[7U]);
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((0x00000020U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((0x00000010U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[8U] 
                                                = (0xffff0000U 
                                                   & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[8U]);
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[8U] 
                                                = (0xffffU 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[8U]);
                                        } else {
                                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[8U] 
                                                = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[8U]) 
                                                   | (0x00070000U 
                                                      & ((IData)(vlSelfRef.DI) 
                                                         << 0x00000010U)));
                                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[8U] 
                                                = (0xffff0000U 
                                                   | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[8U]);
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[9U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[9U]) 
                                               | (0x0707U 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[9U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[9U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[9U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[9U]) 
                                               | (0x07070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[9U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[9U]);
                                    }
                                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[10U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[10U]) 
                                               | (0x0707U 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[10U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[10U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[10U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[10U]) 
                                               | (0x07070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[10U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[10U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[11U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[11U]) 
                                           | (0x0707U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[11U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[11U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[11U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[11U]) 
                                           | (0x07070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[11U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[11U]);
                                }
                            } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[12U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[12U]) 
                                               | (0x03ffU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[12U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[12U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[12U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[12U]) 
                                               | (0xf77f0000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[12U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[12U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[13U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[13U]) 
                                           | (0x03ffU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[13U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[13U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[13U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[13U]) 
                                           | (0x003f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[13U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[13U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[14U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[14U]) 
                                           | (0x0077U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[14U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[14U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[14U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[14U]) 
                                           | (0x77770000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[14U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[14U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[15U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[15U]) 
                                       | (0x013fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[15U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[15U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[15U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[15U]) 
                                       | (0x373f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[15U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[15U]);
                            }
                        } else if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[16U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[16U]) 
                                               | (0xfffeU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[16U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[16U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[16U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[16U]) 
                                               | (0x80070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[16U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[16U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[17U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[17U]) 
                                           | (0xfffeU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[17U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[17U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[17U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[17U]) 
                                           | (0x80070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[17U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[17U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[18U]) 
                                           | (0xbf8fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[18U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[18U]) 
                                           | (0xbfbf0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[18U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[18U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[19U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[19U]) 
                                       | (0xbfbfU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[19U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[19U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[19U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[19U]) 
                                       | (0xbfbf0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[19U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[19U]);
                            }
                        } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[20U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[20U]) 
                                           | (0x01ffU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[20U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[20U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[20U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[20U]) 
                                           | (0x03ff0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[20U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[20U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[21U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[21U]) 
                                       | (0x01ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[21U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[21U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[21U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[21U]) 
                                       | (0x03ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[21U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[21U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[22U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[22U]) 
                                       | (0x01ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[22U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[22U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[22U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[22U]) 
                                       | (0x03ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[22U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[22U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[23U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[23U]) 
                                   | (0x01ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[23U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[23U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[23U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[23U]) 
                                   | (0x03ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[23U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[23U]);
                        }
                    } else if ((0x00000010U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[24U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[24U]) 
                                               | (0xfffeU 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[24U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[24U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[24U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[24U]) 
                                               | (0x00070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[24U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[24U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[25U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[25U]) 
                                           | (IData)(vlSelfRef.DI));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[25U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[25U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[25U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[25U]) 
                                           | ((IData)(vlSelfRef.DI) 
                                              << 0x00000010U));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[25U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[25U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[26U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[26U]) 
                                           | (0x0707U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[26U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[26U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[26U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[26U]) 
                                           | (0x1f1f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[26U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[26U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[27U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[27U]) 
                                       | (0x0707U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[27U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[27U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[27U] 
                                    = (0x0000ffffU 
                                       & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[27U]);
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[27U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[27U]);
                            }
                        } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[28U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[28U]) 
                                           | (IData)(vlSelfRef.DI));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[28U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[28U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[28U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[28U]) 
                                           | (0x80070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[28U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[28U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[29U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[29U]) 
                                       | (IData)(vlSelfRef.DI));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[29U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[29U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[29U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[29U]) 
                                       | (0x80070000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[29U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[29U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[30U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[30U]) 
                                       | (0xfffeU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[30U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[30U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[30U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[30U]) 
                                       | (0x00070000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[30U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[30U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[31U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[31U]) 
                                   | (0xfffeU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[31U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[31U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[31U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[31U]) 
                                   | (0x00070000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[31U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[31U]);
                        }
                    } else if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[32U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[32U]) 
                                           | (0xfffeU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[32U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[32U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[32U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[32U]) 
                                           | (0x00070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[32U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[32U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[33U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[33U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[33U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[33U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[33U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[33U]) 
                                       | (0x03030000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[33U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[33U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[34U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[34U]) 
                                       | (0x07ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[34U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[34U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[34U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[34U]) 
                                       | (0x07ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[34U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[34U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[35U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[35U]) 
                                   | (0x07ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[35U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[35U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[35U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[35U]) 
                                   | (0x07ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[35U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[35U]);
                        }
                    } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[36U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[36U]) 
                                       | (0xff00U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[36U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[36U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[36U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[36U]) 
                                       | (0x00070000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[36U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[36U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[37U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[37U]) 
                                   | (0xff00U & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[37U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[37U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[37U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[37U]) 
                                   | (0x00070000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[37U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[37U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[38U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[38U]) 
                                   | (0xff00U & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[38U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[38U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[38U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[38U]) 
                                   | (0x07ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[38U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[38U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[39U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[39U]) 
                               | (0xff00U & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[39U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[39U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[39U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[39U]) 
                               | (0x07ff0000U & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[39U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[39U]);
                    }
                } else if ((0x00000020U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((0x00000010U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[40U] 
                                            = ((0xffff0000U 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[40U]) 
                                               | (0xff00U 
                                                  & (IData)(vlSelfRef.DI)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[40U] 
                                            = (0xffffU 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[40U]);
                                    } else {
                                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[40U] 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[40U]) 
                                               | (0x00070000U 
                                                  & ((IData)(vlSelfRef.DI) 
                                                     << 0x00000010U)));
                                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[40U] 
                                            = (0xffff0000U 
                                               | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[40U]);
                                    }
                                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[41U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[41U]) 
                                           | (0xff00U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[41U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[41U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[41U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[41U]) 
                                           | (0x00070000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[41U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[41U]);
                                }
                            } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[42U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[42U]) 
                                           | (0xff00U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[42U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[42U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[42U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[42U]) 
                                           | (0x07ff0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[42U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[42U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[43U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[43U]) 
                                       | (0xff00U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[43U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[43U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[43U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[43U]) 
                                       | (0x07ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[43U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[43U]);
                            }
                        } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[44U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[44U]) 
                                           | (0x3f3fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[44U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[44U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[44U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[44U]) 
                                           | (0x3f3f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[44U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[44U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[45U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[45U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[45U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[45U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[45U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[45U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[45U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[45U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[46U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[46U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[46U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[46U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[46U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[46U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[46U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[46U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[47U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[47U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[47U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[47U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[47U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[47U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[47U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[47U]);
                        }
                    } else if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[48U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[48U]) 
                                           | (0x3f3fU 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[48U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[48U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[48U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[48U]) 
                                           | (0x3f3f0000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[48U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[48U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[49U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[49U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[49U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[49U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[49U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[49U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[49U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[49U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[50U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[50U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[50U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[50U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[50U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[50U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[50U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[50U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[51U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[51U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[51U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[51U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[51U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[51U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[51U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[51U]);
                        }
                    } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[52U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[52U]) 
                                       | (0x3f3fU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[52U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[52U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[52U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[52U]) 
                                       | (0x3f3f0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[52U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[52U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[53U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[53U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[53U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[53U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[53U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[53U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[53U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[53U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[54U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[54U]) 
                                   | (0x3f3fU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[54U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[54U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[54U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[54U]) 
                                   | (0x3f3f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[54U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[54U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[55U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[55U]) 
                               | (0x3f3fU & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[55U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[55U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[55U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[55U]) 
                               | (0x3f3f0000U & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[55U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[55U]);
                    }
                } else if ((0x00000010U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[56U] 
                                        = ((0xffff0000U 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[56U]) 
                                           | (0x0077U 
                                              & (IData)(vlSelfRef.DI)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[56U] 
                                        = (0xffffU 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[56U]);
                                } else {
                                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[56U] 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[56U]) 
                                           | (0x77770000U 
                                              & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[56U] 
                                        = (0xffff0000U 
                                           | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[56U]);
                                }
                            } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[57U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[57U]) 
                                       | (IData)(vlSelfRef.DI));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[57U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[57U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[57U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[57U]) 
                                       | (0xc3ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[57U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[57U]);
                            }
                        } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[58U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[58U]) 
                                       | (0xc3ffU & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[58U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[58U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[58U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[58U]) 
                                       | (0xc3ff0000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[58U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[58U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[59U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[59U]) 
                                   | (0xc3ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[59U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[59U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[59U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[59U]) 
                                   | (0xc3ff0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[59U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[59U]);
                        }
                    } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[60U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[60U]) 
                                       | (0x0037U & (IData)(vlSelfRef.DI)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[60U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[60U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[60U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[60U]) 
                                       | (0x37370000U 
                                          & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[60U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[60U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[61U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[61U]) 
                                   | (0x7733U & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[61U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[61U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[61U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[61U]) 
                                   | (0x3f7f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[61U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[61U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[62U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[62U]) 
                                   | (IData)(vlSelfRef.DI));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[62U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[62U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[62U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[62U]) 
                                   | (0x001f0000U & 
                                      ((IData)(vlSelfRef.DI) 
                                       << 0x00000010U)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[62U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[62U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[63U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[63U]) 
                               | (0xff1fU & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[63U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[63U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[63U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[63U]) 
                               | (0x1f1f0000U & ((IData)(vlSelfRef.DI) 
                                                 << 0x00000010U)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[63U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[63U]);
                    }
                } else if ((8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[64U] 
                                    = ((0xffff0000U 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[64U]) 
                                       | (IData)(vlSelfRef.DI));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[64U] 
                                    = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[64U]);
                            } else {
                                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[64U] 
                                    = ((0x0000ffffU 
                                        & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[64U]) 
                                       | ((IData)(vlSelfRef.DI) 
                                          << 0x00000010U));
                                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[64U] 
                                    = (0xffff0000U 
                                       | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[64U]);
                            }
                        } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[65U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[65U]) 
                                   | (IData)(vlSelfRef.DI));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[65U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[65U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[65U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[65U]) 
                                   | ((IData)(vlSelfRef.DI) 
                                      << 0x00000010U));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[65U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[65U]);
                        }
                    } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[66U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[66U]) 
                                   | (IData)(vlSelfRef.DI));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[66U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[66U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[66U] 
                                = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[66U]) 
                                   | ((IData)(vlSelfRef.DI) 
                                      << 0x00000010U));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[66U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[66U]);
                        }
                    } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[67U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[67U]) 
                               | (IData)(vlSelfRef.DI));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[67U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[67U]);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[67U] 
                            = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[67U]) 
                               | ((IData)(vlSelfRef.DI) 
                                  << 0x00000010U));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[67U] 
                            = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[67U]);
                    }
                } else if ((4U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[68U] 
                                = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[68U]) 
                                   | (0xb3ffU & (IData)(vlSelfRef.DI)));
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[68U] 
                                = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[68U]);
                        } else {
                            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[68U] 
                                = (0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[68U]);
                            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[68U] 
                                = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[68U]);
                        }
                    }
                } else if ((2U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U] 
                            = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U]) 
                               | (0x8000U & (IData)(vlSelfRef.DI)));
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U] 
                            = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U]);
                    }
                } else if ((1U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[71U] 
                        = ((0xffff0000U & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[71U]) 
                           | (0x0303U & (IData)(vlSelfRef.DI)));
                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U] 
                        = (0xffffU | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U]);
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[71U] 
                        = ((0x0000ffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[71U]) 
                           | (0x81f30000U & ((IData)(vlSelfRef.DI) 
                                             << 0x00000010U)));
                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U] 
                        = (0xffff0000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U]);
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) {
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                       & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                      & (0U == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__REG_RD_DELAY))) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RRDY)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__REG_DO 
                        = ((0U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                   << 1U)) ? (0x81f3U 
                                              & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                 >> 0x00000010U))
                            : ((2U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                       << 1U)) ? (0x0303U 
                                                  & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U])
                                : ((4U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                           << 1U)) ? 
                                   (0x030fU & ((0x0000ff00U 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[70U] 
                                                   >> 0x00000010U)) 
                                               | ((((2U 
                                                     & (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VBLANK) 
                                                         | (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP))) 
                                                        << 1U)) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HBLANK)) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.PAL)))))
                                    : ((6U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                               << 1U))
                                        ? (0x8000U 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[70U])
                                        : ((8U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                                   << 1U))
                                            ? (0x03ffU 
                                               & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] 
                                                  >> 0x00000010U))
                                            : ((0x000aU 
                                                == 
                                                ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                                 << 1U))
                                                ? (0x03ffU 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U])
                                                : (
                                                   (0x000eU 
                                                    == 
                                                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                                     << 1U))
                                                    ? 
                                                   (0xb3ffU 
                                                    & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U])
                                                    : 0U)))))));
                    if (((2U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                 << 1U)) & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                               >> 9U)))) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] 
                            = ((0xfc00ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U]) 
                               | (((0x00040000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U])
                                    ? (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                                        << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT))
                                    : (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                                        << 1U) | (IData)(
                                                         (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                                                           >> 1U) 
                                                          & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                             >> 0x00000011U))))) 
                                  << 0x00000010U));
                        vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] 
                            = ((0xfffffc00U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U]) 
                               | (((3U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                 >> 0x00000016U))) 
                                   & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                         >> 0x00000012U)))
                                   ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT)
                                   : ((IData)(((0x00c00000U 
                                                == 
                                                (0x00c00000U 
                                                 & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U])) 
                                               & (((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))) 
                                                  | (~ 
                                                     (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                      >> 0x00000012U)))))
                                       ? (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)) 
                                           & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))))
                                       : (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)))));
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U] 
                            = (0x02000000U | vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U]);
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U] 
                            = (0x02000000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U]);
                    }
                    if ((4U == ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA) 
                                << 1U))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U] 
                            = (0xfcffffffU & vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U]);
                        vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U] 
                            = (0x03000000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U]);
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R))) {
                if ((((~ (IData)(vlSelfRef.EXLAT_N)) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__EXLAT_N_OLD)) 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                        >> 9U))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] 
                        = ((0xfc00ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U]) 
                           | (((0x00040000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U])
                                ? (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT9) 
                                    << 9U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT))
                                : (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HCT) 
                                    << 1U) | (IData)(
                                                     (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                                                       >> 1U) 
                                                      & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                         >> 0x00000011U))))) 
                              << 0x00000010U));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U] 
                        = ((0xfffffc00U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[69U]) 
                           | (((3U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                             >> 0x00000016U))) 
                               & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                     >> 0x00000012U)))
                               ? (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT)
                               : ((IData)(((0x00c00000U 
                                            == (0x00c00000U 
                                                & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U])) 
                                           & (((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))) 
                                              | (~ 
                                                 (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                                                  >> 0x00000012U)))))
                                   ? (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                       << 1U) | ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__ODD)) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LSMD))))
                                   : (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT) 
                                       << 1U) | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VCT0)))));
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U] 
                        = (0x02000000U | vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U]);
                    vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U] 
                        = (0x02000000U | vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U]);
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__CELLX = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_RD = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RD = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_RD = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RD = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__HINT = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__HTIM = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VINT = 1U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__VTIM = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[70U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[71U] = 0U;
            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[70U] = 0xffffffffU;
            vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[71U] = 0xffffffffU;
            __Vilp1 = 0U;
            while ((__Vilp1 <= 0x00000044U)) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REGS[__Vilp1] = 0U;
                __Vilp1 = ((IData)(1U) + __Vilp1);
            }
            __Vilp2 = 0U;
            while ((__Vilp2 <= 0x00000044U)) {
                vlSelfRef.__VdlyMask__tb_top__DOT__u_ref__DOT__REGS[__Vilp2] = 0xffffffffU;
                __Vilp2 = ((IData)(1U) + __Vilp2);
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__HINT = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__HTIM = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__VINT = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__VTIM = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[70U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[71U] = 0U;
            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[70U] = 0xffffffffU;
            vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[71U] = 0xffffffffU;
            __Vilp3 = 0U;
            while ((__Vilp3 <= 0x00000044U)) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REGS[__Vilp3] = 0U;
                __Vilp3 = ((IData)(1U) + __Vilp3);
            }
            __Vilp4 = 0U;
            while ((__Vilp4 <= 0x00000044U)) {
                vlSelfRef.__VdlyMask__tb_top__DOT__u_dut__DOT__REGS[__Vilp4] = 0xffffffffU;
                __Vilp4 = ((IData)(1U) + __Vilp4);
            }
        }
        if (vlSelfRef.CE_R) {
            vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH__v0 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES;
            vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH__v0 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV;
            vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk8__DOT__RES_LATCH__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
             | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F))) {
            __Vfunc_ColorOffset__260__COSL = vlSelfRef.tb_top__DOT__u_ref__DOT__COSL;
            __Vfunc_ColorOffset__260__COEN = vlSelfRef.tb_top__DOT__u_ref__DOT__COEN;
            __Vfunc_ColorOffset__260__COB = (0x000001ffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[0U]);
            __Vfunc_ColorOffset__260__COA = (0x000001ffU 
                                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[1U] 
                                                >> 0x00000010U));
            __Vfunc_ColorOffset__260__C = (0x000000ffU 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk24__DOT__C 
                                              >> 0x00000010U));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO 
                = ((IData)(__Vfunc_ColorOffset__260__COSL)
                    ? (IData)(__Vfunc_ColorOffset__260__COB)
                    : (IData)(__Vfunc_ColorOffset__260__COA));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM 
                = (0x000001ffU & ((IData)(__Vfunc_ColorOffset__260__C) 
                                  + (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO)));
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_44__ColorOffset 
                = (0x000000ffU & ((IData)(__Vfunc_ColorOffset__260__COEN)
                                   ? (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM) 
                                       & (~ (- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO) 
                                                            & (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM)) 
                                                           >> 8U)))))) 
                                      | (- (IData)((IData)(
                                                           ((~ 
                                                             ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO) 
                                                              >> 8U)) 
                                                            & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM) 
                                                               >> 8U))))))
                                   : (IData)(__Vfunc_ColorOffset__260__C)));
            __Vfunc_Shadow__261__SDEN = vlSelfRef.tb_top__DOT__u_ref__DOT__SDEN;
            __Vfunc_Shadow__261__C = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_44__ColorOffset;
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_45__Shadow 
                = ((IData)(__Vfunc_Shadow__261__SDEN)
                    ? (0x0000007fU & ((IData)(__Vfunc_Shadow__261__C) 
                                      >> 1U)) : (IData)(__Vfunc_Shadow__261__C));
            vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                = ((0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL) 
                   | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_45__Shadow) 
                      << 0x00000010U));
            __Vfunc_ColorOffset__262__COSL = vlSelfRef.tb_top__DOT__u_ref__DOT__COSL;
            __Vfunc_ColorOffset__262__COEN = vlSelfRef.tb_top__DOT__u_ref__DOT__COEN;
            __Vfunc_ColorOffset__262__COB = (0x000001ffU 
                                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[0U] 
                                                >> 0x00000010U));
            __Vfunc_ColorOffset__262__COA = (0x000001ffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[2U]);
            __Vfunc_ColorOffset__262__C = (0x000000ffU 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk24__DOT__C 
                                              >> 8U));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO 
                = ((IData)(__Vfunc_ColorOffset__262__COSL)
                    ? (IData)(__Vfunc_ColorOffset__262__COB)
                    : (IData)(__Vfunc_ColorOffset__262__COA));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM 
                = (0x000001ffU & ((IData)(__Vfunc_ColorOffset__262__C) 
                                  + (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO)));
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_46__ColorOffset 
                = (0x000000ffU & ((IData)(__Vfunc_ColorOffset__262__COEN)
                                   ? (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM) 
                                       & (~ (- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO) 
                                                            & (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM)) 
                                                           >> 8U)))))) 
                                      | (- (IData)((IData)(
                                                           ((~ 
                                                             ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO) 
                                                              >> 8U)) 
                                                            & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM) 
                                                               >> 8U))))))
                                   : (IData)(__Vfunc_ColorOffset__262__C)));
            __Vfunc_Shadow__263__SDEN = vlSelfRef.tb_top__DOT__u_ref__DOT__SDEN;
            __Vfunc_Shadow__263__C = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_46__ColorOffset;
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_47__Shadow 
                = ((IData)(__Vfunc_Shadow__263__SDEN)
                    ? (0x0000007fU & ((IData)(__Vfunc_Shadow__263__C) 
                                      >> 1U)) : (IData)(__Vfunc_Shadow__263__C));
            vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                = ((0x00ff00ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL) 
                   | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_47__Shadow) 
                      << 8U));
            __Vfunc_ColorOffset__264__COSL = vlSelfRef.tb_top__DOT__u_ref__DOT__COSL;
            __Vfunc_ColorOffset__264__COEN = vlSelfRef.tb_top__DOT__u_ref__DOT__COEN;
            __Vfunc_ColorOffset__264__COB = (0x000001ffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[1U]);
            __Vfunc_ColorOffset__264__COA = (0x000001ffU 
                                             & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[2U] 
                                                >> 0x00000010U));
            __Vfunc_ColorOffset__264__C = (0x000000ffU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk24__DOT__C);
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO 
                = ((IData)(__Vfunc_ColorOffset__264__COSL)
                    ? (IData)(__Vfunc_ColorOffset__264__COB)
                    : (IData)(__Vfunc_ColorOffset__264__COA));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM 
                = (0x000001ffU & ((IData)(__Vfunc_ColorOffset__264__C) 
                                  + (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO)));
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_48__ColorOffset 
                = (0x000000ffU & ((IData)(__Vfunc_ColorOffset__264__COEN)
                                   ? (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM) 
                                       & (~ (- (IData)(
                                                       (1U 
                                                        & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO) 
                                                            & (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM)) 
                                                           >> 8U)))))) 
                                      | (- (IData)((IData)(
                                                           ((~ 
                                                             ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO) 
                                                              >> 8U)) 
                                                            & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM) 
                                                               >> 8U))))))
                                   : (IData)(__Vfunc_ColorOffset__264__C)));
            __Vfunc_Shadow__265__SDEN = vlSelfRef.tb_top__DOT__u_ref__DOT__SDEN;
            __Vfunc_Shadow__265__C = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_48__ColorOffset;
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_49__Shadow 
                = ((IData)(__Vfunc_Shadow__265__SDEN)
                    ? (0x0000007fU & ((IData)(__Vfunc_Shadow__265__C) 
                                      >> 1U)) : (IData)(__Vfunc_Shadow__265__C));
            vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                = ((0x00ffff00U & vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_49__Shadow));
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DISP) {
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT3) 
                 & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__DCOL 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC;
        }
    } else {
        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v12 = 1U;
        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v8 = 1U;
        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v16 = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__CELLX = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS = 0U;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v4 = 1U;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v6 = 1U;
        vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v12 = 1U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__SCRNX0 = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__rmp__DOT__vld = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__nmp__DOT__vld = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__HINT = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE = 0U;
        vlSelfRef.tb_top__DOT__r_FBDO = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__HTIM = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VINT = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__VTIM = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__SCRNX0 = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b1__DOT__vld = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a1__DOT__vld = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_b0__DOT__vld = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__cy_a0__DOT__vld = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__HINT = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__HTIM = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE = 0U;
        vlSelfRef.tb_top__DOT__d_FBDO = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__VINT = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__VTIM = 0U;
    }
}
