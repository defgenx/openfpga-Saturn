// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

extern const VlUnpacked<SData/*9:0*/, 64> Vtb_top__ConstPool__TABLE_h33db5abf_0;

void Vtb_top___024root___nba_sequent__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_top__DOT__u_dut__DOT____VlemCall_18__MultRC;
    IData/*31:0*/ tb_top__DOT__u_dut__DOT____VlemCall_17__MultRC;
    IData/*31:0*/ __Vfunc_MultRC__32__Vfuncout;
    __Vfunc_MultRC__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__32__a;
    __Vfunc_MultRC__32__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__32__b;
    __Vfunc_MultRC__32__b = 0;
    IData/*31:0*/ __Vfunc_MultRC__33__Vfuncout;
    __Vfunc_MultRC__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__33__a;
    __Vfunc_MultRC__33__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__33__b;
    __Vfunc_MultRC__33__b = 0;
    QData/*33:0*/ __Vfunc_SpriteData__103__Vfuncout;
    __Vfunc_SpriteData__103__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_SpriteData__103__SPCTL;
    __Vfunc_SpriteData__103__SPCTL = 0;
    SData/*15:0*/ __Vfunc_SpriteData__103__DATA;
    __Vfunc_SpriteData__103__DATA = 0;
    CData/*0:0*/ __Vfunc_SpriteData__103__TPSDSL;
    __Vfunc_SpriteData__103__TPSDSL = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__111__Vfuncout;
    __Vfunc_SFCMatch__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__111__SFCS;
    __Vfunc_SFCMatch__111__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__111__SFCODE;
    __Vfunc_SFCMatch__111__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__111__CODE;
    __Vfunc_SFCMatch__111__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__112__Vfuncout;
    __Vfunc_SFCMatch__112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__112__SFCS;
    __Vfunc_SFCMatch__112__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__112__SFCODE;
    __Vfunc_SFCMatch__112__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__112__CODE;
    __Vfunc_SFCMatch__112__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__113__Vfuncout;
    __Vfunc_SFCMatch__113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__113__SFCS;
    __Vfunc_SFCMatch__113__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__113__SFCODE;
    __Vfunc_SFCMatch__113__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__113__CODE;
    __Vfunc_SFCMatch__113__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__114__Vfuncout;
    __Vfunc_SFCMatch__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__114__SFCS;
    __Vfunc_SFCMatch__114__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__114__SFCODE;
    __Vfunc_SFCMatch__114__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__114__CODE;
    __Vfunc_SFCMatch__114__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__115__Vfuncout;
    __Vfunc_SFCMatch__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__115__SFCS;
    __Vfunc_SFCMatch__115__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__115__SFCODE;
    __Vfunc_SFCMatch__115__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__115__CODE;
    __Vfunc_SFCMatch__115__CODE = 0;
    IData/*23:0*/ __Vfunc_Color555To888__116__Vfuncout;
    __Vfunc_Color555To888__116__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_Color555To888__116__DW;
    __Vfunc_Color555To888__116__DW = 0;
    IData/*23:0*/ __Vfunc_Color555To888__117__Vfuncout;
    __Vfunc_Color555To888__117__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_Color555To888__117__DW;
    __Vfunc_Color555To888__117__DW = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__118__Vfuncout;
    __Vfunc_ExtColorCalc__118__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__118__DCSEC;
    __Vfunc_ExtColorCalc__118__DCSEC = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__118__CCENSEC;
    __Vfunc_ExtColorCalc__118__CCENSEC = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__118__DCTHD;
    __Vfunc_ExtColorCalc__118__DCTHD = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__118__PTHD;
    __Vfunc_ExtColorCalc__118__PTHD = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__118__CCENTHD;
    __Vfunc_ExtColorCalc__118__CCENTHD = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__118__DCFTH;
    __Vfunc_ExtColorCalc__118__DCFTH = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__118__LCEN;
    __Vfunc_ExtColorCalc__118__LCEN = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__118__BOKEN;
    __Vfunc_ExtColorCalc__118__BOKEN = 0;
    CData/*1:0*/ __Vfunc_ExtColorCalc__118__CRMD;
    __Vfunc_ExtColorCalc__118__CRMD = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__118__EXCCEN;
    __Vfunc_ExtColorCalc__118__EXCCEN = 0;
    CData/*7:0*/ __Vfunc_ExtColorCalc__118____VlefCall_2__ColorCalcExtRatio;
    __Vfunc_ExtColorCalc__118____VlefCall_2__ColorCalcExtRatio = 0;
    CData/*7:0*/ __Vfunc_ExtColorCalc__118____VlefCall_1__ColorCalcExtRatio;
    __Vfunc_ExtColorCalc__118____VlefCall_1__ColorCalcExtRatio = 0;
    CData/*7:0*/ __Vfunc_ExtColorCalc__118____VlefCall_0__ColorCalcExtRatio;
    __Vfunc_ExtColorCalc__118____VlefCall_0__ColorCalcExtRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__119__Vfuncout;
    __Vfunc_ColorCalcExtRatio__119__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__119__CA;
    __Vfunc_ColorCalcExtRatio__119__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__119__CB;
    __Vfunc_ColorCalcExtRatio__119__CB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__119__CC;
    __Vfunc_ColorCalcExtRatio__119__CC = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__119__RTA;
    __Vfunc_ColorCalcExtRatio__119__RTA = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__119__RTB;
    __Vfunc_ColorCalcExtRatio__119__RTB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__120__Vfuncout;
    __Vfunc_ColorCalcExtRatio__120__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__120__CA;
    __Vfunc_ColorCalcExtRatio__120__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__120__CB;
    __Vfunc_ColorCalcExtRatio__120__CB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__120__CC;
    __Vfunc_ColorCalcExtRatio__120__CC = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__120__RTA;
    __Vfunc_ColorCalcExtRatio__120__RTA = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__120__RTB;
    __Vfunc_ColorCalcExtRatio__120__RTB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__121__Vfuncout;
    __Vfunc_ColorCalcExtRatio__121__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__121__CA;
    __Vfunc_ColorCalcExtRatio__121__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__121__CB;
    __Vfunc_ColorCalcExtRatio__121__CB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__121__CC;
    __Vfunc_ColorCalcExtRatio__121__CC = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__121__RTA;
    __Vfunc_ColorCalcExtRatio__121__RTA = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__121__RTB;
    __Vfunc_ColorCalcExtRatio__121__RTB = 0;
    IData/*23:0*/ __Vfunc_ColorCalc__122__Vfuncout;
    __Vfunc_ColorCalc__122__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_ColorCalc__122__CFST;
    __Vfunc_ColorCalc__122__CFST = 0;
    IData/*23:0*/ __Vfunc_ColorCalc__122__CSEC;
    __Vfunc_ColorCalc__122__CSEC = 0;
    CData/*4:0*/ __Vfunc_ColorCalc__122__CCRT;
    __Vfunc_ColorCalc__122__CCRT = 0;
    CData/*0:0*/ __Vfunc_ColorCalc__122__CCEN;
    __Vfunc_ColorCalc__122__CCEN = 0;
    CData/*0:0*/ __Vfunc_ColorCalc__122__CCMD;
    __Vfunc_ColorCalc__122__CCMD = 0;
    CData/*7:0*/ __Vfunc_ColorCalc__122____VlefCall_2__ColorCalcRatio;
    __Vfunc_ColorCalc__122____VlefCall_2__ColorCalcRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalc__122____VlefCall_1__ColorCalcRatio;
    __Vfunc_ColorCalc__122____VlefCall_1__ColorCalcRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalc__122____VlefCall_0__ColorCalcRatio;
    __Vfunc_ColorCalc__122____VlefCall_0__ColorCalcRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__123__Vfuncout;
    __Vfunc_ColorCalcRatio__123__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__123__CA;
    __Vfunc_ColorCalcRatio__123__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__123__CB;
    __Vfunc_ColorCalcRatio__123__CB = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__123__RA;
    __Vfunc_ColorCalcRatio__123__RA = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__123__RB;
    __Vfunc_ColorCalcRatio__123__RB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__124__Vfuncout;
    __Vfunc_ColorCalcRatio__124__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__124__CA;
    __Vfunc_ColorCalcRatio__124__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__124__CB;
    __Vfunc_ColorCalcRatio__124__CB = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__124__RA;
    __Vfunc_ColorCalcRatio__124__RA = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__124__RB;
    __Vfunc_ColorCalcRatio__124__RB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__125__Vfuncout;
    __Vfunc_ColorCalcRatio__125__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__125__CA;
    __Vfunc_ColorCalcRatio__125__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__125__CB;
    __Vfunc_ColorCalcRatio__125__CB = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__125__RA;
    __Vfunc_ColorCalcRatio__125__RA = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__125__RB;
    __Vfunc_ColorCalcRatio__125__RB = 0;
    CData/*7:0*/ __Vfunc_ColorOffset__126__C;
    __Vfunc_ColorOffset__126__C = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__126__COA;
    __Vfunc_ColorOffset__126__COA = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__126__COB;
    __Vfunc_ColorOffset__126__COB = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__126__COEN;
    __Vfunc_ColorOffset__126__COEN = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__126__COSL;
    __Vfunc_ColorOffset__126__COSL = 0;
    CData/*7:0*/ __Vfunc_Shadow__127__C;
    __Vfunc_Shadow__127__C = 0;
    CData/*0:0*/ __Vfunc_Shadow__127__SDEN;
    __Vfunc_Shadow__127__SDEN = 0;
    CData/*7:0*/ __Vfunc_ColorOffset__128__C;
    __Vfunc_ColorOffset__128__C = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__128__COA;
    __Vfunc_ColorOffset__128__COA = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__128__COB;
    __Vfunc_ColorOffset__128__COB = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__128__COEN;
    __Vfunc_ColorOffset__128__COEN = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__128__COSL;
    __Vfunc_ColorOffset__128__COSL = 0;
    CData/*7:0*/ __Vfunc_Shadow__129__C;
    __Vfunc_Shadow__129__C = 0;
    CData/*0:0*/ __Vfunc_Shadow__129__SDEN;
    __Vfunc_Shadow__129__SDEN = 0;
    CData/*7:0*/ __Vfunc_ColorOffset__130__C;
    __Vfunc_ColorOffset__130__C = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__130__COA;
    __Vfunc_ColorOffset__130__COA = 0;
    SData/*8:0*/ __Vfunc_ColorOffset__130__COB;
    __Vfunc_ColorOffset__130__COB = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__130__COEN;
    __Vfunc_ColorOffset__130__COEN = 0;
    CData/*0:0*/ __Vfunc_ColorOffset__130__COSL;
    __Vfunc_ColorOffset__130__COSL = 0;
    CData/*7:0*/ __Vfunc_Shadow__131__C;
    __Vfunc_Shadow__131__C = 0;
    CData/*0:0*/ __Vfunc_Shadow__131__SDEN;
    __Vfunc_Shadow__131__SDEN = 0;
    CData/*1:0*/ __Vfunc_CTData__164__RxKMD;
    __Vfunc_CTData__164__RxKMD = 0;
    CData/*0:0*/ __Vfunc_CTData__164__RxKDBS;
    __Vfunc_CTData__164__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_CTData__164__DW;
    __Vfunc_CTData__164__DW = 0;
    CData/*1:0*/ __Vfunc_CTData__165__RxKMD;
    __Vfunc_CTData__165__RxKMD = 0;
    CData/*0:0*/ __Vfunc_CTData__165__RxKDBS;
    __Vfunc_CTData__165__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_CTData__165__DW;
    __Vfunc_CTData__165__DW = 0;
    QData/*39:0*/ __Vfunc_CTData__166__Vfuncout;
    __Vfunc_CTData__166__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_CTData__166__RxKMD;
    __Vfunc_CTData__166__RxKMD = 0;
    CData/*0:0*/ __Vfunc_CTData__166__RxKDBS;
    __Vfunc_CTData__166__RxKDBS = 0;
    IData/*31:0*/ __Vfunc_CTData__166__DW;
    __Vfunc_CTData__166__DW = 0;
    IData/*31:0*/ __Vfunc_MultRC__167__Vfuncout;
    __Vfunc_MultRC__167__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__167__a;
    __Vfunc_MultRC__167__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__167__b;
    __Vfunc_MultRC__167__b = 0;
    IData/*31:0*/ __Vfunc_MultRC__168__Vfuncout;
    __Vfunc_MultRC__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__168__a;
    __Vfunc_MultRC__168__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__168__b;
    __Vfunc_MultRC__168__b = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__169__Vfuncout;
    __Vfunc_ScrnIncToRC__169__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__169__P;
    __Vfunc_ScrnIncToRC__169__P = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__170__P;
    __Vfunc_ScrnStartToRC__170__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__171__Vfuncout;
    __Vfunc_ScrnIncToRC__171__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__171__P;
    __Vfunc_ScrnIncToRC__171__P = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__172__P;
    __Vfunc_ScrnStartToRC__172__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__173__Vfuncout;
    __Vfunc_ScrnIncToRC__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__173__P;
    __Vfunc_ScrnIncToRC__173__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__174__Vfuncout;
    __Vfunc_ScrnIncToRC__174__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__174__P;
    __Vfunc_ScrnIncToRC__174__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__177__Vfuncout;
    __Vfunc_ScrnIncToRC__177__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__177__P;
    __Vfunc_ScrnIncToRC__177__P = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__178__Vfuncout;
    __Vfunc_ScrnIncToRC__178__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__178__P;
    __Vfunc_ScrnIncToRC__178__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__181__Vfuncout;
    __Vfunc_ScrnCoordToRC__181__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__181__P;
    __Vfunc_ScrnCoordToRC__181__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__182__Vfuncout;
    __Vfunc_ScrnCoordToRC__182__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__182__P;
    __Vfunc_ScrnCoordToRC__182__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__185__Vfuncout;
    __Vfunc_ScrnCoordToRC__185__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__185__P;
    __Vfunc_ScrnCoordToRC__185__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__186__Vfuncout;
    __Vfunc_ScrnCoordToRC__186__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__186__P;
    __Vfunc_ScrnCoordToRC__186__P = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__189__Vfuncout;
    __Vfunc_ScrnStartToRC__189__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__189__P;
    __Vfunc_ScrnStartToRC__189__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__190__Vfuncout;
    __Vfunc_ScrnCoordToRC__190__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__190__P;
    __Vfunc_ScrnCoordToRC__190__P = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__191__Vfuncout;
    __Vfunc_ScrnStartToRC__191__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__191__P;
    __Vfunc_ScrnStartToRC__191__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__192__Vfuncout;
    __Vfunc_ScrnCoordToRC__192__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__192__P;
    __Vfunc_ScrnCoordToRC__192__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__195__Vfuncout;
    __Vfunc_ScrnCoordToRC__195__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__195__P;
    __Vfunc_ScrnCoordToRC__195__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__196__Vfuncout;
    __Vfunc_ScrnCoordToRC__196__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__196__P;
    __Vfunc_ScrnCoordToRC__196__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__197__Vfuncout;
    __Vfunc_ScrnCoordToRC__197__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__197__P;
    __Vfunc_ScrnCoordToRC__197__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__198__Vfuncout;
    __Vfunc_ScrnCoordToRC__198__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__198__P;
    __Vfunc_ScrnCoordToRC__198__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__201__Vfuncout;
    __Vfunc_ScrnCoordToRC__201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__201__P;
    __Vfunc_ScrnCoordToRC__201__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__202__Vfuncout;
    __Vfunc_ScrnCoordToRC__202__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__202__P;
    __Vfunc_ScrnCoordToRC__202__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__203__Vfuncout;
    __Vfunc_ScrnCoordToRC__203__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__203__P;
    __Vfunc_ScrnCoordToRC__203__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__204__Vfuncout;
    __Vfunc_ScrnCoordToRC__204__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__204__P;
    __Vfunc_ScrnCoordToRC__204__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__205__Vfuncout;
    __Vfunc_ScrnCoordToRC__205__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__205__P;
    __Vfunc_ScrnCoordToRC__205__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__206__Vfuncout;
    __Vfunc_ScrnCoordToRC__206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__206__P;
    __Vfunc_ScrnCoordToRC__206__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__209__Vfuncout;
    __Vfunc_ScrnCoordToRC__209__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__209__P;
    __Vfunc_ScrnCoordToRC__209__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__210__Vfuncout;
    __Vfunc_ScrnCoordToRC__210__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__210__P;
    __Vfunc_ScrnCoordToRC__210__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__211__Vfuncout;
    __Vfunc_ScrnCoordToRC__211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__211__P;
    __Vfunc_ScrnCoordToRC__211__P = 0;
    IData/*31:0*/ __Vfunc_ScrnCoordToRC__212__Vfuncout;
    __Vfunc_ScrnCoordToRC__212__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ScrnCoordToRC__212__P;
    __Vfunc_ScrnCoordToRC__212__P = 0;
    IData/*31:0*/ __Vfunc_TblAddrToRC__217__P;
    __Vfunc_TblAddrToRC__217__P = 0;
    QData/*34:0*/ __Vfunc_AddrIncToRA__218__Vfuncout;
    __Vfunc_AddrIncToRA__218__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_AddrIncToRA__218__P;
    __Vfunc_AddrIncToRA__218__P = 0;
    QData/*34:0*/ __Vfunc_AddrIncToRA__219__Vfuncout;
    __Vfunc_AddrIncToRA__219__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_AddrIncToRA__219__P;
    __Vfunc_AddrIncToRA__219__P = 0;
    QData/*34:0*/ __Vfunc_AddrIncToRA__220__Vfuncout;
    __Vfunc_AddrIncToRA__220__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_AddrIncToRA__220__P;
    __Vfunc_AddrIncToRA__220__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__221__Vfuncout;
    __Vfunc_ScallingToRC__221__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__221__P;
    __Vfunc_ScallingToRC__221__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__222__Vfuncout;
    __Vfunc_ScallingToRC__222__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__222__P;
    __Vfunc_ScallingToRC__222__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__223__Vfuncout;
    __Vfunc_ScallingToRC__223__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__223__P;
    __Vfunc_ScallingToRC__223__P = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__224__Vfuncout;
    __Vfunc_ScallingToRC__224__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScallingToRC__224__P;
    __Vfunc_ScallingToRC__224__P = 0;
    IData/*31:0*/ __Vfunc_MultRC__225__Vfuncout;
    __Vfunc_MultRC__225__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MultRC__225__a;
    __Vfunc_MultRC__225__a = 0;
    IData/*31:0*/ __Vfunc_MultRC__225__b;
    __Vfunc_MultRC__225__b = 0;
    IData/*23:0*/ __Vfunc_Color555To888__227__Vfuncout;
    __Vfunc_Color555To888__227__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_Color555To888__227__DW;
    __Vfunc_Color555To888__227__DW = 0;
    QData/*33:0*/ __Vfunc_SpriteData__237__Vfuncout;
    __Vfunc_SpriteData__237__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_SpriteData__237__SPCTL;
    __Vfunc_SpriteData__237__SPCTL = 0;
    SData/*15:0*/ __Vfunc_SpriteData__237__DATA;
    __Vfunc_SpriteData__237__DATA = 0;
    CData/*0:0*/ __Vfunc_SpriteData__237__TPSDSL;
    __Vfunc_SpriteData__237__TPSDSL = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__245__Vfuncout;
    __Vfunc_SFCMatch__245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__245__SFCS;
    __Vfunc_SFCMatch__245__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__245__SFCODE;
    __Vfunc_SFCMatch__245__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__245__CODE;
    __Vfunc_SFCMatch__245__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__246__Vfuncout;
    __Vfunc_SFCMatch__246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__246__SFCS;
    __Vfunc_SFCMatch__246__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__246__SFCODE;
    __Vfunc_SFCMatch__246__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__246__CODE;
    __Vfunc_SFCMatch__246__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__247__Vfuncout;
    __Vfunc_SFCMatch__247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__247__SFCS;
    __Vfunc_SFCMatch__247__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__247__SFCODE;
    __Vfunc_SFCMatch__247__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__247__CODE;
    __Vfunc_SFCMatch__247__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__248__Vfuncout;
    __Vfunc_SFCMatch__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__248__SFCS;
    __Vfunc_SFCMatch__248__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__248__SFCODE;
    __Vfunc_SFCMatch__248__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__248__CODE;
    __Vfunc_SFCMatch__248__CODE = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__249__Vfuncout;
    __Vfunc_SFCMatch__249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_SFCMatch__249__SFCS;
    __Vfunc_SFCMatch__249__SFCS = 0;
    SData/*15:0*/ __Vfunc_SFCMatch__249__SFCODE;
    __Vfunc_SFCMatch__249__SFCODE = 0;
    CData/*3:0*/ __Vfunc_SFCMatch__249__CODE;
    __Vfunc_SFCMatch__249__CODE = 0;
    IData/*23:0*/ __Vfunc_Color555To888__250__Vfuncout;
    __Vfunc_Color555To888__250__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_Color555To888__250__DW;
    __Vfunc_Color555To888__250__DW = 0;
    IData/*23:0*/ __Vfunc_Color555To888__251__Vfuncout;
    __Vfunc_Color555To888__251__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_Color555To888__251__DW;
    __Vfunc_Color555To888__251__DW = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__252__Vfuncout;
    __Vfunc_ExtColorCalc__252__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__252__DCSEC;
    __Vfunc_ExtColorCalc__252__DCSEC = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__252__CCENSEC;
    __Vfunc_ExtColorCalc__252__CCENSEC = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__252__DCTHD;
    __Vfunc_ExtColorCalc__252__DCTHD = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__252__PTHD;
    __Vfunc_ExtColorCalc__252__PTHD = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__252__CCENTHD;
    __Vfunc_ExtColorCalc__252__CCENTHD = 0;
    IData/*23:0*/ __Vfunc_ExtColorCalc__252__DCFTH;
    __Vfunc_ExtColorCalc__252__DCFTH = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__252__LCEN;
    __Vfunc_ExtColorCalc__252__LCEN = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__252__BOKEN;
    __Vfunc_ExtColorCalc__252__BOKEN = 0;
    CData/*1:0*/ __Vfunc_ExtColorCalc__252__CRMD;
    __Vfunc_ExtColorCalc__252__CRMD = 0;
    CData/*0:0*/ __Vfunc_ExtColorCalc__252__EXCCEN;
    __Vfunc_ExtColorCalc__252__EXCCEN = 0;
    CData/*7:0*/ __Vfunc_ExtColorCalc__252____VlefCall_2__ColorCalcExtRatio;
    __Vfunc_ExtColorCalc__252____VlefCall_2__ColorCalcExtRatio = 0;
    CData/*7:0*/ __Vfunc_ExtColorCalc__252____VlefCall_1__ColorCalcExtRatio;
    __Vfunc_ExtColorCalc__252____VlefCall_1__ColorCalcExtRatio = 0;
    CData/*7:0*/ __Vfunc_ExtColorCalc__252____VlefCall_0__ColorCalcExtRatio;
    __Vfunc_ExtColorCalc__252____VlefCall_0__ColorCalcExtRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__253__Vfuncout;
    __Vfunc_ColorCalcExtRatio__253__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__253__CA;
    __Vfunc_ColorCalcExtRatio__253__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__253__CB;
    __Vfunc_ColorCalcExtRatio__253__CB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__253__CC;
    __Vfunc_ColorCalcExtRatio__253__CC = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__253__RTA;
    __Vfunc_ColorCalcExtRatio__253__RTA = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__253__RTB;
    __Vfunc_ColorCalcExtRatio__253__RTB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__254__Vfuncout;
    __Vfunc_ColorCalcExtRatio__254__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__254__CA;
    __Vfunc_ColorCalcExtRatio__254__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__254__CB;
    __Vfunc_ColorCalcExtRatio__254__CB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__254__CC;
    __Vfunc_ColorCalcExtRatio__254__CC = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__254__RTA;
    __Vfunc_ColorCalcExtRatio__254__RTA = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__254__RTB;
    __Vfunc_ColorCalcExtRatio__254__RTB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__255__Vfuncout;
    __Vfunc_ColorCalcExtRatio__255__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__255__CA;
    __Vfunc_ColorCalcExtRatio__255__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__255__CB;
    __Vfunc_ColorCalcExtRatio__255__CB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcExtRatio__255__CC;
    __Vfunc_ColorCalcExtRatio__255__CC = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__255__RTA;
    __Vfunc_ColorCalcExtRatio__255__RTA = 0;
    CData/*0:0*/ __Vfunc_ColorCalcExtRatio__255__RTB;
    __Vfunc_ColorCalcExtRatio__255__RTB = 0;
    IData/*23:0*/ __Vfunc_ColorCalc__256__Vfuncout;
    __Vfunc_ColorCalc__256__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_ColorCalc__256__CFST;
    __Vfunc_ColorCalc__256__CFST = 0;
    IData/*23:0*/ __Vfunc_ColorCalc__256__CSEC;
    __Vfunc_ColorCalc__256__CSEC = 0;
    CData/*4:0*/ __Vfunc_ColorCalc__256__CCRT;
    __Vfunc_ColorCalc__256__CCRT = 0;
    CData/*0:0*/ __Vfunc_ColorCalc__256__CCEN;
    __Vfunc_ColorCalc__256__CCEN = 0;
    CData/*0:0*/ __Vfunc_ColorCalc__256__CCMD;
    __Vfunc_ColorCalc__256__CCMD = 0;
    CData/*7:0*/ __Vfunc_ColorCalc__256____VlefCall_2__ColorCalcRatio;
    __Vfunc_ColorCalc__256____VlefCall_2__ColorCalcRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalc__256____VlefCall_1__ColorCalcRatio;
    __Vfunc_ColorCalc__256____VlefCall_1__ColorCalcRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalc__256____VlefCall_0__ColorCalcRatio;
    __Vfunc_ColorCalc__256____VlefCall_0__ColorCalcRatio = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__257__Vfuncout;
    __Vfunc_ColorCalcRatio__257__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__257__CA;
    __Vfunc_ColorCalcRatio__257__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__257__CB;
    __Vfunc_ColorCalcRatio__257__CB = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__257__RA;
    __Vfunc_ColorCalcRatio__257__RA = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__257__RB;
    __Vfunc_ColorCalcRatio__257__RB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__258__Vfuncout;
    __Vfunc_ColorCalcRatio__258__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__258__CA;
    __Vfunc_ColorCalcRatio__258__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__258__CB;
    __Vfunc_ColorCalcRatio__258__CB = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__258__RA;
    __Vfunc_ColorCalcRatio__258__RA = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__258__RB;
    __Vfunc_ColorCalcRatio__258__RB = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__259__Vfuncout;
    __Vfunc_ColorCalcRatio__259__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__259__CA;
    __Vfunc_ColorCalcRatio__259__CA = 0;
    CData/*7:0*/ __Vfunc_ColorCalcRatio__259__CB;
    __Vfunc_ColorCalcRatio__259__CB = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__259__RA;
    __Vfunc_ColorCalcRatio__259__RA = 0;
    CData/*5:0*/ __Vfunc_ColorCalcRatio__259__RB;
    __Vfunc_ColorCalcRatio__259__RB = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KX__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KX__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KX__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KX__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KY__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KY__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KY__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KY__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RP_DKAx__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_DKAx__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 = 0;
    QData/*39:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v0 = 0;
    QData/*39:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v1 = 0;
    QData/*39:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v2;
    __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v2 = 0;
    QData/*39:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v3;
    __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v1;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v1;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__dX__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__dX__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__dX__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__dX__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__dY__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__dY__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__dY__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__dY__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Xsp__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Xsp__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Ysp__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Ysp__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Xp__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Xp__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Xp__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Xp__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Yp__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Yp__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__Yp__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__Yp__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__KAst__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__KAst__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__KAst__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__KAst__v0 = 0;
    QData/*34:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__KAy__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__KAy__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v1;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v1 = 0;
    CData/*0:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__KAx__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__KAx__v0 = 0;
    QData/*34:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v1 = 0;
    QData/*34:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v2;
    __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v2;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v2;
    __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0;
    __VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v0 = 0;
    CData/*6:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v0 = 0;
    CData/*6:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v1 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v0;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v1;
    __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v1 = 0;
    // Body
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) 
             | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F))) {
            __Vfunc_ColorOffset__126__COSL = vlSelfRef.tb_top__DOT__u_dut__DOT__COSL;
            __Vfunc_ColorOffset__126__COEN = vlSelfRef.tb_top__DOT__u_dut__DOT__COEN;
            __Vfunc_ColorOffset__126__COB = (0x000001ffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[0U]);
            __Vfunc_ColorOffset__126__COA = (0x000001ffU 
                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[1U] 
                                                >> 0x00000010U));
            __Vfunc_ColorOffset__126__C = (0x000000ffU 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk36__DOT__C 
                                              >> 0x00000010U));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO 
                = ((IData)(__Vfunc_ColorOffset__126__COSL)
                    ? (IData)(__Vfunc_ColorOffset__126__COB)
                    : (IData)(__Vfunc_ColorOffset__126__COA));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM 
                = (0x000001ffU & ((IData)(__Vfunc_ColorOffset__126__C) 
                                  + (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO)));
            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_36__ColorOffset 
                = (0x000000ffU & ((IData)(__Vfunc_ColorOffset__126__COEN)
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
                                   : (IData)(__Vfunc_ColorOffset__126__C)));
            __Vfunc_Shadow__127__SDEN = vlSelfRef.tb_top__DOT__u_dut__DOT__SDEN;
            __Vfunc_Shadow__127__C = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_36__ColorOffset;
            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_37__Shadow 
                = ((IData)(__Vfunc_Shadow__127__SDEN)
                    ? (0x0000007fU & ((IData)(__Vfunc_Shadow__127__C) 
                                      >> 1U)) : (IData)(__Vfunc_Shadow__127__C));
            vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                = ((0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL) 
                   | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_37__Shadow) 
                      << 0x00000010U));
            __Vfunc_ColorOffset__128__COSL = vlSelfRef.tb_top__DOT__u_dut__DOT__COSL;
            __Vfunc_ColorOffset__128__COEN = vlSelfRef.tb_top__DOT__u_dut__DOT__COEN;
            __Vfunc_ColorOffset__128__COB = (0x000001ffU 
                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[0U] 
                                                >> 0x00000010U));
            __Vfunc_ColorOffset__128__COA = (0x000001ffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[2U]);
            __Vfunc_ColorOffset__128__C = (0x000000ffU 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk36__DOT__C 
                                              >> 8U));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO 
                = ((IData)(__Vfunc_ColorOffset__128__COSL)
                    ? (IData)(__Vfunc_ColorOffset__128__COB)
                    : (IData)(__Vfunc_ColorOffset__128__COA));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM 
                = (0x000001ffU & ((IData)(__Vfunc_ColorOffset__128__C) 
                                  + (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO)));
            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_38__ColorOffset 
                = (0x000000ffU & ((IData)(__Vfunc_ColorOffset__128__COEN)
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
                                   : (IData)(__Vfunc_ColorOffset__128__C)));
            __Vfunc_Shadow__129__SDEN = vlSelfRef.tb_top__DOT__u_dut__DOT__SDEN;
            __Vfunc_Shadow__129__C = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_38__ColorOffset;
            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_39__Shadow 
                = ((IData)(__Vfunc_Shadow__129__SDEN)
                    ? (0x0000007fU & ((IData)(__Vfunc_Shadow__129__C) 
                                      >> 1U)) : (IData)(__Vfunc_Shadow__129__C));
            vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                = ((0x00ff00ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL) 
                   | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_39__Shadow) 
                      << 8U));
            __Vfunc_ColorOffset__130__COSL = vlSelfRef.tb_top__DOT__u_dut__DOT__COSL;
            __Vfunc_ColorOffset__130__COEN = vlSelfRef.tb_top__DOT__u_dut__DOT__COEN;
            __Vfunc_ColorOffset__130__COB = (0x000001ffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[1U]);
            __Vfunc_ColorOffset__130__COA = (0x000001ffU 
                                             & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[2U] 
                                                >> 0x00000010U));
            __Vfunc_ColorOffset__130__C = (0x000000ffU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk36__DOT__C);
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO 
                = ((IData)(__Vfunc_ColorOffset__130__COSL)
                    ? (IData)(__Vfunc_ColorOffset__130__COB)
                    : (IData)(__Vfunc_ColorOffset__130__COA));
            vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CSUM 
                = (0x000001ffU & ((IData)(__Vfunc_ColorOffset__130__C) 
                                  + (IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorOffset__Vstatic__CO)));
            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_40__ColorOffset 
                = (0x000000ffU & ((IData)(__Vfunc_ColorOffset__130__COEN)
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
                                   : (IData)(__Vfunc_ColorOffset__130__C)));
            __Vfunc_Shadow__131__SDEN = vlSelfRef.tb_top__DOT__u_dut__DOT__SDEN;
            __Vfunc_Shadow__131__C = vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_40__ColorOffset;
            vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_41__Shadow 
                = ((IData)(__Vfunc_Shadow__131__SDEN)
                    ? (0x0000007fU & ((IData)(__Vfunc_Shadow__131__C) 
                                      >> 1U)) : (IData)(__Vfunc_Shadow__131__C));
            vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                = ((0x00ffff00U & vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL) 
                   | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT____VlemCall_41__Shadow));
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DISP) {
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT3) 
                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL = 0U;
            }
        } else {
            vlSelfRef.tb_top__DOT__u_dut__DOT__DCOL 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_DC;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ADD1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__Yp[1U];
                if ((vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                     .__PVT__KTE & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                                    .__PVT__KMD))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                        = (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U]);
                } else {
                    __Vfunc_ScallingToRC__221__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KY[1U];
                    __Vfunc_ScallingToRC__221__Vfuncout 
                        = (((- (IData)((1U & (__Vfunc_ScallingToRC__221__P 
                                              >> 0x00000017U)))) 
                            << 0x00000018U) | (0x00ffffffU 
                                               & __Vfunc_ScallingToRC__221__P));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                        = __Vfunc_ScallingToRC__221__Vfuncout;
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[1U];
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ADD1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__Xp[1U];
                if ((vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                     .__PVT__KTE & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                                       .__PVT__KMD 
                                       >> 1U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                        = (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U]);
                } else {
                    __Vfunc_ScallingToRC__222__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KX[1U];
                    __Vfunc_ScallingToRC__222__Vfuncout 
                        = (((- (IData)((1U & (__Vfunc_ScallingToRC__222__P 
                                              >> 0x00000017U)))) 
                            << 0x00000018U) | (0x00ffffffU 
                                               & __Vfunc_ScallingToRC__222__P));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                        = __Vfunc_ScallingToRC__222__Vfuncout;
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[1U];
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ADD1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__Yp[0U];
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
                 .__PVT__KTE & (~ vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
                                .__PVT__KMD))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                    = (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U]);
            } else {
                __Vfunc_ScallingToRC__223__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KY[0U];
                __Vfunc_ScallingToRC__223__Vfuncout 
                    = (((- (IData)((1U & (__Vfunc_ScallingToRC__223__P 
                                          >> 0x00000017U)))) 
                        << 0x00000018U) | (0x00ffffffU 
                                           & __Vfunc_ScallingToRC__223__P));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                    = __Vfunc_ScallingToRC__223__Vfuncout;
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[0U];
        } else {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ADD1 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__Xp[0U];
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
                 .__PVT__KTE & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
                                   .__PVT__KMD >> 1U)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                    = (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U]);
            } else {
                __Vfunc_ScallingToRC__224__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KX[0U];
                __Vfunc_ScallingToRC__224__Vfuncout 
                    = (((- (IData)((1U & (__Vfunc_ScallingToRC__224__P 
                                          >> 0x00000017U)))) 
                        << 0x00000018U) | (0x00ffffffU 
                                           & __Vfunc_ScallingToRC__224__P));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1 
                    = __Vfunc_ScallingToRC__224__Vfuncout;
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[0U];
        }
        __Vfunc_MultRC__225__b = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT2;
        __Vfunc_MultRC__225__a = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULT1;
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N 
                = (1U & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                            .__PVT__RP_POS >> 5U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD 
                = ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                    ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                        ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                    : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                        ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF));
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__RCTA) {
                __Vfunc_CTData__164__DW = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                __Vfunc_CTData__164__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
                    .__PVT__KDBS;
                __Vfunc_CTData__164__RxKMD = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[0U]
                    .__PVT__KMD;
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x0000007fffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((__Vfunc_CTData__164__DW 
                                           >> 0x1fU))) 
                          << 0x00000027U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x00000080ffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((0x0000007fU 
                                           & ((__Vfunc_CTData__164__DW 
                                               >> 0x18U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(__Vfunc_CTData__164__RxKDBS))))))))) 
                          << 0x00000020U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x000000ff0000ffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & ((3U == (IData)(__Vfunc_CTData__164__RxKMD))
                                               ? ((IData)(__Vfunc_CTData__164__RxKDBS)
                                                   ? 
                                                  ((0x0000e000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__164__DW 
                                                                      >> 0x1eU)))) 
                                                       << 0x0000000dU)) 
                                                   | (0x00001fffU 
                                                      & (__Vfunc_CTData__164__DW 
                                                         >> 0x12U)))
                                                   : 
                                                  (__Vfunc_CTData__164__DW 
                                                   >> 8U))
                                               : ((IData)(__Vfunc_CTData__164__RxKDBS)
                                                   ? 
                                                  ((0x0000ffe0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__164__DW 
                                                                      >> 0x1eU)))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & (__Vfunc_CTData__164__DW 
                                                         >> 0x1aU)))
                                                   : 
                                                  ((0x0000ff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__164__DW 
                                                                      >> 0x17U)))) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & (__Vfunc_CTData__164__DW 
                                                         >> 0x10U)))))))) 
                          << 0x00000010U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x000000ffffff0000ULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | (IData)((IData)((0x0000ffffU 
                                          & ((3U == (IData)(__Vfunc_CTData__164__RxKMD))
                                              ? ((IData)(__Vfunc_CTData__164__RxKDBS)
                                                  ? 
                                                 (0x00003000U 
                                                  & (__Vfunc_CTData__164__DW 
                                                     >> 4U))
                                                  : 
                                                 (0x0000ff00U 
                                                  & (__Vfunc_CTData__164__DW 
                                                     << 8U)))
                                              : ((IData)(__Vfunc_CTData__164__RxKDBS)
                                                  ? 
                                                 (0x0000ffc0U 
                                                  & (__Vfunc_CTData__164__DW 
                                                     >> 0x0000000aU))
                                                  : __Vfunc_CTData__164__DW))))));
                vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_25__CTData 
                    = vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD;
                __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_25__CTData;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v0 = 1U;
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__RCTB) {
                __Vfunc_CTData__165__DW = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                __Vfunc_CTData__165__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                    .__PVT__KDBS;
                __Vfunc_CTData__165__RxKMD = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                    .__PVT__KMD;
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x0000007fffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((__Vfunc_CTData__165__DW 
                                           >> 0x1fU))) 
                          << 0x00000027U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x00000080ffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((0x0000007fU 
                                           & ((__Vfunc_CTData__165__DW 
                                               >> 0x18U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(__Vfunc_CTData__165__RxKDBS))))))))) 
                          << 0x00000020U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x000000ff0000ffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & ((3U == (IData)(__Vfunc_CTData__165__RxKMD))
                                               ? ((IData)(__Vfunc_CTData__165__RxKDBS)
                                                   ? 
                                                  ((0x0000e000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__165__DW 
                                                                      >> 0x1eU)))) 
                                                       << 0x0000000dU)) 
                                                   | (0x00001fffU 
                                                      & (__Vfunc_CTData__165__DW 
                                                         >> 0x12U)))
                                                   : 
                                                  (__Vfunc_CTData__165__DW 
                                                   >> 8U))
                                               : ((IData)(__Vfunc_CTData__165__RxKDBS)
                                                   ? 
                                                  ((0x0000ffe0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__165__DW 
                                                                      >> 0x1eU)))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & (__Vfunc_CTData__165__DW 
                                                         >> 0x1aU)))
                                                   : 
                                                  ((0x0000ff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__165__DW 
                                                                      >> 0x17U)))) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & (__Vfunc_CTData__165__DW 
                                                         >> 0x10U)))))))) 
                          << 0x00000010U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x000000ffffff0000ULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | (IData)((IData)((0x0000ffffU 
                                          & ((3U == (IData)(__Vfunc_CTData__165__RxKMD))
                                              ? ((IData)(__Vfunc_CTData__165__RxKDBS)
                                                  ? 
                                                 (0x00003000U 
                                                  & (__Vfunc_CTData__165__DW 
                                                     >> 4U))
                                                  : 
                                                 (0x0000ff00U 
                                                  & (__Vfunc_CTData__165__DW 
                                                     << 8U)))
                                              : ((IData)(__Vfunc_CTData__165__RxKDBS)
                                                  ? 
                                                 (0x0000ffc0U 
                                                  & (__Vfunc_CTData__165__DW 
                                                     >> 0x0000000aU))
                                                  : __Vfunc_CTData__165__DW))))));
                vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_26__CTData 
                    = vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD;
                __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_26__CTData;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v1 = 1U;
            }
            if ((1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                       .__PVT__RxCT | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                       .__PVT__RxCRCT))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_RP 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[2U];
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RCT_WD 
                    = ((1U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                        .__PVT__RxCT) ? (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[1U]
                                         .__PVT__RxCT_EN[0U]
                                          ? ((2U & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                              .__PVT__RxCTS[0U])
                                              ? ((1U 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                                  .__PVT__RxCTS[0U])
                                                  ? vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF
                                                  : vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF)
                                              : ((1U 
                                                  & vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PIPE[2U]
                                                  .__PVT__RxCTS[0U])
                                                  ? vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF
                                                  : vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF))
                                          : 0U) : vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_Q);
                __Vfunc_CTData__166__DW = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RCT_WD;
                __Vfunc_CTData__166__RxKDBS = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                    [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_RP]
                    .__PVT__KDBS;
                __Vfunc_CTData__166__RxKMD = vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                    [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_RP]
                    .__PVT__KMD;
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x0000007fffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((__Vfunc_CTData__166__DW 
                                           >> 0x1fU))) 
                          << 0x00000027U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x00000080ffffffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((0x0000007fU 
                                           & ((__Vfunc_CTData__166__DW 
                                               >> 0x18U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(__Vfunc_CTData__166__RxKDBS))))))))) 
                          << 0x00000020U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x000000ff0000ffffULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & ((3U == (IData)(__Vfunc_CTData__166__RxKMD))
                                               ? ((IData)(__Vfunc_CTData__166__RxKDBS)
                                                   ? 
                                                  ((0x0000e000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__166__DW 
                                                                      >> 0x1eU)))) 
                                                       << 0x0000000dU)) 
                                                   | (0x00001fffU 
                                                      & (__Vfunc_CTData__166__DW 
                                                         >> 0x12U)))
                                                   : 
                                                  (__Vfunc_CTData__166__DW 
                                                   >> 8U))
                                               : ((IData)(__Vfunc_CTData__166__RxKDBS)
                                                   ? 
                                                  ((0x0000ffe0U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__166__DW 
                                                                      >> 0x1eU)))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & (__Vfunc_CTData__166__DW 
                                                         >> 0x1aU)))
                                                   : 
                                                  ((0x0000ff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (__Vfunc_CTData__166__DW 
                                                                      >> 0x17U)))) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & (__Vfunc_CTData__166__DW 
                                                         >> 0x10U)))))))) 
                          << 0x00000010U));
                vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD 
                    = ((0x000000ffffff0000ULL & vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD) 
                       | (IData)((IData)((0x0000ffffU 
                                          & ((3U == (IData)(__Vfunc_CTData__166__RxKMD))
                                              ? ((IData)(__Vfunc_CTData__166__RxKDBS)
                                                  ? 
                                                 (0x00003000U 
                                                  & (__Vfunc_CTData__166__DW 
                                                     >> 4U))
                                                  : 
                                                 (0x0000ff00U 
                                                  & (__Vfunc_CTData__166__DW 
                                                     << 8U)))
                                              : ((IData)(__Vfunc_CTData__166__RxKDBS)
                                                  ? 
                                                 (0x0000ffc0U 
                                                  & (__Vfunc_CTData__166__DW 
                                                     >> 0x0000000aU))
                                                  : __Vfunc_CTData__166__DW))))));
                __Vfunc_CTData__166__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.CTData__Vstatic__CTD;
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_D 
                    = __Vfunc_CTData__166__Vfuncout;
                __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v2 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_D;
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v2 = 1U;
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_RP) {
                    __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v3 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__CT_D;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v3 = 1U;
                }
            }
            __Vfunc_MultRC__167__b = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                                      - vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB);
            __Vfunc_MultRC__167__a = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA;
            vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__167__a), 
                              VL_EXTENDS_QI(64,32, __Vfunc_MultRC__167__b));
            __Vfunc_MultRC__167__Vfuncout = (IData)(
                                                    (vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                                     >> 0x10U));
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_27__MultRC 
                = __Vfunc_MultRC__167__Vfuncout;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMX 
                = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX 
                   + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_27__MultRC);
            __Vfunc_MultRC__168__b = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                                      - vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB);
            __Vfunc_MultRC__168__a = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA;
            vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__168__a), 
                              VL_EXTENDS_QI(64,32, __Vfunc_MultRC__168__b));
            __Vfunc_MultRC__168__Vfuncout = (IData)(
                                                    (vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                                     >> 0x10U));
            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_28__MultRC 
                = __Vfunc_MultRC__168__Vfuncout;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMY 
                = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY 
                   + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_28__MultRC);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMX;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMY;
            if ((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                 .__PVT__RPA | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                 .__PVT__RPB)) {
                if (((((((((0U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__RP_POS)) 
                           | (1U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                     .__PVT__RP_POS))) 
                          | (2U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                    .__PVT__RP_POS))) 
                         | (3U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__RP_POS))) 
                        | (4U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                  .__PVT__RP_POS))) 
                       | (5U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                 .__PVT__RP_POS))) 
                      | (6U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                .__PVT__RP_POS))) | 
                     (7U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                             .__PVT__RP_POS)))) {
                    if ((0U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Xst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((1U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Yst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((2U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Zst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((3U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DXst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((4U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DYst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((5U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DX 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((6U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DY 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_A 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    }
                } else if (((((((((8U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS)) 
                                  | (9U == (0x0000001fU 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                            .__PVT__RP_POS))) 
                                 | (0x0aU == (0x0000001fU 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                              .__PVT__RP_POS))) 
                                | (0x0bU == (0x0000001fU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                             .__PVT__RP_POS))) 
                               | (0x0cU == (0x0000001fU 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                            .__PVT__RP_POS))) 
                              | (0x0dU == (0x0000001fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                           .__PVT__RP_POS))) 
                             | (0x0eU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) 
                            | (0x0fU == (0x0000001fU 
                                         & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                         .__PVT__RP_POS)))) {
                    if ((8U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_B 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((9U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_C 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x0aU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_D 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x0bU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_E 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x0cU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_F 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x0dU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PX 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD 
                               >> 0x00000010U);
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PY 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD);
                    } else if ((0x0eU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PZ 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD 
                               >> 0x10U);
                    } else {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CX 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD 
                               >> 0x00000010U);
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CY 
                            = (0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD);
                    }
                } else if (((((((((0x10U == (0x0000001fU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                             .__PVT__RP_POS)) 
                                  | (0x11U == (0x0000001fU 
                                               & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                               .__PVT__RP_POS))) 
                                 | (0x12U == (0x0000001fU 
                                              & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                              .__PVT__RP_POS))) 
                                | (0x13U == (0x0000001fU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                             .__PVT__RP_POS))) 
                               | (0x14U == (0x0000001fU 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                            .__PVT__RP_POS))) 
                              | (0x15U == (0x0000001fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                           .__PVT__RP_POS))) 
                             | (0x16U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) 
                            | (0x17U == (0x0000001fU 
                                         & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                         .__PVT__RP_POS)))) {
                    if ((0x10U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CZ 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD 
                               >> 0x10U);
                    } else if ((0x11U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_MX 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x12U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_MY 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x13U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KX__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KX__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_KX__v0 = 1U;
                    } else if ((0x14U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_KY__v0 = 1U;
                    } else if ((0x15U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_KAst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else if ((0x16U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DKAst 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                    } else {
                        __VdlyVal__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RP_WD;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_DKAx__v0 = 1U;
                    }
                }
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
                    if ((4U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                .__PVT__RP_POS))) {
                        __Vfunc_ScrnIncToRC__169__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DXst;
                        __Vfunc_ScrnIncToRC__169__Vfuncout 
                            = ((((0x0000fff8U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__169__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                 | (7U & (__Vfunc_ScrnIncToRC__169__P 
                                          >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnIncToRC__169__P));
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_29__ScrnIncToRC 
                            = __Vfunc_ScrnIncToRC__169__Vfuncout;
                        __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v0 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__Xst
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N] 
                               + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_29__ScrnIncToRC);
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v0 = 1U;
                        if ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))) {
                            __Vfunc_ScrnStartToRC__170__P 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Xst;
                            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_30__ScrnStartToRC 
                                = ((((0x0000e000U & 
                                      ((- (IData)((1U 
                                                   & (__Vfunc_ScrnStartToRC__170__P 
                                                      >> 0x0000001cU)))) 
                                       << 0x0000000dU)) 
                                     | (0x00001fffU 
                                        & (__Vfunc_ScrnStartToRC__170__P 
                                           >> 0x00000010U))) 
                                    << 0x00000010U) 
                                   | (0x0000ffc0U & __Vfunc_ScrnStartToRC__170__P));
                            __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v1 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_30__ScrnStartToRC;
                            __VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v1 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v1 = 1U;
                        }
                    } else if ((5U == (0x0000001fU 
                                       & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                       .__PVT__RP_POS))) {
                        __Vfunc_ScrnIncToRC__171__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DYst;
                        __Vfunc_ScrnIncToRC__171__Vfuncout 
                            = ((((0x0000fff8U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__171__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                 | (7U & (__Vfunc_ScrnIncToRC__171__P 
                                          >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnIncToRC__171__P));
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_31__ScrnIncToRC 
                            = __Vfunc_ScrnIncToRC__171__Vfuncout;
                        __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v0 
                            = (vlSelfRef.tb_top__DOT__u_ref__DOT__Yst
                               [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N] 
                               + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_31__ScrnIncToRC);
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v0 = 1U;
                        if ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))) {
                            __Vfunc_ScrnStartToRC__172__P 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Yst;
                            vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_32__ScrnStartToRC 
                                = ((((0x0000e000U & 
                                      ((- (IData)((1U 
                                                   & (__Vfunc_ScrnStartToRC__172__P 
                                                      >> 0x0000001cU)))) 
                                       << 0x0000000dU)) 
                                     | (0x00001fffU 
                                        & (__Vfunc_ScrnStartToRC__172__P 
                                           >> 0x00000010U))) 
                                    << 0x00000010U) 
                                   | (0x0000ffc0U & __Vfunc_ScrnStartToRC__172__P));
                            __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v1 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_32__ScrnStartToRC;
                            __VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v1 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v1 = 1U;
                        }
                    } else if ((0x0cU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __Vfunc_ScrnIncToRC__173__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DX;
                        __Vfunc_ScrnIncToRC__173__Vfuncout 
                            = ((((0x0000fff8U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__173__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                 | (7U & (__Vfunc_ScrnIncToRC__173__P 
                                          >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnIncToRC__173__P));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                            = __Vfunc_ScrnIncToRC__173__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB = 0U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB = 0U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX = 0U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY = 0U;
                        __Vfunc_ScrnIncToRC__174__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DX;
                        __Vfunc_ScrnIncToRC__174__Vfuncout 
                            = ((((0x0000fff8U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__174__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                 | (7U & (__Vfunc_ScrnIncToRC__174__P 
                                          >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnIncToRC__174__P));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                            = __Vfunc_ScrnIncToRC__174__Vfuncout;
                    } else if ((0x0dU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __Vfunc_ScrnIncToRC__177__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DY;
                        __Vfunc_ScrnIncToRC__177__Vfuncout 
                            = ((((0x0000fff8U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__177__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                 | (7U & (__Vfunc_ScrnIncToRC__177__P 
                                          >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnIncToRC__177__P));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                            = __Vfunc_ScrnIncToRC__177__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB = 0U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB = 0U;
                        __Vfunc_ScrnIncToRC__178__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DY;
                        __Vfunc_ScrnIncToRC__178__Vfuncout 
                            = ((((0x0000fff8U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnIncToRC__178__P 
                                                                >> 0x00000012U)))) 
                                                 << 3U)) 
                                 | (7U & (__Vfunc_ScrnIncToRC__178__P 
                                          >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnIncToRC__178__P));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                            = __Vfunc_ScrnIncToRC__178__Vfuncout;
                    } else if ((0x0eU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __Vfunc_ScrnCoordToRC__181__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PX;
                        __Vfunc_ScrnCoordToRC__181__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__181__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__181__P) 
                                                      << 0x00000010U)));
                        __VdlyVal__tb_top__DOT__u_ref__DOT__dX__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMX;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__dX__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__dX__v0 = 1U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB 
                            = __Vfunc_ScrnCoordToRC__181__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX = 0U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY = 0U;
                        __VdlyVal__tb_top__DOT__u_ref__DOT__dY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMY;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__dY__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__dY__v0 = 1U;
                        __Vfunc_ScrnCoordToRC__182__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PX;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__Xst
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N];
                        __Vfunc_ScrnCoordToRC__182__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__182__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__182__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__Xst
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N];
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB 
                            = __Vfunc_ScrnCoordToRC__182__Vfuncout;
                    } else if ((0x0fU == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __Vfunc_ScrnCoordToRC__185__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PY;
                        __Vfunc_ScrnCoordToRC__185__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__185__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__185__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__Yst
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N];
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB 
                            = __Vfunc_ScrnCoordToRC__185__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__Yst
                            [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N];
                        __Vfunc_ScrnCoordToRC__186__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PY;
                        __Vfunc_ScrnCoordToRC__186__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__186__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__186__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB 
                            = __Vfunc_ScrnCoordToRC__186__Vfuncout;
                    } else if ((0x10U == (0x0000001fU 
                                          & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                          .__PVT__RP_POS))) {
                        __Vfunc_ScrnStartToRC__189__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Zst;
                        __Vfunc_ScrnCoordToRC__190__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PZ;
                        __Vfunc_ScrnStartToRC__189__Vfuncout 
                            = ((((0x0000e000U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnStartToRC__189__P 
                                                                >> 0x0000001cU)))) 
                                                 << 0x0000000dU)) 
                                 | (0x00001fffU & (__Vfunc_ScrnStartToRC__189__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnStartToRC__189__P));
                        __Vfunc_ScrnCoordToRC__190__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__190__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__190__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                            = __Vfunc_ScrnStartToRC__189__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB 
                            = __Vfunc_ScrnCoordToRC__190__Vfuncout;
                        __Vfunc_ScrnStartToRC__191__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Zst;
                        __Vfunc_ScrnCoordToRC__192__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PZ;
                        __Vfunc_ScrnStartToRC__191__Vfuncout 
                            = ((((0x0000e000U & ((- (IData)(
                                                            (1U 
                                                             & (__Vfunc_ScrnStartToRC__191__P 
                                                                >> 0x0000001cU)))) 
                                                 << 0x0000000dU)) 
                                 | (0x00001fffU & (__Vfunc_ScrnStartToRC__191__P 
                                                   >> 0x00000010U))) 
                                << 0x00000010U) | (0x0000ffc0U 
                                                   & __Vfunc_ScrnStartToRC__191__P));
                        __Vfunc_ScrnCoordToRC__192__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__192__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__192__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                            = __Vfunc_ScrnStartToRC__191__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB 
                            = __Vfunc_ScrnCoordToRC__192__Vfuncout;
                    } else {
                        __Vfunc_ScrnCoordToRC__195__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PX;
                        __Vfunc_ScrnCoordToRC__196__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CX;
                        __Vfunc_ScrnCoordToRC__202__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CY;
                        __Vfunc_ScrnCoordToRC__195__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__195__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__195__P) 
                                                      << 0x00000010U)));
                        __Vfunc_ScrnCoordToRC__196__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__196__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__196__P) 
                                                      << 0x00000010U)));
                        __Vfunc_ScrnCoordToRC__202__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__202__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__202__P) 
                                                      << 0x00000010U)));
                        __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMX;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__Xsp__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v0 = 1U;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                            = __Vfunc_ScrnCoordToRC__195__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB 
                            = __Vfunc_ScrnCoordToRC__196__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY 
                            = __Vfunc_ScrnCoordToRC__202__Vfuncout;
                        __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMY;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__Ysp__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Ysp__v0 = 1U;
                        __Vfunc_ScrnCoordToRC__197__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PX;
                        __Vfunc_ScrnCoordToRC__198__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CX;
                        __Vfunc_ScrnCoordToRC__197__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__197__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__197__P) 
                                                      << 0x00000010U)));
                        __Vfunc_ScrnCoordToRC__198__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__198__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__198__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                            = __Vfunc_ScrnCoordToRC__197__Vfuncout;
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB 
                            = __Vfunc_ScrnCoordToRC__198__Vfuncout;
                        __Vfunc_ScrnCoordToRC__201__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CX;
                        __Vfunc_ScrnCoordToRC__201__Vfuncout 
                            = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__201__P) 
                                                  >> 0x0000000dU)))) 
                                << 0x0000001eU) | (0x3fff0000U 
                                                   & ((IData)(__Vfunc_ScrnCoordToRC__201__P) 
                                                      << 0x00000010U)));
                        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX 
                            = __Vfunc_ScrnCoordToRC__201__Vfuncout;
                    }
                } else if ((0x12U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    __Vfunc_ScrnCoordToRC__203__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PY;
                    __Vfunc_ScrnCoordToRC__204__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CY;
                    __Vfunc_ScrnCoordToRC__203__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__203__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__203__P) 
                                                  << 0x00000010U)));
                    __Vfunc_ScrnCoordToRC__204__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__204__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__204__P) 
                                                  << 0x00000010U)));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                        = __Vfunc_ScrnCoordToRC__203__Vfuncout;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB 
                        = __Vfunc_ScrnCoordToRC__204__Vfuncout;
                    __Vfunc_ScrnCoordToRC__205__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PY;
                    __Vfunc_ScrnCoordToRC__206__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CY;
                    __Vfunc_ScrnCoordToRC__205__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__205__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__205__P) 
                                                  << 0x00000010U)));
                    __Vfunc_ScrnCoordToRC__206__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__206__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__206__P) 
                                                  << 0x00000010U)));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                        = __Vfunc_ScrnCoordToRC__205__Vfuncout;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB 
                        = __Vfunc_ScrnCoordToRC__206__Vfuncout;
                } else if ((0x13U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    __Vfunc_ScrnCoordToRC__209__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PZ;
                    __Vfunc_ScrnCoordToRC__210__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CZ;
                    __Vfunc_ScrnCoordToRC__209__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__209__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__209__P) 
                                                  << 0x00000010U)));
                    __Vfunc_ScrnCoordToRC__210__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__210__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__210__P) 
                                                  << 0x00000010U)));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA 
                        = __Vfunc_ScrnCoordToRC__209__Vfuncout;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB 
                        = __Vfunc_ScrnCoordToRC__210__Vfuncout;
                    __Vfunc_ScrnCoordToRC__211__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PZ;
                    __Vfunc_ScrnCoordToRC__212__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CZ;
                    __Vfunc_ScrnCoordToRC__211__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__211__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__211__P) 
                                                  << 0x00000010U)));
                    __Vfunc_ScrnCoordToRC__212__Vfuncout 
                        = (((- (IData)((1U & ((IData)(__Vfunc_ScrnCoordToRC__212__P) 
                                              >> 0x0000000dU)))) 
                            << 0x0000001eU) | (0x3fff0000U 
                                               & ((IData)(__Vfunc_ScrnCoordToRC__212__P) 
                                                  << 0x00000010U)));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA 
                        = __Vfunc_ScrnCoordToRC__211__Vfuncout;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB 
                        = __Vfunc_ScrnCoordToRC__212__Vfuncout;
                } else if ((0x14U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA = 0x00010000U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA = 0x00010000U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB = 0U;
                } else if ((0x15U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    __VdlyVal__tb_top__DOT__u_ref__DOT__Xp__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMX;
                    __VdlyDim0__tb_top__DOT__u_ref__DOT__Xp__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xp__v0 = 1U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXA = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBXB = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYA = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUBYB = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCX = 0U;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ACCY = 0U;
                    __VdlyVal__tb_top__DOT__u_ref__DOT__Yp__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__SUMY;
                    __VdlyDim0__tb_top__DOT__u_ref__DOT__Yp__v0 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                    vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yp__v0 = 1U;
                } else if ((0x16U != (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                      .__PVT__RP_POS))) {
                    if ((0x17U == (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                                   .__PVT__RP_POS))) {
                        __Vfunc_TblAddrToRC__217__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KAst;
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_33__TblAddrToRC 
                            = (0xffffffc0U & __Vfunc_TblAddrToRC__217__P);
                        __VdlyVal__tb_top__DOT__u_ref__DOT__KAst__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_33__TblAddrToRC;
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__KAst__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAst__v0 = 1U;
                        __Vfunc_AddrIncToRA__218__P 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DKAst;
                        __Vfunc_AddrIncToRA__218__Vfuncout 
                            = (((QData)((IData)((0x000001ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (__Vfunc_AddrIncToRA__218__P 
                                                                  >> 0x00000019U))))))) 
                                << 0x0000001aU) | (QData)((IData)(
                                                                  (0x03ffffc0U 
                                                                   & __Vfunc_AddrIncToRA__218__P))));
                        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_34__AddrIncToRA 
                            = __Vfunc_AddrIncToRA__218__Vfuncout;
                        __VdlyVal__tb_top__DOT__u_ref__DOT__KAy__v0 
                            = (0x00000007ffffffffULL 
                               & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAy
                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N] 
                                  + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_34__AddrIncToRA));
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v0 = 1U;
                        if ((0x01ffU == (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__V_CNT))) {
                            __VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v1 
                                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v1 = 1U;
                        }
                        __VdlyDim0__tb_top__DOT__u_ref__DOT__KAx__v0 
                            = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__N;
                        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v0 = 1U;
                    }
                }
            }
            if ((1U & ((((vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA0CT | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                          .__PVT__RxA1CT) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                         .__PVT__RxB0CT) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                        .__PVT__RxB1CT) | vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[0U]
                       .__PVT__RxCRCT))) {
                __Vfunc_AddrIncToRA__219__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DKAx[0U];
                __Vfunc_AddrIncToRA__219__Vfuncout 
                    = (((QData)((IData)((0x000001ffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (__Vfunc_AddrIncToRA__219__P 
                                                          >> 0x00000019U))))))) 
                        << 0x0000001aU) | (QData)((IData)(
                                                          (0x03ffffc0U 
                                                           & __Vfunc_AddrIncToRA__219__P))));
                vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_35__AddrIncToRA 
                    = __Vfunc_AddrIncToRA__219__Vfuncout;
                __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v1 
                    = (0x00000007ffffffffULL & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[0U] 
                                                + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_35__AddrIncToRA));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v1 = 1U;
                __Vfunc_AddrIncToRA__220__P = vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DKAx[1U];
                __Vfunc_AddrIncToRA__220__Vfuncout 
                    = (((QData)((IData)((0x000001ffU 
                                         & (- (IData)(
                                                      (1U 
                                                       & (__Vfunc_AddrIncToRA__220__P 
                                                          >> 0x00000019U))))))) 
                        << 0x0000001aU) | (QData)((IData)(
                                                          (0x03ffffc0U 
                                                           & __Vfunc_AddrIncToRA__220__P))));
                vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_36__AddrIncToRA 
                    = __Vfunc_AddrIncToRA__220__Vfuncout;
                __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v2 
                    = (0x00000007ffffffffULL & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[1U] 
                                                + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_36__AddrIncToRA));
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v2 = 1U;
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC) {
                __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v1 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[0U] 
                       + vlSelfRef.tb_top__DOT__u_ref__DOT__dX[0U]);
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v1 = 1U;
                __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v1 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[0U] 
                       + vlSelfRef.tb_top__DOT__u_ref__DOT__dY[0U]);
                __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v2 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[1U] 
                       + vlSelfRef.tb_top__DOT__u_ref__DOT__dX[1U]);
                __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v2 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[1U] 
                       + vlSelfRef.tb_top__DOT__u_ref__DOT__dY[1U]);
            }
        }
        vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__225__a), 
                          VL_EXTENDS_QI(64,32, __Vfunc_MultRC__225__b));
        __Vfunc_MultRC__225__Vfuncout = (IData)((vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                                 >> 0x10U));
        vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_37__MultRC 
            = __Vfunc_MultRC__225__Vfuncout;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES 
            = (vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__ADD1 
               + vlSelfRef.tb_top__DOT__u_ref__DOT____VlemCall_37__MultRC);
        __Vfunc_ColorCalc__256__CCMD = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                                              >> 0x00000018U));
        __Vfunc_ColorCalc__256__CCEN = vlSelfRef.tb_top__DOT__u_ref__DOT__CCENFST;
        __Vfunc_ColorCalc__256__CCRT = vlSelfRef.tb_top__DOT__u_ref__DOT__CCRT;
        __Vfunc_ColorCalc__256__CSEC = vlSelfRef.tb_top__DOT__u_ref__DOT__CSEC;
        __Vfunc_ColorCalc__256__CFST = vlSelfRef.tb_top__DOT__u_ref__DOT__CFST;
        if (__Vfunc_ColorCalc__256__CCMD) {
            __Vfunc_ColorCalcRatio__257__RB = 0x00000020U;
            __Vfunc_ColorCalcRatio__257__RA = 0x20U;
            __Vfunc_ColorCalcRatio__258__RB = 0x00000020U;
            __Vfunc_ColorCalcRatio__258__RA = 0x20U;
            __Vfunc_ColorCalcRatio__259__RB = 0x00000020U;
            __Vfunc_ColorCalcRatio__259__RA = 0x20U;
        } else {
            __Vfunc_ColorCalcRatio__257__RB = (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_ColorCalc__256__CCRT)));
            __Vfunc_ColorCalcRatio__257__RA = (0x0000001fU 
                                               & (~ (IData)(__Vfunc_ColorCalc__256__CCRT)));
            __Vfunc_ColorCalcRatio__258__RB = (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_ColorCalc__256__CCRT)));
            __Vfunc_ColorCalcRatio__258__RA = (0x0000001fU 
                                               & (~ (IData)(__Vfunc_ColorCalc__256__CCRT)));
            __Vfunc_ColorCalcRatio__259__RB = (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_ColorCalc__256__CCRT)));
            __Vfunc_ColorCalcRatio__259__RA = (0x0000001fU 
                                               & (~ (IData)(__Vfunc_ColorCalc__256__CCRT)));
        }
        __Vfunc_ColorCalcRatio__257__CB = (0x000000ffU 
                                           & __Vfunc_ColorCalc__256__CSEC);
        __Vfunc_ColorCalcRatio__257__CA = (0x000000ffU 
                                           & __Vfunc_ColorCalc__256__CFST);
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S 
            = (0x00003fffU & (((IData)(__Vfunc_ColorCalcRatio__257__CA) 
                               * (IData)(__Vfunc_ColorCalcRatio__257__RA)) 
                              + ((IData)(__Vfunc_ColorCalcRatio__257__CB) 
                                 * (IData)(__Vfunc_ColorCalcRatio__257__RB))));
        __Vfunc_ColorCalcRatio__257__Vfuncout = (0x000000ffU 
                                                 & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                     >> 5U) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                                     >> 0x0dU))))));
        __Vfunc_ColorCalc__256____VlefCall_0__ColorCalcRatio 
            = __Vfunc_ColorCalcRatio__257__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP 
            = ((0x00ffff00U & vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP) 
               | (IData)(__Vfunc_ColorCalc__256____VlefCall_0__ColorCalcRatio));
        __Vfunc_ColorCalcRatio__258__CB = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__256__CSEC 
                                              >> 8U));
        __Vfunc_ColorCalcRatio__258__CA = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__256__CFST 
                                              >> 8U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S 
            = (0x00003fffU & (((IData)(__Vfunc_ColorCalcRatio__258__CA) 
                               * (IData)(__Vfunc_ColorCalcRatio__258__RA)) 
                              + ((IData)(__Vfunc_ColorCalcRatio__258__CB) 
                                 * (IData)(__Vfunc_ColorCalcRatio__258__RB))));
        __Vfunc_ColorCalcRatio__258__Vfuncout = (0x000000ffU 
                                                 & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                     >> 5U) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                                     >> 0x0dU))))));
        __Vfunc_ColorCalc__256____VlefCall_1__ColorCalcRatio 
            = __Vfunc_ColorCalcRatio__258__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP 
            = ((0x00ff00ffU & vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ColorCalc__256____VlefCall_1__ColorCalcRatio) 
                  << 8U));
        __Vfunc_ColorCalcRatio__259__CB = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__256__CSEC 
                                              >> 0x00000010U));
        __Vfunc_ColorCalcRatio__259__CA = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__256__CFST 
                                              >> 0x00000010U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S 
            = (0x00003fffU & (((IData)(__Vfunc_ColorCalcRatio__259__CA) 
                               * (IData)(__Vfunc_ColorCalcRatio__259__RA)) 
                              + ((IData)(__Vfunc_ColorCalcRatio__259__CB) 
                                 * (IData)(__Vfunc_ColorCalcRatio__259__RB))));
        __Vfunc_ColorCalcRatio__259__Vfuncout = (0x000000ffU 
                                                 & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                     >> 5U) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                                     >> 0x0dU))))));
        __Vfunc_ColorCalc__256____VlefCall_2__ColorCalcRatio 
            = __Vfunc_ColorCalcRatio__259__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP 
            = ((0x0000ffffU & vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ColorCalc__256____VlefCall_2__ColorCalcRatio) 
                  << 0x00000010U));
        __Vfunc_ColorCalc__256__Vfuncout = ((IData)(__Vfunc_ColorCalc__256__CCEN)
                                             ? vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP
                                             : __Vfunc_ColorCalc__256__CFST);
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk24__DOT__C 
            = __Vfunc_ColorCalc__256__Vfuncout;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__CS_N_OLD 
            = vlSelfRef.CS_N;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__DTEN_N_OLD 
            = vlSelfRef.DTEN_N;
        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ) 
             & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_RA 
                = (0x0003ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
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
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__VRAMA_ALLOW = 0U;
                        if ((IData)((((((0U == (0x1cU 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A0VA))) 
                                        & (0U == (0x0eU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A0VA)))) 
                                       & (0U == (0x1cU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_A1VA)))) 
                                      & (0U == (0x0eU 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_A1VA)))) 
                                     & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                        .__PVT__AxNA)))) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__VRAMA_ALLOW = 1U;
                        }
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__VRAMB_ALLOW = 0U;
                        if ((IData)((((((0U == (0x1cU 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B0VA))) 
                                        & (0U == (0x0eU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B0VA)))) 
                                       & (0U == (0x1cU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_B1VA)))) 
                                      & (0U == (0x0eU 
                                                & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_B1VA)))) 
                                     & (~ vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE[0U]
                                        .__PVT__BxNA)))) {
                            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__VRAMB_ALLOW = 1U;
                        }
                    }
                }
            }
        }
        __Vfunc_ColorCalc__122__CCMD = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U] 
                                              >> 0x00000018U));
        __Vfunc_ColorCalc__122__CCEN = vlSelfRef.tb_top__DOT__u_dut__DOT__CCENFST;
        __Vfunc_ColorCalc__122__CCRT = vlSelfRef.tb_top__DOT__u_dut__DOT__CCRT;
        __Vfunc_ColorCalc__122__CSEC = vlSelfRef.tb_top__DOT__u_dut__DOT__CSEC;
        __Vfunc_ColorCalc__122__CFST = vlSelfRef.tb_top__DOT__u_dut__DOT__CFST;
        if (__Vfunc_ColorCalc__122__CCMD) {
            __Vfunc_ColorCalcRatio__123__RB = 0x00000020U;
            __Vfunc_ColorCalcRatio__123__RA = 0x20U;
            __Vfunc_ColorCalcRatio__124__RB = 0x00000020U;
            __Vfunc_ColorCalcRatio__124__RA = 0x20U;
            __Vfunc_ColorCalcRatio__125__RB = 0x00000020U;
            __Vfunc_ColorCalcRatio__125__RA = 0x20U;
        } else {
            __Vfunc_ColorCalcRatio__123__RB = (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_ColorCalc__122__CCRT)));
            __Vfunc_ColorCalcRatio__123__RA = (0x0000001fU 
                                               & (~ (IData)(__Vfunc_ColorCalc__122__CCRT)));
            __Vfunc_ColorCalcRatio__124__RB = (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_ColorCalc__122__CCRT)));
            __Vfunc_ColorCalcRatio__124__RA = (0x0000001fU 
                                               & (~ (IData)(__Vfunc_ColorCalc__122__CCRT)));
            __Vfunc_ColorCalcRatio__125__RB = (0x0000003fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_ColorCalc__122__CCRT)));
            __Vfunc_ColorCalcRatio__125__RA = (0x0000001fU 
                                               & (~ (IData)(__Vfunc_ColorCalc__122__CCRT)));
        }
        __Vfunc_ColorCalcRatio__123__CB = (0x000000ffU 
                                           & __Vfunc_ColorCalc__122__CSEC);
        __Vfunc_ColorCalcRatio__123__CA = (0x000000ffU 
                                           & __Vfunc_ColorCalc__122__CFST);
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S 
            = (0x00003fffU & (((IData)(__Vfunc_ColorCalcRatio__123__CA) 
                               * (IData)(__Vfunc_ColorCalcRatio__123__RA)) 
                              + ((IData)(__Vfunc_ColorCalcRatio__123__CB) 
                                 * (IData)(__Vfunc_ColorCalcRatio__123__RB))));
        __Vfunc_ColorCalcRatio__123__Vfuncout = (0x000000ffU 
                                                 & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                     >> 5U) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                                     >> 0x0dU))))));
        __Vfunc_ColorCalc__122____VlefCall_0__ColorCalcRatio 
            = __Vfunc_ColorCalcRatio__123__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP 
            = ((0x00ffff00U & vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP) 
               | (IData)(__Vfunc_ColorCalc__122____VlefCall_0__ColorCalcRatio));
        __Vfunc_ColorCalcRatio__124__CB = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__122__CSEC 
                                              >> 8U));
        __Vfunc_ColorCalcRatio__124__CA = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__122__CFST 
                                              >> 8U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S 
            = (0x00003fffU & (((IData)(__Vfunc_ColorCalcRatio__124__CA) 
                               * (IData)(__Vfunc_ColorCalcRatio__124__RA)) 
                              + ((IData)(__Vfunc_ColorCalcRatio__124__CB) 
                                 * (IData)(__Vfunc_ColorCalcRatio__124__RB))));
        __Vfunc_ColorCalcRatio__124__Vfuncout = (0x000000ffU 
                                                 & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                     >> 5U) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                                     >> 0x0dU))))));
        __Vfunc_ColorCalc__122____VlefCall_1__ColorCalcRatio 
            = __Vfunc_ColorCalcRatio__124__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP 
            = ((0x00ff00ffU & vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ColorCalc__122____VlefCall_1__ColorCalcRatio) 
                  << 8U));
        __Vfunc_ColorCalcRatio__125__CB = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__122__CSEC 
                                              >> 0x00000010U));
        __Vfunc_ColorCalcRatio__125__CA = (0x000000ffU 
                                           & (__Vfunc_ColorCalc__122__CFST 
                                              >> 0x00000010U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S 
            = (0x00003fffU & (((IData)(__Vfunc_ColorCalcRatio__125__CA) 
                               * (IData)(__Vfunc_ColorCalcRatio__125__RA)) 
                              + ((IData)(__Vfunc_ColorCalcRatio__125__CB) 
                                 * (IData)(__Vfunc_ColorCalcRatio__125__RB))));
        __Vfunc_ColorCalcRatio__125__Vfuncout = (0x000000ffU 
                                                 & (((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                     >> 5U) 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__REF_VDP2_PKG.ColorCalcRatio__Vstatic__S) 
                                                                     >> 0x0dU))))));
        __Vfunc_ColorCalc__122____VlefCall_2__ColorCalcRatio 
            = __Vfunc_ColorCalcRatio__125__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP 
            = ((0x0000ffffU & vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ColorCalc__122____VlefCall_2__ColorCalcRatio) 
                  << 0x00000010U));
        __Vfunc_ColorCalc__122__Vfuncout = ((IData)(__Vfunc_ColorCalc__122__CCEN)
                                             ? vlSymsp->TOP__REF_VDP2_PKG.ColorCalc__Vstatic__TEMP
                                             : __Vfunc_ColorCalc__122__CFST);
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk36__DOT__C 
            = __Vfunc_ColorCalc__122__Vfuncout;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_DC 
            = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                             >> 0x00000018U)))
                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH
                               : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC)));
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CTHD_DC 
            = (0x00ffffffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV1)
                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV1
                               : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD))));
        if (vlSelfRef.CE_R) {
            __VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES;
            __VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV;
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0 = 1U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                          >> 1U)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_Q 
                    = ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))
                        ? ((0xffff0000U & vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_Q) 
                           | vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa])
                        : ((0x0000ffffU & vlSelfRef.tb_top__DOT__u_dut__DOT__CT_CRAM_Q) 
                           | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                                      [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa]) 
                              << 0x00000010U)));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                          >> 1U)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_Q 
                    = ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))
                        ? ((0xffff0000U & vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_Q) 
                           | vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                           [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa])
                        : ((0x0000ffffU & vlSelfRef.tb_top__DOT__u_ref__DOT__CT_CRAM_Q) 
                           | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                                      [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa]) 
                              << 0x00000010U)));
            }
            if ((0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                              >> 0x0000000cU)))) {
                __Vfunc_Color555To888__250__DW = vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                    [vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa];
                __Vfunc_Color555To888__250__Vfuncout 
                    = ((0x00f80000U & ((IData)(__Vfunc_Color555To888__250__DW) 
                                       << 9U)) | ((0x0000f800U 
                                                   & ((IData)(__Vfunc_Color555To888__250__DW) 
                                                      << 6U)) 
                                                  | (0x000000f8U 
                                                     & ((IData)(__Vfunc_Color555To888__250__DW) 
                                                        << 3U))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC 
                    = __Vfunc_Color555To888__250__Vfuncout;
            } else if ((1U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                     >> 0x0000000cU)))) {
                __Vfunc_Color555To888__251__DW = ((0x00000400U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_N))
                                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa]
                                                   : vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa]);
                __Vfunc_Color555To888__251__Vfuncout 
                    = ((0x00f80000U & ((IData)(__Vfunc_Color555To888__251__DW) 
                                       << 9U)) | ((0x0000f800U 
                                                   & ((IData)(__Vfunc_Color555To888__251__DW) 
                                                      << 6U)) 
                                                  | (0x000000f8U 
                                                     & ((IData)(__Vfunc_Color555To888__251__DW) 
                                                        << 3U))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC 
                    = __Vfunc_Color555To888__251__Vfuncout;
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC 
                    = ((0x00ff0000U & (vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                       [vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                                       << 0x00000010U)) 
                       | vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                       [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa]);
            }
            if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                          >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                       >> 1U))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC;
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC;
            }
        }
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CFTH_DC 
            = (0x00ffffffU & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV2)
                               ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV2
                               : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC
                                   : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH))));
        __Vfunc_ExtColorCalc__252__EXCCEN = (IData)(
                                                    (0x04000000U 
                                                     == 
                                                     (0x84000000U 
                                                      & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])));
        __Vfunc_ExtColorCalc__252__CRMD = (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                 >> 0x0000000cU));
        __Vfunc_ExtColorCalc__252__BOKEN = (1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                                          >> 0x0000001aU)));
        __Vfunc_ExtColorCalc__252__LCEN = (1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                         >> 0x00000019U)));
        __Vfunc_ExtColorCalc__252__DCFTH = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CFTH_DC;
        __Vfunc_ExtColorCalc__252__CCENTHD = (1U & (IData)(
                                                           (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                            >> 0x00000024U)));
        __Vfunc_ExtColorCalc__252__PTHD = (1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                                                         >> 0x00000018U)));
        __Vfunc_ExtColorCalc__252__DCTHD = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CTHD_DC;
        __Vfunc_ExtColorCalc__252__CCENSEC = (1U & (IData)(
                                                           (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                                            >> 0x00000024U)));
        __Vfunc_ExtColorCalc__252__DCSEC = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_DC;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC 
            = ((((IData)(__Vfunc_ExtColorCalc__252__CCENSEC) 
                 & (~ ((0U != (IData)(__Vfunc_ExtColorCalc__252__CRMD)) 
                       & (IData)(__Vfunc_ExtColorCalc__252__PTHD)))) 
                & (IData)(__Vfunc_ExtColorCalc__252__EXCCEN)) 
               | ((IData)(__Vfunc_ExtColorCalc__252__BOKEN) 
                  & (~ (0U != (IData)(__Vfunc_ExtColorCalc__252__CRMD)))));
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD 
            = ((((IData)(__Vfunc_ExtColorCalc__252__CCENTHD) 
                 & (IData)(__Vfunc_ExtColorCalc__252__LCEN)) 
                & (IData)(__Vfunc_ExtColorCalc__252__EXCCEN)) 
               | ((IData)(__Vfunc_ExtColorCalc__252__BOKEN) 
                  & (~ (0U != (IData)(__Vfunc_ExtColorCalc__252__CRMD)))));
        __Vfunc_ColorCalcExtRatio__253__RTB = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD;
        __Vfunc_ColorCalcExtRatio__253__RTA = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC;
        __Vfunc_ColorCalcExtRatio__253__CC = (0x000000ffU 
                                              & __Vfunc_ExtColorCalc__252__DCFTH);
        __Vfunc_ColorCalcExtRatio__253__CB = (0x000000ffU 
                                              & __Vfunc_ExtColorCalc__252__DCTHD);
        __Vfunc_ColorCalcExtRatio__253__CA = (0x000000ffU 
                                              & __Vfunc_ExtColorCalc__252__DCSEC);
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S 
            = (0x000000ffU & ((((IData)(__Vfunc_ColorCalcExtRatio__253__RTA)
                                 ? (0x0000007fU & ((IData)(__Vfunc_ColorCalcExtRatio__253__CA) 
                                                   >> 1U))
                                 : (IData)(__Vfunc_ColorCalcExtRatio__253__CA)) 
                               + ((IData)(__Vfunc_ColorCalcExtRatio__253__RTA)
                                   ? ((IData)(__Vfunc_ColorCalcExtRatio__253__RTB)
                                       ? (0x0000003fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__253__CB) 
                                             >> 2U))
                                       : (0x0000007fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__253__CB) 
                                             >> 1U)))
                                   : 0U)) + ((1U & 
                                              ((~ (IData)(__Vfunc_ColorCalcExtRatio__253__RTA)) 
                                               | (~ (IData)(__Vfunc_ColorCalcExtRatio__253__RTB))))
                                              ? 0U : 
                                             (0x0000003fU 
                                              & ((IData)(__Vfunc_ColorCalcExtRatio__253__CC) 
                                                 >> 2U)))));
        __Vfunc_ColorCalcExtRatio__253__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S;
        __Vfunc_ExtColorCalc__252____VlefCall_0__ColorCalcExtRatio 
            = __Vfunc_ColorCalcExtRatio__253__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP 
            = ((0x00ffff00U & vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP) 
               | (IData)(__Vfunc_ExtColorCalc__252____VlefCall_0__ColorCalcExtRatio));
        __Vfunc_ColorCalcExtRatio__254__RTB = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD;
        __Vfunc_ColorCalcExtRatio__254__RTA = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC;
        __Vfunc_ColorCalcExtRatio__254__CC = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__252__DCFTH 
                                                 >> 8U));
        __Vfunc_ColorCalcExtRatio__254__CB = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__252__DCTHD 
                                                 >> 8U));
        __Vfunc_ColorCalcExtRatio__254__CA = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__252__DCSEC 
                                                 >> 8U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S 
            = (0x000000ffU & ((((IData)(__Vfunc_ColorCalcExtRatio__254__RTA)
                                 ? (0x0000007fU & ((IData)(__Vfunc_ColorCalcExtRatio__254__CA) 
                                                   >> 1U))
                                 : (IData)(__Vfunc_ColorCalcExtRatio__254__CA)) 
                               + ((IData)(__Vfunc_ColorCalcExtRatio__254__RTA)
                                   ? ((IData)(__Vfunc_ColorCalcExtRatio__254__RTB)
                                       ? (0x0000003fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__254__CB) 
                                             >> 2U))
                                       : (0x0000007fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__254__CB) 
                                             >> 1U)))
                                   : 0U)) + ((1U & 
                                              ((~ (IData)(__Vfunc_ColorCalcExtRatio__254__RTA)) 
                                               | (~ (IData)(__Vfunc_ColorCalcExtRatio__254__RTB))))
                                              ? 0U : 
                                             (0x0000003fU 
                                              & ((IData)(__Vfunc_ColorCalcExtRatio__254__CC) 
                                                 >> 2U)))));
        __Vfunc_ColorCalcExtRatio__254__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S;
        __Vfunc_ExtColorCalc__252____VlefCall_1__ColorCalcExtRatio 
            = __Vfunc_ColorCalcExtRatio__254__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP 
            = ((0x00ff00ffU & vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ExtColorCalc__252____VlefCall_1__ColorCalcExtRatio) 
                  << 8U));
        __Vfunc_ColorCalcExtRatio__255__RTB = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD;
        __Vfunc_ColorCalcExtRatio__255__RTA = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC;
        __Vfunc_ColorCalcExtRatio__255__CC = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__252__DCFTH 
                                                 >> 0x00000010U));
        __Vfunc_ColorCalcExtRatio__255__CB = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__252__DCTHD 
                                                 >> 0x00000010U));
        __Vfunc_ColorCalcExtRatio__255__CA = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__252__DCSEC 
                                                 >> 0x00000010U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S 
            = (0x000000ffU & ((((IData)(__Vfunc_ColorCalcExtRatio__255__RTA)
                                 ? (0x0000007fU & ((IData)(__Vfunc_ColorCalcExtRatio__255__CA) 
                                                   >> 1U))
                                 : (IData)(__Vfunc_ColorCalcExtRatio__255__CA)) 
                               + ((IData)(__Vfunc_ColorCalcExtRatio__255__RTA)
                                   ? ((IData)(__Vfunc_ColorCalcExtRatio__255__RTB)
                                       ? (0x0000003fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__255__CB) 
                                             >> 2U))
                                       : (0x0000007fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__255__CB) 
                                             >> 1U)))
                                   : 0U)) + ((1U & 
                                              ((~ (IData)(__Vfunc_ColorCalcExtRatio__255__RTA)) 
                                               | (~ (IData)(__Vfunc_ColorCalcExtRatio__255__RTB))))
                                              ? 0U : 
                                             (0x0000003fU 
                                              & ((IData)(__Vfunc_ColorCalcExtRatio__255__CC) 
                                                 >> 2U)))));
        __Vfunc_ColorCalcExtRatio__255__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S;
        __Vfunc_ExtColorCalc__252____VlefCall_2__ColorCalcExtRatio 
            = __Vfunc_ColorCalcExtRatio__255__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP 
            = ((0x0000ffffU & vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ExtColorCalc__252____VlefCall_2__ColorCalcExtRatio) 
                  << 0x00000010U));
        __Vfunc_ExtColorCalc__252__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_ECC 
            = __Vfunc_ExtColorCalc__252__Vfuncout;
        if (((~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                 >> 1U)) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__CCRT 
                = (0x0000001fU & ((0x02000000U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])
                                   ? (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                              >> 0x0000001eU))
                                   : (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                              >> 0x0000001eU))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__CFST 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__CSEC 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_ECC;
            vlSelfRef.tb_top__DOT__u_ref__DOT__CCENFST 
                = (1U & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                        >> 0x00000023U)))
                          ? ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                      >> 0x00000024U)) 
                             & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC_FST) 
                                | (~ (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                              >> 0x00000018U)))))
                          : (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                     >> 0x00000024U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__COEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                 >> 0x0000001dU)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__COSL 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                 >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__SDEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                 >> 0x0000001bU)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV1;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV1;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CSEC_PREV1 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                 >> 0x0000001aU)));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
                               | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F)))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__CCRT 
                = (0x0000001fU & ((0x02000000U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])
                                   ? (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                              >> 0x0000001eU))
                                   : (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                              >> 0x0000001eU))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__CFST 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__CSEC 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC
                                   : (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__CCENFST 
                = (1U & ((~ ((0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                           >> 0x0000000cU))) 
                             & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                                        >> 0x00000018U)))) 
                         & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                           >> 0x00000023U)))
                             ? ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                         >> 0x00000024U)) 
                                & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC_FST) 
                                   | (~ (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                                 >> 0x00000018U)))))
                             : (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                        >> 0x00000024U)))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__COEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                 >> 0x0000001dU)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__COSL 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                 >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__SDEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                                 >> 0x0000001bU)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT2) 
             & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__CFST = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__CSEC = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__CCENFST = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__SDEN = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__COEN = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__COSL = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV1 = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__BOKEN_PREV2 = 0U;
        }
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_DC 
            = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                             >> 0x00000018U)))
                               ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH
                               : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC)));
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CTHD_DC 
            = (0x00ffffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV1)
                               ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_PREV1
                               : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD))));
        if (vlSelfRef.CE_R) {
            if ((0U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                              >> 0x0000000cU)))) {
                __Vfunc_Color555To888__116__DW = vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                    [vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa];
                __Vfunc_Color555To888__116__Vfuncout 
                    = ((0x00f80000U & ((IData)(__Vfunc_Color555To888__116__DW) 
                                       << 9U)) | ((0x0000f800U 
                                                   & ((IData)(__Vfunc_Color555To888__116__DW) 
                                                      << 6U)) 
                                                  | (0x000000f8U 
                                                     & ((IData)(__Vfunc_Color555To888__116__DW) 
                                                        << 3U))));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC 
                    = __Vfunc_Color555To888__116__Vfuncout;
            } else if ((1U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                     >> 0x0000000cU)))) {
                __Vfunc_Color555To888__117__DW = ((0x00000400U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_N))
                                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa]
                                                   : vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa]);
                __Vfunc_Color555To888__117__Vfuncout 
                    = ((0x00f80000U & ((IData)(__Vfunc_Color555To888__117__DW) 
                                       << 9U)) | ((0x0000f800U 
                                                   & ((IData)(__Vfunc_Color555To888__117__DW) 
                                                      << 6U)) 
                                                  | (0x000000f8U 
                                                     & ((IData)(__Vfunc_Color555To888__117__DW) 
                                                        << 3U))));
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC 
                    = __Vfunc_Color555To888__117__Vfuncout;
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC 
                    = ((0x00ff0000U & (vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                       [vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                                       << 0x00000010U)) 
                       | vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                       [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa]);
            }
            if ((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                          >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                       >> 1U))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV))) {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC;
            } else {
                vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC;
            }
        }
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CFTH_DC 
            = (0x00ffffffU & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV2)
                               ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_PREV2
                               : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC
                                   : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH))));
        __Vfunc_ExtColorCalc__118__EXCCEN = (IData)(
                                                    (0x04000000U 
                                                     == 
                                                     (0x84000000U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])));
        __Vfunc_ExtColorCalc__118__CRMD = (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                 >> 0x0000000cU));
        __Vfunc_ExtColorCalc__118__BOKEN = (1U & (IData)(
                                                         (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                                          >> 0x0000001aU)));
        __Vfunc_ExtColorCalc__118__LCEN = (1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                                         >> 0x00000019U)));
        __Vfunc_ExtColorCalc__118__DCFTH = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CFTH_DC;
        __Vfunc_ExtColorCalc__118__CCENTHD = (1U & (IData)(
                                                           (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                                                            >> 0x00000024U)));
        __Vfunc_ExtColorCalc__118__PTHD = (1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                                                         >> 0x00000018U)));
        __Vfunc_ExtColorCalc__118__DCTHD = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CTHD_DC;
        __Vfunc_ExtColorCalc__118__CCENSEC = (1U & (IData)(
                                                           (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                                            >> 0x00000024U)));
        __Vfunc_ExtColorCalc__118__DCSEC = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_DC;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC 
            = ((((IData)(__Vfunc_ExtColorCalc__118__CCENSEC) 
                 & (~ ((0U != (IData)(__Vfunc_ExtColorCalc__118__CRMD)) 
                       & (IData)(__Vfunc_ExtColorCalc__118__PTHD)))) 
                & (IData)(__Vfunc_ExtColorCalc__118__EXCCEN)) 
               | ((IData)(__Vfunc_ExtColorCalc__118__BOKEN) 
                  & (~ (0U != (IData)(__Vfunc_ExtColorCalc__118__CRMD)))));
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD 
            = ((((IData)(__Vfunc_ExtColorCalc__118__CCENTHD) 
                 & (IData)(__Vfunc_ExtColorCalc__118__LCEN)) 
                & (IData)(__Vfunc_ExtColorCalc__118__EXCCEN)) 
               | ((IData)(__Vfunc_ExtColorCalc__118__BOKEN) 
                  & (~ (0U != (IData)(__Vfunc_ExtColorCalc__118__CRMD)))));
        __Vfunc_ColorCalcExtRatio__119__RTB = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD;
        __Vfunc_ColorCalcExtRatio__119__RTA = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC;
        __Vfunc_ColorCalcExtRatio__119__CC = (0x000000ffU 
                                              & __Vfunc_ExtColorCalc__118__DCFTH);
        __Vfunc_ColorCalcExtRatio__119__CB = (0x000000ffU 
                                              & __Vfunc_ExtColorCalc__118__DCTHD);
        __Vfunc_ColorCalcExtRatio__119__CA = (0x000000ffU 
                                              & __Vfunc_ExtColorCalc__118__DCSEC);
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S 
            = (0x000000ffU & ((((IData)(__Vfunc_ColorCalcExtRatio__119__RTA)
                                 ? (0x0000007fU & ((IData)(__Vfunc_ColorCalcExtRatio__119__CA) 
                                                   >> 1U))
                                 : (IData)(__Vfunc_ColorCalcExtRatio__119__CA)) 
                               + ((IData)(__Vfunc_ColorCalcExtRatio__119__RTA)
                                   ? ((IData)(__Vfunc_ColorCalcExtRatio__119__RTB)
                                       ? (0x0000003fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__119__CB) 
                                             >> 2U))
                                       : (0x0000007fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__119__CB) 
                                             >> 1U)))
                                   : 0U)) + ((1U & 
                                              ((~ (IData)(__Vfunc_ColorCalcExtRatio__119__RTA)) 
                                               | (~ (IData)(__Vfunc_ColorCalcExtRatio__119__RTB))))
                                              ? 0U : 
                                             (0x0000003fU 
                                              & ((IData)(__Vfunc_ColorCalcExtRatio__119__CC) 
                                                 >> 2U)))));
        __Vfunc_ColorCalcExtRatio__119__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S;
        __Vfunc_ExtColorCalc__118____VlefCall_0__ColorCalcExtRatio 
            = __Vfunc_ColorCalcExtRatio__119__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP 
            = ((0x00ffff00U & vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP) 
               | (IData)(__Vfunc_ExtColorCalc__118____VlefCall_0__ColorCalcExtRatio));
        __Vfunc_ColorCalcExtRatio__120__RTB = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD;
        __Vfunc_ColorCalcExtRatio__120__RTA = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC;
        __Vfunc_ColorCalcExtRatio__120__CC = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__118__DCFTH 
                                                 >> 8U));
        __Vfunc_ColorCalcExtRatio__120__CB = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__118__DCTHD 
                                                 >> 8U));
        __Vfunc_ColorCalcExtRatio__120__CA = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__118__DCSEC 
                                                 >> 8U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S 
            = (0x000000ffU & ((((IData)(__Vfunc_ColorCalcExtRatio__120__RTA)
                                 ? (0x0000007fU & ((IData)(__Vfunc_ColorCalcExtRatio__120__CA) 
                                                   >> 1U))
                                 : (IData)(__Vfunc_ColorCalcExtRatio__120__CA)) 
                               + ((IData)(__Vfunc_ColorCalcExtRatio__120__RTA)
                                   ? ((IData)(__Vfunc_ColorCalcExtRatio__120__RTB)
                                       ? (0x0000003fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__120__CB) 
                                             >> 2U))
                                       : (0x0000007fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__120__CB) 
                                             >> 1U)))
                                   : 0U)) + ((1U & 
                                              ((~ (IData)(__Vfunc_ColorCalcExtRatio__120__RTA)) 
                                               | (~ (IData)(__Vfunc_ColorCalcExtRatio__120__RTB))))
                                              ? 0U : 
                                             (0x0000003fU 
                                              & ((IData)(__Vfunc_ColorCalcExtRatio__120__CC) 
                                                 >> 2U)))));
        __Vfunc_ColorCalcExtRatio__120__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S;
        __Vfunc_ExtColorCalc__118____VlefCall_1__ColorCalcExtRatio 
            = __Vfunc_ColorCalcExtRatio__120__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP 
            = ((0x00ff00ffU & vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ExtColorCalc__118____VlefCall_1__ColorCalcExtRatio) 
                  << 8U));
        __Vfunc_ColorCalcExtRatio__121__RTB = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTTHD;
        __Vfunc_ColorCalcExtRatio__121__RTA = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__RTSEC;
        __Vfunc_ColorCalcExtRatio__121__CC = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__118__DCFTH 
                                                 >> 0x00000010U));
        __Vfunc_ColorCalcExtRatio__121__CB = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__118__DCTHD 
                                                 >> 0x00000010U));
        __Vfunc_ColorCalcExtRatio__121__CA = (0x000000ffU 
                                              & (__Vfunc_ExtColorCalc__118__DCSEC 
                                                 >> 0x00000010U));
        vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S 
            = (0x000000ffU & ((((IData)(__Vfunc_ColorCalcExtRatio__121__RTA)
                                 ? (0x0000007fU & ((IData)(__Vfunc_ColorCalcExtRatio__121__CA) 
                                                   >> 1U))
                                 : (IData)(__Vfunc_ColorCalcExtRatio__121__CA)) 
                               + ((IData)(__Vfunc_ColorCalcExtRatio__121__RTA)
                                   ? ((IData)(__Vfunc_ColorCalcExtRatio__121__RTB)
                                       ? (0x0000003fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__121__CB) 
                                             >> 2U))
                                       : (0x0000007fU 
                                          & ((IData)(__Vfunc_ColorCalcExtRatio__121__CB) 
                                             >> 1U)))
                                   : 0U)) + ((1U & 
                                              ((~ (IData)(__Vfunc_ColorCalcExtRatio__121__RTA)) 
                                               | (~ (IData)(__Vfunc_ColorCalcExtRatio__121__RTB))))
                                              ? 0U : 
                                             (0x0000003fU 
                                              & ((IData)(__Vfunc_ColorCalcExtRatio__121__CC) 
                                                 >> 2U)))));
        __Vfunc_ColorCalcExtRatio__121__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ColorCalcExtRatio__Vstatic__S;
        __Vfunc_ExtColorCalc__118____VlefCall_2__ColorCalcExtRatio 
            = __Vfunc_ColorCalcExtRatio__121__Vfuncout;
        vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP 
            = ((0x0000ffffU & vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP) 
               | ((IData)(__Vfunc_ExtColorCalc__118____VlefCall_2__ColorCalcExtRatio) 
                  << 0x00000010U));
        __Vfunc_ExtColorCalc__118__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.ExtColorCalc__Vstatic__TEMP;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_ECC 
            = __Vfunc_ExtColorCalc__118__Vfuncout;
        if (((~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                 >> 1U)) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__CCRT 
                = (0x0000001fU & ((0x02000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])
                                   ? (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                              >> 0x0000001eU))
                                   : (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                              >> 0x0000001eU))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__CFST 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__CSEC 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_ECC;
            vlSelfRef.tb_top__DOT__u_dut__DOT__CCENFST 
                = (1U & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                        >> 0x00000023U)))
                          ? ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                      >> 0x00000024U)) 
                             & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CC_FST) 
                                | (~ (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                              >> 0x00000018U)))))
                          : (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                     >> 0x00000024U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__COEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                 >> 0x0000001dU)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__COSL 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                 >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__SDEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                 >> 0x0000001bU)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_PREV2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_PREV1;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV1;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CSEC_PREV1 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV1 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                 >> 0x0000001aU)));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                     >> 1U) & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) 
                               | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F)))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__CCRT 
                = (0x0000001fU & ((0x02000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])
                                   ? (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                              >> 0x0000001eU))
                                   : (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                              >> 0x0000001eU))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__CFST 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH
                                   : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__CSEC 
                = (0x00ffffffU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                                 >> 0x00000018U)))
                                   ? vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC
                                   : (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__CCENFST 
                = (1U & ((~ ((0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                           >> 0x0000000cU))) 
                             & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                                        >> 0x00000018U)))) 
                         & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                           >> 0x00000023U)))
                             ? ((IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                         >> 0x00000024U)) 
                                & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CC_FST) 
                                   | (~ (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                                 >> 0x00000018U)))))
                             : (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                        >> 0x00000024U)))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__COEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                 >> 0x0000001dU)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__COSL 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                 >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__SDEN 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                                 >> 0x0000001bU)));
        }
        if (vlSelfRef.CE_R) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC 
                = (1U & ((0U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                       >> 0x0000000cU)))
                          ? (vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                             [vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                             >> 0x0fU) : ((1U == (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                                     >> 0x0000000cU)))
                                           ? ((0x00000400U 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__PAL_N))
                                               ? (vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__pal2__DOT__altsyncram_component__DOT__aa] 
                                                  >> 0x0fU)
                                               : (vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                                                  >> 0x0fU))
                                           : (vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                              [vlSelfRef.tb_top__DOT__u_ref__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                                              >> 0x0fU))));
            if ((1U & (~ (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV) 
                           >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                                        >> 1U)))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOTCLK_DIV)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC_FST 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__CC;
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CC 
                = (1U & ((0U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                       >> 0x0000000cU)))
                          ? (vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                             [vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                             >> 0x0fU) : ((1U == (3U 
                                                  & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                                     >> 0x0000000cU)))
                                           ? ((0x00000400U 
                                               & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_N))
                                               ? (vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__pal2__DOT__altsyncram_component__DOT__aa] 
                                                  >> 0x0fU)
                                               : (vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                                  [vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                                                  >> 0x0fU))
                                           : (vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__mem
                                              [vlSelfRef.tb_top__DOT__u_dut__DOT__pal1__DOT__altsyncram_component__DOT__aa] 
                                              >> 0x0fU))));
            if ((1U & (~ (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV) 
                           >> 1U) & (~ ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                                        >> 1U)))))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOTCLK_DIV)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CC_FST 
                        = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__CC;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT2) 
             & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__CFST = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__CSEC = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__CCENFST = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__SDEN = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__COEN = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__COSL = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV1 = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__BOKEN_PREV2 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U].__PVT__NxPN_EN[0U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                .__PVT__NxPN_EN[0U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U].__PVT__NxPN_EN[1U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                .__PVT__NxPN_EN[1U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U].__PVT__NxPN_EN[2U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                .__PVT__NxPN_EN[2U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__BG_PIPE[1U].__PVT__NxPN_EN[3U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__BG0
                .__PVT__NxPN_EN[3U];
            vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT3 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT2;
            vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT2 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__HB_INT;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
             | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                   >> 1U)))) {
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SON 
                = (1U & (((~ (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                      >> 0x00000020U))) 
                          & ((IData)(vlSelfRef.SCRN_EN) 
                             >> 5U)) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SW_EN) 
                                           & ((IData)(vlSelfRef.SCRN_EN) 
                                              >> 6U)))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0ON 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                     .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                      >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 4U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__RxW_EN[0U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0ON 
                = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                      .__PVT__ON | vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[1U]
                      .__PVT__ON) & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                        >> 0x00000018U))) 
                    & (IData)(vlSelfRef.SCRN_EN)) & 
                   (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[0U] 
                       & ((IData)(vlSelfRef.SCRN_EN) 
                          >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1ON 
                = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                      .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                       .__PVT__CHCN 
                                       >> 2U))) & (~ 
                                                   (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                                    >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 1U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[1U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2ON 
                = ((((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                        .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                         .__PVT__CHCN 
                                         >> 2U))) & 
                       (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__CHCN >> 1U))) & 
                      (~ ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__CHCN & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                           .__PVT__ZMHF) | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                          .__PVT__ZMQT))) & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                                >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 2U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[2U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3ON 
                = ((((((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                        .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                         .__PVT__CHCN 
                                         >> 2U))) & 
                       (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__CHCN >> 1U))) & 
                      (~ ((vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__CHCN & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                           .__PVT__ZMHF) | vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                          .__PVT__ZMQT))) & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                                >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 3U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__NxW_EN[3U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCAOS 
                = (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[14U] 
                         >> 4U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CAOS 
                = (7U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[14U]);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CAOS 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                .__PVT__CAOS;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CAOS 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                .__PVT__CAOS;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CAOS 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                .__PVT__CAOS;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CAOS 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                .__PVT__CAOS;
            __Vfunc_SFCMatch__245__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT);
            __Vfunc_SFCMatch__245__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U]);
            __Vfunc_SFCMatch__245__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] 
                                                 >> 0x00000014U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__245__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__245__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__245__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__245__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__245__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SFC 
                = __Vfunc_SFCMatch__245__Vfuncout;
            __Vfunc_SFCMatch__246__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT);
            __Vfunc_SFCMatch__246__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U]);
            __Vfunc_SFCMatch__246__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] 
                                                 >> 0x00000010U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__246__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__246__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__246__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__246__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__246__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SFC 
                = __Vfunc_SFCMatch__246__Vfuncout;
            __Vfunc_SFCMatch__247__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT);
            __Vfunc_SFCMatch__247__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U]);
            __Vfunc_SFCMatch__247__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] 
                                                 >> 0x00000011U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__247__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__247__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__247__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__247__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__247__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SFC 
                = __Vfunc_SFCMatch__247__Vfuncout;
            __Vfunc_SFCMatch__248__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT);
            __Vfunc_SFCMatch__248__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U]);
            __Vfunc_SFCMatch__248__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] 
                                                 >> 0x00000012U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__248__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__248__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__248__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__248__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__248__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SFC 
                = __Vfunc_SFCMatch__248__Vfuncout;
            __Vfunc_SFCMatch__249__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT);
            __Vfunc_SFCMatch__249__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U]);
            __Vfunc_SFCMatch__249__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[62U] 
                                                 >> 0x00000013U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__249__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__249__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__249__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__249__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__249__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SFC 
                = __Vfunc_SFCMatch__249__Vfuncout;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN 
                = (7U & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                        >> 0x0000001dU)))
                          ? ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                            >> 0x0000001cU)))
                              ? ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
                                        >> 8U)) : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U])
                              : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
                                      << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
                                                >> 0x00000018U))
                                  : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[10U] 
                                        >> 0x00000010U))))
                          : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                            >> 0x0000001cU)))
                              ? ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
                                        >> 8U)) : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U])
                              : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
                                      << 8U) | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
                                                >> 0x00000018U))
                                  : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[11U] 
                                        >> 0x00000010U))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SFC)))
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SFC)))
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SFC)))
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SFC)))
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SFC)))
                        : vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCEN 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                     >> 0x00000016U) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                           & ((IData)(vlSelfRef.SCRN_EN) 
                                              >> 6U)))) 
                   & ((((IData)(((0U == (0x30000000U 
                                         & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U])) 
                                 & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                                    <= (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                              >> 0x00000018U))))) 
                        | (IData)(((0x10000000U == 
                                    (0x30000000U & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U])) 
                                   & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                                      == (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                >> 0x00000018U)))))) 
                       | (IData)(((0x20000000U == (0x30000000U 
                                                   & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U])) 
                                  & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                                     >= (7U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                               >> 0x00000018U)))))) 
                      | (3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                      >> 0x0000001cU)))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__LCCCEN 
                = (1U & ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U] 
                          >> 0x00000015U) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__CCW_EN) 
                                                & ((IData)(vlSelfRef.SCRN_EN) 
                                                   >> 6U)))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCM3 
                = (3U == (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCRT 
                = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                 >> 0x0000001aU)))
                                   ? ((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                     >> 0x00000019U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                                 >> 8U))
                                           : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U])
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                               << 8U) 
                                              | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                                 >> 0x00000018U))
                                           : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                               << 0x00000010U) 
                                              | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[6U] 
                                                 >> 0x00000010U))))
                                   : ((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                     >> 0x00000019U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                                 >> 8U))
                                           : vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U])
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                               << 8U) 
                                              | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                                 >> 0x00000018U))
                                           : ((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                               << 0x00000010U) 
                                              | (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[7U] 
                                                 >> 0x00000010U))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCRT 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCRT 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCRT 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCRT 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCRT 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCCRT 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[4U] 
                                  >> 8U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__LCCCRT 
                = (0x0000001fU & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[4U]);
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCOEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[3U] 
                         >> 0x00000016U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCOSL 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[3U] 
                         >> 6U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COEN 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COSL 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__RSxREG[0U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COEN 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COSL 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[0U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COEN 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COSL 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[1U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COEN 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COSL 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[2U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COEN 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COSL 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__NSxREG[3U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[3U] 
                         >> 0x00000015U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOSL 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[3U] 
                         >> 5U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKSDEN 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                     >> 5U) & (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                               >> 0x0000001eU)) & ((IData)(vlSelfRef.SCRN_EN) 
                                                   >> 7U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SSDEN 
                = (IData)(((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                            >> 0x0000001eU) & ((IData)(vlSelfRef.SCRN_EN) 
                                               >> 7U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                      >> 4U) & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SDEN 
                = (((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                     & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                >> 0x0000001eU))) & 
                    ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                     >= (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                      >> 1U) & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                      >> 2U) & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                      >> 3U) & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SBOKEN 
                = (IData)(((0x80000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0BOKEN 
                = (IData)(((0x90000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0BOKEN 
                = (IData)(((0xa0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1BOKEN 
                = (IData)(((0xc0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2BOKEN 
                = (IData)(((0xd0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3BOKEN 
                = (IData)(((0xe0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SLCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
                         >> 0x00000015U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
                         >> 0x00000014U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
                         >> 0x00000010U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
                         >> 0x00000011U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
                         >> 0x00000012U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[13U] 
                         >> 0x00000013U));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                = (((QData)((IData)(((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCCRT) 
                                       << 6U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOEN) 
                                                 << 5U)) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOSL) 
                                         << 4U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKSDEN) 
                                                   << 3U))))) 
                    << 0x00000018U) | (QData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                = (((QData)((IData)(((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCCRT) 
                                       << 6U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOEN) 
                                                 << 5U)) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOSL) 
                                         << 4U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKSDEN) 
                                                   << 3U))))) 
                    << 0x00000018U) | (QData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                = (((QData)((IData)(((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCCRT) 
                                       << 6U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOEN) 
                                                 << 5U)) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKCOSL) 
                                         << 4U) | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__BKSDEN) 
                                                   << 3U))))) 
                    << 0x00000018U) | (QData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI = 0U;
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DISP) {
                if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SON) 
                     & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCOEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SCOSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SSDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SBOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SLCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & ((IData)(
                                                                                (vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                                                                                >> 0x00000021U)) 
                                                                            << 0x00000018U)) 
                                                                        | (0x00ffffffU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT)))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SPRIN;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0ON) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN) 
                        > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__R0DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__R0PRIN;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0ON) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN) 
                        > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N0DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N0PRIN;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1ON) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN) 
                        > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N1DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N1PRIN;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2ON) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN) 
                        > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N2DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N2PRIN;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3ON) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN))) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN) 
                        > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI;
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3ON) 
                             & (0U != (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN))) 
                            & ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN) 
                               > (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD 
                        = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CAOS) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCM3))))) 
                            << 0x00000023U) | (((QData)((IData)(
                                                                (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3CCRT) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COEN)))) 
                                                << 0x0000001dU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3COSL) 
                                                                    << 0x0000001cU) 
                                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3SDEN) 
                                                                       << 0x0000001bU) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3BOKEN) 
                                                                         << 0x0000001aU))) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3LCEN) 
                                                                      << 0x00000019U) 
                                                                     | ((0x01000000U 
                                                                         & (vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT 
                                                                            >> 1U)) 
                                                                        | (0x00ffffffU 
                                                                           & vlSelfRef.tb_top__DOT__u_ref__DOT__N3DOT))))))));
                    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD_PRI 
                        = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__N3PRIN;
                }
            }
            vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FST 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                               >> 0x0000001aU)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST;
            } else if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC 
                                      >> 0x0000001aU)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
            } else if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__FST 
                                      >> 0x00000019U)))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                    = (((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__LCCCEN) 
                                         << 1U))) << 0x00000023U) 
                       | (((QData)((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__LCCCRT)) 
                           << 0x0000001eU) | (QData)((IData)(
                                                             (0x01000000U 
                                                              | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LINE_PAL))))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD;
            } else {
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_SEC 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk21__DOT__THD;
                vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FTH = 0ULL;
            }
        }
        if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC) {
                __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH[0U];
                vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RxX__v0 = 1U;
                __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v0 
                    = (0x0000007fU & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U] 
                                              >> 0x00000020U)));
                __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v0 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH[1U];
                __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v1 
                    = (0x0000007fU & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U] 
                                              >> 0x00000020U)));
                __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH[2U];
                __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v1 
                    = vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES;
            }
            __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v0 
                = ((IData)(((0x00020000U == (0x00030000U 
                                             & vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[27U])) 
                            & (vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U] 
                               >> 0x00000027U))) ? 
                   ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U] 
                             >> 0x00000027U)) & vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                    .__PVT__KTE) : ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__CTD
                                             [vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[3U]] 
                                             >> 0x00000027U)) 
                                    & vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG
                                    [vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[3U]]
                                    .__PVT__KTE));
            vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RxCTTP__v0 = 1U;
            __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v1 
                = ((IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U] 
                            >> 0x00000027U)) & vlSelfRef.tb_top__DOT__u_ref__DOT__RPxREG[1U]
                   .__PVT__KTE);
            vlSelfRef.tb_top__DOT__u_ref__DOT__R0RPMSB 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U] 
                                 >> 0x00000027U)));
            vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT3 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT2;
            vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT2 
                = vlSelfRef.tb_top__DOT__u_ref__DOT__HB_INT;
            vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk11__DOT__WD 
                = (0x0000ffffU & ((2U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                                   ? ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                                       ? (vlSelfRef.tb_top__DOT__u_ref__DOT__RB1_BUF 
                                          >> 0x10U)
                                       : (vlSelfRef.tb_top__DOT__u_ref__DOT__RB0_BUF 
                                          >> 0x10U))
                                   : ((1U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__VRAM_BANK_2))
                                       ? (vlSelfRef.tb_top__DOT__u_ref__DOT__RA1_BUF 
                                          >> 0x10U)
                                       : (vlSelfRef.tb_top__DOT__u_ref__DOT__RA0_BUF 
                                          >> 0x10U))));
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__BS) {
                __Vfunc_Color555To888__227__DW = (0x00007fffU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk11__DOT__WD));
                __Vfunc_Color555To888__227__Vfuncout 
                    = ((0x00f80000U & ((IData)(__Vfunc_Color555To888__227__DW) 
                                       << 9U)) | ((0x0000f800U 
                                                   & ((IData)(__Vfunc_Color555To888__227__DW) 
                                                      << 6U)) 
                                                  | (0x000000f8U 
                                                     & ((IData)(__Vfunc_Color555To888__227__DW) 
                                                        << 3U))));
                vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC 
                    = __Vfunc_Color555To888__227__Vfuncout;
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DISP_INT)) 
                       & (~ (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                             >> 0x00000018U))))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC = 0U;
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__VA_PIPE[2U]
                .__PVT__LN) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__LINE_PAL 
                    = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk11__DOT__WD));
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_FETCH) {
                if (vlSelfRef.tb_top__DOT__u_ref__DOT__RPxKLCE_PIPE[8U]) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__LINE_PAL 
                        = ((0x0780U & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__LINE_PAL)) 
                           | vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD_PIPE[8U]);
                }
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) 
             | ((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                & ((IData)(vlSelfRef.tb_top__DOT__r_HRES) 
                   >> 1U)))) {
            __Vfunc_SpriteData__237__TPSDSL = (1U & 
                                               (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                                >> 8U));
            __Vfunc_SpriteData__237__DATA = vlSelfRef.FBDI;
            __Vfunc_SpriteData__237__SPCTL = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[15U] 
                                              >> 0x00000010U);
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP 
                = (1U & (~ (((0U != (0x0000007fU & 
                                     ((IData)(__Vfunc_SpriteData__237__DATA) 
                                      >> 8U))) & (~ 
                                                  ((IData)(__Vfunc_SpriteData__237__SPCTL) 
                                                   >> 3U))) 
                            | (0U != (0x000000ffU & (IData)(__Vfunc_SpriteData__237__DATA))))));
            if ((8U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                if ((4U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                    if ((2U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x00feU 
                                           == (0x00ffU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 6U)) | 
                                   (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 6U)));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x00feU 
                                           == (0x00ffU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 6U)) | 
                                   (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 6U)));
                        }
                    } else if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x00feU == (0x00ffU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 7U));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 6U));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x00feU == (0x00ffU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 7U));
                    }
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x000000ffU & (IData)(__Vfunc_SpriteData__237__DATA));
                } else if ((2U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                    if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x003eU == (0x003fU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                      >> 6U)) | (1U 
                                                 & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                                    >> 6U)));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x003eU == (0x003fU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                      >> 6U)) | (1U 
                                                 & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                                    >> 6U)));
                    }
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x0000003fU & (IData)(__Vfunc_SpriteData__237__DATA));
                } else if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                        = (IData)((0x003eU == (0x003fU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                        = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                 >> 7U));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                        = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                 >> 6U));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x0000003fU & (IData)(__Vfunc_SpriteData__237__DATA));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                        = (IData)((0x007eU == (0x007fU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                        = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                 >> 7U));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x0000007fU & (IData)(__Vfunc_SpriteData__237__DATA));
                }
                vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB_TP 
                    = vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP;
            } else {
                if ((4U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                    if ((2U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x01feU 
                                           == (0x01ffU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0000000cU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 9U));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                                = (0x000001ffU & (IData)(__Vfunc_SpriteData__237__DATA));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x03feU 
                                           == (0x03ffU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0000000cU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 0x0000000aU)) 
                                   | (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                            >> 0x0aU)));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                                = (0x000003ffU & (IData)(__Vfunc_SpriteData__237__DATA));
                        }
                    } else if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x07feU == (0x07ffU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0000000cU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0bU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                            = (0x000007ffU & (IData)(__Vfunc_SpriteData__237__DATA));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x03feU == (0x03ffU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                            = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                      >> 0x0000000dU)) 
                               | (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                        >> 0x0dU)));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0000000aU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                            = (0x000003ffU & (IData)(__Vfunc_SpriteData__237__DATA));
                    }
                } else {
                    if ((2U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x07feU 
                                           == (0x07ffU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 0x0000000dU)) 
                                   | (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                            >> 0x0dU)));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                          >> 0x0000000bU)) 
                                   | (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                            >> 0x0bU)));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x07feU 
                                           == (0x07ffU 
                                               & (IData)(__Vfunc_SpriteData__237__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0eU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                         >> 0x0000000bU));
                        }
                    } else if ((1U & (IData)(__Vfunc_SpriteData__237__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x07feU == (0x07ffU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0000000dU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                      >> 0x0000000bU)) 
                               | (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                        >> 0x0bU)));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x07feU == (0x07ffU 
                                                   & (IData)(__Vfunc_SpriteData__237__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = ((2U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                      >> 0x0000000eU)) 
                               | (1U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                        >> 0x0eU)));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (7U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                     >> 0x0000000bU));
                    }
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x000007ffU & (IData)(__Vfunc_SpriteData__237__DATA));
                }
                vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB_TP 
                    = (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP) 
                        & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN)) 
                       & ((IData)(__Vfunc_SpriteData__237__SPCTL) 
                          >> 4U));
            }
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB888 
                = ((0x00f80000U & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                   << 9U)) | ((0x0000f800U 
                                               & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                                  << 6U)) 
                                              | (0x000000f8U 
                                                 & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                                    << 3U))));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSD 
                = (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB) 
                    & (~ (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP))) 
                   & (~ ((IData)(__Vfunc_SpriteData__237__SPCTL) 
                         >> 4U)));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TSD 
                = ((((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB) 
                     & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP)) 
                    & (IData)(__Vfunc_SpriteData__237__TPSDSL)) 
                   & (~ ((IData)(__Vfunc_SpriteData__237__SPCTL) 
                         >> 4U)));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PAL_TP 
                = (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP) 
                    | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD)) 
                   | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TSD));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__SDD 
                = ((IData)((((IData)(__Vfunc_SpriteData__237__SPCTL) 
                             >> 5U) & ((IData)(__Vfunc_SpriteData__237__DATA) 
                                       >> 0x0000000fU)))
                    ? (((QData)((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB_TP)) 
                        << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB888)))
                    : (((QData)((IData)((2U | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PAL_TP)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB) 
                                                             << 0x0000001fU) 
                                                            | ((((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD) 
                                                                 | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSD)) 
                                                                | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TSD)) 
                                                               << 0x0000001eU)) 
                                                           | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR) 
                                                               << 0x0000001bU) 
                                                              | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC) 
                                                                  << 0x00000018U) 
                                                                 | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC))))))));
            __Vfunc_SpriteData__237__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__SDD;
            vlSelfRef.tb_top__DOT__u_ref__DOT__SDOT 
                = __Vfunc_SpriteData__237__Vfuncout;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) 
             | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                & ((IData)(vlSelfRef.tb_top__DOT__d_HRES) 
                   >> 1U)))) {
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SON 
                = (1U & (((~ (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                      >> 0x00000020U))) 
                          & ((IData)(vlSelfRef.SCRN_EN) 
                             >> 5U)) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SW_EN) 
                                           & ((IData)(vlSelfRef.SCRN_EN) 
                                              >> 6U)))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0ON 
                = (((vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                     .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT 
                                      >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 4U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__RxW_EN[0U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0ON 
                = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                      .__PVT__ON | vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[1U]
                      .__PVT__ON) & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT 
                                        >> 0x00000018U))) 
                    & (IData)(vlSelfRef.SCRN_EN)) & 
                   (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[0U] 
                       & ((IData)(vlSelfRef.SCRN_EN) 
                          >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1ON 
                = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                      .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                       .__PVT__CHCN 
                                       >> 2U))) & (~ 
                                                   (vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT 
                                                    >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 1U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[1U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2ON 
                = ((((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                        .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                         .__PVT__CHCN 
                                         >> 2U))) & 
                       (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__CHCN >> 1U))) & 
                      (~ ((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__CHCN & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                           .__PVT__ZMHF) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                          .__PVT__ZMQT))) & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT 
                                                >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 2U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[2U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3ON 
                = ((((((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                        .__PVT__ON & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                         .__PVT__CHCN 
                                         >> 2U))) & 
                       (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__CHCN >> 1U))) & 
                      (~ ((vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__CHCN & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                           .__PVT__ZMHF) | vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                          .__PVT__ZMQT))) & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT 
                                                >> 0x00000018U))) 
                    & ((IData)(vlSelfRef.SCRN_EN) >> 3U)) 
                   & (~ (vlSelfRef.tb_top__DOT__u_dut__DOT__NxW_EN[3U] 
                         & ((IData)(vlSelfRef.SCRN_EN) 
                            >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCAOS 
                = (7U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[14U] 
                         >> 4U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CAOS 
                = (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[14U]);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CAOS 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__CAOS;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CAOS 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                .__PVT__CAOS;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CAOS 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                .__PVT__CAOS;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CAOS 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                .__PVT__CAOS;
            __Vfunc_SFCMatch__111__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT);
            __Vfunc_SFCMatch__111__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U]);
            __Vfunc_SFCMatch__111__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] 
                                                 >> 0x00000014U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__111__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__111__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__111__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__111__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__111__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0SFC 
                = __Vfunc_SFCMatch__111__Vfuncout;
            __Vfunc_SFCMatch__112__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT);
            __Vfunc_SFCMatch__112__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U]);
            __Vfunc_SFCMatch__112__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] 
                                                 >> 0x00000010U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__112__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__112__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__112__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__112__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__112__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0SFC 
                = __Vfunc_SFCMatch__112__Vfuncout;
            __Vfunc_SFCMatch__113__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT);
            __Vfunc_SFCMatch__113__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U]);
            __Vfunc_SFCMatch__113__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] 
                                                 >> 0x00000011U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__113__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__113__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__113__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__113__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__113__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1SFC 
                = __Vfunc_SFCMatch__113__Vfuncout;
            __Vfunc_SFCMatch__114__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT);
            __Vfunc_SFCMatch__114__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U]);
            __Vfunc_SFCMatch__114__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] 
                                                 >> 0x00000012U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__114__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__114__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__114__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__114__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__114__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2SFC 
                = __Vfunc_SFCMatch__114__Vfuncout;
            __Vfunc_SFCMatch__115__CODE = (0x0000000fU 
                                           & vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT);
            __Vfunc_SFCMatch__115__SFCODE = (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U]);
            __Vfunc_SFCMatch__115__SFCS = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[62U] 
                                                 >> 0x00000013U));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd 
                = (0x000000ffU & ((IData)(__Vfunc_SFCMatch__115__SFCS)
                                   ? ((IData)(__Vfunc_SFCMatch__115__SFCODE) 
                                      >> 8U) : (IData)(__Vfunc_SFCMatch__115__SFCODE)));
            vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match 
                = ((((((7U == (7U & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                     >> 1U))) << 3U) 
                      | ((6U == (7U & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                       >> 1U))) << 2U)) 
                     | (((5U == (7U & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                       >> 1U))) << 1U) 
                        | (4U == (7U & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                        >> 1U))))) 
                    << 4U) | ((((3U == (7U & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                              >> 1U))) 
                                << 3U) | ((2U == (7U 
                                                  & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                                     >> 1U))) 
                                          << 2U)) | 
                              (((1U == (7U & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                              >> 1U))) 
                                << 1U) | (0U == (7U 
                                                 & ((IData)(__Vfunc_SFCMatch__115__CODE) 
                                                    >> 1U))))));
            __Vfunc_SFCMatch__115__Vfuncout = (0U != 
                                               ((IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__match) 
                                                & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SFCMatch__Vstatic__sfcd)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3SFC 
                = __Vfunc_SFCMatch__115__Vfuncout;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN 
                = (7U & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                        >> 0x0000001dU)))
                          ? ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                            >> 0x0000001cU)))
                              ? ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
                                        >> 8U)) : vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U])
                              : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
                                      << 8U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
                                                >> 0x00000018U))
                                  : ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[10U] 
                                        >> 0x00000010U))))
                          : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                            >> 0x0000001cU)))
                              ? ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
                                        >> 8U)) : vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U])
                              : ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                >> 0x0000001bU)))
                                  ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
                                      << 8U) | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
                                                >> 0x00000018U))
                                  : ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
                                      << 0x00000010U) 
                                     | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[11U] 
                                        >> 0x00000010U))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0SFC)))
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0SFC)))
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1SFC)))
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2SFC)))
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3PRIN 
                = ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                    .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                      .__PVT__PRIN) 
                                     | (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT 
                                              >> 0x0000001bU)))
                    : ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                        .__PVT__SPRM) ? ((6U & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                                          .__PVT__PRIN) 
                                         | ((vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT 
                                             >> 0x0000001bU) 
                                            & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3SFC)))
                        : vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                       .__PVT__PRIN));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCCEN 
                = (((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U] 
                     >> 0x00000016U) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                           & ((IData)(vlSelfRef.SCRN_EN) 
                                              >> 6U)))) 
                   & ((((IData)(((0U == (0x30000000U 
                                         & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U])) 
                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                                    <= (7U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                              >> 0x00000018U))))) 
                        | (IData)(((0x10000000U == 
                                    (0x30000000U & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U])) 
                                   & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                                      == (7U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                >> 0x00000018U)))))) 
                       | (IData)(((0x20000000U == (0x30000000U 
                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U])) 
                                  & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                                     >= (7U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                               >> 0x00000018U)))))) 
                      | (3U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                      >> 0x0000001cU)))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CCEN 
                = ((((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                      .__PVT__SCCM) ? (vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT 
                                       >> 0x0000001aU)
                      : ((2U != vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                          .__PVT__SCCM) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3SFC) 
                                           & (vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT 
                                              >> 0x0000001aU)))) 
                    & vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                    .__PVT__CCEN) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                        & ((IData)(vlSelfRef.SCRN_EN) 
                                           >> 6U))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LCCCEN 
                = (1U & ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U] 
                          >> 0x00000015U) & (~ ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CCW_EN) 
                                                & ((IData)(vlSelfRef.SCRN_EN) 
                                                   >> 6U)))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCCM3 
                = (3U == (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                >> 0x0000001cU)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CCM3 
                = (3U == vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                   .__PVT__SCCM);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCCRT 
                = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                 >> 0x0000001aU)))
                                   ? ((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                     >> 0x00000019U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                                 >> 8U))
                                           : vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U])
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                               << 8U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                                 >> 0x00000018U))
                                           : ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                               << 0x00000010U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[6U] 
                                                 >> 0x00000010U))))
                                   : ((1U & (IData)(
                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                     >> 0x00000019U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                                 >> 8U))
                                           : vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U])
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                         >> 0x00000018U)))
                                           ? ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                               << 8U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                                 >> 0x00000018U))
                                           : ((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                               << 0x00000010U) 
                                              | (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[7U] 
                                                 >> 0x00000010U))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CCRT 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CCRT 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CCRT 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CCRT 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CCRT 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                .__PVT__CCRT;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKCCRT 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[4U] 
                                  >> 8U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LCCCRT 
                = (0x0000001fU & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[4U]);
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCOEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[3U] 
                         >> 0x00000016U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCOSL 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[3U] 
                         >> 6U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0COEN 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0COSL 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__RSxREG[0U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0COEN 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0COSL 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[0U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1COEN 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1COSL 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[1U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2COEN 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2COSL 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[2U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3COEN 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                .__PVT__COEN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3COSL 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__NSxREG[3U]
                .__PVT__COSL;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKCOEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[3U] 
                         >> 0x00000015U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKCOSL 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[3U] 
                         >> 5U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKSDEN 
                = (((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                     >> 5U) & (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                               >> 0x0000001eU)) & ((IData)(vlSelfRef.SCRN_EN) 
                                                   >> 7U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SSDEN 
                = (IData)(((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                            >> 0x0000001eU) & ((IData)(vlSelfRef.SCRN_EN) 
                                               >> 7U)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                      >> 4U) & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0SDEN 
                = (((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                     & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                >> 0x0000001eU))) & 
                    ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                     >= (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                      >> 1U) & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                      >> 2U) & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3SDEN 
                = ((((vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                      >> 3U) & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                        >> 0x0000001eU))) 
                    & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN) 
                       >= (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3PRIN))) 
                   & ((IData)(vlSelfRef.SCRN_EN) >> 7U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SBOKEN 
                = (IData)(((0x80000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0BOKEN 
                = (IData)(((0x90000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0BOKEN 
                = (IData)(((0xa0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1BOKEN 
                = (IData)(((0xc0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2BOKEN 
                = (IData)(((0xd0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3BOKEN 
                = (IData)(((0xe0000000U == (0xf0000000U 
                                            & vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[12U])) 
                           & (~ (0U != (3U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[68U] 
                                              >> 0x0000000cU))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SLCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
                         >> 0x00000015U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
                         >> 0x00000014U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
                         >> 0x00000010U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
                         >> 0x00000011U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
                         >> 0x00000012U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3LCEN 
                = (1U & (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[13U] 
                         >> 0x00000013U));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BACKD 
                = (((QData)((IData)(((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKCCRT) 
                                       << 6U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKCOEN) 
                                                 << 5U)) 
                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKCOSL) 
                                         << 4U) | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BKSDEN) 
                                                   << 3U))))) 
                    << 0x00000018U) | (QData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BACK_DC)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BACKD;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BACKD;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__BACKD;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[0U] 
                = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCAOS) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCCM3))))) 
                    << 0x00000023U) | (((QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCCRT) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCOEN)))) 
                                        << 0x0000001dU) 
                                       | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SCOSL) 
                                                            << 0x0000001cU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SSDEN) 
                                                               << 0x0000001bU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SBOKEN) 
                                                                 << 0x0000001aU))) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SLCEN) 
                                                              << 0x00000019U) 
                                                             | ((0x01000000U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                                                                             >> 0x00000021U)) 
                                                                    << 0x00000018U)) 
                                                                | (0x00ffffffU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT)))))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U] 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SON) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SPRIN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[1U] 
                = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CAOS) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CCM3))))) 
                    << 0x00000023U) | (((QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0CCRT) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0COEN)))) 
                                        << 0x0000001dU) 
                                       | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0COSL) 
                                                            << 0x0000001cU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0SDEN) 
                                                               << 0x0000001bU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0BOKEN) 
                                                                 << 0x0000001aU))) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0LCEN) 
                                                              << 0x00000019U) 
                                                             | ((0x01000000U 
                                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__R0DOT))))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0PRIN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U] 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0ON) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__R0PRIN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[2U] 
                = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CAOS) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CCM3))))) 
                    << 0x00000023U) | (((QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0CCRT) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0COEN)))) 
                                        << 0x0000001dU) 
                                       | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0COSL) 
                                                            << 0x0000001cU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0SDEN) 
                                                               << 0x0000001bU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0BOKEN) 
                                                                 << 0x0000001aU))) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0LCEN) 
                                                              << 0x00000019U) 
                                                             | ((0x01000000U 
                                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__N0DOT))))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0PRIN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U] 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0ON) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N0PRIN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[3U] 
                = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CAOS) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CCM3))))) 
                    << 0x00000023U) | (((QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1CCRT) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1COEN)))) 
                                        << 0x0000001dU) 
                                       | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1COSL) 
                                                            << 0x0000001cU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1SDEN) 
                                                               << 0x0000001bU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1BOKEN) 
                                                                 << 0x0000001aU))) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1LCEN) 
                                                              << 0x00000019U) 
                                                             | ((0x01000000U 
                                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__N1DOT))))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1PRIN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U] 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1ON) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N1PRIN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[4U] 
                = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CAOS) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CCM3))))) 
                    << 0x00000023U) | (((QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2CCRT) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2COEN)))) 
                                        << 0x0000001dU) 
                                       | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2COSL) 
                                                            << 0x0000001cU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2SDEN) 
                                                               << 0x0000001bU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2BOKEN) 
                                                                 << 0x0000001aU))) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2LCEN) 
                                                              << 0x00000019U) 
                                                             | ((0x01000000U 
                                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__N2DOT))))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2PRIN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U] 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2ON) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N2PRIN)));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[5U] 
                = (((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CAOS) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CCEN) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CCM3))))) 
                    << 0x00000023U) | (((QData)((IData)(
                                                        (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3CCRT) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3COEN)))) 
                                        << 0x0000001dU) 
                                       | (QData)((IData)(
                                                         ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3COSL) 
                                                            << 0x0000001cU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3SDEN) 
                                                               << 0x0000001bU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3BOKEN) 
                                                                 << 0x0000001aU))) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3LCEN) 
                                                              << 0x00000019U) 
                                                             | ((0x01000000U 
                                                                 & (vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.tb_top__DOT__u_dut__DOT__N3DOT))))))));
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U] 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3PRIN;
            vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U] 
                = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3ON) 
                   & (0U != (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__N3PRIN)));
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DISP) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK = 0U;
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U]) {
                    if ((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[0U];
                    } else if ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[0U];
                    } else if ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[0U];
                    }
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK = 0U;
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U]) {
                    if ((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[1U];
                    } else if ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[1U];
                    } else if ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[1U];
                    }
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK = 0U;
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U]) {
                    if ((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[2U];
                    } else if ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[2U];
                    } else if ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[2U];
                    }
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK = 0U;
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U]) {
                    if ((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[3U];
                    } else if ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[3U];
                    } else if ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[3U];
                    }
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK = 0U;
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U] 
                     & (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U] 
                        > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U]))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U]) {
                    if ((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[4U];
                    } else if ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[4U];
                    } else if ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[4U];
                    }
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK = 0U;
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[0U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[0U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[1U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[1U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[2U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[2U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[3U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[3U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[4U] 
                     & ((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                         > vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U]) 
                        | (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[4U] 
                           == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LPRI[5U])))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK 
                        = ((IData)(1U) + vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK);
                }
                if (vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LON[5U]) {
                    if ((0U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[5U];
                    } else if ((1U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[5U];
                    } else if ((2U == vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__RK)) {
                        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD 
                            = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LAY[5U];
                    }
                }
            }
            vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FST 
                = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST;
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                               >> 0x0000001aU)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST;
            } else if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC 
                                      >> 0x0000001aU)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC;
            } else if ((1U & (IData)((vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__FST 
                                      >> 0x00000019U)))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                    = (((QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LCCCEN) 
                                         << 1U))) << 0x00000023U) 
                       | (((QData)((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__LCCCRT)) 
                           << 0x0000001eU) | (QData)((IData)(
                                                             (0x01000000U 
                                                              | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LINE_PAL))))));
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD;
            } else {
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_SEC 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__SEC;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_THD 
                    = vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk31__DOT__THD;
                vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_FTH = 0ULL;
            }
            __Vfunc_SpriteData__103__TPSDSL = (1U & 
                                               (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                                >> 8U));
            __Vfunc_SpriteData__103__DATA = vlSelfRef.FBDI;
            __Vfunc_SpriteData__103__SPCTL = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[15U] 
                                              >> 0x00000010U);
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP 
                = (1U & (~ (((0U != (0x0000007fU & 
                                     ((IData)(__Vfunc_SpriteData__103__DATA) 
                                      >> 8U))) & (~ 
                                                  ((IData)(__Vfunc_SpriteData__103__SPCTL) 
                                                   >> 3U))) 
                            | (0U != (0x000000ffU & (IData)(__Vfunc_SpriteData__103__DATA))))));
            if ((8U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                if ((4U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                    if ((2U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x00feU 
                                           == (0x00ffU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 6U)) | 
                                   (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 6U)));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x00feU 
                                           == (0x00ffU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 6U)) | 
                                   (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 6U)));
                        }
                    } else if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x00feU == (0x00ffU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 7U));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 6U));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x00feU == (0x00ffU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 7U));
                    }
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x000000ffU & (IData)(__Vfunc_SpriteData__103__DATA));
                } else if ((2U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                    if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x003eU == (0x003fU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                      >> 6U)) | (1U 
                                                 & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                                    >> 6U)));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x003eU == (0x003fU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                      >> 6U)) | (1U 
                                                 & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                                    >> 6U)));
                    }
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x0000003fU & (IData)(__Vfunc_SpriteData__103__DATA));
                } else if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                        = (IData)((0x003eU == (0x003fU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                        = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                 >> 7U));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                        = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                 >> 6U));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x0000003fU & (IData)(__Vfunc_SpriteData__103__DATA));
                } else {
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                        = (IData)((0x007eU == (0x007fU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 1U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC = 0U;
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                        = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                 >> 7U));
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x0000007fU & (IData)(__Vfunc_SpriteData__103__DATA));
                }
                vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB_TP 
                    = vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP;
            } else {
                if ((4U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                    if ((2U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x01feU 
                                           == (0x01ffU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0000000cU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 9U));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                                = (0x000001ffU & (IData)(__Vfunc_SpriteData__103__DATA));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x03feU 
                                           == (0x03ffU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0000000cU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 0x0000000aU)) 
                                   | (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                            >> 0x0aU)));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                                = (0x000003ffU & (IData)(__Vfunc_SpriteData__103__DATA));
                        }
                    } else if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x07feU == (0x07ffU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0000000cU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0bU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                            = (0x000007ffU & (IData)(__Vfunc_SpriteData__103__DATA));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x03feU == (0x03ffU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                            = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0fU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                      >> 0x0000000dU)) 
                               | (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                        >> 0x0dU)));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0000000aU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                            = (0x000003ffU & (IData)(__Vfunc_SpriteData__103__DATA));
                    }
                } else {
                    if ((2U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x07feU 
                                           == (0x07ffU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 0x0000000dU)) 
                                   | (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                            >> 0x0dU)));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                          >> 0x0000000bU)) 
                                   | (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                            >> 0x0bU)));
                        } else {
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                                = (IData)((0x07feU 
                                           == (0x07ffU 
                                               & (IData)(__Vfunc_SpriteData__103__DATA))));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0fU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                                = (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0eU));
                            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                                = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                         >> 0x0000000bU));
                        }
                    } else if ((1U & (IData)(__Vfunc_SpriteData__103__SPCTL))) {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x07feU == (0x07ffU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0000000dU));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                      >> 0x0000000bU)) 
                               | (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                        >> 0x0bU)));
                    } else {
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD 
                            = (IData)((0x07feU == (0x07ffU 
                                                   & (IData)(__Vfunc_SpriteData__103__DATA))));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN = 0U;
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR 
                            = ((2U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                      >> 0x0000000eU)) 
                               | (1U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                        >> 0x0eU)));
                        vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC 
                            = (7U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                     >> 0x0000000bU));
                    }
                    vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC 
                        = (0x000007ffU & (IData)(__Vfunc_SpriteData__103__DATA));
                }
                vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB_TP 
                    = (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP) 
                        & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TPEN)) 
                       & ((IData)(__Vfunc_SpriteData__103__SPCTL) 
                          >> 4U));
            }
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB888 
                = ((0x00f80000U & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                   << 9U)) | ((0x0000f800U 
                                               & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                                  << 6U)) 
                                              | (0x000000f8U 
                                                 & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                                    << 3U))));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSD 
                = (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB) 
                    & (~ (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP))) 
                   & (~ ((IData)(__Vfunc_SpriteData__103__SPCTL) 
                         >> 4U)));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TSD 
                = ((((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB) 
                     & (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP)) 
                    & (IData)(__Vfunc_SpriteData__103__TPSDSL)) 
                   & (~ ((IData)(__Vfunc_SpriteData__103__SPCTL) 
                         >> 4U)));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PAL_TP 
                = (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TP) 
                    | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD)) 
                   | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TSD));
            vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__SDD 
                = ((IData)((((IData)(__Vfunc_SpriteData__103__SPCTL) 
                             >> 5U) & ((IData)(__Vfunc_SpriteData__103__DATA) 
                                       >> 0x0000000fU)))
                    ? (((QData)((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB_TP)) 
                        << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__RGB888)))
                    : (((QData)((IData)((2U | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PAL_TP)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSB) 
                                                             << 0x0000001fU) 
                                                            | ((((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__NSD) 
                                                                 | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__MSD)) 
                                                                | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__TSD)) 
                                                               << 0x0000001eU)) 
                                                           | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__PR) 
                                                               << 0x0000001bU) 
                                                              | (((IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__CC) 
                                                                  << 0x00000018U) 
                                                                 | (IData)(vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__DC))))))));
            __Vfunc_SpriteData__103__Vfuncout = vlSymsp->TOP__REF_VDP2_PKG.SpriteData__Vstatic__SDD;
            vlSelfRef.tb_top__DOT__u_dut__DOT__SDOT 
                = __Vfunc_SpriteData__103__Vfuncout;
        }
        if (vlSelfRef.RES_N) {
            if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_F) 
                 | (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R))) {
                vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__EXLAT_N_OLD 
                    = vlSelfRef.EXLAT_N;
            }
            if (vlSelfRef.CE_F) {
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__WE_N)) 
                     & (~ (IData)(vlSelfRef.REQ_N)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RA 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__A);
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                     & (~ (IData)(vlSelfRef.REQ_N)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RA 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A);
                }
            }
            if (vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R) {
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                      == ((((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x01c1U : 0x01a5U) - (IData)(1U)) 
                          - (IData)(1U))) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                  ? 0x0161U : 0x0141U) 
                                - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == ((IData)(3U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((IData)(4U) + (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_END)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START) 
                            - (IData)(1U)) - (IData)(8U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_END))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_START_EN) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_FETCH_END))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH = 0U;
                }
                if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                      == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                            ? 0x01acU : 0x0190U) - (IData)(1U))) 
                     | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                        == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                              ? 0x0162U : 0x0142U) 
                            - (IData)(1U))))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH = 1U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                             == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                  ? 0x01b0U : 0x0194U)) 
                            | ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                               == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                    ? 0x0165U : 0x0145U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                             ? 0x01c1U : 0x01a5U) - (IData)(1U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                 ? 0x0161U : 0x0141U))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == ((IData)(3U) + ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                           ? 0x01c1U
                                           : 0x01a5U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == ((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                 ? 0x0161U : 0x0141U))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__RCH_FETCH = 0U;
                }
                if (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                       == ((((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                              ? 0x01c1U : 0x01a5U) 
                            - (IData)(1U)) - (IData)(4U))) 
                      & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__IS_RENDER_LINES)) 
                     & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DISP_INT))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__H_CNT) 
                            == (((1U & (IData)(vlSelfRef.tb_top__DOT__d_HRES))
                                  ? 0x0161U : 0x0141U) 
                                - (IData)(4U)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__CT_FETCH = 0U;
                }
                if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT) 
                     & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT) 
                        == (0x000001ffU & (((IData)(Vtb_top__ConstPool__TABLE_h33db5abf_0
                                                    [
                                                    (((IData)(vlSelfRef.PAL) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.tb_top__DOT__d_VRES) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.tb_top__DOT__d_HRES)))]) 
                                            - (IData)(1U)) 
                                           >> 1U))))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__LAST_DOT) 
                            & (0x01feU == (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__V_CNT)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT = 0U;
                }
                vlSelfRef.tb_top__DOT__u_dut__DOT__DISP 
                    = (vlSelfRef.tb_top__DOT__u_dut__DOT__REGS[71U] 
                       >> 0x0000001fU);
            }
            if (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_F) 
                 | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__DOT_CE_R))) {
                vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk37__DOT__EXLAT_N_OLD 
                    = vlSelfRef.EXLAT_N;
            }
            if (((((~ (IData)(vlSelfRef.CS_N)) & (IData)(vlSelfRef.DTEN_N)) 
                  & (IData)(vlSelfRef.AD_N)) & (IData)(vlSelfRef.CE_R))) {
                if ((0x00008000U & (IData)(vlSelfRef.DI))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__DQM 
                        = (3U & ((IData)(vlSelfRef.DI) 
                                 >> 0x0cU));
                }
                if ((1U & (~ ((IData)(vlSelfRef.DI) 
                              >> 0x0fU)))) {
                    vlSelfRef.tb_top__DOT__u_dut__DOT__BURST 
                        = (1U & ((IData)(vlSelfRef.DI) 
                                 >> 0x0dU));
                    vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N 
                        = (1U & ((IData)(vlSelfRef.DI) 
                                 >> 0x0eU));
                }
            }
            if (vlSelfRef.tb_top__DOT__u_ref__DOT__DOT_CE_R) {
                if ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                      == ((((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                             ? 0x01c1U : 0x01a5U) - (IData)(1U)) 
                          - (IData)(1U))) & (IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__IS_RENDER_LINES))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC = 1U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__H_CNT) 
                            == (((1U & (IData)(vlSelfRef.tb_top__DOT__r_HRES))
                                  ? 0x0161U : 0x0141U) 
                                - (IData)(1U)))) {
                    vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC = 0U;
                }
                vlSelfRef.tb_top__DOT__u_ref__DOT__DISP 
                    = (vlSelfRef.tb_top__DOT__u_ref__DOT__REGS[71U] 
                       >> 0x0000001fU);
            }
        } else {
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__DQM = 3U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__BURST = 0U;
            vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N = 1U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH = 0U;
            vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT = 0U;
        }
    } else {
        vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v3 = 1U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__VRAMA_ALLOW = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk6__DOT__VRAMB_ALLOW = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CALC = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCH_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NVCS_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NPN_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__REFRESH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_FETCH = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__VB_INT = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__BACK_DC = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__LINE_PAL = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NVCSY__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NVCSY[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NVCSY__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NVCSY[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NVCSY__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[0U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0))) 
                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[0U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v0))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[1U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1))) 
                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[1U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v1))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[2U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2))) 
                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[2U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v2))));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[3U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3))) 
                & vlSelfRef.tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T[3U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_ref__DOT__NxPN_CYC_BY_T__v3))));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[8U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[9U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[10U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[11U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[12U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[13U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[14U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[15U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v15;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[16U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v16;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[17U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v17;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[18U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v18;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[19U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v19;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[20U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v20;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[21U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v21;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[22U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v22;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[23U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v23;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[24U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v24;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[25U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v25;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[26U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v26;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[27U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v27;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[28U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v28;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[29U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v29;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[30U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v30;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[31U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v31;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[32U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v32;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W0_HIT_PIPE[33U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W0_HIT_PIPE__v33;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[8U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[9U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[10U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[11U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[12U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[13U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[14U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[15U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v15;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[16U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v16;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[17U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v17;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[18U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v18;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[19U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v19;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[20U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v20;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[21U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v21;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[22U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v22;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[23U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v23;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[24U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v24;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[25U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v25;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[26U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v26;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[27U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v27;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[28U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v28;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[29U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v29;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[30U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v30;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[31U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v31;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[32U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v32;
        vlSelfRef.tb_top__DOT__u_ref__DOT__W1_HIT_PIPE[33U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__W1_HIT_PIPE__v33;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__BG_PIPE = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__BG_PIPE;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__RBG_CH__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VS__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VS[0U] = 
            ((0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VS[0U]) 
             | ((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v0) 
                << 8U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VS[0U] = 
            ((0x0007ff00U & vlSelfRef.tb_top__DOT__u_ref__DOT__VS[0U]) 
             | (IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v1));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__VS__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__VS[1U] = 
            ((0x000000ffU & vlSelfRef.tb_top__DOT__u_ref__DOT__VS[1U]) 
             | ((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v2) 
                << 8U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__VS[1U] = 
            ((0x0007ff00U & vlSelfRef.tb_top__DOT__u_ref__DOT__VS[1U]) 
             | (IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__VS__v3));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk12__DOT__NBG_CH__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v6;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v7) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v8;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v9) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v9;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v10) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v10;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v11) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v11;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v12) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v12;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDP__v13) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDP__v13;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v9) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CDP__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v8;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v9) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v12;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v13) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v14;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v15) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v15;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v16;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_DC__v17) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_CDP__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_DC__v17;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[2U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[2U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[3U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[3U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[4U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_TP_PIPE[4U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_TP_PIPE__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[2U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[2U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[3U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[3U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_PN_PIPE[4U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__RBG_PN_PIPE__v13;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v4] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v5] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v6] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v6;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v7) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v7] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v7]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v7);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v8] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v8]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v8);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v9] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v9]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v9);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v10] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v10]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v10);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v11] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v11]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v11);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v12] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v12]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v12);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v13] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v13]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v13);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v14] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v14]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v14);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v15) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v15] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v15;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v16) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v16] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v16;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v17] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v17;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v18) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v18] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v18;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v19] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v19;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v20] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v20;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v21] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v21;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v22) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v22] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v22]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v22)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v23] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v23]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v23)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v24] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v24]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v24)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v25] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v25]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v25)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v26] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v26]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v26)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v27] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v27]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v27)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v28] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v28]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v28)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v29] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v29]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v29)) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v30) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v30] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v30]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v30);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v31] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v31]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v31);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v32] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v32]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v32);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v33] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v33]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v33);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v34] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v34]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v34);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v35] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v35]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v35);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v36] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v36]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v36);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v37] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v37]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v37);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v38) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v38] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v38;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v39) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v39] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v39;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v40] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v40;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v41) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v41] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v41;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v42] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v42;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v43] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v43;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v44] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v44;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v45) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v45] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v45]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v45)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v46] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v46]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v46)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v47] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v47]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v47)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v48] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v48]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v48)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v49] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v49]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v49)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v50] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v50]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v50)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v51] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v51]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v51)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v52] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v52]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v52)) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v53) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v53] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v53]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v53);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v54] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v54]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v54);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v55] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v55]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v55);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v56] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v56]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v56);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v57] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v57]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v57);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v58] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v58]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v58);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v59] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v59]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v59);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v60] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v60]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v60);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v61) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v61] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v61;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v62) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v62] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v62;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v63] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v63;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v64) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v64] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v64;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v65] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v65;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v66] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v66;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v67] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v67;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v68) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v68] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v68]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v68)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v69] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v69]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v69)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v70] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v70]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v70)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v71] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v71]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v71)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v72] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v72]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v72)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v73] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v73]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v73)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v74] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v74]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v74)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v75] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v75]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v75)) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CDC__v76) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v76] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v76]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v76);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v77] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v77]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v77);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v78] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v78]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v78);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v79] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v79]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v79);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v80] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v80]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v80);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v81] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v81]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v81);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v82] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v82]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v82);
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v83] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CDC__v83]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CDC__v83);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__PN_PIPE__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__PN_PIPE__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[0U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__PN_PIPE__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG0_PN_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG1_PN_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG2_PN_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG3_PN_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[1U][7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v15;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v16;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v17;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v18;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[2U][7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v19;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v20;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v21;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v22;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v23;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v24;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v25;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v26;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[3U][7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v27;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v28;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v29;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v30;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v31;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v32;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v33;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v34;
        vlSelfRef.tb_top__DOT__u_ref__DOT__PN_PIPE[4U][7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__PN_PIPE__v35;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_POS = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_POS;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CDP__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CDP__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__RBG_CH__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v4;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v6) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v6;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v8) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v8;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v9) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v9;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v10;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v11;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v12;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v13) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v13;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v14;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v15) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v15;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v16;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_DC__v17) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_DC__v17;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk14__DOT__NBG_CH__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v3;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v4] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v4;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v5] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v5;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v6] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v6;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v7) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v7] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v7]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v7);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v8] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v8]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v8);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v9] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v9]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v9);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v10] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v10]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v10);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v11] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v11]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v11);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v12] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v12]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v12);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v13] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v13]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v13);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v14] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v14]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v14);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v15) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v15] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v15;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v16) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v16] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v16;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v17] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v17;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v18) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v18] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v18;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v19] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v19;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v20] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v20;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v21] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v21;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v22) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v22] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v22]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v22)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v23] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v23]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v23)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v24] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v24]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v24)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v25] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v25]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v25)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v26] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v26]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v26)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v27] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v27]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v27)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v28] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v28]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v28)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v29] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v29]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v29)) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v30) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v30] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v30]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v30);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v31] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v31]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v31);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v32] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v32]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v32);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v33] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v33]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v33);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v34] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v34]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v34);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v35] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v35]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v35);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v36] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v36]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v36);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v37] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v37]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v37);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v38) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v38] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v38;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v39) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v39] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v39;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v40] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v40;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v41) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v41] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v41;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v42] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v42;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v43] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v43;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v44] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v44;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v45) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v45] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v45]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v45)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v46] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v46]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v46)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v47] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v47]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v47)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v48] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v48]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v48)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v49] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v49]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v49)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v50] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v50]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v50)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v51] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v51]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v51)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v52] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v52]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v52)) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v53) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v53] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v53]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v53);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v54] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v54]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v54);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v55] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v55]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v55);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v56] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v56]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v56);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v57] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v57]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v57);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v58] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v58]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v58);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v59] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v59]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v59);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v60] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v60]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v60);
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v61) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v61] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v61;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v62) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v62] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v62;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v63] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v63;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v64) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v64] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v64;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v65] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v65;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v66] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v66;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v67] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v67;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v68) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v68] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v68]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v68)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v69] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v69]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v69)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v70] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v70]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v70)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v71] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v71]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v71)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v72] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v72]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v72)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v73] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v73]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v73)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v74] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v74]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v74)) 
                  << 4U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v75] 
            = ((0x0fU & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v75]) 
               | ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v75)) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDC__v76) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v76] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v76]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v76);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v77] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v77]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v77);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v78] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v78]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v78);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v79] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v79]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v79);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v80] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v80]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v80);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v81] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v81]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v81);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v82] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v82]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v82);
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v83] 
            = ((0xf0U & vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[0U]
                [vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NBG_CDC__v83]) 
               | vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDC__v83);
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__VS_OFFS = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__VS_OFFS;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v4] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v5] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v6] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_EN__v7] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v2] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v3] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v4] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CT_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__RBG_CT_EN__v5] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v4] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v5] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v6] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v7] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v8] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v9] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v10] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v11] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_EN__v12) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_EN[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_PN_CNT__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_PN_CNT[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_BM_CNT__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_BM_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v6;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v12) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NBG_CH_CNT__v16) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NBG_CH_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxSX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxSX__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxEX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxEX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__WxSX__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__WxSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxSX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxSX__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__WxEX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__WxEX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__WxEX__v1;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_VCNT 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_VCNT;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__LZMX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__LZMX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__LZMX__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__LZMX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__LZMX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__LZMX__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v1] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__SCYN_UPD[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NY__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSY__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSY__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSY__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NY__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NY__v4] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NY__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NMOSY__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NMOSY__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NMOSY__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NMOSY__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NMOSY__v1;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__CELLX = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__CELLX;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk4__DOT__CX[3U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NX[0U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NX[1U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NX[2U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NX[3U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NX__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NX__v4] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NSX__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NX__v5) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NX__v5] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_ref__DOT__NSX__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NSX__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[0U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_TP_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_TP_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_PN_PIPE[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_PN_PIPE__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__PN_PIPE__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__PN_PIPE__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[0U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__PN_PIPE__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG2_PN_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG3_PN_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v4;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v5;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v6;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v7;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v8;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v9;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v10;
        vlSelfRef.tb_top__DOT__u_dut__DOT__PN_PIPE[1U][7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__PN_PIPE__v11;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VS__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VS[0U] = 
            ((0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__VS[0U]) 
             | ((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v0) 
                << 8U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__VS[0U] = 
            ((0x0007ff00U & vlSelfRef.tb_top__DOT__u_dut__DOT__VS[0U]) 
             | (IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v1));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VS__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VS[1U] = 
            ((0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__VS[1U]) 
             | ((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v2) 
                << 8U));
        vlSelfRef.tb_top__DOT__u_dut__DOT__VS[1U] = 
            ((0x0007ff00U & vlSelfRef.tb_top__DOT__u_dut__DOT__VS[1U]) 
             | (IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VS__v3));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NVCSY__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NVCSY[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NVCSY__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NVCSY[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NVCSY__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v5) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v5;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v6) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v6;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v7) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v8) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v8;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v9) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v9;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v10) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v10;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v11) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v11;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v12) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v12;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CDP__v13) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CDP__v13;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[0U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0))) 
                & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[0U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v0))));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[1U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1))) 
                & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[1U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v1))));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[2U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2))) 
                & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[2U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v2))));
        vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[3U] 
            = (((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3))) 
                & vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[3U]) 
               | (0x00ffU & ((CData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3)) 
                             << (IData)(vlSelfRef.__VdlyLsb__tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T__v3))));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAst__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__KAst[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAst__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAst__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__KAy[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAy__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAy__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAy__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__KAy[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAy__v1] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__KAx__v0] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAx__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__KAx__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__KAx__v2;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__RP_POS = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__RP_POS;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[1U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_FETCH__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_FETCH[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxSX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxSX__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxEX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxEX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__WxSX__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__WxSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxSX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxSX__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__WxEX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__WxEX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__WxEX__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CT_EN[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CT_EN[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RBG_CT_EN__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_EN[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_EN__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_EN__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_EN[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__VS_OFFS = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VS_OFFS;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_BM_CNT__v8) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_BM_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v8) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_CH_CNT__v12) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CH_CNT[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NBG_PN_CNT__v6) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_PN_CNT[1U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_VCNT 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_VCNT;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__LZMX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__LZMX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__LZMX__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__LZMX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__LZMX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__LZMX__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v1] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD[2U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__SCYN_UPD[3U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NY__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSY__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSY__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSY__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v3] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NY__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NY__v4] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NY__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NMOSY__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NMOSY__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NMOSY__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NMOSY__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NMOSY__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[2U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk9__DOT__CX[3U] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NX[0U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NX[1U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NX[2U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NX[3U] = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NX__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NX__v4] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NSX__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v1] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NX__v5) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NX__v5] = 0U;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__NSX__v2] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NSX__v2;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__CELLX = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__CELLX;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk8__DOT__HPOS_PIPE;
    vlSelfRef.tb_top__DOT__u_ref__DOT__MOSAIC_HCNT 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__MOSAIC_HCNT;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP4__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP4[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP4__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP4[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP4__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP0__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP0__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP0[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP0__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP6__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP6[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP6__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP6[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP6__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP2__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP2[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP2__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP2[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP2__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP5__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP5[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP5__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP5[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP5__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP1__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP1__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP1[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP1__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP7__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP7[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP7__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP7[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP7__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCDP3__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP3[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP3__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCDP3[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCDP3__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v4) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NCX__v8) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NCX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NCX__v11;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC0__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[8U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[9U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[10U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[11U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[12U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[13U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[14U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC0[15U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC0__v15;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC2__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[8U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[9U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[10U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[11U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[12U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[13U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[14U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC2[15U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC2__v15;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC3__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[8U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[9U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[10U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[11U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[12U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[13U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[14U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC3[15U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC3__v15;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__NDC1__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[8U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[9U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v3;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v4;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[10U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v5;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v6;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[11U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v7;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[4U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v8;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[12U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v9;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[5U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v10;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[13U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v11;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[6U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v12;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[14U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v13;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[7U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v14;
        vlSelfRef.tb_top__DOT__u_ref__DOT__NDC1[15U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__NDC1__v15;
    }
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk25__DOT__REG_RD_DELAY;
    vlSelfRef.tb_top__DOT__u_ref__DOT__REG_RRDY = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__REG_RRDY;
    vlSelfRef.tb_top__DOT__u_dut__DOT__HPOS_PIPE = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__HPOS_PIPE;
    vlSelfRef.tb_top__DOT__u_dut__DOT__MOSAIC_HCNT 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__MOSAIC_HCNT;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP4__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP4[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP4__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP4[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP4__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP0__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP0__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP0[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP0__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP6__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP6[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP6__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP6[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP6__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP2__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP2[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP2__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP2[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP2__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP5__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP5[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP5__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP5[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP5__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP1__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP1__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP1[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP1__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP7__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP7[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP7__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP7[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP7__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCDP3__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP3[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP3__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCDP3[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCDP3__v1;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__NDC_PTR;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v4;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v5;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v6;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v7;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__NCX__v8) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v8;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v9;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v10;
        vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__NCX__v11;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH[vlSelfRef.__VdlyDim0__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__unnamedblk10__DOT__RES_LATCH__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__CTD__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__CTD[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__CTD__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTTP[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxCTTP__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxCTTP__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RxCTTP[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxCTTP__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v2;
        vlSelfRef.tb_top__DOT__u_dut__DOT__R0RP_PIPE[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__R0RP_PIPE__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__RxX__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__RPxLCSD[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RPxLCSD__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RPxLCSD[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RPxLCSD__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RxX[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxX__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RxX[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxX__v1;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RxY[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxY__v0;
        vlSelfRef.tb_top__DOT__u_dut__DOT__RxY[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__RxY__v1;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk37__DOT__REG_RD_DELAY 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk37__DOT__REG_RD_DELAY;
    vlSelfRef.tb_top__DOT__u_dut__DOT__REG_RRDY = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__REG_RRDY;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PEND 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_READ_PEND;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WE = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WE;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WRITE_PEND;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v1) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v2) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v3) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v4) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v4;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE__v5) {
        vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_READ_PIPE[1U] = 0U;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_WLOCK = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VRAM_WLOCK;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCDP[0U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[0U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxCDP[1U] = vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_CDP[1U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxDC[0U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[0U][0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxDC[1U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_ref__DOT__RBG_DC[1U][0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCDP[0U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[0U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxCDP[1U] = vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CDP[1U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxDC[0U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[0U][0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxDC[1U] = (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][1U]) 
                                                    << 0x00000010U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][2U]) 
                                                       << 8U) 
                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_DC[1U][0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD1 = (((QData)((IData)(
                                                                   (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][7U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][6U]) 
                                                                     << 0x00000010U) 
                                                                    | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][5U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][4U])))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][3U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][2U]) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][1U]) 
                                                                         << 8U) 
                                                                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[1U][0U])))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD2 = (((QData)((IData)(
                                                                   (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][7U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][6U]) 
                                                                     << 0x00000010U) 
                                                                    | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][5U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][4U])))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][3U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][2U]) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][1U]) 
                                                                         << 8U) 
                                                                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[2U][0U])))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_WD3 = (((QData)((IData)(
                                                                   (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][7U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][6U]) 
                                                                     << 0x00000010U) 
                                                                    | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][5U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][4U])))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    (((((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][3U]) 
                                                                        << 8U) 
                                                                       | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][2U]) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][1U]) 
                                                                         << 8U) 
                                                                        | vlSelfRef.tb_top__DOT__u_dut__DOT__NBG_CDC[3U][0U])))));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[0U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NVCSY[0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[1U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NVCSY[1U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[2U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[2U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFY[3U] = vlSelfRef.tb_top__DOT__u_ref__DOT__NMOSY[3U];
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[0U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[1U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[1U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[2U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[2U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[2U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__NxOFFX[3U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_ref__DOT__NX[3U] 
                        + vlSelfRef.tb_top__DOT__u_ref__DOT__NSX[3U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[0U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[0U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[1U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[1U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[2U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[2U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC[3U] 
        = (0U != vlSelfRef.tb_top__DOT__u_dut__DOT__NxPN_CYC_BY_T[3U]);
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[0U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAy[0U] 
                                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__RxKA[1U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_dut__DOT__KAy[1U] 
                                                      + vlSelfRef.tb_top__DOT__u_dut__DOT__KAx[1U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[0U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NVCSY[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[1U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NVCSY[1U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[2U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[2U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFY[3U] = vlSelfRef.tb_top__DOT__u_dut__DOT__NMOSY[3U];
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[0U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[0U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[0U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[1U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[1U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[1U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[2U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[2U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[2U]));
    vlSelfRef.tb_top__DOT__u_dut__DOT__NxOFFX[3U] = 
        (0x0007ffffU & (vlSelfRef.tb_top__DOT__u_dut__DOT__NX[3U] 
                        + vlSelfRef.tb_top__DOT__u_dut__DOT__NSX[3U]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_69 = (1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__NDC_PTR) 
                                                    ^ 
                                                    (vlSelfRef.tb_top__DOT__u_dut__DOT__NCX[0U] 
                                                     >> 0x0000000bU)));
    vlSelfRef.d_RA_WE = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA_WE;
    vlSelfRef.d_RB_WE = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB_WE;
    vlSelfRef.d_RA0_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_A;
    vlSelfRef.d_RA1_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_A;
    vlSelfRef.d_RB0_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_A;
    vlSelfRef.d_RB1_A = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_A;
    vlSelfRef.d_RA_D = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA_D;
    vlSelfRef.d_RB_D = vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB_D;
    vlSelfRef.d_RA_RD = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMA1_RD));
    vlSelfRef.d_RB_RD = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB0_RD) 
                         | (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAMB1_RD));
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULXA;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__MULYA;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Zst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Zst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PX = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PX;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PY = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PY;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_PZ = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_PZ;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CX = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CX;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CY = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CY;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_CZ = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_CZ;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KAst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_KAst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DKAst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DKAst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DXst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DXst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Xst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Xst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DYst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DYst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_Yst = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_Yst;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DX = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DX;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DY = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__RP_DY;
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_KX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KX[__VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KX__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_KY__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_KY[__VdlyDim0__tb_top__DOT__u_ref__DOT__RP_KY__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RP_KY__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RP_DKAx__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RP_DKAx[__VdlyDim0__tb_top__DOT__u_ref__DOT__RP_DKAx__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RP_DKAx__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH[__VdlyDim0__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__unnamedblk5__DOT__RES_LATCH__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__CTD__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__CTD[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__CTD__v3;
    }
    __Vfunc_MultRC__32__b = (vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXA 
                             - vlSelfRef.tb_top__DOT__u_dut__DOT__SUBXB);
    __Vfunc_MultRC__32__a = vlSelfRef.tb_top__DOT__u_dut__DOT__MULXA;
    vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__32__a), 
                      VL_EXTENDS_QI(64,32, __Vfunc_MultRC__32__b));
    __Vfunc_MultRC__32__Vfuncout = (IData)((vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                            >> 0x10U));
    tb_top__DOT__u_dut__DOT____VlemCall_17__MultRC 
        = __Vfunc_MultRC__32__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__SUMX = (vlSelfRef.tb_top__DOT__u_dut__DOT__ACCX 
                                               + tb_top__DOT__u_dut__DOT____VlemCall_17__MultRC);
    __Vfunc_MultRC__33__b = (vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYA 
                             - vlSelfRef.tb_top__DOT__u_dut__DOT__SUBYB);
    __Vfunc_MultRC__33__a = vlSelfRef.tb_top__DOT__u_dut__DOT__MULYA;
    vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_MultRC__33__a), 
                      VL_EXTENDS_QI(64,32, __Vfunc_MultRC__33__b));
    __Vfunc_MultRC__33__Vfuncout = (IData)((vlSymsp->TOP__REF_VDP2_PKG.MultRC__Vstatic__temp 
                                            >> 0x10U));
    tb_top__DOT__u_dut__DOT____VlemCall_18__MultRC 
        = __Vfunc_MultRC__33__Vfuncout;
    vlSelfRef.tb_top__DOT__u_dut__DOT__SUMY = (vlSelfRef.tb_top__DOT__u_dut__DOT__ACCY 
                                               + tb_top__DOT__u_dut__DOT____VlemCall_18__MultRC);
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__dX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__dX[__VdlyDim0__tb_top__DOT__u_ref__DOT__dX__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__dX__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__dY__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__dY[__VdlyDim0__tb_top__DOT__u_ref__DOT__dY__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__dY__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xp__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xp[__VdlyDim0__tb_top__DOT__u_ref__DOT__Xp__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Xp__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yp__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yp[__VdlyDim0__tb_top__DOT__u_ref__DOT__Yp__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Yp__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xst[__VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xst__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xst[__VdlyDim0__tb_top__DOT__u_ref__DOT__Xst__v1] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Xst__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yst[__VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Yst__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yst[__VdlyDim0__tb_top__DOT__u_ref__DOT__Yst__v1] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Yst__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[__VdlyDim0__tb_top__DOT__u_ref__DOT__Xsp__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Xsp__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Ysp__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[__VdlyDim0__tb_top__DOT__u_ref__DOT__Ysp__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__Ysp__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__Xsp__v3) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__dX[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__dX[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__dY[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__dY[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xp[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xp[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yp[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yp[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xst[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xst[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yst[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Yst[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Xsp[1U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[0U] = 0U;
        vlSelfRef.tb_top__DOT__u_ref__DOT__Ysp[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAst__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__KAst[__VdlyDim0__tb_top__DOT__u_ref__DOT__KAst__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__KAst__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__KAy[__VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v0] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__KAy__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAy__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__KAy[__VdlyDim0__tb_top__DOT__u_ref__DOT__KAy__v1] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[__VdlyDim0__tb_top__DOT__u_ref__DOT__KAx__v0] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v1) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__KAx__v2) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__KAx__v2;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RxCTTP__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTTP[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RxCTTP[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RxCTTP__v1;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[0U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[1U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[2U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v2;
        vlSelfRef.tb_top__DOT__u_ref__DOT__R0RP_PIPE[3U] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__u_ref__DOT__R0RP_PIPE__v3;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__u_ref__DOT__RxX__v0) {
        vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RPxLCSD[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RPxLCSD__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RxX[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RxX[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RxX__v1;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RxY[0U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v0;
        vlSelfRef.tb_top__DOT__u_ref__DOT__RxY[1U] 
            = __VdlyVal__tb_top__DOT__u_ref__DOT__RxY__v1;
    }
    vlSelfRef.tb_top__DOT__u_dut__DOT__A = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__A;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VA_PIPE = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__VA_PIPE;
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[0U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAy[0U] 
                                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[0U]));
    vlSelfRef.tb_top__DOT__u_ref__DOT__RxKA[1U] = (0x00000007ffffffffULL 
                                                   & (vlSelfRef.tb_top__DOT__u_ref__DOT__KAy[1U] 
                                                      + vlSelfRef.tb_top__DOT__u_ref__DOT__KAx[1U]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.CE_R) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__RBG_CALC));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber5 
        = ((8U & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                  >> 1U)) | (7U & vlSelfRef.tb_top__DOT__u_dut__DOT__A));
    vlSelfRef.tb_top__DOT__u_dut__DOT__IO_PAL_ADDR 
        = (0x000007ffU & ((IData)(vlSelfRef.AD_N) ? 
                          ((0x00000700U & vlSelfRef.tb_top__DOT__u_dut__DOT__A) 
                           | (0x000000ffU & (IData)(vlSelfRef.DI)))
                           : vlSelfRef.tb_top__DOT__u_dut__DOT__A));
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.CS_N) 
                                                       | ((IData)(vlSelfRef.AD_N) 
                                                          | (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                                             >> 0x00000013U)))));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x00080000U 
                                                     == 
                                                     (0x000c0000U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__A)));
    vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL = ((
                                                   (~ (IData)(vlSelfRef.CS_N)) 
                                                   & (~ (IData)(vlSelfRef.AD_N))) 
                                                  & (0x000c0000U 
                                                     == 
                                                     (0x000e0000U 
                                                      & vlSelfRef.tb_top__DOT__u_dut__DOT__A)));
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_THD_LATCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_SEC_LATCH;
    vlSelfRef.tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH 
        = vlSelfRef.__Vdly__tb_top__DOT__u_ref__DOT__unnamedblk23__DOT__DC_FST_LATCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ = (
                                                   (~ (IData)(vlSelfRef.REQ_N)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_SEL));
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_THD_LATCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_SEC_LATCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH 
        = vlSelfRef.__Vdly__tb_top__DOT__u_dut__DOT__unnamedblk35__DOT__DC_FST_LATCH;
    vlSelfRef.tb_top__DOT__u_dut__DOT__FIFO_WRREQ = 
        ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__VRAM_REQ) 
         & ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
            & ((~ (IData)(vlSelfRef.DTEN_N)) & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__BURST))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_51 = ((~ (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__WE_N)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49));
    vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_WE = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__PAL_SEL) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51));
    vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR = ((IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__REG_SEL) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b1____pinNumber4 
        = (((0x0fU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (0x0eU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_b0____pinNumber4 
        = (((0x0dU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (0x0cU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a1____pinNumber4 
        = (((0x0bU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (0x0aU == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__cy_a0____pinNumber4 
        = (((9U == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
            | (8U == (0x000000ffU & vlSelfRef.tb_top__DOT__u_dut__DOT__A))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__rmp____pinNumber4 
        = (((5U == (0x0000001fU & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                   >> 3U))) | (6U == 
                                               (0x0000001fU 
                                                & (vlSelfRef.tb_top__DOT__u_dut__DOT__A 
                                                   >> 3U)))) 
           & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR));
    vlSelfRef.tb_top__DOT__u_dut__DOT____Vcellinp__nmp____pinNumber4 
        = (IData)(((0x00000020U == (0x000000f8U & vlSelfRef.tb_top__DOT__u_dut__DOT__A)) 
                   & (IData)(vlSelfRef.tb_top__DOT__u_dut__DOT__CY_WR)));
}
