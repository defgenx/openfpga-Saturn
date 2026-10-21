// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_REF_SCSP_PKG___eval_static__TOP__REF_SCSP_PKG(Vtb_top_REF_SCSP_PKG* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_REF_SCSP_PKG___eval_static__TOP__REF_SCSP_PKG\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ EffRateCalc__Vstatic__RES;
    EffRateCalc__Vstatic__RES = 0;
    CData/*5:0*/ EffRateCalc__Vstatic__TEMP;
    EffRateCalc__Vstatic__TEMP = 0;
    CData/*3:0*/ EffRateCalc__Vstatic__KEY_EG_SCALE;
    EffRateCalc__Vstatic__KEY_EG_SCALE = 0;
    CData/*5:0*/ EffRateCalc__Vstatic__TEMP2;
    EffRateCalc__Vstatic__TEMP2 = 0;
    CData/*4:0*/ EffRateBit__Vstatic__TEMP;
    EffRateBit__Vstatic__TEMP = 0;
    SData/*10:0*/ LevelAddTL__Vstatic__SUM;
    LevelAddTL__Vstatic__SUM = 0;
    IData/*17:0*/ MVolCalc__Vstatic__TEMP1;
    MVolCalc__Vstatic__TEMP1 = 0;
    IData/*17:0*/ MVolCalc__Vstatic__TEMP2;
    MVolCalc__Vstatic__TEMP2 = 0;
    IData/*17:0*/ MVolCalc__Vstatic__TEMP3;
    MVolCalc__Vstatic__TEMP3 = 0;
    IData/*25:0*/ DSPShifter__Vstatic__TEMP;
    DSPShifter__Vstatic__TEMP = 0;
    IData/*23:0*/ DSPShifter__Vstatic__RES;
    DSPShifter__Vstatic__RES = 0;
    // Body
    vlSelfRef.Interpolate__Vstatic__PHASE_NEG = 0U;
    vlSelfRef.Interpolate__Vstatic__TEMP0 = 0U;
    vlSelfRef.Interpolate__Vstatic__TEMP1 = 0U;
    vlSelfRef.Interpolate__Vstatic__SUM = 0U;
    vlSelfRef.SoundSel__Vstatic__SD = 0U;
    vlSelfRef.MDCalc__Vstatic__TEMP = 0U;
    vlSelfRef.MDCalc__Vstatic__MD = 0U;
    vlSelfRef.LFOFreqDiv__Vstatic__TEMP = 0U;
    vlSelfRef.LFOFreqDiv__Vstatic__TEMP2 = 0U;
    vlSelfRef.ALFOCalc__Vstatic__WAVE = 0U;
    vlSelfRef.ALFOCalc__Vstatic__RET = 0U;
    vlSelfRef.PLFOCalc__Vstatic__WAVE = 0U;
    vlSelfRef.PLFOCalc__Vstatic__RET = 0U;
    vlSelfRef.PhaseCalc__Vstatic__P = 0U;
    vlSelfRef.PhaseCalc__Vstatic__S = 0U;
    vlSelfRef.PhaseCalc__Vstatic__F = 0U;
    vlSelfRef.PhaseCalc__Vstatic__TEMP = 0U;
    vlSelfRef.PhaseCalc__Vstatic__FM = 0U;
    vlSelfRef.WaveMask__Vstatic__RET = 0U;
    EffRateCalc__Vstatic__RES = 0U;
    EffRateCalc__Vstatic__TEMP = 0U;
    EffRateCalc__Vstatic__KEY_EG_SCALE = 0U;
    EffRateCalc__Vstatic__TEMP2 = 0U;
    EffRateBit__Vstatic__TEMP = 0U;
    vlSelfRef.LevelAddALFO__Vstatic__SUM = 0U;
    LevelAddTL__Vstatic__SUM = 0U;
    vlSelfRef.VolCalc__Vstatic__MULT = 0U;
    vlSelfRef.VolCalc__Vstatic__RES = 0U;
    vlSelfRef.PanLCalc__Vstatic__TEMP = 0U;
    vlSelfRef.PanRCalc__Vstatic__TEMP = 0U;
    MVolCalc__Vstatic__TEMP1 = 0U;
    MVolCalc__Vstatic__TEMP2 = 0U;
    MVolCalc__Vstatic__TEMP3 = 0U;
    vlSelfRef.DSPMult__Vstatic__M = 0ULL;
    DSPShifter__Vstatic__TEMP = 0U;
    DSPShifter__Vstatic__RES = 0U;
    vlSelfRef.DSPItoF__Vstatic__SIGN = 0U;
    vlSelfRef.DSPItoF__Vstatic__EXP = 0U;
    vlSelfRef.DSPItoF__Vstatic__MANT = 0U;
    vlSelfRef.DSPItoF__Vstatic__T0 = 0U;
    vlSelfRef.DSPItoF__Vstatic__T1 = 0U;
    vlSelfRef.DSPItoF__Vstatic__T2 = 0U;
    vlSelfRef.DSPItoF__Vstatic__T3 = 0U;
    vlSelfRef.DSPItoF__Vstatic__E1 = 0U;
    vlSelfRef.DSPItoF__Vstatic__E2 = 0U;
    vlSelfRef.DSPItoF__Vstatic__E3 = 0U;
    vlSelfRef.DSPFtoI__Vstatic__SIGN = 0U;
    vlSelfRef.DSPFtoI__Vstatic__EXP = 0U;
    vlSelfRef.DSPFtoI__Vstatic__MANT = 0U;
    vlSelfRef.DSPFtoI__Vstatic__RES = 0U;
}
