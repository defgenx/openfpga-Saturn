// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_SCSP_PKG_H_
#define VERILATED_VTB_TOP_SCSP_PKG_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_SCSP_PKG final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ Interpolate__Vstatic__PHASE_NEG;
    CData/*3:0*/ LFOFreqDiv__Vstatic__TEMP;
    CData/*7:0*/ ALFOCalc__Vstatic__WAVE;
    CData/*7:0*/ ALFOCalc__Vstatic__RET;
    CData/*7:0*/ PLFOCalc__Vstatic__WAVE;
    CData/*7:0*/ PLFOCalc__Vstatic__RET;
    CData/*3:0*/ PhaseCalc__Vstatic__S;
    CData/*0:0*/ DSPItoF__Vstatic__SIGN;
    CData/*3:0*/ DSPItoF__Vstatic__EXP;
    CData/*3:0*/ DSPItoF__Vstatic__E1;
    CData/*3:0*/ DSPItoF__Vstatic__E2;
    CData/*3:0*/ DSPItoF__Vstatic__E3;
    CData/*0:0*/ DSPFtoI__Vstatic__SIGN;
    CData/*3:0*/ DSPFtoI__Vstatic__EXP;
    SData/*15:0*/ SoundSel__Vstatic__SD;
    SData/*10:0*/ LFOFreqDiv__Vstatic__TEMP2;
    SData/*10:0*/ PhaseCalc__Vstatic__F;
    SData/*14:0*/ PhaseCalc__Vstatic__TEMP;
    SData/*11:0*/ PhaseCalc__Vstatic__FM;
    SData/*10:0*/ LevelAddALFO__Vstatic__SUM;
    SData/*15:0*/ VolCalc__Vstatic__RES;
    SData/*15:0*/ PanLCalc__Vstatic__TEMP;
    SData/*15:0*/ PanRCalc__Vstatic__TEMP;
    SData/*10:0*/ DSPItoF__Vstatic__MANT;
    SData/*10:0*/ DSPFtoI__Vstatic__MANT;
    IData/*21:0*/ Interpolate__Vstatic__TEMP0;
    IData/*21:0*/ Interpolate__Vstatic__TEMP1;
    IData/*21:0*/ Interpolate__Vstatic__SUM;
    IData/*16:0*/ MDCalc__Vstatic__TEMP;
    IData/*22:0*/ MDCalc__Vstatic__MD;
    IData/*26:0*/ PhaseCalc__Vstatic__P;
    IData/*16:0*/ WaveMask__Vstatic__RET;
    IData/*22:0*/ VolCalc__Vstatic__MULT;
    IData/*22:0*/ DSPItoF__Vstatic__T0;
    IData/*22:0*/ DSPItoF__Vstatic__T1;
    IData/*22:0*/ DSPItoF__Vstatic__T2;
    IData/*22:0*/ DSPItoF__Vstatic__T3;
    IData/*23:0*/ DSPFtoI__Vstatic__RES;
    QData/*37:0*/ DSPMult__Vstatic__M;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_SCSP_PKG();
    ~Vtb_top_SCSP_PKG();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top_SCSP_PKG);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
