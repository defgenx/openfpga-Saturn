// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiff_top.h for the primary calling header

#include "Vdiff_top__pch.h"

void Vdiff_top___024root___eval_sample(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_sample\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdiff_top___024root___eval_triggers_vec__ico(Vdiff_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vdiff_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vdiff_top___024root___eval_body__ico(Vdiff_top___024root* vlSelf);

bool Vdiff_top___024root___eval_ico(Vdiff_top___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_ico\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    Vdiff_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdiff_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vdiff_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vdiff_top___024root___eval_body__ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdiff_top___024root___eval_triggers_vec__act(Vdiff_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vdiff_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vdiff_top___024root___eval_act(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_act\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdiff_top___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdiff_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdiff_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vdiff_top___024root___eval_inact(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_inact\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdiff_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vdiff_top___024root___eval_body__nba(Vdiff_top___024root* vlSelf);
void Vdiff_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vdiff_top___024root___eval_nba(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_nba\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdiff_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdiff_top___024root___eval_body__nba(vlSelf);
        Vdiff_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vdiff_top___024root___eval_obs(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_obs\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdiff_top___024root___eval_react(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_react\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vdiff_top___024root___eval_postponed(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_postponed\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdiff_top___024root___eval_triggers_vec__ico(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_triggers_vec__ico\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.FB_RDY_n) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FB_RDY_n__0)) 
                                                         << 0x0000000cU) 
                                                        | ((((((IData)(vlSelfRef.FB1_Q_n) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FB1_Q_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.FB0_Q_n) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FB0_Q_n__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.VRAM_RDY_n) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__VRAM_RDY_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.VRAM_Q_n) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__VRAM_Q_n__0)))) 
                                                           << 8U)) 
                                                       | (((((((IData)(vlSelfRef.FB_RDY_r) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FB_RDY_r__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.FB1_Q_r) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FB1_Q_r__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.FB0_Q_r) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FB0_Q_r__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.VRAM_RDY_r) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__VRAM_RDY_r__0)))) 
                                                           << 4U) 
                                                          | (((((IData)(vlSelfRef.VRAM_Q_r) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__VRAM_Q_r__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.REQ_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__REQ_N__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.DTEN_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DTEN_N__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.AD_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__AD_N__0)))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.CS_N) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CS_N__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.DI) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DI__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.VOUTI) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__VOUTI__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.VTIM_N) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__VTIM_N__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.HTIM_N) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__HTIM_N__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.DCE_F) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DCE_F__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.DCE_R) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DCE_R__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.DBG_EXT) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__DBG_EXT__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.BLUR_MESH) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__BLUR_MESH__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.FAST) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__FAST__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.RES_N) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RES_N__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.EN) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__EN__0)))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.CE_F) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE_F__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.CE_R) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CE_R__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.RST_N) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.CLK) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0 = vlSelfRef.RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__CE_R__0 = vlSelfRef.CE_R;
    vlSelfRef.__Vtrigprevexpr___TOP__CE_F__0 = vlSelfRef.CE_F;
    vlSelfRef.__Vtrigprevexpr___TOP__EN__0 = vlSelfRef.EN;
    vlSelfRef.__Vtrigprevexpr___TOP__RES_N__0 = vlSelfRef.RES_N;
    vlSelfRef.__Vtrigprevexpr___TOP__FAST__0 = vlSelfRef.FAST;
    vlSelfRef.__Vtrigprevexpr___TOP__BLUR_MESH__0 = vlSelfRef.BLUR_MESH;
    vlSelfRef.__Vtrigprevexpr___TOP__DBG_EXT__0 = vlSelfRef.DBG_EXT;
    vlSelfRef.__Vtrigprevexpr___TOP__DCE_R__0 = vlSelfRef.DCE_R;
    vlSelfRef.__Vtrigprevexpr___TOP__DCE_F__0 = vlSelfRef.DCE_F;
    vlSelfRef.__Vtrigprevexpr___TOP__HTIM_N__0 = vlSelfRef.HTIM_N;
    vlSelfRef.__Vtrigprevexpr___TOP__VTIM_N__0 = vlSelfRef.VTIM_N;
    vlSelfRef.__Vtrigprevexpr___TOP__VOUTI__0 = vlSelfRef.VOUTI;
    vlSelfRef.__Vtrigprevexpr___TOP__DI__0 = vlSelfRef.DI;
    vlSelfRef.__Vtrigprevexpr___TOP__CS_N__0 = vlSelfRef.CS_N;
    vlSelfRef.__Vtrigprevexpr___TOP__AD_N__0 = vlSelfRef.AD_N;
    vlSelfRef.__Vtrigprevexpr___TOP__DTEN_N__0 = vlSelfRef.DTEN_N;
    vlSelfRef.__Vtrigprevexpr___TOP__REQ_N__0 = vlSelfRef.REQ_N;
    vlSelfRef.__Vtrigprevexpr___TOP__VRAM_Q_r__0 = vlSelfRef.VRAM_Q_r;
    vlSelfRef.__Vtrigprevexpr___TOP__VRAM_RDY_r__0 
        = vlSelfRef.VRAM_RDY_r;
    vlSelfRef.__Vtrigprevexpr___TOP__FB0_Q_r__0 = vlSelfRef.FB0_Q_r;
    vlSelfRef.__Vtrigprevexpr___TOP__FB1_Q_r__0 = vlSelfRef.FB1_Q_r;
    vlSelfRef.__Vtrigprevexpr___TOP__FB_RDY_r__0 = vlSelfRef.FB_RDY_r;
    vlSelfRef.__Vtrigprevexpr___TOP__VRAM_Q_n__0 = vlSelfRef.VRAM_Q_n;
    vlSelfRef.__Vtrigprevexpr___TOP__VRAM_RDY_n__0 
        = vlSelfRef.VRAM_RDY_n;
    vlSelfRef.__Vtrigprevexpr___TOP__FB0_Q_n__0 = vlSelfRef.FB0_Q_n;
    vlSelfRef.__Vtrigprevexpr___TOP__FB1_Q_n__0 = vlSelfRef.FB1_Q_n;
    vlSelfRef.__Vtrigprevexpr___TOP__FB_RDY_n__0 = vlSelfRef.FB_RDY_n;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000001000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000002000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000004000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000008000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000010000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000020000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000040000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000080000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000100000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000200000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000400000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000800000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000001000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000002000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000004000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000008000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000010000000ULL 
                                         | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool Vdiff_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*2:0*/, 64> Vdiff_top__ConstPool__TABLE_h2c0ba4c2_0;

void Vdiff_top___024root___ico_sequent__TOP__0(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___ico_sequent__TOP__0\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*17:0*/ __Vfunc_GetPattern__6__Vfuncout;
    __Vfunc_GetPattern__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetPattern__6__DATA;
    __Vfunc_GetPattern__6__DATA = 0;
    CData/*2:0*/ __Vfunc_GetPattern__6__CM;
    __Vfunc_GetPattern__6__CM = 0;
    IData/*17:0*/ __Vfunc_GetPattern__45__Vfuncout;
    __Vfunc_GetPattern__45__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetPattern__45__DATA;
    __Vfunc_GetPattern__45__DATA = 0;
    CData/*2:0*/ __Vfunc_GetPattern__45__CM;
    __Vfunc_GetPattern__45__CM = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    IData/*16:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    SData/*11:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    IData/*16:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    // Body
    vlSelfRef.diff_top__DOT__u_n__DOT__GL_CH = (3U 
                                                & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSEQ) 
                                                   - (IData)(3U)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GL_WE = (7U 
                                                <= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSEQ));
    vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ADDR = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ADDR_H) 
                                                   << 4U);
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_ADDR = (0x0003fff0U 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                      << 2U));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_ADDR = (0x0003fffcU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[0U] 
                                                      >> 0x0000000eU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_A = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[0U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_C = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[2U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_B = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[1U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_D = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[3U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX = 
        (1U & ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                >> 0x00000014U) ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)));
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY = 
        (1U & ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                >> 0x00000015U) ^ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                   >> 1U)));
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__PEN_ABSORB = 
        (((3U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
          | (0x1eU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) 
         & ((0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_DELAY)) 
            & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PENALTY_CNT) 
               >= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_DELAY))));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WAIT 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RPEND) 
              | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))));
    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_GHCOLOR_STEP 
        = (((QData)((IData)(((0x00040000U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__NS_DIR) 
                                             << 0x00000010U)) 
                             | ((vlSelfRef.diff_top__DOT__u_n__DOT__Q_B 
                                 << 1U) | (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__NS_DIR) 
                                                 >> 1U)))))) 
            << 0x00000023U) | (((QData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__Q_G)) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  ((0x00020000U 
                                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__NS_DIR) 
                                                                       << 0x00000011U)) 
                                                                   | vlSelfRef.diff_top__DOT__u_n__DOT__Q_R)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__WA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__OPC;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WRADDR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CMD_POS;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CMD_DAT;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__FULL 
        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__AMOUNT) 
                 >> 1U));
    vlSelfRef.diff_top__DOT__IRQ_N_r = vlSelfRef.diff_top__DOT__u_r__DOT__IRQ_N;
    vlSelfRef.diff_top__DOT__VOUTO_r = vlSelfRef.diff_top__DOT__u_r__DOT__VOUTO;
    vlSelfRef.diff_top__DOT__VRAM_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_A;
    vlSelfRef.diff_top__DOT__VRAM_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_D;
    vlSelfRef.diff_top__DOT__VRAM_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE;
    vlSelfRef.diff_top__DOT__VRAM_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD;
    vlSelfRef.diff_top__DOT__VRAM_BLEN_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN;
    vlSelfRef.diff_top__DOT__IRQ_N_n = vlSelfRef.diff_top__DOT__u_n__DOT__IRQ_N;
    vlSelfRef.diff_top__DOT__VOUTO_n = vlSelfRef.diff_top__DOT__u_n__DOT__VOUTO;
    vlSelfRef.diff_top__DOT__VRAM_A_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_A;
    vlSelfRef.diff_top__DOT__VRAM_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_D;
    vlSelfRef.diff_top__DOT__VRAM_WE_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_WE;
    vlSelfRef.diff_top__DOT__VRAM_RD_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RD;
    vlSelfRef.diff_top__DOT__VRAM_BLEN_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_BLEN;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RST 
        = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_READ)));
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WREN 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__FULL 
        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__AMOUNT) 
                 >> 1U));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RST 
        = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WRADDR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WREN 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__QUOT 
        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__D);
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__QUOT 
        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__D);
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__QUOT 
        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__D);
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_R = ((
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                      - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                         - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_G = ((
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 5U)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 5U)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 5U) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 5U)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                          >> 5U) 
                                                         - 
                                                         ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                          >> 5U)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_B = ((
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 0x0000000aU)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 0x0000000aU)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 0x0000000aU) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                          >> 0x0000000aU) 
                                                         - 
                                                         ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.diff_top__DOT__TAINT = ((0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                                      & ((0x0aU != (IData)(vlSelfRef.diff_top__DOT__st_d)) 
                                         & (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE))));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_MODE3 = (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR)));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_MODE3 = (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)));
    vlSelfRef.diff_top__DOT__u_n__DOT__FB0_RD = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_n__DOT__FB1_RD = ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL)) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB0_RD = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB1_RD = ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL)) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND) 
              | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND) 
                 | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS))));
    vlSelfRef.diff_top__DOT__u_r__DOT__COL_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR = 0U;
    if (vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_n__DOT__FB_D;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_n__DOT__EWDR;
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_n__DOT__EWDR;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_n__DOT__FB_D;
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_WAIT 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_WPEND) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_RPEND) 
              | (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_ST))));
    if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_r__DOT__FB_D;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_r__DOT__EWDR;
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_r__DOT__EWDR;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_r__DOT__FB_D;
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START = 
        ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE)) 
         & ((0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
            | ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
               | (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__RDY_N = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY) 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WRDY) 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RRDY) 
                                                          & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RRDY) 
                                                             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__READY)))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__RDY_N = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_WRDY) 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_WRDY) 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_RRDY) 
                                                          & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_RRDY) 
                                                             & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__READY)))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRY = 
        (1U & ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                >> 0x00000015U) ^ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR) 
                                   >> 1U)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_ON = (1U 
                                                 & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                    >> 0x00000012U));
    vlSelfRef.diff_top__DOT__u_n__DOT__LOC_X13 = ((0x00001000U 
                                                   & (vlSelfRef.diff_top__DOT__u_n__DOT__LOC_COORD 
                                                      >> 0x0000000aU)) 
                                                  | (0x00000fffU 
                                                     & (vlSelfRef.diff_top__DOT__u_n__DOT__LOC_COORD 
                                                        >> 0x0000000cU)));
    vlSelfRef.diff_top__DOT__u_n__DOT__LOC_Y13 = ((0x00001000U 
                                                   & (vlSelfRef.diff_top__DOT__u_n__DOT__LOC_COORD 
                                                      << 2U)) 
                                                  | (0x00000fffU 
                                                     & vlSelfRef.diff_top__DOT__u_n__DOT__LOC_COORD));
    vlSelfRef.diff_top__DOT__u_n__DOT__GW_SD = (8U 
                                                == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST));
    if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                               >> 0x00000010U)))) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1 = 0x0003ffffU;
    } else {
        vlSelfRef.__Vfunc_SprAddr__47__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                   >> 0x00000013U));
        vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA = (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[5U] 
                                                  >> 0x00000010U);
        vlSelfRef.__Vfunc_SprAddr__47__OFFSY = vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY;
        vlSymsp->TOP__REF_VDP1_PKG.SprAddr__Vstatic__ADDR 
            = (0x0003ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                                   ? ((0x0003fff8U 
                                       & ((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                          << 2U)) + 
                                      ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                       << 3U)) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                                                   ? 
                                                  ((0x0003fff8U 
                                                    & ((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                                       << 2U)) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                    << 3U))
                                                   : 
                                                  (((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                                    << 2U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                    << 2U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                                   ? (((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                 << 2U))
                                   : (((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                 << 1U)))));
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_0__SprAddr 
            = vlSymsp->TOP__REF_VDP1_PKG.SprAddr__Vstatic__ADDR;
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1 
            = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_0__SprAddr;
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1;
    vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_BUSY 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_SEL) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_RPEND) 
              | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_WPEND) 
                 | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_ACCESS))));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__EMPTY 
        = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__AMOUNT))));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__EMPTY 
        = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__AMOUNT))));
    vlSelfRef.diff_top__DOT__u_n__DOT__LD_D = (0x00001fffU 
                                               & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_DAT));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__BUSY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RUN;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRX = 
        (1U & ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                >> 0x00000014U) ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR)));
    vlSelfRef.diff_top__DOT__u_n__DOT__CLIP_USR = (IData)(
                                                          (0x04000000U 
                                                           == 
                                                           (0x06000000U 
                                                            & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])));
    vlSelfRef.diff_top__DOT__u_n__DOT__MODR = (0x00001000U 
                                               | ((0x00000100U 
                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PTMR) 
                                                      << 7U)) 
                                                  | ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBCR) 
                                                         << 3U)) 
                                                     | (0x0000000fU 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__MODR = (0x00001000U 
                                               | ((0x00000100U 
                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PTMR) 
                                                      << 7U)) 
                                                  | ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                                                         << 3U)) 
                                                     | (0x0000000fU 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_X_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_Y_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_D_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_X = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_Y = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_X_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_Y_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_D_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_X = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_Y = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                            if ((4U > (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR) 
                                              >> 0x0dU)))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_READ_STEP = 1U;
                                }
                            }
                            if ((4U <= (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__COL_DRAW_STEP = 1U;
                            } else if ((0x00002000U 
                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR;
                                vlSelfRef.diff_top__DOT__u_r__DOT__COL_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__COL_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
            if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if ((4U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__AA;
                        }
                        if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR_INC)));
                            if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED), 
                                            (0x00003fffU 
                                             & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR_CMP)))))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X_INC)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y_INC)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_D_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR_ADJ)));
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_X 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_X_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_X 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED;
                                }
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_Y 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_Y_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_Y 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED;
                                }
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_D_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_X 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_Y 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y;
                            }
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_INC)));
                            if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED), 
                                            (0x00003fffU 
                                             & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_CMP)))))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X_INC)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y_INC)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_D_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_ADJ)));
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_X 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_X_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_X 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED;
                                }
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_Y 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_Y_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_Y 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED;
                                }
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_D_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_X 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_Y 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__AA;
                    } else {
                        if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 0U;
                        } else {
                            if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR;
                                vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR) 
                                          >> 0x0dU)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) 
                             & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_INC)));
                            if (VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_ADJ)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                        if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 0U;
                        } else {
                            if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR;
                                vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR) 
                                          >> 0x0dU)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) 
                             & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_INC)));
                            if (VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_ADJ)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 1U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
            if ((4U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                        if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 0U;
                        } else {
                            if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR;
                                vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED;
                                }
                            }
                            if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR) 
                                          >> 0x0dU)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) 
                             & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_INC)));
                            if (VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_ADJ)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__TX_RM1 = (0x00003fffU 
                                                 & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ROW_WIDTH) 
                                                    - (IData)(1U)));
    vlSelfRef.diff_top__DOT__u_n__DOT__LD_Y = (1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_POS));
    vlSelfRef.diff_top__DOT__u_n__DOT__TX_R2 = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ROW_WIDTH) 
                                                << 1U);
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CH 
        = vlSelfRef.diff_top__DOT__u_n__DOT__COL_HEIGHT;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RADDR;
    __VdfgRegularize_hebeb780c_0_7 = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
                                      | (8U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LDX 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_LDIRX;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LDY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_LDIRY;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RDX 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_RDIRX;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RDY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_RDIRY;
    __VdfgRegularize_hebeb780c_0_8 = ((1U == (3U & 
                                              (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                               >> 0x00000014U))) 
                                      | (4U == (7U 
                                                & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                   >> 0x00000013U))));
    __VdfgRegularize_hebeb780c_0_10 = ((0x0001fe00U 
                                        & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__OUT_Y) 
                                           << 9U)) 
                                       | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__OUT_X));
    __VdfgRegularize_hebeb780c_0_17 = ((0x0001fe00U 
                                        & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y) 
                                           << 9U)) 
                                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__RA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__OPC;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S = 
        (0x00000fffU & ((0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))
                         ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ROW_WIDTH)
                         : ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COL_HEIGHT))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GIDX = Vdiff_top__ConstPool__TABLE_h2c0ba4c2_0
        [(((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR) 
           << 4U) | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSEQ))];
    vlSelfRef.diff_top__DOT__u_n__DOT__TY_H1 = (0x00003fffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COL_HEIGHT)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_C = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[2U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_D = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[3U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_A = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[0U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_B = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[1U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL_L = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL
         [vlSelfRef.diff_top__DOT__u_n__DOT__POLY_S]);
    vlSelfRef.diff_top__DOT__u_n__DOT__POLY_S1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__POLY_S)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_RA = (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                    >> 2U));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LH 
        = vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_HEIGHT;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RH 
        = vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_HEIGHT;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT_RA = (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                    >> 2U));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LSX 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_LSX;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LSY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_LSY;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RSX 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_RSX;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RSY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__POLY_RSY;
    vlSelfRef.diff_top__DOT__u_n__DOT__TX_HSS = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ROW_WIDTH) 
                                                  < (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH)) 
                                                 & ((~ 
                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                      >> 0x00000012U)) 
                                                    & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                       >> 0x0000001cU)));
    vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC = (1U 
                                                   & (~ 
                                                      ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                        >> 0x00000012U) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                              >> 0x00000010U))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SIDE 
        = (3U <= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__OPC));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__WA;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WRADDR;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__data 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__DATA;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_FULL 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__FULL;
    vlSelfRef.IRQ_N_r = vlSelfRef.diff_top__DOT__IRQ_N_r;
    vlSelfRef.VOUTO_r = vlSelfRef.diff_top__DOT__VOUTO_r;
    vlSelfRef.VRAM_A_r = vlSelfRef.diff_top__DOT__VRAM_A_r;
    vlSelfRef.VRAM_D_r = vlSelfRef.diff_top__DOT__VRAM_D_r;
    vlSelfRef.VRAM_WE_r = vlSelfRef.diff_top__DOT__VRAM_WE_r;
    vlSelfRef.VRAM_RD_r = vlSelfRef.diff_top__DOT__VRAM_RD_r;
    vlSelfRef.VRAM_BLEN_r = vlSelfRef.diff_top__DOT__VRAM_BLEN_r;
    vlSelfRef.IRQ_N_n = vlSelfRef.diff_top__DOT__IRQ_N_n;
    vlSelfRef.VOUTO_n = vlSelfRef.diff_top__DOT__VOUTO_n;
    vlSelfRef.VRAM_A_n = vlSelfRef.diff_top__DOT__VRAM_A_n;
    vlSelfRef.VRAM_D_n = vlSelfRef.diff_top__DOT__VRAM_D_n;
    vlSelfRef.VRAM_WE_n = vlSelfRef.diff_top__DOT__VRAM_WE_n;
    vlSelfRef.VRAM_RD_n = vlSelfRef.diff_top__DOT__VRAM_RD_n;
    vlSelfRef.VRAM_BLEN_n = vlSelfRef.diff_top__DOT__VRAM_BLEN_n;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RST 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RST;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WREN;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_FULL 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__FULL;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RST 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RST;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WRADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__data 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__DATA;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WREN;
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_B_Q = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__QUOT;
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_G_Q = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__QUOT;
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_R_Q = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__QUOT;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_R) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_G) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_B) 
                          << 0x0000000cU));
    vlSelfRef.TAINT = vlSelfRef.diff_top__DOT__TAINT;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__SUM 
        = (0x1fffffffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__T)
                           ? (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__D 
                              - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVSR) 
                                 << 0x00000011U)) : 
                          (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__D 
                           + ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVSR) 
                              << 0x00000011U))));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__SUM 
        = (0x1fffffffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__T)
                           ? (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__D 
                              - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVSR) 
                                 << 0x00000011U)) : 
                          (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__D 
                           + ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVSR) 
                              << 0x00000011U))));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__SUM 
        = (0x1fffffffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__T)
                           ? (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__D 
                              - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVSR) 
                                 << 0x00000011U)) : 
                          (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__D 
                           + ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVSR) 
                              << 0x00000011U))));
    vlSelfRef.diff_top__DOT__FB_MODE3_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB_MODE3;
    vlSelfRef.diff_top__DOT__FB_MODE3_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB_MODE3;
    vlSelfRef.diff_top__DOT__FB0_RD_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_RD;
    vlSelfRef.diff_top__DOT__FB1_RD_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_RD;
    vlSelfRef.diff_top__DOT__FB0_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_RD;
    vlSelfRef.diff_top__DOT__FB1_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_RD;
    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT = 
        ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY) 
         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST)));
    vlSelfRef.diff_top__DOT__FB0_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D;
    vlSelfRef.diff_top__DOT__FB1_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_D;
    vlSelfRef.diff_top__DOT__u_n__DOT__PEN_RAS = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBD_RAS) 
                                                  & ((5U 
                                                      == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBD_ST)) 
                                                     & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_WAIT)) 
                                                        & (3U 
                                                           <= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PENALTY_CNT)))));
    vlSelfRef.diff_top__DOT__FB0_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D;
    vlSelfRef.diff_top__DOT__FB1_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__START 
        = vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__START 
        = vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__START 
        = vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__RDY_N_r = vlSelfRef.diff_top__DOT__u_r__DOT__RDY_N;
    vlSelfRef.diff_top__DOT__RDY_N_n = vlSelfRef.diff_top__DOT__u_n__DOT__RDY_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__TY_F = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRY) 
                                               & (1U 
                                                  != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_HEIGHT)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GP2_ANY = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GP2) 
                                                  | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_ON) 
                                                     & (9U 
                                                        == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))));
    vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_WAIT = 
        ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_BUSY) 
         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBD_ST)));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_EMPTY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__EMPTY;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_EMPTY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__EMPTY;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_BUSY = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__BUSY;
    vlSelfRef.diff_top__DOT__u_n__DOT__TX_F = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRX) 
                                               & (1U 
                                                  != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH)));
    vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP_X1 
        = (0x00001fffU & ((((0x00001800U & ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                   >> 0x0000002bU))))) 
                                            << 0x0000000bU)) 
                            | (0x000007ffU & (IData)(
                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                      >> 0x00000021U)))) 
                           & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLIP_USR)))) 
                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LOC_X13)));
    vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP_Y1 
        = (0x00001fffU & ((((0x00001800U & ((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                   >> 0x00000020U))))) 
                                            << 0x0000000bU)) 
                            | (0x000007ffU & (IData)(
                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                      >> 0x00000016U)))) 
                           & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLIP_USR)))) 
                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LOC_Y13)));
    vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP_X2 
        = (0x00001fffU & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLIP_USR)
                            ? ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                      >> 0x00000015U))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(
                                                        (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                         >> 0x0000000bU))))
                            : ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP 
                                                                      >> 0x00000015U))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(
                                                        (vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP 
                                                         >> 0x0000000bU))))) 
                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LOC_X13)));
    vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP_Y2 
        = (0x00001fffU & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLIP_USR)
                            ? ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                      >> 0x0000000aU))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP)))
                            : ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP 
                                                                      >> 0x0000000aU))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP)))) 
                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LOC_Y13)));
    vlSelfRef.diff_top__DOT__u_n__DOT__REG_DO = ((- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.diff_top__DOT__u_n__DOT__A 
                                                                 >> 2U))))) 
                                                 & (((2U 
                                                      & vlSelfRef.diff_top__DOT__u_n__DOT__A)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.diff_top__DOT__u_n__DOT__A)
                                                       ? 
                                                      (0xf1ffU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__MODR))
                                                       : 
                                                      (0xfffcU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COPR)))
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.diff_top__DOT__u_n__DOT__A)
                                                       ? 
                                                      (0xfffcU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LOPR))
                                                       : 
                                                      (3U 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDSR)))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x00000018U 
                                                                           & vlSelfRef.diff_top__DOT__u_n__DOT__A)))))));
    vlSelfRef.diff_top__DOT__u_r__DOT__REG_DO = ((- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                                                 >> 2U))))) 
                                                 & (((2U 
                                                      & vlSelfRef.diff_top__DOT__u_r__DOT__A)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.diff_top__DOT__u_r__DOT__A)
                                                       ? 
                                                      (0xf1ffU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__MODR))
                                                       : 
                                                      (0xfffcU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COPR)))
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.diff_top__DOT__u_r__DOT__A)
                                                       ? 
                                                      (0xfffcU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LOPR))
                                                       : 
                                                      (3U 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EDSR)))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x00000018U 
                                                                           & vlSelfRef.diff_top__DOT__u_r__DOT__A)))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__LD_TEMP = (0x00001fffU 
                                                  & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D) 
                                                      + 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_Y)
                                                        ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_HEIGHT)
                                                        : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH))) 
                                                     - (IData)(1U)));
    if (vlSelfRef.diff_top__DOT__u_n__DOT__LD_Y) {
        vlSelfRef.diff_top__DOT__u_n__DOT__LD_Z = (3U 
                                                   & ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                       << 6U) 
                                                      | (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                         >> 0x0000001aU)));
        vlSelfRef.diff_top__DOT__u_n__DOT__LD_ABASE 
            = (0x00001fffU & vlSelfRef.diff_top__DOT__u_n__DOT__VERTA);
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__LD_Z = (3U 
                                                   & ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                         >> 0x00000018U)));
        vlSelfRef.diff_top__DOT__u_n__DOT__LD_ABASE 
            = (0x00001fffU & (vlSelfRef.diff_top__DOT__u_n__DOT__VERTA 
                              >> 0x0000000dU));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem
        [vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem
        [vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_n__DOT__GW_PH = __VdfgRegularize_hebeb780c_0_7;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START = 
        ((0U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE)) 
         & ((0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
            | (IData)(__VdfgRegularize_hebeb780c_0_7)));
    if ((0U == (3U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                      >> 0x00000014U)))) {
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_BASE 
            = (0x0003ffffU & ((0x0003fffcU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[5U] 
                                              >> 0x0000000eU)) 
                              + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_OFFSY) 
                                 << 1U)));
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_SH = 2U;
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_BASE 
            = (0x0003ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_8)
                               ? ((0x0003fffcU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[5U] 
                                                  >> 0x0000000eU)) 
                                  + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_OFFSY) 
                                     << 2U)) : ((0x0003fff8U 
                                                 & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[5U] 
                                                    >> 0x0000000eU)) 
                                                + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_OFFSY) 
                                                   << 3U))));
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_SH = 
            (1U & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_8))));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_A = __VdfgRegularize_hebeb780c_0_10;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_DISP_A = 
        ((2U == (3U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR)))
          ? ((0x0001fe00U & vlSelfRef.diff_top__DOT__u_n__DOT__OUT_RY) 
             | (0x000001ffU & (vlSelfRef.diff_top__DOT__u_n__DOT__OUT_RX 
                               >> 9U))) : ((3U == (3U 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR)))
                                            ? ((0x0001ff00U 
                                                & (vlSelfRef.diff_top__DOT__u_n__DOT__OUT_RY 
                                                   >> 1U)) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.diff_top__DOT__u_n__DOT__OUT_RX 
                                                     >> 0x0000000aU)))
                                            : __VdfgRegularize_hebeb780c_0_10));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_A = __VdfgRegularize_hebeb780c_0_17;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DISP_A = 
        ((2U == (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)))
          ? ((0x0001fe00U & vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RY) 
             | (0x000001ffU & (vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RX 
                               >> 9U))) : ((3U == (3U 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)))
                                            ? ((0x0001ff00U 
                                                & (vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RY 
                                                   >> 1U)) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RX 
                                                     >> 0x0000000aU)))
                                            : __VdfgRegularize_hebeb780c_0_17));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__RA;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__RA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GIDX;
    vlSelfRef.diff_top__DOT__u_n__DOT__GSIDE = (3U 
                                                <= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GIDX));
    vlSelfRef.diff_top__DOT__u_n__DOT__TY_SMALL = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_H1) 
                                                   <= 
                                                   (0x000000ffU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_HEIGHT) 
                                                       - (IData)(1U))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL_R = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL
         [vlSelfRef.diff_top__DOT__u_n__DOT__POLY_S1]);
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT_RA;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__RDADDR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT_RA;
    if (vlSelfRef.diff_top__DOT__u_n__DOT__TX_HSS) {
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_XM1 = 
            (0x000001ffU & (0x000000ffU & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH) 
                                            >> 1U) 
                                           - (IData)(1U))));
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_X = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH) 
                                                   >> 1U);
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_XM1 = 
            (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH) 
                            - (IData)(1U)));
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_X = vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH;
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__GE_TRIG = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_ON) 
                                                  & (((8U 
                                                       == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
                                                      & (0x14U 
                                                         == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE))) 
                                                     | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC) 
                                                        & (0x1dU 
                                                           == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GK = (0x00000fffU 
                                             & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COL_HEIGHT) 
                                                 - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COL_D)) 
                                                & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC)))));
    if ((7U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1 
            = vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_A;
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2 
            = vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_D;
    } else if ((8U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1 
            = vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_B;
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2 
            = vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_C;
    } else if (vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC) {
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1 
            = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GI[2U]) 
                << 0x0000000aU) | (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GI[1U]) 
                                    << 5U) | vlSelfRef.diff_top__DOT__u_n__DOT__GI[0U]));
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2 
            = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GI[5U]) 
                << 0x0000000aU) | (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GI[4U]) 
                                    << 5U) | vlSelfRef.diff_top__DOT__u_n__DOT__GI[3U]));
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1 
            = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL_L;
        vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2 
            = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL_R;
    }
    if (vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SIDE) {
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DX 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RDX;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DY 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RDY;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__H 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RH;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SX 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RSX;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SY 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RSY;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K 
            = (3U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__OPC) 
                     - (IData)(3U)));
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DX 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LDX;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DY 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LDY;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__H 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LH;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SX 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LSX;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SY 
            = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__LSY;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K 
            = (3U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__OPC));
    }
    vlSelfRef.FB_MODE3_n = vlSelfRef.diff_top__DOT__FB_MODE3_n;
    vlSelfRef.FB_MODE3_r = vlSelfRef.diff_top__DOT__FB_MODE3_r;
    vlSelfRef.FB0_RD_n = vlSelfRef.diff_top__DOT__FB0_RD_n;
    vlSelfRef.FB1_RD_n = vlSelfRef.diff_top__DOT__FB1_RD_n;
    vlSelfRef.FB0_RD_r = vlSelfRef.diff_top__DOT__FB0_RD_r;
    vlSelfRef.FB1_RD_r = vlSelfRef.diff_top__DOT__FB1_RD_r;
    vlSelfRef.FB0_D_n = vlSelfRef.diff_top__DOT__FB0_D_n;
    vlSelfRef.FB1_D_n = vlSelfRef.diff_top__DOT__FB1_D_n;
    vlSelfRef.FB0_D_r = vlSelfRef.diff_top__DOT__FB0_D_r;
    vlSelfRef.FB1_D_r = vlSelfRef.diff_top__DOT__FB1_D_r;
    vlSelfRef.RDY_N_r = vlSelfRef.diff_top__DOT__RDY_N_r;
    vlSelfRef.RDY_N_n = vlSelfRef.diff_top__DOT__RDY_N_n;
    if (vlSelfRef.diff_top__DOT__u_n__DOT__GW_B) {
        vlSelfRef.diff_top__DOT__u_n__DOT__GW_Q = vlSelfRef.diff_top__DOT__u_n__DOT__Q_B;
        vlSelfRef.diff_top__DOT__u_n__DOT__GS_WI = 
            (7U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_SIDE)
                    ? 5U : 2U));
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__GW_Q = (
                                                   (0x13U 
                                                    == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE))
                                                    ? vlSelfRef.diff_top__DOT__u_n__DOT__Q_R
                                                    : vlSelfRef.diff_top__DOT__u_n__DOT__Q_G);
        vlSelfRef.diff_top__DOT__u_n__DOT__GS_WI = 
            (7U & ((3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_SD)))) 
                   + (1U & (- (IData)((0x13U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE)))))));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__WA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GS_WI;
    vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA_READY 
        = (1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_EMPTY)) 
                 | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT) 
                    >= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH))));
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY 
        = (1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_EMPTY)) 
                 | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                    >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_ST_STALL 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_BUSY) 
           & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC));
    vlSelfRef.diff_top__DOT__u_n__DOT__LD_PLUS = (0x00001fffU 
                                                  & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_ABASE) 
                                                     + 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_Z))
                                                       ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D)
                                                       : 
                                                      ((0x00001000U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D))) 
                                                       | (0x00000fffU 
                                                          & (((IData)(1U) 
                                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D)) 
                                                             >> 1U))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__LD_MINUS = (0x00001fffU 
                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_ABASE) 
                                                      - 
                                                      ((0x00001000U 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D)) 
                                                       | (0x00000fffU 
                                                          & ((2U 
                                                              == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_Z))
                                                              ? 
                                                             ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D) 
                                                              >> 1U)
                                                              : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LD_D))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q;
    vlSelfRef.diff_top__DOT__u_n__DOT__GS_WE = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_B) 
                                                | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_PH) 
                                                   & ((0x14U 
                                                       == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE)) 
                                                      | (0x13U 
                                                         == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__START 
        = vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__START 
        = vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__START 
        = vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_n__DOT__SPR_ADDR = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_BASE;
    if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_SH))) {
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_W = 
            ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH) 
             >> 2U);
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_P = 
            ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT) 
             >> 2U);
    } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_SH))) {
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_W = 
            ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH) 
             >> 1U);
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_P = 
            ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT) 
             >> 1U);
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_W = vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_P = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT;
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__mem
        [vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__SUM 
        = (0x00000fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__T)
                           ? ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__R) 
                              - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR))
                           : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR) 
                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__R))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__SUM 
        = (0x00000fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__T)
                           ? ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__R) 
                              - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR))
                           : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR) 
                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__R))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__SUM 
        = (0x00000fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__T)
                           ? ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__R) 
                              - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR))
                           : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR) 
                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__R))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__RA;
    vlSelfRef.diff_top__DOT__u_n__DOT__GCH = (3U & 
                                              ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSIDE)
                                                ? ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GIDX) 
                                                   - (IData)(3U))
                                                : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GIDX)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GTW = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC)
                                               ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSIDE)
                                               : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSIDE)
                                                   ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__POLY_S1)
                                                   : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__POLY_S)));
    vlSelfRef.diff_top__DOT__u_n__DOT__TY_ERR = (0x00003fffU 
                                                 & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_SMALL)
                                                     ? 
                                                    (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_HEIGHT) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_H1) 
                                                       << 1U)) 
                                                     - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_F))
                                                     : 
                                                    ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_F) 
                                                     - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_H1))));
    vlSelfRef.diff_top__DOT__u_n__DOT__TY_INC = (0x000001feU 
                                                 & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_SMALL)
                                                      ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_HEIGHT)
                                                      : 
                                                     ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_HEIGHT) 
                                                      - (IData)(1U))) 
                                                    << 1U));
    vlSelfRef.diff_top__DOT__u_n__DOT__TY_ADJ = (0x00003ffeU 
                                                 & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_SMALL)
                                                      ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TY_H1)
                                                      : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COL_HEIGHT)) 
                                                    << 1U));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__RDADDR;
    vlSelfRef.diff_top__DOT__u_n__DOT__TX_SMALL = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ROW_WIDTH) 
                                                   < (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_X));
    if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K))) {
        __VdfgRegularize_hebeb780c_0_13 = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CH;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CMP 
            = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SY) 
                > (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SX))
                ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DY)
                : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DX));
    } else {
        __VdfgRegularize_hebeb780c_0_13 = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__H;
        vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CMP 
            = ((1U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K))
                ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DY)
                : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__DX));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__INC 
        = (((0U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K))
             ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__H)
             : ((1U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K))
                 ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SX)
                 : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SY))) 
           << 1U);
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__WA;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RDREQ 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_NEXT) 
           & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA_READY));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RDREQ 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_NEXT) 
           & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__Q 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__sub_wire0) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__NULL))))));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__Q 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__sub_wire0) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__NULL))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__WE 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GS_WE;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__RUN 
        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__START) 
                    | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DONE))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__RUN 
        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__START) 
                    | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DONE))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__RUN 
        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__START) 
                    | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DONE))));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_REV = (0x000003ffU 
                                                  & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_W) 
                                                      - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_P)) 
                                                     - (IData)(1U)));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__Q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__q;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__QBIT 
        = (1U & (~ (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR) 
                     ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__SUM)) 
                    >> 0x0000000bU)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__QBIT 
        = (1U & (~ (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR) 
                     ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__SUM)) 
                    >> 0x0000000bU)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__QBIT 
        = (1U & (~ (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR) 
                     ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__SUM)) 
                    >> 0x0000000bU)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__mem
        [vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_n__DOT__GTC = (0x00007fffU 
                                              & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL
                                              [vlSelfRef.diff_top__DOT__u_n__DOT__GTW]);
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_INC 
        = vlSelfRef.diff_top__DOT__u_n__DOT__TY_INC;
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_ADJ 
        = vlSelfRef.diff_top__DOT__u_n__DOT__TY_ADJ;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_B = ((
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                       >> 0x0000000aU)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                       >> 0x0000000aU)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                       >> 0x0000000aU) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                          >> 0x0000000aU) 
                                                         - 
                                                         ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_R = ((
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                      - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                         - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_G = ((
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                       >> 5U)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                       >> 5U)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                       >> 5U) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                       >> 5U)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_1) 
                                                          >> 5U) 
                                                         - 
                                                         ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_2) 
                                                          >> 5U)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GW_DIR = (1U 
                                                 & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_B)
                                                     ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_DIRB)
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE))
                                                      ? 
                                                     ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_R) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_G) 
                                                      >> 5U))));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__q 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__mem
        [vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__mem
        [vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddress];
    if (vlSelfRef.diff_top__DOT__u_n__DOT__TX_SMALL) {
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_ERR = 
            (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_X) 
                             - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_R2)) 
                            - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_F)));
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_ADJ = 
            (0x00003fffU & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_R2));
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_INC = 
            ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_HSS)
              ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH)
              : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH) 
                 << 1U));
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_ERR = 
            (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_F) 
                            - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ROW_WIDTH)));
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_ADJ = 
            (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_RM1) 
                            << 1U));
        vlSelfRef.diff_top__DOT__u_n__DOT__TX_INC = 
            ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TX_XM1) 
             << 1U);
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ZERO 
        = (0x00003000U | (0x00000fffU & (~ (IData)(__VdfgRegularize_hebeb780c_0_13))));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ADJ 
        = ((IData)(__VdfgRegularize_hebeb780c_0_13) 
           << 1U);
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RDREQ 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RDREQ;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RDREQ 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RDREQ;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_Q = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__Q;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_Q = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__WE;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_RUN = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__RUN;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_OFF = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRX)
                                                    ? 
                                                   ((0x0003fc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_REV) 
                                                                       >> 9U)))) 
                                                        << 0x0000000aU)) 
                                                    | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_REV))
                                                    : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_P)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACC 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_B_QB = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__QBIT;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_G_QB = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__QBIT;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_R_QB = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__QBIT;
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__Q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__q;
    vlSelfRef.diff_top__DOT__u_n__DOT__GBASE = (0x0000001fU 
                                                & ((0U 
                                                    == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GCH))
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GTC)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GCH))
                                                     ? 
                                                    ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GTC) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GTC) 
                                                     >> 0x0000000aU))));
    vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__A 
        = (0x0000001fU & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_B));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__A 
        = (0x0000001fU & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_R));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__A 
        = (0x0000001fU & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_G));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__q;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__q;
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ 
        = vlSelfRef.diff_top__DOT__u_n__DOT__TX_ADJ;
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC 
        = vlSelfRef.diff_top__DOT__u_n__DOT__TX_INC;
    vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_Q;
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_VRAM_A = 
        (0x0003ffffU & (vlSelfRef.diff_top__DOT__u_n__DOT__PAT_OFF 
                        + vlSelfRef.diff_top__DOT__u_n__DOT__PAT_BASE));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__S 
        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__INC) 
                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACC)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GS_Q = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DB 
        = ((5U > (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__STEP)) 
           & ((4U >= (7U & ((IData)(4U) - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__STEP)))) 
              && (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__A) 
                        >> (7U & ((IData)(4U) - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__STEP)))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DB 
        = ((5U > (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__STEP)) 
           & ((4U >= (7U & ((IData)(4U) - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__STEP)))) 
              && (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__A) 
                        >> (7U & ((IData)(4U) - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__STEP)))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DB 
        = ((5U > (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__STEP)) 
           & ((4U >= (7U & ((IData)(4U) - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__STEP)))) 
              && (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__A) 
                        >> (7U & ((IData)(4U) - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__STEP)))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GS_WD = (0x0001ffffU 
                                                & ((vlSelfRef.diff_top__DOT__u_n__DOT__GW_Q 
                                                    ^ 
                                                    (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_DIR)))) 
                                                   + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GW_DIR)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__Q 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__sub_wire0;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__Q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__sub_wire0;
    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                        if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                            if ((4U > (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_READ_STEP 
                                    = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR) 
                                                >> 0x0dU)));
                            }
                            if ((4U <= (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                           >> 0x00000010U)))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR) 
                                          - ((0x00002000U 
                                              & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR))
                                              ? 0U : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_ADJ))));
                                vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP 
                                    = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED) 
                                             >> 0x0dU));
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED) 
                                          + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP)
                                              ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_INC)
                                              : 0U)));
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
            if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                if ((4U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                    if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP 
                                = vlSelfRef.diff_top__DOT__u_n__DOT__AA;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                    if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                        vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP 
                            = vlSelfRef.diff_top__DOT__u_n__DOT__AA;
                    } else {
                        if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                            vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 0U;
                        } else {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR) 
                                                  - 
                                                  ((0x00002000U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ))));
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                         >> 0x0dU));
                            vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP)
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)
                                                    : 0U)));
                            if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR) 
                                          >> 0x0dU)))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP) 
                             & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_INC)));
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP 
                                = VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED));
                            vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP)
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ)
                                                    : 0U)));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) {
                        if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                            vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 0U;
                        } else {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR) 
                                                  - 
                                                  ((0x00002000U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ))));
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                         >> 0x0dU));
                            vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP)
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)
                                                    : 0U)));
                            if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR) 
                                          >> 0x0dU)))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP) 
                             & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_INC)));
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP 
                                = VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED));
                            vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP)
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ)
                                                    : 0U)));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 1U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
            if ((4U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                    if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) {
                        if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                            vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 0U;
                        } else {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR) 
                                                  - 
                                                  ((0x00002000U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ))));
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                         >> 0x0dU));
                            vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP)
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)
                                                    : 0U)));
                            if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR) 
                                          >> 0x0dU)))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 1U;
                            }
                        }
                        if (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP) 
                             & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_INC)));
                            vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP 
                                = VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED));
                            vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP)
                                                    ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ)
                                                    : 0U)));
                        }
                    }
                }
            }
        }
    }
    __Vfunc_GetPattern__6__CM = (7U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                       >> 0x00000013U));
    __Vfunc_GetPattern__6__DATA = vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA;
    if ((4U & (IData)(__Vfunc_GetPattern__6__CM))) {
        if ((2U & (IData)(__Vfunc_GetPattern__6__CM))) {
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__6__DATA;
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__6__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__6__DATA));
        } else if ((1U & (IData)(__Vfunc_GetPattern__6__CM))) {
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__6__DATA;
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__6__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__6__DATA));
        } else {
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__C 
                = (0x000000ffU & (IData)(__Vfunc_GetPattern__6__DATA));
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__6__DATA)))));
            vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__EC 
                = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__6__DATA)));
        }
    } else if ((2U & (IData)(__Vfunc_GetPattern__6__CM))) {
        vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__C 
            = (0x000000ffU & (IData)(__Vfunc_GetPattern__6__DATA));
        vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__6__DATA)))));
        vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__EC 
            = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__6__DATA)));
    } else {
        vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__C 
            = (0x0000000fU & (IData)(__Vfunc_GetPattern__6__DATA));
        vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x0000000fU & (IData)(__Vfunc_GetPattern__6__DATA)))));
        vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__EC 
            = (0x0000000fU == (0x0000000fU & (IData)(__Vfunc_GetPattern__6__DATA)));
    }
    __Vfunc_GetPattern__6__Vfuncout = (((IData)(vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__C) 
                                        << 2U) | (((IData)(vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__TP) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__VDP1P_PKG.GetPattern__Vstatic__EC)));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT = __Vfunc_GetPattern__6__Vfuncout;
    __Vfunc_GetPattern__45__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                        >> 0x00000013U));
    __Vfunc_GetPattern__45__DATA = vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA;
    if ((4U & (IData)(__Vfunc_GetPattern__45__CM))) {
        if ((2U & (IData)(__Vfunc_GetPattern__45__CM))) {
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__45__DATA;
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__45__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__45__DATA));
        } else if ((1U & (IData)(__Vfunc_GetPattern__45__CM))) {
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__45__DATA;
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__45__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__45__DATA));
        } else {
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
                = (0x000000ffU & (IData)(__Vfunc_GetPattern__45__DATA));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__45__DATA)))));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__45__DATA)));
        }
    } else if ((2U & (IData)(__Vfunc_GetPattern__45__CM))) {
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
            = (0x000000ffU & (IData)(__Vfunc_GetPattern__45__DATA));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__45__DATA)))));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
            = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__45__DATA)));
    } else {
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
            = (0x0000000fU & (IData)(__Vfunc_GetPattern__45__DATA));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x0000000fU & (IData)(__Vfunc_GetPattern__45__DATA)))));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
            = (0x0000000fU == (0x0000000fU & (IData)(__Vfunc_GetPattern__45__DATA)));
    }
    __Vfunc_GetPattern__45__Vfuncout = (((IData)(vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC)));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT = __Vfunc_GetPattern__45__Vfuncout;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__HIT 
        = VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__S), 
                      (0x00003fffU & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CMP)))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GPROD = (0x0001ffffU 
                                                & (vlSelfRef.diff_top__DOT__u_n__DOT__GS_Q 
                                                   * (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GK)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__D 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GS_WD;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_Q = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT_Q = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__IS_PAT_EC = 
        ((3U >= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                >> 0x00000010U))) & 
         ((~ (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
              >> 0x00000017U)) & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__HSS_EN)) 
                                  & vlSelfRef.diff_top__DOT__u_n__DOT__PAT)));
    vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC = 
        ((3U >= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                >> 0x00000010U))) & 
         ((~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
              >> 0x00000017U)) & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN)) 
                                  & vlSelfRef.diff_top__DOT__u_r__DOT__PAT)));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__NXT 
        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__S) 
                          - ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ADJ) 
                             & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__HIT))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GSUM = (0x0001ffffU 
                                               & (vlSelfRef.diff_top__DOT__u_n__DOT__GPROD 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GBASE) 
                                                   << 0x0000000cU)));
    vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__data 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__D;
    vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_C = (0x0000ffffU 
                                                 & ((0x00040000U 
                                                     & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])
                                                     ? vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]
                                                     : 
                                                    ((0x00200000U 
                                                      & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                      ? 
                                                     ((0x00100000U 
                                                       & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                       ? 
                                                      (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                       >> 2U)
                                                       : 
                                                      ((0x00080000U 
                                                        & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                        ? 
                                                       (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                        >> 2U)
                                                        : 
                                                       ((0x0000ff00U 
                                                         & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]) 
                                                        | (0x000000ffU 
                                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                              >> 2U)))))
                                                      : 
                                                     ((0x00100000U 
                                                       & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                       ? 
                                                      ((0x00080000U 
                                                        & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                        ? 
                                                       ((0x0000ff80U 
                                                         & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]) 
                                                        | (0x0000007fU 
                                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                              >> 2U)))
                                                        : 
                                                       ((0x0000ffc0U 
                                                         & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]) 
                                                        | (0x0000003fU 
                                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                              >> 2U))))
                                                       : 
                                                      ((0x00080000U 
                                                        & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                        ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CLT_Q)
                                                        : 
                                                       ((0x0000fff0U 
                                                         & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]) 
                                                        | (0x0000000fU 
                                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                              >> 2U))))))));
    if ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
         >> 0x0000001fU)) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_BACK_C;
    } else if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR))) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_C;
    } else {
        vlSelfRef.__Vfunc_ColorCalc__48__CCB = (7U 
                                                & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                   >> 0x00000010U));
        vlSelfRef.__Vfunc_ColorCalc__48__CG = vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_GHCOLOR;
        vlSelfRef.__Vfunc_ColorCalc__48__BACK = vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_BACK_C;
        vlSelfRef.__Vfunc_ColorCalc__48__ORIG = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_C;
        vlSelfRef.__Vfunc_GouraudAdd__49__CG = vlSelfRef.__Vfunc_ColorCalc__48__CG;
        vlSelfRef.__Vfunc_GouraudAdd__49__CO = (0x00007fffU 
                                                & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMR 
            = (0x0000007fU & (((0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__49__CO)) 
                               + (0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__49__CG))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMG 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__49__CO) 
                                               >> 5U)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__49__CG) 
                                                 >> 5U))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMB 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__49__CO) 
                                               >> 0x0000000aU)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__49__CG) 
                                                 >> 0x0000000aU))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR 
            = ((0x7fe0U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR)) 
               | ((3U == (3U & ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMR) 
                                >> 5U))) ? 0U : ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMR) 
                                                      >> 5U)))
                                                  ? 0x0000001fU
                                                  : 
                                                 (0x0000001fU 
                                                  & (IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMR)))));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR 
            = ((0x7c1fU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR)) 
               | (((3U == (3U & ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMG) 
                                 >> 5U))) ? 0U : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMG) 
                                                       >> 5U)))
                                                   ? 0x0000001fU
                                                   : 
                                                  (0x0000001fU 
                                                   & (IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMG)))) 
                  << 5U));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR)) 
               | (((3U == (3U & ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMB) 
                                 >> 5U))) ? 0U : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMB) 
                                                       >> 5U)))
                                                   ? 0x0000001fU
                                                   : 
                                                  (0x0000001fU 
                                                   & (IData)(vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMB)))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_GouraudAdd__49__Vfuncout 
            = vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR 
            = vlSelfRef.__Vfunc_GouraudAdd__49__Vfuncout;
        vlSelfRef.__Vfunc_ColorHalf__50__CA = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__50__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__50__CA) 
                                                >> 1U))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__50__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__50__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__50__Vfuncout;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE 
            = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG));
        vlSelfRef.__Vfunc_ColorHalf__51__CA = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR;
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__51__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__51__CA) 
                                                >> 1U))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__51__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__51__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__51__Vfuncout;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE 
            = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR;
        vlSelfRef.__Vfunc_ColorHalf__52__CA = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__52__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__52__CA) 
                                                >> 1U))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__52__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__52__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__52__Vfuncout;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_ONE 
            = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK));
        if ((4U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
            if ((2U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
                if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
                    if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK))) {
                        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                            = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF;
                        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B 
                            = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_HALF;
                    } else {
                        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                            = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE;
                        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                    }
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK) 
                                  | (IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG)) 
                                 >> 0x0fU));
                } else {
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF;
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG) 
                                 >> 0x0fU));
                }
            } else if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A = 0U;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B 
                    = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_ONE;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK) 
                             >> 0x0fU));
            } else {
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                    = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG) 
                             >> 0x0fU));
            }
        } else if ((2U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
            if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK))) {
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF;
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B 
                        = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_HALF;
                } else {
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE;
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                }
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK) 
                              | (IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG)) 
                             >> 0x0fU));
            } else {
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                    = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG) 
                             >> 0x0fU));
            }
        } else if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__CCB))) {
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A = 0U;
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B 
                = ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK))
                    ? (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_HALF)
                    : (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_ONE));
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__48__BACK) 
                         >> 0x0fU));
        } else {
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE;
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__48__ORIG) 
                         >> 0x0fU));
        }
        vlSelfRef.__Vfunc_ColorAdd__53__CB = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B;
        vlSelfRef.__Vfunc_ColorAdd__53__CA = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A;
        vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR)) 
               | ((0x000003e0U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__53__CA) 
                                    >> 5U) + ((IData)(vlSelfRef.__Vfunc_ColorAdd__53__CB) 
                                              >> 5U)) 
                                  << 5U)) | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorAdd__53__CA) 
                                                + (IData)(vlSelfRef.__Vfunc_ColorAdd__53__CB)))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR)) 
               | (0x00007c00U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__53__CA) 
                                   >> 0x0000000aU) 
                                  + ((IData)(vlSelfRef.__Vfunc_ColorAdd__53__CB) 
                                     >> 0x0000000aU)) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_ColorAdd__53__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__S 
            = vlSelfRef.__Vfunc_ColorAdd__53__Vfuncout;
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc 
            = (((IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB) 
                << 0x0000000fU) | (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__S));
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__CALC_C 
        = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__CALC_C;
    vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_C = (0x0000ffffU 
                                                 & ((0x00040000U 
                                                     & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U])
                                                     ? vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U]
                                                     : 
                                                    ((0x00200000U 
                                                      & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])
                                                      ? 
                                                     ((0x00100000U 
                                                       & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])
                                                       ? 
                                                      (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                       >> 2U)
                                                       : 
                                                      ((0x00080000U 
                                                        & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])
                                                        ? 
                                                       (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                        >> 2U)
                                                        : 
                                                       ((0x0000ff00U 
                                                         & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U]) 
                                                        | (0x000000ffU 
                                                           & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                              >> 2U)))))
                                                      : 
                                                     ((0x00100000U 
                                                       & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])
                                                       ? 
                                                      ((0x00080000U 
                                                        & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])
                                                        ? 
                                                       ((0x0000ff80U 
                                                         & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U]) 
                                                        | (0x0000007fU 
                                                           & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                              >> 2U)))
                                                        : 
                                                       ((0x0000ffc0U 
                                                         & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U]) 
                                                        | (0x0000003fU 
                                                           & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                              >> 2U))))
                                                       : 
                                                      ((0x00080000U 
                                                        & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U])
                                                        ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLT_Q)
                                                        : 
                                                       ((0x0000fff0U 
                                                         & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U]) 
                                                        | (0x0000000fU 
                                                           & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                              >> 2U))))))));
    if ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
         >> 0x0000001fU)) {
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_0__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_BACK_C;
    } else if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR))) {
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_0__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_C;
    } else {
        vlSelfRef.__Vfunc_ColorCalc__8__CCB = (7U & 
                                               (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                >> 0x00000010U));
        vlSelfRef.__Vfunc_ColorCalc__8__CG = vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_GHCOLOR;
        vlSelfRef.__Vfunc_ColorCalc__8__BACK = vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_BACK_C;
        vlSelfRef.__Vfunc_ColorCalc__8__ORIG = vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_C;
        vlSelfRef.__Vfunc_GouraudAdd__9__CG = vlSelfRef.__Vfunc_ColorCalc__8__CG;
        vlSelfRef.__Vfunc_GouraudAdd__9__CO = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__ORIG));
        vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMR 
            = (0x0000007fU & (((0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__9__CO)) 
                               + (0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__9__CG))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMG 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__9__CO) 
                                               >> 5U)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__9__CG) 
                                                 >> 5U))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMB 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__9__CO) 
                                               >> 0x0000000aU)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__9__CG) 
                                                 >> 0x0000000aU))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR 
            = ((0x7fe0U & (IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR)) 
               | ((3U == (3U & ((IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMR) 
                                >> 5U))) ? 0U : ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMR) 
                                                      >> 5U)))
                                                  ? 0x0000001fU
                                                  : 
                                                 (0x0000001fU 
                                                  & (IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMR)))));
        vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR 
            = ((0x7c1fU & (IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR)) 
               | (((3U == (3U & ((IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMG) 
                                 >> 5U))) ? 0U : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMG) 
                                                       >> 5U)))
                                                   ? 0x0000001fU
                                                   : 
                                                  (0x0000001fU 
                                                   & (IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMG)))) 
                  << 5U));
        vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR)) 
               | (((3U == (3U & ((IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMB) 
                                 >> 5U))) ? 0U : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMB) 
                                                       >> 5U)))
                                                   ? 0x0000001fU
                                                   : 
                                                  (0x0000001fU 
                                                   & (IData)(vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__SUMB)))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_GouraudAdd__9__Vfuncout = vlSymsp->TOP__VDP1P_PKG.GouraudAdd__Vstatic__CR;
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__GOUR 
            = vlSelfRef.__Vfunc_GouraudAdd__9__Vfuncout;
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BASE 
            = (0x00007fffU & ((4U & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB))
                               ? (IData)(vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__GOUR)
                               : (IData)(vlSelfRef.__Vfunc_ColorCalc__8__ORIG)));
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__H 
            = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB) 
                      >> 1U) & ((~ (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB)) 
                                | ((IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK) 
                                   >> 0x0fU))));
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__Z 
            = (IData)((1U == (3U & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB))));
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BZ 
            = (1U & ((~ (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB)) 
                     | (((IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB) 
                         >> 1U) & (~ ((IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK) 
                                      >> 0x0fU)))));
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BH 
            = (IData)((((IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK) 
                        >> 0x0000000fU) & (4U != (6U 
                                                  & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB)))));
        if (vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__Z) {
            vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_1 = 0U;
        } else {
            if (vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__H) {
                vlSelfRef.__Vfunc_ColorHalf__10__CA 
                    = vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BASE;
                vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH 
                    = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH)) 
                       | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__10__CA) 
                                          >> 1U)) | 
                          (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_ColorHalf__10__CA) 
                                          >> 1U))));
                vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH 
                    = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH)) 
                       | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__10__CA) 
                                         >> 1U)));
                vlSelfRef.__Vfunc_ColorHalf__10__Vfuncout 
                    = vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH;
                vlSelfRef.__Vfunc_ColorCalc__8____VlefCall_0__ColorHalf 
                    = vlSelfRef.__Vfunc_ColorHalf__10__Vfuncout;
            } else {
                vlSelfRef.__Vfunc_ColorCalc__8____VlefCall_0__ColorHalf 
                    = vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BASE;
            }
            vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_1 
                = vlSelfRef.__Vfunc_ColorCalc__8____VlefCall_0__ColorHalf;
        }
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__A 
            = vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_1;
        if (vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BZ) {
            vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_4 = 0U;
        } else {
            if (vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__BH) {
                vlSelfRef.__Vfunc_ColorHalf__11__CA 
                    = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK));
                vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH 
                    = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH)) 
                       | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__11__CA) 
                                          >> 1U)) | 
                          (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_ColorHalf__11__CA) 
                                          >> 1U))));
                vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH 
                    = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH)) 
                       | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__11__CA) 
                                         >> 1U)));
                vlSelfRef.__Vfunc_ColorHalf__11__Vfuncout 
                    = vlSymsp->TOP__VDP1P_PKG.ColorHalf__Vstatic__CH;
                vlSelfRef.__Vfunc_ColorCalc__8____VlefCall_2__ColorHalf 
                    = vlSelfRef.__Vfunc_ColorHalf__11__Vfuncout;
                vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_3 
                    = vlSelfRef.__Vfunc_ColorCalc__8____VlefCall_2__ColorHalf;
            } else {
                vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_3 
                    = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK));
            }
            vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_4 
                = vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_3;
        }
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__B 
            = vlSelfRef.__Vfunc_ColorCalc__8____VlefCond_4;
        vlSelfRef.__Vfunc_ColorAdd__12__CB = vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__B;
        vlSelfRef.__Vfunc_ColorAdd__12__CA = vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__A;
        vlSymsp->TOP__VDP1P_PKG.ColorAdd__Vstatic__CR 
            = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1P_PKG.ColorAdd__Vstatic__CR)) 
               | ((0x000003e0U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__12__CA) 
                                    >> 5U) + ((IData)(vlSelfRef.__Vfunc_ColorAdd__12__CB) 
                                              >> 5U)) 
                                  << 5U)) | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorAdd__12__CA) 
                                                + (IData)(vlSelfRef.__Vfunc_ColorAdd__12__CB)))));
        vlSymsp->TOP__VDP1P_PKG.ColorAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1P_PKG.ColorAdd__Vstatic__CR)) 
               | (0x00007c00U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__12__CA) 
                                   >> 0x0000000aU) 
                                  + ((IData)(vlSelfRef.__Vfunc_ColorAdd__12__CB) 
                                     >> 0x0000000aU)) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_ColorAdd__12__Vfuncout = vlSymsp->TOP__VDP1P_PKG.ColorAdd__Vstatic__CR;
        vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__S 
            = vlSelfRef.__Vfunc_ColorAdd__12__Vfuncout;
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_0__ColorCalc 
            = ((0x00008000U & (((IData)((1U == (3U 
                                                & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB))))
                                 ? ((IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK) 
                                    >> 0x0fU) : ((IData)(
                                                         (3U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelfRef.__Vfunc_ColorCalc__8__CCB))))
                                                  ? 
                                                 (((IData)(vlSelfRef.__Vfunc_ColorCalc__8__BACK) 
                                                   | (IData)(vlSelfRef.__Vfunc_ColorCalc__8__ORIG)) 
                                                  >> 0x0fU)
                                                  : 
                                                 ((IData)(vlSelfRef.__Vfunc_ColorCalc__8__ORIG) 
                                                  >> 0x0fU))) 
                               << 0x0000000fU)) | (IData)(vlSymsp->TOP__VDP1P_PKG.ColorCalc__Vstatic__S));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__CALC_C 
        = vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_0__ColorCalc;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_D = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__CALC_C;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__WD 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__MODE_INIT)
            ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ZERO)
            : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__NXT));
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__D 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__WD;
    vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__data 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__D;
}

void Vdiff_top___024root___ico_comb__TOP__23(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___ico_comb__TOP__23\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.diff_top__DOT__u_n__DOT__BLUR_MESH = vlSelfRef.diff_top__DOT__BLUR_MESH;
    vlSelfRef.diff_top__DOT__u_r__DOT__BLUR_MESH = vlSelfRef.diff_top__DOT__BLUR_MESH;
    if ((0x00040000U & vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U])) {
        vlSelfRef.diff_top__DOT__u_n__DOT__TP = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__EC = 0U;
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__TP = (1U 
                                                 & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                    >> 1U));
        vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__EC 
            = (1U & vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT);
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__SCLIP = ((((~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_X) 
                                                        >> 0x0aU)))) 
                                                  & ((0x000003ffU 
                                                      & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_X)) 
                                                     <= 
                                                     (0x000003ffU 
                                                      & (IData)(
                                                                (vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP 
                                                                 >> 0x0000000bU))))) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y) 
                                                         >> 0x0aU))))) 
                                                & ((0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y)) 
                                                   <= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SYS_CLIP))));
    vlSelfRef.diff_top__DOT__u_n__DOT__UCLIP = ((((
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_X) 
                                                          >> 0x0aU)))) 
                                                    & ((0x000003ffU 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_X)) 
                                                       >= 
                                                       (0x000003ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                   >> 0x00000021U))))) 
                                                   & ((0x000003ffU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_X)) 
                                                      <= 
                                                      (0x000003ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                  >> 0x0000000bU))))) 
                                                  & (~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y) 
                                                          >> 0x0aU))))) 
                                                 & ((0x000003ffU 
                                                     & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y)) 
                                                    >= 
                                                    (0x000003ffU 
                                                     & (IData)(
                                                               (vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP 
                                                                >> 0x00000016U))))) 
                                                & ((0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y)) 
                                                   <= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__USR_CLIP))));
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__MESH 
        = (1U & ((~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_X) 
                     ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y))) 
                 ^ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ODD) 
                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__BLUR_MESH))));
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__IDRAW 
        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIL) 
                    ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_Y))));
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_WE = 
        (((((((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TP)) 
              | (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                 >> 0x00000016U)) & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__EC)) 
                                     | (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                        >> 0x00000017U))) 
            & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SCLIP)) 
           & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__UCLIP) 
               ^ (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                  >> 0x00000019U)) | (~ (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                         >> 0x0000001aU)))) 
          & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__MESH) 
             | (~ (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                   >> 0x00000018U)))) & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__IDRAW) 
                                         | (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIE))));
    if ((0x00040000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
        vlSelfRef.diff_top__DOT__u_r__DOT__TP = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC = 0U;
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__TP = (1U 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                    >> 1U));
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC 
            = (1U & vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT);
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__SCLIP = ((((~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                                                        >> 0x0aU)))) 
                                                  & ((0x000003ffU 
                                                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                                     <= 
                                                     (0x000003ffU 
                                                      & (IData)(
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                                                                 >> 0x0000000bU))))) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y) 
                                                         >> 0x0aU))))) 
                                                & ((0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)) 
                                                   <= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP))));
    vlSelfRef.diff_top__DOT__u_r__DOT__UCLIP = ((((
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                                                          >> 0x0aU)))) 
                                                    & ((0x000003ffU 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                                       >= 
                                                       (0x000003ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                   >> 0x00000021U))))) 
                                                   & ((0x000003ffU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                                      <= 
                                                      (0x000003ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                  >> 0x0000000bU))))) 
                                                  & (~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y) 
                                                          >> 0x0aU))))) 
                                                 & ((0x000003ffU 
                                                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)) 
                                                    >= 
                                                    (0x000003ffU 
                                                     & (IData)(
                                                               (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                >> 0x00000016U))))) 
                                                & ((0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)) 
                                                   <= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP))));
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__MESH 
        = (1U & ((~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                     ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y))) 
                 ^ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ODD) 
                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BLUR_MESH))));
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__IDRAW 
        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIL) 
                    ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y))));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WE = 
        (((((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TP)) 
              | (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                 >> 0x00000016U)) & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC)) 
                                     | (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                        >> 0x00000017U))) 
            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SCLIP)) 
           & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__UCLIP) 
               ^ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                  >> 0x00000019U)) | (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                         >> 0x0000001aU)))) 
          & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__MESH) 
             | (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                   >> 0x00000018U)))) & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__IDRAW) 
                                         | (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIE))));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vdiff_top__ConstPool__TABLE_hea24f34a_0;

void Vdiff_top___024root___eval_body__ico(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_body__ico\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vdiff_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__1
            vlSelfRef.diff_top__DOT__FB_RDY_r = vlSelfRef.FB_RDY_r;
        }
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__2
            vlSelfRef.diff_top__DOT__FB_RDY_n = vlSelfRef.FB_RDY_n;
        }
    }
    if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__3
            vlSelfRef.diff_top__DOT__RST_N = vlSelfRef.RST_N;
        }
    }
    if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__4
            vlSelfRef.diff_top__DOT__CE_F = vlSelfRef.CE_F;
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__5
            vlSelfRef.diff_top__DOT__RES_N = vlSelfRef.RES_N;
        }
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__6
            vlSelfRef.diff_top__DOT__FAST = vlSelfRef.FAST;
        }
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__7
            vlSelfRef.diff_top__DOT__DBG_EXT = vlSelfRef.DBG_EXT;
        }
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__8
            vlSelfRef.diff_top__DOT__DCE_F = vlSelfRef.DCE_F;
        }
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__9
            vlSelfRef.diff_top__DOT__VOUTI = vlSelfRef.VOUTI;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__10
            vlSelfRef.diff_top__DOT__DI = vlSelfRef.DI;
        }
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__11
            vlSelfRef.diff_top__DOT__DTEN_N = vlSelfRef.DTEN_N;
        }
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__12
            vlSelfRef.diff_top__DOT__VRAM_Q_r = vlSelfRef.VRAM_Q_r;
        }
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__13
            vlSelfRef.diff_top__DOT__VRAM_Q_n = vlSelfRef.VRAM_Q_n;
        }
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__14
            vlSelfRef.diff_top__DOT__FB0_Q_r = vlSelfRef.FB0_Q_r;
        }
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__15
            vlSelfRef.diff_top__DOT__FB1_Q_r = vlSelfRef.FB1_Q_r;
        }
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__16
            vlSelfRef.diff_top__DOT__FB0_Q_n = vlSelfRef.FB0_Q_n;
        }
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__17
            vlSelfRef.diff_top__DOT__FB1_Q_n = vlSelfRef.FB1_Q_n;
        }
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__18
            vlSelfRef.diff_top__DOT__VRAM_RDY_r = vlSelfRef.VRAM_RDY_r;
        }
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__19
            vlSelfRef.diff_top__DOT__VRAM_RDY_n = vlSelfRef.VRAM_RDY_n;
        }
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__20
            vlSelfRef.diff_top__DOT__CS_N = vlSelfRef.CS_N;
        }
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__21
            vlSelfRef.diff_top__DOT__AD_N = vlSelfRef.AD_N;
        }
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__22
            vlSelfRef.diff_top__DOT__REQ_N = vlSelfRef.REQ_N;
        }
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__23
            vlSelfRef.diff_top__DOT__EN = vlSelfRef.EN;
        }
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__24
            vlSelfRef.diff_top__DOT__BLUR_MESH = vlSelfRef.BLUR_MESH;
        }
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__25
            vlSelfRef.diff_top__DOT__DCE_R = vlSelfRef.DCE_R;
        }
    }
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__26
            vlSelfRef.diff_top__DOT__CLK = vlSelfRef.CLK;
        }
    }
    if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__27
            vlSelfRef.diff_top__DOT__CE_R = vlSelfRef.CE_R;
        }
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__28
            vlSelfRef.diff_top__DOT__VTIM_N = vlSelfRef.VTIM_N;
        }
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__29
            vlSelfRef.diff_top__DOT__HTIM_N = vlSelfRef.HTIM_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000800000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.diff_top__DOT__u_r__DOT__FB_RDY 
                = vlSelfRef.diff_top__DOT__FB_RDY_r;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000010000000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.diff_top__DOT__u_n__DOT__FB_RDY 
                = vlSelfRef.diff_top__DOT__FB_RDY_n;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (2ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__2
            vlSelfRef.diff_top__DOT__u_n__DOT__RST_N 
                = vlSelfRef.diff_top__DOT__RST_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__RST_N 
                = vlSelfRef.diff_top__DOT__RST_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (8ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__3
            vlSelfRef.diff_top__DOT__u_n__DOT__CE_F 
                = vlSelfRef.diff_top__DOT__CE_F;
            vlSelfRef.diff_top__DOT__u_r__DOT__CE_F 
                = vlSelfRef.diff_top__DOT__CE_F;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000020ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__4
            vlSelfRef.diff_top__DOT__u_n__DOT__RES_N 
                = vlSelfRef.diff_top__DOT__RES_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__RES_N 
                = vlSelfRef.diff_top__DOT__RES_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000040ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__5
            vlSelfRef.diff_top__DOT__u_n__DOT__FAST 
                = vlSelfRef.diff_top__DOT__FAST;
            vlSelfRef.diff_top__DOT__u_r__DOT__FAST 
                = vlSelfRef.diff_top__DOT__FAST;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000100ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__6
            vlSelfRef.diff_top__DOT__u_n__DOT__DBG_EXT 
                = vlSelfRef.diff_top__DOT__DBG_EXT;
            vlSelfRef.diff_top__DOT__u_r__DOT__DBG_EXT 
                = vlSelfRef.diff_top__DOT__DBG_EXT;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000400ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__7
            vlSelfRef.diff_top__DOT__u_n__DOT__DCE_F 
                = vlSelfRef.diff_top__DOT__DCE_F;
            vlSelfRef.diff_top__DOT__u_r__DOT__DCE_F 
                = vlSelfRef.diff_top__DOT__DCE_F;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000002000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__8
            vlSelfRef.diff_top__DOT__u_n__DOT__VOUTI 
                = vlSelfRef.diff_top__DOT__VOUTI;
            vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI 
                = vlSelfRef.diff_top__DOT__VOUTI;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000004000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__9
            vlSelfRef.diff_top__DOT__u_n__DOT__DI = vlSelfRef.diff_top__DOT__DI;
            vlSelfRef.diff_top__DOT__u_r__DOT__DI = vlSelfRef.diff_top__DOT__DI;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000020000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__10
            vlSelfRef.diff_top__DOT__u_n__DOT__DTEN_N 
                = vlSelfRef.diff_top__DOT__DTEN_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N 
                = vlSelfRef.diff_top__DOT__DTEN_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000080000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__11
            SData/*15:0*/ __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__Vfuncout;
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__Vfuncout = 0;
            SData/*15:0*/ __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA;
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA = 0;
            CData/*2:0*/ __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM;
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM = 0;
            CData/*1:0*/ __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX;
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX = 0;
            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q 
                = vlSelfRef.diff_top__DOT__VRAM_Q_r;
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX 
                = (3U & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                          ^ (- (IData)((1U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000014U))))) 
                         ^ (- (IData)((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR))))));
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM 
                = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                         >> 0x00000013U));
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA 
                = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q;
            vlSymsp->TOP__REF_VDP1_PKG.GetSprData__Vstatic__D 
                = ((4U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM)
                    ? ((2U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM)
                        ? __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA
                        : ((1U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM)
                            ? __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA
                            : ((1U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX)
                                ? (0x000000ffU & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA)
                                : (0x000000ffU & (__Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA 
                                                  >> 8U)))))
                    : ((2U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__CM)
                        ? ((1U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX)
                            ? (0x000000ffU & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA)
                            : (0x000000ffU & (__Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA 
                                              >> 8U)))
                        : ((2U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX)
                            ? ((1U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX)
                                ? (0x0000000fU & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA)
                                : (0x0000000fU & (__Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA 
                                                  >> 4U)))
                            : ((1U & __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__OFFSX)
                                ? (0x0000000fU & (__Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA 
                                                  >> 8U))
                                : (0x0000000fU & (__Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__DATA 
                                                  >> 0x0cU))))));
            __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__Vfuncout 
                = vlSymsp->TOP__REF_VDP1_PKG.GetSprData__Vstatic__D;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_D 
                = __Vinline_0__ico_comb__TOP__11___Vfunc_GetSprData__60__Vfuncout;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA 
                = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_D;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data 
                = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000001000000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__12
            SData/*15:0*/ __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__Vfuncout;
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__Vfuncout = 0;
            SData/*15:0*/ __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA;
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA = 0;
            CData/*2:0*/ __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM;
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM = 0;
            CData/*1:0*/ __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX;
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX = 0;
            vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_Q 
                = vlSelfRef.diff_top__DOT__VRAM_Q_n;
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX 
                = (3U & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT) 
                          ^ (- (IData)((1U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                              >> 0x00000014U))))) 
                         ^ (- (IData)((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR))))));
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM 
                = (7U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                         >> 0x00000013U));
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA 
                = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_Q;
            vlSymsp->TOP__VDP1P_PKG.GetSprData__Vstatic__D 
                = ((4U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM)
                    ? ((2U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM)
                        ? __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA
                        : ((1U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM)
                            ? __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA
                            : ((1U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX)
                                ? (0x000000ffU & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA)
                                : (0x000000ffU & (__Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA 
                                                  >> 8U)))))
                    : ((2U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__CM)
                        ? ((1U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX)
                            ? (0x000000ffU & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA)
                            : (0x000000ffU & (__Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA 
                                              >> 8U)))
                        : ((2U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX)
                            ? ((1U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX)
                                ? (0x0000000fU & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA)
                                : (0x0000000fU & (__Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA 
                                                  >> 4U)))
                            : ((1U & __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__OFFSX)
                                ? (0x0000000fU & (__Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA 
                                                  >> 8U))
                                : (0x0000000fU & (__Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__DATA 
                                                  >> 0x0cU))))));
            __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__Vfuncout 
                = vlSymsp->TOP__VDP1P_PKG.GetSprData__Vstatic__D;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_D 
                = __Vinline_0__ico_comb__TOP__12___Vfunc_GetSprData__19__Vfuncout;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__DATA 
                = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_D;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data 
                = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__DATA;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000200000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__13
            vlSelfRef.diff_top__DOT__u_r__DOT__FB0_Q 
                = vlSelfRef.diff_top__DOT__FB0_Q_r;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000400000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__14
            vlSelfRef.diff_top__DOT__u_r__DOT__FB1_Q 
                = vlSelfRef.diff_top__DOT__FB1_Q_r;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000004000000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__15
            vlSelfRef.diff_top__DOT__u_n__DOT__FB0_Q 
                = vlSelfRef.diff_top__DOT__FB0_Q_n;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000008000000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__16
            vlSelfRef.diff_top__DOT__u_n__DOT__FB1_Q 
                = vlSelfRef.diff_top__DOT__FB1_Q_n;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000100000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__17
            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY 
                = vlSelfRef.diff_top__DOT__VRAM_RDY_r;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD_WAIT 
                = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
                   & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD)));
            vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ_DONE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
                   & ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
                      & (0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))));
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ_DONE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
                   & ((0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)) 
                      & (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))));
            vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ_DONE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
                   & ((9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
                      & (3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))));
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_WRREQ 
                = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
                   & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD)) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)));
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ 
                = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_WRREQ;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren 
                = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000002000000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__18
            vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY 
                = vlSelfRef.diff_top__DOT__VRAM_RDY_n;
            vlSelfRef.diff_top__DOT__u_n__DOT__CMD_READ_DONE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY) 
                   & ((6U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_ST)) 
                      & (0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_READ_POS))));
            vlSelfRef.diff_top__DOT__u_n__DOT__CLT_READ_DONE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY) 
                   & ((0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_READ_POS)) 
                      & (8U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_ST))));
            vlSelfRef.diff_top__DOT__u_n__DOT__GRD_READ_DONE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY) 
                   & ((9U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_ST)) 
                      & (3U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_READ_POS))));
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_WRREQ 
                = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_ST)) 
                   & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD)) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY)));
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD_WAIT 
                = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_ST)) 
                   & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY)) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD)));
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WRREQ 
                = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_WRREQ;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren 
                = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WRREQ;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000008000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__19
            vlSelfRef.diff_top__DOT__u_n__DOT__CS_N 
                = vlSelfRef.diff_top__DOT__CS_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__CS_N 
                = vlSelfRef.diff_top__DOT__CS_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000010000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__20
            vlSelfRef.diff_top__DOT__u_n__DOT__AD_N 
                = vlSelfRef.diff_top__DOT__AD_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__AD_N 
                = vlSelfRef.diff_top__DOT__AD_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000040000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__21
            vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N 
                = vlSelfRef.diff_top__DOT__REQ_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N 
                = vlSelfRef.diff_top__DOT__REQ_N;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000010ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__22
            vlSelfRef.diff_top__DOT__u_r__DOT__EN = vlSelfRef.diff_top__DOT__EN;
            vlSelfRef.diff_top__DOT__u_n__DOT__EN = vlSelfRef.diff_top__DOT__EN;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_INIT 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EN) 
                   & (0x17U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)));
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__EN 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EN;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_START 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EN) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__COMM_ACC) 
                      & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_ST_STALL)) 
                         & ((0x10U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
                            | ((0x12U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
                               | (0x18U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))))));
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__INIT 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_INIT;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__WE 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__EN) 
                   & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RUN));
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__PS 
                = Vdiff_top__ConstPool__TABLE_hea24f34a_0
                [((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__EN) 
                    << 6U) | (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__HIT) 
                               << 5U) | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__K) 
                                         << 3U))) | 
                  (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__SIDE) 
                    << 2U) | (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__MODE_INIT) 
                               << 1U) | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__RUN))))];
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__START 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_START;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__wren 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__WE;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE_PS 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__PS;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000080ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vdiff_top___024root___ico_comb__TOP__23(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000200ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__24
            vlSelfRef.diff_top__DOT__u_n__DOT__DCE_R 
                = vlSelfRef.diff_top__DOT__DCE_R;
            vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R 
                = vlSelfRef.diff_top__DOT__DCE_R;
        }
    }
    if ((1ULL & (vlSelfRef.__VicoTriggered[1U] | vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__25
            vlSelfRef.diff_top__DOT__u_r__DOT__CLK 
                = vlSelfRef.diff_top__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__CLK 
                = vlSelfRef.diff_top__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock 
                = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock 
                = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock 
                = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__inclock 
                = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__CLK 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CLK;
            vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__inclock 
                = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__CLK;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__26
            vlSelfRef.diff_top__DOT__u_r__DOT__CE_R 
                = vlSelfRef.diff_top__DOT__CE_R;
            vlSelfRef.diff_top__DOT__u_n__DOT__CE_R 
                = vlSelfRef.diff_top__DOT__CE_R;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000001000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__27
            vlSelfRef.diff_top__DOT__u_n__DOT__VTIM_N 
                = vlSelfRef.diff_top__DOT__VTIM_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N 
                = vlSelfRef.diff_top__DOT__VTIM_N;
            vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ERASE_EN 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ERASE_HIT) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VTIM_N) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ERASE)));
            vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE_EN 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ERASE_HIT) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE)));
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000800ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__28
            vlSelfRef.diff_top__DOT__u_n__DOT__HTIM_N 
                = vlSelfRef.diff_top__DOT__HTIM_N;
            vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N 
                = vlSelfRef.diff_top__DOT__HTIM_N;
            vlSelfRef.diff_top__DOT__u_n__DOT__VBLANK_ERASE_EN 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ERASE_HIT) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VBLANK_ERASE) 
                      & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__HTIM_N) 
                         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__HTIM_PIPE)))));
            vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ERASE_HIT) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE) 
                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N) 
                         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE)))));
            vlSelfRef.diff_top__DOT__u_n__DOT__FB_OUT_A 
                = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VBLANK_ERASE_EN)
                    ? vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_A
                    : vlSelfRef.diff_top__DOT__u_n__DOT__FB_DISP_A);
            vlSelfRef.diff_top__DOT__u_r__DOT__FB_OUT_A 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN)
                    ? vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_A
                    : vlSelfRef.diff_top__DOT__u_r__DOT__FB_DISP_A);
            if (vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) {
                vlSelfRef.diff_top__DOT__u_n__DOT__FB0_A 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB_A;
                vlSelfRef.diff_top__DOT__u_n__DOT__FB1_A 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB_OUT_A;
            } else {
                vlSelfRef.diff_top__DOT__u_n__DOT__FB0_A 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB_OUT_A;
                vlSelfRef.diff_top__DOT__u_n__DOT__FB1_A 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB_A;
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB0_A 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB_A;
                vlSelfRef.diff_top__DOT__u_r__DOT__FB1_A 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB_OUT_A;
            } else {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB0_A 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB_OUT_A;
                vlSelfRef.diff_top__DOT__u_r__DOT__FB1_A 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB_A;
            }
            vlSelfRef.diff_top__DOT__FB0_A_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_A;
            vlSelfRef.diff_top__DOT__FB1_A_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_A;
            vlSelfRef.diff_top__DOT__FB0_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_A;
            vlSelfRef.diff_top__DOT__FB1_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_A;
            vlSelfRef.FB0_A_n = vlSelfRef.diff_top__DOT__FB0_A_n;
            vlSelfRef.FB1_A_n = vlSelfRef.diff_top__DOT__FB1_A_n;
            vlSelfRef.FB0_A_r = vlSelfRef.diff_top__DOT__FB0_A_r;
            vlSelfRef.FB1_A_r = vlSelfRef.diff_top__DOT__FB1_A_r;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000600000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__29
            if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB_DISP_Q 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_Q;
                vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_Q;
            } else {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB_DISP_Q 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_Q;
                vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_Q;
            }
            vlSelfRef.diff_top__DOT__u_r__DOT__DO = 
                ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REG_SEL)
                  ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REG_DO)
                  : ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBRAM_SEL)
                      ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q)
                      : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__MEM_DO)));
            vlSelfRef.diff_top__DOT__DO_r = vlSelfRef.diff_top__DOT__u_r__DOT__DO;
            vlSelfRef.DO_r = vlSelfRef.diff_top__DOT__DO_r;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000c000000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__30
            if (vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) {
                vlSelfRef.diff_top__DOT__u_n__DOT__FB_DISP_Q 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_Q;
                vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_Q 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_Q;
            } else {
                vlSelfRef.diff_top__DOT__u_n__DOT__FB_DISP_Q 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_Q;
                vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_Q 
                    = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_Q;
            }
            vlSelfRef.diff_top__DOT__u_n__DOT__DO = 
                ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REG_SEL)
                  ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REG_DO)
                  : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBRAM_SEL)
                      ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_Q)
                      : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__MEM_DO)));
            vlSelfRef.diff_top__DOT__DO_n = vlSelfRef.diff_top__DOT__u_n__DOT__DO;
            vlSelfRef.DO_n = vlSelfRef.diff_top__DOT__DO_n;
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000058000ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__31
            vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_REQ 
                = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__AD_N)) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CS_N))) 
                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N))) 
                   & (0U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_n__DOT__A)));
            vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_REQ 
                = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__AD_N)) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CS_N))) 
                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N))) 
                   & (0x00040000U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_n__DOT__A)));
            vlSelfRef.diff_top__DOT__u_n__DOT__REG_REQ 
                = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__AD_N)) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CS_N))) 
                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N))) 
                   & (0x00080000U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_n__DOT__A)));
            vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_REQ 
                = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N)) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N))) 
                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N))) 
                   & (0U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_r__DOT__A)));
            vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_REQ 
                = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N)) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N))) 
                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N))) 
                   & (0x00040000U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_r__DOT__A)));
            vlSelfRef.diff_top__DOT__u_r__DOT__REG_REQ 
                = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N)) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N))) 
                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N))) 
                   & (0x00080000U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_r__DOT__A)));
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000002000004ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__32
            vlSelfRef.diff_top__DOT__u_n__DOT__PEN_INC 
                = ((((3U >= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                            >> 0x00000010U))) 
                     & (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) 
                    | ((0x11U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
                       | (0x14U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD_WAIT) 
                      & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_BUSY)) 
                         & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CE_R))));
        }
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000001a04ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_comb__TOP__33
            vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_WE 
                = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CE_R) 
                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VBLANK_ERASE_EN)) 
                   | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DCE_R) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ERASE_EN)));
            vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE 
                = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) 
                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN)) 
                   | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) 
                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE_EN)));
            if (vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) {
                vlSelfRef.diff_top__DOT__u_n__DOT__FB0_WE 
                    = (3U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_WE));
                vlSelfRef.diff_top__DOT__u_n__DOT__FB1_WE 
                    = (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_WE))));
            } else {
                vlSelfRef.diff_top__DOT__u_n__DOT__FB0_WE 
                    = (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_WE))));
                vlSelfRef.diff_top__DOT__u_n__DOT__FB1_WE 
                    = (3U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_WE));
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE 
                    = (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE));
                vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE 
                    = (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE))));
            } else {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE 
                    = (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE))));
                vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE 
                    = (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE));
            }
            vlSelfRef.diff_top__DOT__FB0_WE_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_WE;
            vlSelfRef.diff_top__DOT__FB1_WE_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_WE;
            vlSelfRef.diff_top__DOT__FB0_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE;
            vlSelfRef.diff_top__DOT__FB1_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE;
            vlSelfRef.FB0_WE_n = vlSelfRef.diff_top__DOT__FB0_WE_n;
            vlSelfRef.FB1_WE_n = vlSelfRef.diff_top__DOT__FB1_WE_n;
            vlSelfRef.FB0_WE_r = vlSelfRef.diff_top__DOT__FB0_WE_r;
            vlSelfRef.FB1_WE_r = vlSelfRef.diff_top__DOT__FB1_WE_r;
        }
    }
}

void Vdiff_top___024root___eval_triggers_vec__act(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_triggers_vec__act\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK__0))) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK__0))) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK__0))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock__0))) 
                                                               << 2U)) 
                                                           | ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RST_N)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__RST_N__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CLK) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__CLK__0))))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__inclock) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__inclock__0))))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__inclock) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__inclock__0))))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CLK) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__EDGE__DOT__CLK__0))) 
                                                                << 3U) 
                                                               | (((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RST_N)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__RST_N__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CLK) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLK__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.diff_top__DOT__CLK) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__CLK__0))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__RST_N__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__EDGE__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__EDGE__DOT__ACCS__DOT__altdpram_component__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GSTEP__DOT__altdpram_component__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__RST_N__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK;
}

bool Vdiff_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___trigger_anySet__act\n"); );
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

void Vdiff_top___024root___nba_sequent__TOP__15(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___nba_sequent__TOP__15\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*11:0*/ __Vfunc_Abs__25__Vfuncout;
    __Vfunc_Abs__25__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__25__C;
    __Vfunc_Abs__25__C = 0;
    SData/*11:0*/ __Vfunc_Abs__26__Vfuncout;
    __Vfunc_Abs__26__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__26__C;
    __Vfunc_Abs__26__C = 0;
    SData/*11:0*/ __Vfunc_Abs__27__Vfuncout;
    __Vfunc_Abs__27__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__27__C;
    __Vfunc_Abs__27__C = 0;
    SData/*11:0*/ __Vfunc_Abs__28__Vfuncout;
    __Vfunc_Abs__28__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__28__C;
    __Vfunc_Abs__28__C = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__29__Vfuncout;
    __Vfunc_RGBItoF__29__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__29__CI;
    __Vfunc_RGBItoF__29__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__30__Vfuncout;
    __Vfunc_RGBItoF__30__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__30__CI;
    __Vfunc_RGBItoF__30__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__31__Vfuncout;
    __Vfunc_RGBItoF__31__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__31__CI;
    __Vfunc_RGBItoF__31__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__32__Vfuncout;
    __Vfunc_RGBItoF__32__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__32__CI;
    __Vfunc_RGBItoF__32__CI = 0;
    SData/*11:0*/ __Vfunc_Abs__33__Vfuncout;
    __Vfunc_Abs__33__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__33__C;
    __Vfunc_Abs__33__C = 0;
    SData/*11:0*/ __Vfunc_Abs__34__Vfuncout;
    __Vfunc_Abs__34__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__34__C;
    __Vfunc_Abs__34__C = 0;
    SData/*11:0*/ __Vfunc_Abs__35__Vfuncout;
    __Vfunc_Abs__35__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__35__C;
    __Vfunc_Abs__35__C = 0;
    SData/*11:0*/ __Vfunc_Abs__36__Vfuncout;
    __Vfunc_Abs__36__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_Abs__36__C;
    __Vfunc_Abs__36__C = 0;
    SData/*14:0*/ __Vfunc_RGBFtoI__37__Vfuncout;
    __Vfunc_RGBFtoI__37__Vfuncout = 0;
    QData/*53:0*/ __Vfunc_RGBFtoI__37__CF;
    __Vfunc_RGBFtoI__37__CF = 0;
    SData/*14:0*/ __Vfunc_RGBFtoI__38__Vfuncout;
    __Vfunc_RGBFtoI__38__Vfuncout = 0;
    QData/*53:0*/ __Vfunc_RGBFtoI__38__CF;
    __Vfunc_RGBFtoI__38__CF = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__39__Vfuncout;
    __Vfunc_RGBItoF__39__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__39__CI;
    __Vfunc_RGBItoF__39__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__40__Vfuncout;
    __Vfunc_RGBItoF__40__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__40__CI;
    __Vfunc_RGBItoF__40__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__41__Vfuncout;
    __Vfunc_RGBItoF__41__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__41__CI;
    __Vfunc_RGBItoF__41__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__42__Vfuncout;
    __Vfunc_RGBItoF__42__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__42__CI;
    __Vfunc_RGBItoF__42__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__43__Vfuncout;
    __Vfunc_RGBItoF__43__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__43__CI;
    __Vfunc_RGBItoF__43__CI = 0;
    QData/*53:0*/ __Vfunc_RGBItoF__44__Vfuncout;
    __Vfunc_RGBItoF__44__Vfuncout = 0;
    SData/*14:0*/ __Vfunc_RGBItoF__44__CI;
    __Vfunc_RGBItoF__44__CI = 0;
    SData/*14:0*/ __Vfunc_RGBFtoI__46__Vfuncout;
    __Vfunc_RGBFtoI__46__Vfuncout = 0;
    QData/*53:0*/ __Vfunc_RGBFtoI__46__CF;
    __Vfunc_RGBFtoI__46__CF = 0;
    IData/*19:0*/ __Vfunc_ScrnIncToRC__54__Vfuncout;
    __Vfunc_ScrnIncToRC__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__54__P;
    __Vfunc_ScrnIncToRC__54__P = 0;
    IData/*19:0*/ __Vfunc_ScrnIncToRC__55__Vfuncout;
    __Vfunc_ScrnIncToRC__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__55__P;
    __Vfunc_ScrnIncToRC__55__P = 0;
    IData/*19:0*/ __Vfunc_ScrnStartToRC__56__Vfuncout;
    __Vfunc_ScrnStartToRC__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__56__P;
    __Vfunc_ScrnStartToRC__56__P = 0;
    IData/*19:0*/ __Vfunc_ScrnStartToRC__57__Vfuncout;
    __Vfunc_ScrnStartToRC__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnStartToRC__57__P;
    __Vfunc_ScrnStartToRC__57__P = 0;
    IData/*19:0*/ __Vfunc_ScrnIncToRC__58__Vfuncout;
    __Vfunc_ScrnIncToRC__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__58__P;
    __Vfunc_ScrnIncToRC__58__P = 0;
    IData/*19:0*/ __Vfunc_ScrnIncToRC__59__Vfuncout;
    __Vfunc_ScrnIncToRC__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ScrnIncToRC__59__P;
    __Vfunc_ScrnIncToRC__59__P = 0;
    SData/*15:0*/ __Vfunc_GetSprData__60__Vfuncout;
    __Vfunc_GetSprData__60__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetSprData__60__DATA;
    __Vfunc_GetSprData__60__DATA = 0;
    CData/*2:0*/ __Vfunc_GetSprData__60__CM;
    __Vfunc_GetSprData__60__CM = 0;
    CData/*1:0*/ __Vfunc_GetSprData__60__OFFSX;
    __Vfunc_GetSprData__60__OFFSX = 0;
    SData/*12:0*/ __Vfunc_SDiv2__61__C;
    __Vfunc_SDiv2__61__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__62__C;
    __Vfunc_SDiv2__62__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__63__C;
    __Vfunc_SDiv2__63__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__64__C;
    __Vfunc_SDiv2__64__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__65__C;
    __Vfunc_SDiv2__65__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__66__C;
    __Vfunc_SDiv2__66__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__67__C;
    __Vfunc_SDiv2__67__C = 0;
    SData/*12:0*/ __Vfunc_SDiv2__68__C;
    __Vfunc_SDiv2__68__C = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR;
    __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 0;
    SData/*12:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2 = 0;
    SData/*12:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2 = 0;
    SData/*12:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1 = 0;
    SData/*12:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1 = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER = 0;
    CData/*4:0*/ __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE;
    __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP = 0;
    SData/*8:0*/ __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY;
    __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0;
    IData/*25:0*/ __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT = 0;
    IData/*25:0*/ __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__DIR;
    __Vdly__diff_top__DOT__u_r__DOT__DIR = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_LSX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LSX = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_LSY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LSY = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_RSX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RSX = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_RSY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RSY = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRX = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRY = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRX = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRY = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__POLY_S;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_S = 0;
    SData/*8:0*/ __Vdly__diff_top__DOT__u_r__DOT__TEXT_X;
    __Vdly__diff_top__DOT__u_r__DOT__TEXT_X = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__LEFT_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_HEIGHT = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__RIGHT_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_HEIGHT = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__COL_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__COL_HEIGHT = 0;
    CData/*7:0*/ __Vdly__diff_top__DOT__u_r__DOT__TEXT_Y;
    __Vdly__diff_top__DOT__u_r__DOT__TEXT_Y = 0;
    SData/*12:0*/ __Vdly__diff_top__DOT__u_r__DOT__COL_D;
    __Vdly__diff_top__DOT__u_r__DOT__COL_D = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__EC_FIND;
    __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__HSS_EN;
    __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = 0;
    IData/*23:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA = 0;
    IData/*23:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH;
    __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH = 0;
    SData/*13:0*/ __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR;
    __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_S;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_S = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC;
    __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC = 0;
    SData/*11:0*/ __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC;
    __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__AA;
    __Vdly__diff_top__DOT__u_r__DOT__AA = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR = 0;
    QData/*53:0*/ __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP = 0;
    CData/*2:0*/ __Vdly__diff_top__DOT__u_r__DOT__FBD_ST;
    __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS = 0;
    SData/*9:0*/ __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT;
    __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY = 0;
    SData/*15:0*/ __Vdly__diff_top__DOT__u_r__DOT__HTIM_PIPE;
    __Vdly__diff_top__DOT__u_r__DOT__HTIM_PIPE = 0;
    CData/*2:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS = 0;
    IData/*31:0*/ __Vdly__diff_top__DOT__u_r__DOT__RP_Xst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_Xst = 0;
    IData/*31:0*/ __Vdly__diff_top__DOT__u_r__DOT__RP_Yst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_Yst = 0;
    IData/*31:0*/ __Vdly__diff_top__DOT__u_r__DOT__RP_DXst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DXst = 0;
    IData/*31:0*/ __Vdly__diff_top__DOT__u_r__DOT__RP_DYst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DYst = 0;
    IData/*31:0*/ __Vdly__diff_top__DOT__u_r__DOT__RP_DX;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DX = 0;
    IData/*31:0*/ __Vdly__diff_top__DOT__u_r__DOT__RP_DY;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DY = 0;
    IData/*19:0*/ __Vdly__diff_top__DOT__u_r__DOT__RXst;
    __Vdly__diff_top__DOT__u_r__DOT__RXst = 0;
    IData/*19:0*/ __Vdly__diff_top__DOT__u_r__DOT__RYst;
    __Vdly__diff_top__DOT__u_r__DOT__RYst = 0;
    SData/*8:0*/ __Vdly__diff_top__DOT__u_r__DOT__OUT_Y;
    __Vdly__diff_top__DOT__u_r__DOT__OUT_Y = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3 = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__BURST;
    __Vdly__diff_top__DOT__u_r__DOT__BURST = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__VRAM_SEL;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_SEL = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__FBRAM_SEL;
    __Vdly__diff_top__DOT__u_r__DOT__FBRAM_SEL = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND = 0;
    CData/*3:0*/ __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND = 0;
    SData/*8:0*/ __Vdly__diff_top__DOT__u_r__DOT__PAT_CNT;
    __Vdly__diff_top__DOT__u_r__DOT__PAT_CNT = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__PAT_PREREAD;
    __Vdly__diff_top__DOT__u_r__DOT__PAT_PREREAD = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA = 0;
    SData/*15:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA = 0;
    SData/*15:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA = 0;
    SData/*15:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA = 0;
    SData/*15:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY = 0;
    CData/*4:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0;
    CData/*4:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT = 0;
    IData/*17:0*/ __Vdly__diff_top__DOT__u_r__DOT__VRAM_A;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_A = 0;
    CData/*3:0*/ __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0;
    CData/*1:0*/ __Vdly__diff_top__DOT__u_r__DOT__FB_WE;
    __Vdly__diff_top__DOT__u_r__DOT__FB_WE = 0;
    CData/*2:0*/ __Vdly__diff_top__DOT__u_r__DOT__FB_ST;
    __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__FB_RD;
    __Vdly__diff_top__DOT__u_r__DOT__FB_RD = 0;
    SData/*8:0*/ __Vdly__diff_top__DOT__u_r__DOT__ORIG_WIDTH;
    __Vdly__diff_top__DOT__u_r__DOT__ORIG_WIDTH = 0;
    CData/*7:0*/ __Vdly__diff_top__DOT__u_r__DOT__ORIG_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__ORIG_HEIGHT = 0;
    IData/*25:0*/ __Vdly__diff_top__DOT__u_r__DOT__VERTA;
    __Vdly__diff_top__DOT__u_r__DOT__VERTA = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0;
    SData/*15:0*/ __Vdly__diff_top__DOT__u_r__DOT__EDSR;
    __Vdly__diff_top__DOT__u_r__DOT__EDSR = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__FRAME_START;
    __Vdly__diff_top__DOT__u_r__DOT__FRAME_START = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__FB_SEL;
    __Vdly__diff_top__DOT__u_r__DOT__FB_SEL = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND = 0;
    CData/*0:0*/ __Vdly__diff_top__DOT__u_r__DOT__VBOUT;
    __Vdly__diff_top__DOT__u_r__DOT__VBOUT = 0;
    SData/*15:0*/ __VdlyVal__diff_top__DOT__u_r__DOT__GRD_TBL__v0;
    __VdlyVal__diff_top__DOT__u_r__DOT__GRD_TBL__v0 = 0;
    CData/*1:0*/ __VdlyDim0__diff_top__DOT__u_r__DOT__GRD_TBL__v0;
    __VdlyDim0__diff_top__DOT__u_r__DOT__GRD_TBL__v0 = 0;
    CData/*0:0*/ __VdlySet__diff_top__DOT__u_r__DOT__GRD_TBL__v0;
    __VdlySet__diff_top__DOT__u_r__DOT__GRD_TBL__v0 = 0;
    // Body
    __Vdly__diff_top__DOT__u_r__DOT__ORIG_HEIGHT = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__VERTA = vlSelfRef.diff_top__DOT__u_r__DOT__VERTA;
    __Vdly__diff_top__DOT__u_r__DOT__ORIG_WIDTH = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH;
    __VdlySet__diff_top__DOT__u_r__DOT__GRD_TBL__v0 = 0U;
    __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ADDR;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LSX = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LSY = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RSX = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RSY = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRX = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRY = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRX = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRX;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRY = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRY;
    __Vdly__diff_top__DOT__u_r__DOT__POLY_S = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_S;
    __Vdly__diff_top__DOT__u_r__DOT__TEXT_X = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_HEIGHT = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_HEIGHT = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__COL_HEIGHT = vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT;
    __Vdly__diff_top__DOT__u_r__DOT__TEXT_Y = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y;
    __Vdly__diff_top__DOT__u_r__DOT__COL_D = vlSelfRef.diff_top__DOT__u_r__DOT__COL_D;
    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
        = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
        = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY;
    __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = vlSelfRef.diff_top__DOT__u_r__DOT__EC_FIND;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB;
    __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH = vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_S = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S;
    __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC = vlSelfRef.diff_top__DOT__u_r__DOT__AA_X_INC;
    __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC = vlSelfRef.diff_top__DOT__u_r__DOT__AA_Y_INC;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR;
    __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
        = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP;
    __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN;
    __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE;
    __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR;
    __Vdly__diff_top__DOT__u_r__DOT__AA = vlSelfRef.diff_top__DOT__u_r__DOT__AA;
    __Vdly__diff_top__DOT__u_r__DOT__DIR = vlSelfRef.diff_top__DOT__u_r__DOT__DIR;
    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS;
    __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT = vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY;
    __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__FRAME_START = vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__VBOUT = vlSelfRef.diff_top__DOT__u_r__DOT__VBOUT;
    __Vdly__diff_top__DOT__u_r__DOT__EDSR = vlSelfRef.diff_top__DOT__u_r__DOT__EDSR;
    __Vdly__diff_top__DOT__u_r__DOT__FB_SEL = vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS;
    __Vdly__diff_top__DOT__u_r__DOT__RP_Xst = vlSelfRef.diff_top__DOT__u_r__DOT__RP_Xst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_Yst = vlSelfRef.diff_top__DOT__u_r__DOT__RP_Yst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DXst = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DXst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DYst = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DYst;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DX = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DX;
    __Vdly__diff_top__DOT__u_r__DOT__RP_DY = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DY;
    __Vdly__diff_top__DOT__u_r__DOT__RXst = vlSelfRef.diff_top__DOT__u_r__DOT__RXst;
    __Vdly__diff_top__DOT__u_r__DOT__RYst = vlSelfRef.diff_top__DOT__u_r__DOT__RYst;
    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_RX 
        = vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RX;
    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_RY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RY;
    __Vdly__diff_top__DOT__u_r__DOT__HTIM_PIPE = vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE;
    __Vdly__diff_top__DOT__u_r__DOT__OUT_Y = vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y;
    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X 
        = vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3;
    __Vdly__diff_top__DOT__u_r__DOT__BURST = vlSelfRef.diff_top__DOT__u_r__DOT__BURST;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT;
    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT 
        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND = vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RPEND;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND = vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND;
    __Vdly__diff_top__DOT__u_r__DOT__FB_ST = vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_A = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_A;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_SEL = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND;
    __Vdly__diff_top__DOT__u_r__DOT__FBRAM_SEL = vlSelfRef.diff_top__DOT__u_r__DOT__FBRAM_SEL;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY;
    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY = vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WRDY;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS 
        = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS;
    __Vdly__diff_top__DOT__u_r__DOT__PAT_PREREAD = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD;
    __Vdly__diff_top__DOT__u_r__DOT__FB_RD = vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD;
    __Vdly__diff_top__DOT__u_r__DOT__FB_WE = vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE;
    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST;
    __Vdly__diff_top__DOT__u_r__DOT__PAT_CNT = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT;
    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A = vlSelfRef.diff_top__DOT__u_r__DOT__A;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_WE = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RST_N) 
                                                 && ((8U 
                                                      == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
                                                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)));
    if (vlSelfRef.diff_top__DOT__u_r__DOT__RST_N) {
        if (vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) {
            __Vdly__diff_top__DOT__u_r__DOT__HTIM_PIPE 
                = ((0x0000fffeU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE) 
                                   << 1U)) | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N));
            if ((7U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS)));
            }
        }
        if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__HTIM_N_OLD))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS = 0U;
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__DCE_F) {
            if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_Xst 
                    = ((0x0000ffffU & __Vdly__diff_top__DOT__u_r__DOT__RP_Xst) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI) 
                          << 0x00000010U));
            } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_Yst 
                    = ((0x0000ffffU & __Vdly__diff_top__DOT__u_r__DOT__RP_Yst) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI) 
                          << 0x00000010U));
            } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DXst 
                    = ((0x0000ffffU & __Vdly__diff_top__DOT__u_r__DOT__RP_DXst) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI) 
                          << 0x00000010U));
            } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DYst 
                    = ((0x0000ffffU & __Vdly__diff_top__DOT__u_r__DOT__RP_DYst) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI) 
                          << 0x00000010U));
            } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DX 
                    = ((0x0000ffffU & __Vdly__diff_top__DOT__u_r__DOT__RP_DX) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI) 
                          << 0x00000010U));
            } else if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DY 
                    = ((0x0000ffffU & __Vdly__diff_top__DOT__u_r__DOT__RP_DY) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI) 
                          << 0x00000010U));
            }
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) {
            if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_Xst 
                    = ((0xffff0000U & __Vdly__diff_top__DOT__u_r__DOT__RP_Xst) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI));
            } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_Yst 
                    = ((0xffff0000U & __Vdly__diff_top__DOT__u_r__DOT__RP_Yst) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI));
            } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DXst 
                    = ((0xffff0000U & __Vdly__diff_top__DOT__u_r__DOT__RP_DXst) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI));
            } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DYst 
                    = ((0xffff0000U & __Vdly__diff_top__DOT__u_r__DOT__RP_DYst) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI));
            } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DX 
                    = ((0xffff0000U & __Vdly__diff_top__DOT__u_r__DOT__RP_DX) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI));
            } else if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vdly__diff_top__DOT__u_r__DOT__RP_DY 
                    = ((0xffff0000U & __Vdly__diff_top__DOT__u_r__DOT__RP_DY) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI));
            } else if ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS))) {
                __Vfunc_ScrnIncToRC__54__P = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DXst;
                __Vfunc_ScrnIncToRC__54__Vfuncout = 
                    ((0x000ff000U & ((- (IData)((1U 
                                                 & (__Vfunc_ScrnIncToRC__54__P 
                                                    >> 0x00000012U)))) 
                                     << 0x0000000cU)) 
                     | (0x00000fffU & (__Vfunc_ScrnIncToRC__54__P 
                                       >> 7U)));
                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_3__ScrnIncToRC 
                    = __Vfunc_ScrnIncToRC__54__Vfuncout;
                __Vdly__diff_top__DOT__u_r__DOT__RXst 
                    = (0x000fffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__RXst 
                                      + vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_3__ScrnIncToRC));
                __Vfunc_ScrnIncToRC__55__P = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DYst;
                __Vfunc_ScrnIncToRC__55__Vfuncout = 
                    ((0x000ff000U & ((- (IData)((1U 
                                                 & (__Vfunc_ScrnIncToRC__55__P 
                                                    >> 0x00000012U)))) 
                                     << 0x0000000cU)) 
                     | (0x00000fffU & (__Vfunc_ScrnIncToRC__55__P 
                                       >> 7U)));
                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_4__ScrnIncToRC 
                    = __Vfunc_ScrnIncToRC__55__Vfuncout;
                __Vdly__diff_top__DOT__u_r__DOT__RYst 
                    = (0x000fffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__RYst 
                                      + vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_4__ScrnIncToRC));
                if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_FIRST) {
                    __Vfunc_ScrnStartToRC__56__P = vlSelfRef.diff_top__DOT__u_r__DOT__RP_Xst;
                    __Vfunc_ScrnStartToRC__57__P = vlSelfRef.diff_top__DOT__u_r__DOT__RP_Yst;
                    __Vfunc_ScrnStartToRC__56__Vfuncout 
                        = ((0x00080000U & (__Vfunc_ScrnStartToRC__56__P 
                                           >> 9U)) 
                           | (0x0007ffffU & (__Vfunc_ScrnStartToRC__56__P 
                                             >> 7U)));
                    __Vfunc_ScrnStartToRC__57__Vfuncout 
                        = ((0x00080000U & (__Vfunc_ScrnStartToRC__57__P 
                                           >> 9U)) 
                           | (0x0007ffffU & (__Vfunc_ScrnStartToRC__57__P 
                                             >> 7U)));
                    __Vdly__diff_top__DOT__u_r__DOT__RXst 
                        = __Vfunc_ScrnStartToRC__56__Vfuncout;
                    __Vdly__diff_top__DOT__u_r__DOT__RYst 
                        = __Vfunc_ScrnStartToRC__57__Vfuncout;
                }
            }
            __Vfunc_ScrnIncToRC__58__P = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DX;
            __Vfunc_ScrnIncToRC__58__Vfuncout = ((0x000ff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (__Vfunc_ScrnIncToRC__58__P 
                                                                    >> 0x00000012U)))) 
                                                     << 0x0000000cU)) 
                                                 | (0x00000fffU 
                                                    & (__Vfunc_ScrnIncToRC__58__P 
                                                       >> 7U)));
            vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_5__ScrnIncToRC 
                = __Vfunc_ScrnIncToRC__58__Vfuncout;
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_RX 
                = (0x000fffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RX 
                                  + vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_5__ScrnIncToRC));
            __Vfunc_ScrnIncToRC__59__P = vlSelfRef.diff_top__DOT__u_r__DOT__RP_DY;
            __Vfunc_ScrnIncToRC__59__Vfuncout = ((0x000ff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (__Vfunc_ScrnIncToRC__59__P 
                                                                    >> 0x00000012U)))) 
                                                     << 0x0000000cU)) 
                                                 | (0x00000fffU 
                                                    & (__Vfunc_ScrnIncToRC__59__P 
                                                       >> 7U)));
            vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_6__ScrnIncToRC 
                = __Vfunc_ScrnIncToRC__59__Vfuncout;
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_RY 
                = (0x000fffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__OUT_RY 
                                  + vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_6__ScrnIncToRC));
            if ((1U == (3U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE) 
                              >> 7U)))) {
                vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_RX 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__RXst;
                vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_RY 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__RYst;
            }
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R))) {
            if ((1U == (3U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE) 
                              >> 7U)))) {
                __Vdly__diff_top__DOT__u_r__DOT__OUT_Y 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y)));
                vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X = 0U;
            } else if ((0x0168U > (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X))) {
                vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X)));
            }
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__VTIM_N_OLD)))) {
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_FIRST = 1U;
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__HTIM_N_OLD)))) {
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_FIRST = 0U;
        }
        if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N) 
               | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE))) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R))) {
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X)));
            if (((0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X))) 
                 == ((0x00008000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWRR))
                      ? 0x0200U : (0x000003f8U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWRR) 
                                                  >> 6U))))) {
                __Vdly__diff_top__DOT__u_r__DOT__OUT_Y 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y)));
                vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X 
                    = (0x000001f8U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWLR) 
                                      >> 6U));
            }
        }
        if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__VTIM_N_OLD))) {
            __Vdly__diff_top__DOT__u_r__DOT__OUT_Y 
                = (0x000001ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWLR));
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X 
                = (0x000001f8U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWLR) 
                                  >> 6U));
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__VTIM_N_OLD)))) {
            __Vdly__diff_top__DOT__u_r__DOT__OUT_Y = 0x01ffU;
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_F) {
            vlSelfRef.diff_top__DOT__u_r__DOT__ERASE_HIT 
                = (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X) 
                      >= (0x000001f8U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWLR) 
                                         >> 6U))) & 
                     ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X) 
                      < (0x000003f8U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWRR) 
                                        >> 6U)))) & 
                    ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y) 
                     >= (0x000001ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWLR)))) 
                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y) 
                      <= (0x000001ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EWRR))));
            if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY) 
                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY))) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY2;
                vlSelfRef.diff_top__DOT__u_r__DOT__READY 
                    = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY2) 
                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3));
            }
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY2 = 1U;
        }
        if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CS_N_OLD))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3 = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__READY = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY2 = 0U;
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) {
            if ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N)) 
                  & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N)) 
                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N))) {
                if ((0x00008000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI))) {
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A 
                        = ((0x000fff00U & vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A) 
                           | (0x000000ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI)));
                } else {
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A 
                        = ((0x000000ffU & vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A) 
                           | (0x000fff00U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                                             << 8U)));
                    __Vdly__diff_top__DOT__u_r__DOT__BURST 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                                 >> 0x0dU));
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_SEL 
                        = (0U == (3U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                                        >> 0x0aU)));
                    __Vdly__diff_top__DOT__u_r__DOT__FBRAM_SEL 
                        = (1U == (3U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                                        >> 0x0aU)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__REG_SEL 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                                 >> 0x0bU));
                }
            }
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CS_N_OLD)))) {
            __Vdly__diff_top__DOT__u_r__DOT__BURST = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__VRAM_SEL = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__FBRAM_SEL = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__REG_SEL = 0U;
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND)))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS = 0U;
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND)))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS = 0U;
        }
        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND)))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ)))) {
            __Vdly__diff_top__DOT__u_r__DOT__PAT_CNT 
                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN) 
                   & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                       >> 4U) ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)));
            __Vdly__diff_top__DOT__u_r__DOT__PAT_PREREAD = 1U;
        }
        if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_REQ) 
               | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_REQ)) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA 
                = (0x0003ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__A);
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_REQ) {
                __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND = 1U;
                vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RRDY = 0U;
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_REQ) {
                __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND = 1U;
                vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RRDY = 0U;
            }
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.diff_top__DOT__u_r__DOT__A));
        }
        if (((0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_F))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY 
                = (3U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_REQ) 
              & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N))) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N)))) {
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA 
                    = (0x0003ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__A);
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__DI;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE 
                    = (3U & ((~ (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N)))) 
                             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DQM))));
                __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL = 1U;
            } else {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA 
                    = (0x0003ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__A);
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__DI;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE 
                    = (3U & ((~ (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N)))) 
                             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DQM))));
                __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND = 1U;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST)))) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY = 3U;
            }
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.diff_top__DOT__u_r__DOT__A));
        }
        if ((1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY)) 
                   & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND))))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA 
                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D 
                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE 
                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE;
            __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL = 0U;
        }
        if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY) 
              & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND))) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY)))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 1U;
        }
        if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_REQ) 
              & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N))) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N)))) {
            if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_REQ) 
                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND)))) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA 
                    = (0x0003ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__A);
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__DI;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE 
                    = (3U & ((~ (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N)))) 
                             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DQM))));
                __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND = 1U;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 0U;
            } else {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA 
                    = (0x0003ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__A);
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__DI;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE 
                    = (3U & ((~ (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N)))) 
                             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DQM))));
                __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY = 0U;
                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_FULL = 1U;
            }
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.diff_top__DOT__u_r__DOT__A));
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) {
            if ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N)) 
                  & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N)) 
                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N))) {
                if ((0x00008000U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__DQM 
                        = (3U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                                 >> 0x0cU));
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WRDY)) 
                   & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND))))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA 
                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D 
                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE 
                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE;
            __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_FULL = 0U;
        }
        if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WRDY) 
              & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND))) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY)))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 1U;
        }
        if (((0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT 
                = (0x0000001fU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT) 
                                  - (IData)(1U)));
        }
        if (((0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT)) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R))) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT 
                = (0x0000001fU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT) 
                                  - (IData)(1U)));
        }
        if (((((((((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
                   | (1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) 
                  | (2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) 
                 | (3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) 
                | (4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) 
               | (5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) 
              | (6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) 
             | (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)))) {
            if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                if (vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS = 0U;
                    if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND) 
                         & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS = 1U;
                        if ((1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT))))) {
                            __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA;
                            if (((0x000003ffU & (vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_A 
                                                 >> 8U)) 
                                 != (0x000003ffU & 
                                     (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA 
                                      >> 8U)))) {
                                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_D 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D;
                                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE 
                                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE;
                                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN = 0U;
                                __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND = 0U;
                                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 4U;
                            }
                        }
                    } else if (vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS = 1U;
                        if ((1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT))))) {
                            __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA;
                            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 1U;
                            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN = 0U;
                            __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND = 0U;
                            __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 5U;
                        }
                    } else if (((0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT)) 
                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS = 1U;
                    } else if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND) 
                                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START))) 
                                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST))) 
                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL)))) {
                        if ((0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))) {
                            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND = 0U;
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 1U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 6U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                            = (0x0003ffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ADDR 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)));
                    } else if (((((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ) 
                                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_FULL))) 
                                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                      < (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))) 
                                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START))) 
                                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST))) 
                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL)))) {
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD) {
                            __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR;
                            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN 
                                = ((0x00200000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                    ? ((0x00100000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                        ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH)
                                        : ((0x00080000U 
                                            & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                            ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH)
                                            : (0x000000ffU 
                                               & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                  >> 1U))))
                                    : ((0x00100000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                        ? (0x000000ffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                              >> 1U))
                                        : (0x0000007fU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                              >> 2U))));
                        } else {
                            __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                                = (0x0003ffffU & ((0x00200000U 
                                                   & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                   ? 
                                                  ((0x00100000U 
                                                    & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                    ? 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)
                                                     ? 
                                                    (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                     + 
                                                     (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                       - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT)) 
                                                      - (IData)(1U)))
                                                     : 
                                                    (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                     + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT)))
                                                    : 
                                                   ((0x00080000U 
                                                     & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                     ? 
                                                    ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)
                                                      ? 
                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                      + 
                                                      (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                        - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT)) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                      + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT)))
                                                     : 
                                                    ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)
                                                      ? 
                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                      + 
                                                      (((0x000000ffU 
                                                         & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                            >> 1U)) 
                                                        - 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                                            >> 1U))) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                      + 
                                                      (0x000000ffU 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                                          >> 1U))))))
                                                   : 
                                                  ((0x00100000U 
                                                    & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])
                                                    ? 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)
                                                     ? 
                                                    (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                     + 
                                                     (((0x000000ffU 
                                                        & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                           >> 1U)) 
                                                       - 
                                                       (0x000000ffU 
                                                        & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                                           >> 1U))) 
                                                      - (IData)(1U)))
                                                     : 
                                                    (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                     + 
                                                     (0x000000ffU 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                                         >> 1U))))
                                                    : 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)
                                                     ? 
                                                    (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                     + 
                                                     (((0x0000007fU 
                                                        & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                           >> 2U)) 
                                                       - 
                                                       (0x0000007fU 
                                                        & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                                           >> 2U))) 
                                                      - (IData)(1U)))
                                                     : 
                                                    (vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR 
                                                     + 
                                                     (0x0000007fU 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                                         >> 2U)))))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN = 0U;
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 7U;
                    } else if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND) 
                                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START))) 
                                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST))) 
                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL)))) {
                        if ((0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))) {
                            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND = 0U;
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 1U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 8U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                            = (0x0003ffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__CLT_ADDR 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)));
                    } else if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND) 
                                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START))) 
                                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST))) 
                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL)))) {
                        if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))) {
                            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND = 0U;
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 1U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 9U;
                        __Vdly__diff_top__DOT__u_r__DOT__VRAM_A 
                            = (0x0003ffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_ADDR 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)));
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_F) {
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_F) {
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 3U;
                }
            } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_F) {
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                }
            } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT 
                    = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FAST)
                        ? 5U : 0x0dU);
                if ((1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL)) 
                           & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST))))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0x0aU;
                }
                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
            } else if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__MEM_DO 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q;
                    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT 
                        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FAST)
                            ? 5U : 0x0dU);
                    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RRDY = 1U;
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                }
            } else if ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                if (vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                } else if (vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) {
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)));
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0x0aU;
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                }
            } else {
                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                if (vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                } else if (vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) {
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)));
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0x0aU;
                    __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                }
            }
        } else if ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
            if ((1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START) 
                       | (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ))))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
            } else if (vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) {
                if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD)))) {
                    __Vdly__diff_top__DOT__u_r__DOT__PAT_CNT 
                        = (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                          + ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN)
                                              ? 2U : 1U)));
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0x0aU;
                }
                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__PAT_PREREAD = 0U;
            }
        } else if ((9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))) {
            vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
            if (vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START) {
                vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
            } else if (vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) {
                __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)));
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0x0aU;
                __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
            }
        }
        if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))) {
            if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND) 
                 & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE))))) {
                if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_RDY) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_A 
                        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA);
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_D 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D;
                    __Vdly__diff_top__DOT__u_r__DOT__FB_WE 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE;
                    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 1U;
                }
            } else if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RPEND) 
                        & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD)))) {
                if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_RDY) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_A 
                        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA);
                    __Vdly__diff_top__DOT__u_r__DOT__FB_RD = 1U;
                    __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 2U;
                }
            } else if ((((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND) 
                           & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD))) 
                          | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND) 
                             & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE))))) 
                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WE)) 
                        & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBRAM_SEL) 
                              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BURST))))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_Y 
                    = (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIE)
                                       ? ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y) 
                                          >> 1U) : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)));
                if ((0U == (1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_A 
                        = ((0x0001fe00U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_Y) 
                                           << 9U)) 
                           | (0x000001ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_D 
                        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D) 
                           | (0x00008000U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                             >> 0x00000010U)));
                    __Vdly__diff_top__DOT__u_r__DOT__FB_WE 
                        = (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND))));
                    __Vdly__diff_top__DOT__u_r__DOT__FB_RD 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND;
                } else if ((1U == (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_A 
                        = ((0x0001fe00U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_Y) 
                                           << 9U)) 
                           | (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                                             >> 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_D 
                        = (((0x0000ff00U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D) 
                                            << 8U)) 
                            | (0x000000ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D))) 
                           | (0x00008000U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                             >> 0x00000010U)));
                    __Vdly__diff_top__DOT__u_r__DOT__FB_WE 
                        = (3U & ((((2U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X))) 
                                  | (- (IData)((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                >> 0x0000001fU)))) 
                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND)))));
                    __Vdly__diff_top__DOT__u_r__DOT__FB_RD 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND;
                } else if ((3U == (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_A 
                        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_Y) 
                            << 8U) | (0x000000ffU & 
                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                                       >> 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__FB_D 
                        = (((0x0000ff00U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D) 
                                            << 8U)) 
                            | (0x000000ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D))) 
                           | (0x00008000U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                             >> 0x00000010U)));
                    __Vdly__diff_top__DOT__u_r__DOT__FB_WE 
                        = (3U & ((((2U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X))) 
                                  | (- (IData)((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                >> 0x0000001fU)))) 
                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND)))));
                    __Vdly__diff_top__DOT__u_r__DOT__FB_RD 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND;
                }
                __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 4U;
            }
        } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))) {
            __Vdly__diff_top__DOT__u_r__DOT__FB_WE = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 0U;
        } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))) {
            if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RDY) 
                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_F))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RRDY = 1U;
                __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))) {
            __Vdly__diff_top__DOT__u_r__DOT__FB_RD = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 0U;
        } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))) {
            __Vdly__diff_top__DOT__u_r__DOT__FB_WE = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__FB_RD = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 0U;
        }
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__VTIM_N_OLD 
            = vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N;
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__HTIM_N_OLD 
            = vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N;
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CS_N_OLD 
            = vlSelfRef.diff_top__DOT__u_r__DOT__CS_N;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_NEXT = 0U;
        if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY) {
                __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 6U;
            } else if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY) 
                        | (4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))))) {
                if ((((((0x11U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                        | (0x14U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                       | (0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                      | (0x1bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                     | (0x1cU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                    if (((0x1bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                         | (0x1cU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X 
                            = (0x00000fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                               >> 0x0000000cU) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AA_X)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y 
                            = (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AA_Y)));
                    } else {
                        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X 
                            = (0x00000fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP) 
                                               & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S))
                                               ? ((
                                                   (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                                    >> 0x0000000cU) 
                                                   + 
                                                   (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                    >> 0x0000000cU)) 
                                                  + 
                                                  (1U 
                                                   | (0x00000ffeU 
                                                      & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                                         << 1U))))
                                               : ((vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                                   >> 0x0000000cU) 
                                                  + 
                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                   >> 0x0000000cU))));
                        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y 
                            = (0x00000fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP) 
                                               & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S)))
                                               ? ((vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                                   + vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA) 
                                                  + 
                                                  (1U 
                                                   | (0x00000ffeU 
                                                      & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY))) 
                                                         << 1U))))
                                               : (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                                  + vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA)));
                        if ((1U & (~ (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP) 
                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EC_FIND)) 
                                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC))))) {
                            __Vfunc_RGBFtoI__46__CF 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBFtoI__Vstatic__CI 
                                = ((0x00007c00U & ((IData)(
                                                           (__Vfunc_RGBFtoI__46__CF 
                                                            >> 0x00000030U)) 
                                                   << 0x0000000aU)) 
                                   | ((0x000003e0U 
                                       & ((IData)((__Vfunc_RGBFtoI__46__CF 
                                                   >> 0x0000001eU)) 
                                          << 5U)) | 
                                      (0x0000001fU 
                                       & (IData)((__Vfunc_RGBFtoI__46__CF 
                                                  >> 0x0000000cU)))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__PAT;
                            __Vfunc_RGBFtoI__46__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBFtoI__Vstatic__CI;
                            vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_GHCOLOR 
                                = __Vfunc_RGBFtoI__46__Vfuncout;
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS 
                            = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) 
                                & (0x0000f000U == (0x0000f000U 
                                                   & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA))) 
                               & (1U >= (0x0000000fU 
                                         & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                            >> 0x00000010U))));
                    }
                    if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) 
                         & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC)))) {
                        if ((IData)((0U != (0x80010000U 
                                            & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND = 1U;
                            __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 2U;
                        } else {
                            vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND = 1U;
                            __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 5U;
                        }
                    } else {
                        __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 6U;
                    }
                }
                vlSelfRef.diff_top__DOT__u_r__DOT__PAT_NEXT 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP;
                if ((0x0bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WAIT)))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 4U;
        } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_BACK_C 
                = vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q;
            vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND = 1U;
            __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 5U;
        } else if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WAIT)))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND = 0U;
                if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS) {
                    if ((3U > (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT))) {
                        __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 1U;
                    } else {
                        __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT 
                            = (0x000003ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT) 
                                              - (IData)(3U)));
                        __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 0U;
                    }
                } else {
                    __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 0U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY)));
                if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 0U;
                }
            }
        } else if ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
            __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 0U;
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START) {
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND = 0U;
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__RES_N) {
            if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REG_REQ) 
                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N))) 
                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N)))) {
                if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.diff_top__DOT__u_r__DOT__A)) {
                                if ((1U & vlSelfRef.diff_top__DOT__u_r__DOT__A)) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__EWDR 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__DI;
                                }
                            }
                        }
                        if ((4U & vlSelfRef.diff_top__DOT__u_r__DOT__A)) {
                            if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.diff_top__DOT__u_r__DOT__A)) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__EWRR 
                                        = vlSelfRef.diff_top__DOT__u_r__DOT__DI;
                                }
                                if ((1U & (~ vlSelfRef.diff_top__DOT__u_r__DOT__A))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__EWLR 
                                        = (0x7fffU 
                                           & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI));
                                }
                            }
                        }
                    }
                }
                if (((1U == (0x0000001fU & vlSelfRef.diff_top__DOT__u_r__DOT__A)) 
                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                        >> 1U))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 1U;
                }
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_END) {
                __Vdly__diff_top__DOT__u_r__DOT__EDSR 
                    = (2U | (IData)(__Vdly__diff_top__DOT__u_r__DOT__EDSR));
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) {
                vlSelfRef.diff_top__DOT__u_r__DOT__IRQ_N 
                    = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EDSR) 
                                >> 1U)));
            }
            __Vdly__diff_top__DOT__u_r__DOT__FRAME_START = 0U;
            if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__START_DRAW_PEND) {
                __Vdly__diff_top__DOT__u_r__DOT__FRAME_START = 1U;
                __Vdly__diff_top__DOT__u_r__DOT__EDSR 
                    = (0xfffdU & (IData)(__Vdly__diff_top__DOT__u_r__DOT__EDSR));
                vlSelfRef.diff_top__DOT__u_r__DOT__DIE 
                    = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                             >> 3U));
                vlSelfRef.diff_top__DOT__u_r__DOT__DIL 
                    = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                             >> 2U));
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__FRAME_CHANGE) {
                vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE = 0U;
                if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR))) {
                    if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND) 
                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR))) {
                        __Vdly__diff_top__DOT__u_r__DOT__FB_SEL 
                            = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL)));
                        __Vdly__diff_top__DOT__u_r__DOT__EDSR 
                            = ((0xfffcU & (IData)(__Vdly__diff_top__DOT__u_r__DOT__EDSR)) 
                               | (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EDSR) 
                                        >> 1U)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LOPR 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__COPR;
                        vlSelfRef.diff_top__DOT__u_r__DOT__DIE 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                                     >> 3U));
                        vlSelfRef.diff_top__DOT__u_r__DOT__DIL 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                                     >> 2U));
                        if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PTMR))) {
                            __Vdly__diff_top__DOT__u_r__DOT__FRAME_START = 1U;
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0U;
                    } else if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND) 
                                & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR) 
                                        >> 1U)));
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR) 
                                     >> 1U));
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0U;
                    }
                } else {
                    __Vdly__diff_top__DOT__u_r__DOT__FB_SEL 
                        = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL)));
                    __Vdly__diff_top__DOT__u_r__DOT__EDSR 
                        = (0xfffdU & (IData)(__Vdly__diff_top__DOT__u_r__DOT__EDSR));
                    vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE 
                        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR) 
                                    >> 1U)));
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR) 
                                 >> 1U));
                    __Vdly__diff_top__DOT__u_r__DOT__EDSR 
                        = ((0xfffeU & (IData)(__Vdly__diff_top__DOT__u_r__DOT__EDSR)) 
                           | (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EDSR) 
                                    >> 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LOPR 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__COPR;
                    vlSelfRef.diff_top__DOT__u_r__DOT__DIE 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                                 >> 3U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__DIL 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBCR) 
                                 >> 2U));
                    if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PTMR))) {
                        __Vdly__diff_top__DOT__u_r__DOT__FRAME_START = 1U;
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0U;
                }
            }
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__FRAME_CHANGE = 0U;
            if (vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) {
                if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VTIM_N_OLD)))) {
                    __Vdly__diff_top__DOT__u_r__DOT__VBOUT = 1U;
                }
                if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
                      & (0x0800U == (0x0c00U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE)))) 
                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBOUT))) {
                    __Vdly__diff_top__DOT__u_r__DOT__VBOUT = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__FRAME_CHANGE = 1U;
                }
                if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N)) 
                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VTIM_N_OLD))) {
                    if ((8U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE = 1U;
                    }
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE = 1U;
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND = 0U;
                }
                if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
                     & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VTIM_N_OLD)))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ODD 
                        = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ODD)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE = 0U;
                }
            }
        } else {
            __Vdly__diff_top__DOT__u_r__DOT__EDSR = 0U;
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START) {
            __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ = 1U;
            vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ = 0U;
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 0U;
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 1U;
        } else if (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_TERMINATE) {
            vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ = 0U;
            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0U;
        } else if (vlSelfRef.diff_top__DOT__u_r__DOT__EN) {
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SPR_OFFSY_NEXT 
                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY)
                                   ? ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY) 
                                      - (0x0000003fU 
                                         & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                            >> 3U)))
                                   : ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY) 
                                      + (0x0000003fU 
                                         & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                            >> 3U)))));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_A 
                = ((IData)((0x04000000U == (0x06000000U 
                                            & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])))
                    ? ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                        ? ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                            ? ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                      >> 0x0000000aU))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP)))
                            : ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                      >> 0x00000015U))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(
                                                        (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                         >> 0x0000000bU)))))
                        : ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                            ? ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                      >> 0x00000020U))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(
                                                        (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                         >> 0x00000016U))))
                            : ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                      >> 0x0000002bU))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(
                                                        (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                         >> 0x00000021U))))))
                    : ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                        ? ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                            ? ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                                                                      >> 0x0000000aU))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP)))
                            : ((0x00001800U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                                                                      >> 0x00000015U))))) 
                                               << 0x0000000bU)) 
                               | (0x000007ffU & (IData)(
                                                        (vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                                                         >> 0x0000000bU)))))
                        : 0U));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_B 
                = ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                    ? ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                        ? ((0x00001000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                           << 2U)) 
                           | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD))
                        : ((0x00001000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                           >> 0x0000000aU)) 
                           | (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                             >> 0x0000000cU))))
                    : ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))
                        ? ((0x00001000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                           << 2U)) 
                           | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD))
                        : ((0x00001000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                           >> 0x0000000aU)) 
                           | (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                             >> 0x0000000cU)))));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_RES 
                = (0x00001fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_A) 
                                  - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_B)));
            if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))) {
                if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_RES;
                } else {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_RES;
                }
            } else if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE))) {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_RES;
            } else {
                __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_RES;
            }
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX1 
                = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                   >> 0x0000000dU) 
                                  - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX2 
                = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                   >> 0x0000000dU) 
                                  - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX1 
                = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                   >> 0x0000000dU) 
                                  - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX2 
                = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                   >> 0x0000000dU) 
                                  - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX1 
                = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX1))));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX2 
                = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX2))));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX1 
                = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX1))));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX2 
                = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX2))));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX1 
                = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX1) 
                            >> 0x0cU)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2 
                = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX2) 
                            >> 0x0cU)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1 
                = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX1) 
                            >> 0x0cU)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2 
                = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX2) 
                            >> 0x0cU)));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1 
                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX1) 
                         >> 0x0cU));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX2 
                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX2) 
                         >> 0x0cU));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX1 
                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX1) 
                         >> 0x0cU));
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX2 
                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX2) 
                         >> 0x0cU));
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER 
                = (VL_LTS_III(13, (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                  >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)) 
                   & VL_LTS_III(13, (0x00001fffU & 
                                     (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                      >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)));
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER 
                = (VL_GTS_III(13, (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                  >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)) 
                   & VL_GTS_III(13, (0x00001fffU & 
                                     (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                      >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)));
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER 
                = (VL_LTS_III(13, (0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1)) 
                   & VL_LTS_III(13, (0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1)));
            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER 
                = (VL_GTS_III(13, (0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2)) 
                   & VL_GTS_III(13, (0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2)));
            if ((((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                  | (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                 | (0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE)));
                if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_R) 
                                 >> 5U));
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_G) 
                                 >> 5U));
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B 
                        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_B) 
                                 >> 5U));
                }
                if ((0x13U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE))) {
                    __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP 
                        = (((QData)((IData)((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B) 
                                              << 0x00000012U) 
                                             | ((vlSelfRef.diff_top__DOT__u_r__DOT__DIV_B_Q 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G))))) 
                            << 0x00000023U) | (((QData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_G_Q)) 
                                                << 0x00000012U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R) 
                                                                   << 0x00000011U) 
                                                                  | vlSelfRef.diff_top__DOT__u_r__DOT__DIV_R_Q)))));
                }
            }
            if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) {
                vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_END = 0U;
            }
            if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_ENABLE = 0U;
            }
            if (((((((((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                       | (1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                      | (2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                     | (3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                    | (4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                   | (5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                  | (0x0cU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                 | (0x0dU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                if ((0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ = 0U;
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ_DONE) {
                            if ((IData)((0U == (0xc0000000U 
                                                & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])))) {
                                if ((0x00080000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                                    if ((0x00040000U 
                                         & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                                        vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ = 1U;
                                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 1U;
                                    } else {
                                        __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0U;
                                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 3U;
                                    }
                                } else if ((0x00040000U 
                                            & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                                    if ((0x00040000U 
                                         & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])) {
                                        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ = 1U;
                                        __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0U;
                                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 2U;
                                    } else {
                                        __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0U;
                                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 3U;
                                    }
                                } else if ((0x00040000U 
                                            & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U])) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ = 1U;
                                    __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0x000aU;
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 2U;
                                } else {
                                    __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0x0017U;
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 3U;
                                }
                            } else {
                                vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1fU;
                            }
                            vlSelfRef.diff_top__DOT__u_r__DOT__COPR 
                                = (0x0000ffffU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ADDR 
                                                  >> 2U));
                        }
                    } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ = 0U;
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ_DONE) {
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 3U;
                        }
                    } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        if ((0x00080000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                            if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000012U)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE = 0U;
                            }
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1fU;
                        } else if ((0x00040000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 5U;
                        } else if ((1U == (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                 >> 0x00000013U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ = 1U;
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 4U;
                        } else {
                            if ((5U < (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT))) {
                                __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 0U;
                            }
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 5U;
                        }
                    } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ = 0U;
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ_DONE) {
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 5U;
                        }
                    } else if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) {
                            __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY 
                                = (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY) 
                                                  - (IData)(1U)));
                            if ((1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY))))) {
                                if ((0U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0cU;
                                } else if ((1U == (0x0000000fU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                      >> 0x00000010U)))) {
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0cU;
                                } else if (((2U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))) 
                                            || (3U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                    >> 0x00000010U))))) {
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0cU;
                                } else if ((4U == (0x0000000fU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                      >> 0x00000010U)))) {
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0cU;
                                } else if (((5U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))) 
                                            || (7U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                    >> 0x00000010U))))) {
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0dU;
                                } else if ((6U == (0x0000000fU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                      >> 0x00000010U)))) {
                                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0dU;
                                }
                                __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 8U;
                            }
                        }
                    } else if ((0x0cU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSX 
                            = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                               >> 0x0000000dU) 
                                              - (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                                 >> 0x0000000dU)));
                        __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__VERTA;
                        __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__VERTB;
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSY 
                            = (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                              - vlSelfRef.diff_top__DOT__u_r__DOT__VERTA));
                        __Vdly__diff_top__DOT__u_r__DOT__DIR = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H = 0U;
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x15U;
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSX 
                            = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                               >> 0x0000000dU) 
                                              - (vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                                 >> 0x0000000dU)));
                        if (((((VL_LTS_III(13, (0x00001fffU 
                                                & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                                   >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)) 
                                & VL_LTS_III(13, (0x00001fffU 
                                                  & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                                     >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1))) 
                               | (VL_LTS_III(13, (0x00001fffU 
                                                  & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                                     >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)) 
                                  & VL_LTS_III(13, 
                                               (0x00001fffU 
                                                & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                                   >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)))) 
                              | (VL_GTS_III(13, (0x00001fffU 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                                    >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)) 
                                 & VL_GTS_III(13, (0x00001fffU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                                      >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)))) 
                             | (VL_GTS_III(13, (0x00001fffU 
                                                & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                                   >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)) 
                                & VL_GTS_III(13, (0x00001fffU 
                                                  & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                                     >> 0x0000000dU)), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2))))) {
                            __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H 
                                = (1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                            >> 0x0000001bU)));
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSY 
                            = (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                              - vlSelfRef.diff_top__DOT__u_r__DOT__VERTB));
                        __Vfunc_Abs__25__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSX;
                        vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                            = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__25__C)))
                                               ? (IData)(__Vfunc_Abs__25__C)
                                               : (- (IData)(__Vfunc_Abs__25__C))));
                        __Vfunc_Abs__25__Vfuncout = 
                            (0x00000fffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_LSX 
                            = __Vfunc_Abs__25__Vfuncout;
                        __Vfunc_Abs__26__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSY;
                        vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                            = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__26__C)))
                                               ? (IData)(__Vfunc_Abs__26__C)
                                               : (- (IData)(__Vfunc_Abs__26__C))));
                        __Vfunc_Abs__26__Vfuncout = 
                            (0x00000fffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_LSY 
                            = __Vfunc_Abs__26__Vfuncout;
                        __Vfunc_Abs__27__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSX;
                        vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                            = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__27__C)))
                                               ? (IData)(__Vfunc_Abs__27__C)
                                               : (- (IData)(__Vfunc_Abs__27__C))));
                        __Vfunc_Abs__27__Vfuncout = 
                            (0x00000fffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_RSX 
                            = __Vfunc_Abs__27__Vfuncout;
                        __Vfunc_Abs__28__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSY;
                        vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                            = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__28__C)))
                                               ? (IData)(__Vfunc_Abs__28__C)
                                               : (- (IData)(__Vfunc_Abs__28__C))));
                        __Vfunc_Abs__28__Vfuncout = 
                            (0x00000fffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_RSY 
                            = __Vfunc_Abs__28__Vfuncout;
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSX) 
                                     >> 0x0cU));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRY 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSY) 
                                     >> 0x0cU));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSX) 
                                     >> 0x0cU));
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRY 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSY) 
                                     >> 0x0cU));
                    } else {
                        __Vfunc_RGBItoF__29__CI = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_A;
                        __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__VERTA;
                        __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__VERTB;
                        __Vdly__diff_top__DOT__u_r__DOT__POLY_S = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__TEXT_X = 0U;
                        vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                            = ((0x003ffffffffc0000ULL 
                                & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                               | (IData)((IData)((0x0001f000U 
                                                  & ((IData)(__Vfunc_RGBItoF__29__CI) 
                                                     << 0x0000000cU)))));
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x18U;
                        vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                            = ((0x003ffff00003ffffULL 
                                & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                               | ((QData)((IData)((0x0001f000U 
                                                   & ((IData)(__Vfunc_RGBItoF__29__CI) 
                                                      << 7U)))) 
                                  << 0x00000012U));
                        vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                            = ((0x0000000fffffffffULL 
                                & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                               | ((QData)((IData)((0x0001f000U 
                                                   & ((IData)(__Vfunc_RGBItoF__29__CI) 
                                                      << 2U)))) 
                                  << 0x00000024U));
                        __Vfunc_RGBItoF__29__Vfuncout 
                            = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                        __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                            = __Vfunc_RGBItoF__29__Vfuncout;
                        __Vfunc_RGBItoF__30__CI = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_B;
                        vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                            = ((0x003ffffffffc0000ULL 
                                & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                               | (IData)((IData)((0x0001f000U 
                                                  & ((IData)(__Vfunc_RGBItoF__30__CI) 
                                                     << 0x0000000cU)))));
                        vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                            = ((0x003ffff00003ffffULL 
                                & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                               | ((QData)((IData)((0x0001f000U 
                                                   & ((IData)(__Vfunc_RGBItoF__30__CI) 
                                                      << 7U)))) 
                                  << 0x00000012U));
                        vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                            = ((0x0000000fffffffffULL 
                                & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                               | ((QData)((IData)((0x0001f000U 
                                                   & ((IData)(__Vfunc_RGBItoF__30__CI) 
                                                      << 2U)))) 
                                  << 0x00000024U));
                        __Vfunc_RGBItoF__30__Vfuncout 
                            = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                        __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                            = __Vfunc_RGBItoF__30__Vfuncout;
                    }
                }
            } else if (((((((((0x15U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                              | (0x16U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                             | (0x17U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                            | (6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                           | (7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                          | (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                         | (0x0bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                        | (0x10U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))) {
                if ((0x15U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    __Vdly__diff_top__DOT__u_r__DOT__LEFT_HEIGHT 
                        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSX) 
                            >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSY))
                            ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSX)
                            : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSY));
                    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_HEIGHT 
                        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSX) 
                            >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSY))
                            ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSX)
                            : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSY));
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x16U;
                } else if ((0x16U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    __Vdly__diff_top__DOT__u_r__DOT__COL_HEIGHT 
                        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT) 
                            >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT))
                            ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT)
                            : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT));
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x17U;
                } else if ((0x17U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if (((0x00001fffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT))) 
                         <= (0x000000ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT) 
                                            - (IData)(1U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_INC 
                            = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT) 
                                              << 1U));
                        vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_ADJ 
                            = (0x00003fffU & (((IData)(1U) 
                                               + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)) 
                                              << 1U));
                        vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR 
                            = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT) 
                                              - ((((IData)(1U) 
                                                   + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)) 
                                                  << 1U) 
                                                 + 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY)) 
                                                      | (1U 
                                                         == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT))))
                                                   ? 0U
                                                   : 1U))));
                    } else {
                        vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_INC 
                            = (0x000001feU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT) 
                                               - (IData)(1U)) 
                                              << 1U));
                        vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_ADJ 
                            = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT) 
                                              << 1U));
                        vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR 
                            = (0x00003fffU & (((IData)(1U) 
                                               + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)) 
                                              - ((((IData)(1U) 
                                                   + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)) 
                                                  << 1U) 
                                                 - 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY)) 
                                                      | (1U 
                                                         == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT))))
                                                   ? 0U
                                                   : 1U))));
                    }
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X_INC 
                        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSX) 
                                          << 1U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_ADJ 
                        = (0x00003fffU & (- ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT) 
                                             << 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X_INC 
                        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSX) 
                                          << 1U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_ADJ 
                        = (0x00003fffU & (- ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT) 
                                             << 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY 
                        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY)
                            ? (0x00003fffU & ((0x00003fffU 
                                               & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT) 
                                                  - (IData)(1U))) 
                                              * (0x0000003fU 
                                                 & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                    >> 3U))))
                            : 0U);
                    __Vdly__diff_top__DOT__u_r__DOT__TEXT_Y = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__TEXT_X = 0U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 6U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y_INC 
                        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSY) 
                                          << 1U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X 
                        = (0x00003fffU & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR_ADJ 
                        = (0x00003fffU & (- ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT) 
                                             << 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y_INC 
                        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSY) 
                                          << 1U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X 
                        = (0x00003fffU & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y 
                        = (0x00003fffU & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X_CMP 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRY;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR 
                        = (0x00003fffU & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y 
                        = (0x00003fffU & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X_CMP 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRY;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y_CMP 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRX;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR_INC 
                        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT) 
                                          << 1U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y_CMP 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRX;
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_INC 
                        = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT) 
                                          << 1U));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_ADJ 
                        = (0x00003fffU & (- ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT) 
                                             << 1U)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR_CMP 
                        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSY) 
                            > (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSX))
                            ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRY)
                            : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRX));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR 
                        = (0x00003fffU & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_CMP 
                        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSY) 
                            > (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSX))
                            ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRY)
                            : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRX));
                    __Vdly__diff_top__DOT__u_r__DOT__COL_D 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT;
                } else if ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    __Vfunc_RGBItoF__31__CI = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_A;
                    vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                        = ((0x003ffffffffc0000ULL & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                           | (IData)((IData)((0x0001f000U 
                                              & ((IData)(__Vfunc_RGBItoF__31__CI) 
                                                 << 0x0000000cU)))));
                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_A;
                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_D;
                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)));
                    __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE = 0U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 7U;
                    vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                        = ((0x003ffff00003ffffULL & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                           | ((QData)((IData)((0x0001f000U 
                                               & ((IData)(__Vfunc_RGBItoF__31__CI) 
                                                  << 7U)))) 
                              << 0x00000012U));
                    vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                        = ((0x0000000fffffffffULL & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                           | ((QData)((IData)((0x0001f000U 
                                               & ((IData)(__Vfunc_RGBItoF__31__CI) 
                                                  << 2U)))) 
                              << 0x00000024U));
                    __Vfunc_RGBItoF__31__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                        = __Vfunc_RGBItoF__31__Vfuncout;
                    __Vfunc_RGBItoF__32__CI = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_B;
                    vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                        = ((0x003ffffffffc0000ULL & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                           | (IData)((IData)((0x0001f000U 
                                              & ((IData)(__Vfunc_RGBItoF__32__CI) 
                                                 << 0x0000000cU)))));
                    vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                        = ((0x003ffff00003ffffULL & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                           | ((QData)((IData)((0x0001f000U 
                                               & ((IData)(__Vfunc_RGBItoF__32__CI) 
                                                  << 7U)))) 
                              << 0x00000012U));
                    vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                        = ((0x0000000fffffffffULL & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                           | ((QData)((IData)((0x0001f000U 
                                               & ((IData)(__Vfunc_RGBItoF__32__CI) 
                                                  << 2U)))) 
                              << 0x00000024U));
                    __Vfunc_RGBItoF__32__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                        = __Vfunc_RGBItoF__32__Vfuncout;
                } else if ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((0x14U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE))) {
                        __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP;
                        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_B;
                        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_C;
                        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S 
                            = (0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT)));
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 8U;
                    }
                } else if ((8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((0x14U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE))) {
                        __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP;
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0bU;
                    }
                } else if ((0x0bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_READ_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__TEXT_Y 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SPR_OFFSY_NEXT;
                    }
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
                        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_DRAW_STEP)
                            ? ((0U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))
                                ? 0x10U : ((1U == (0x0000000fU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                      >> 0x00000010U)))
                                            ? 0x12U
                                            : 0x18U))
                            : 0x0bU);
                    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_ERROR 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR;
                } else {
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX 
                        = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                           >> 0x0000000dU) 
                                          - (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                             >> 0x0000000dU)));
                    __Vfunc_Abs__33__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX;
                    vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                        = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__33__C)))
                                           ? (IData)(__Vfunc_Abs__33__C)
                                           : (- (IData)(__Vfunc_Abs__33__C))));
                    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__DIR 
                        = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = 0U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x13U;
                    __Vfunc_Abs__33__Vfuncout = (0x00000fffU 
                                                 & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX 
                        = __Vfunc_Abs__33__Vfuncout;
                    __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                        = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                           >> 1U)) 
                           | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                    __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                        = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                           >> 1U)) 
                           | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                    __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX)));
                }
            } else if (((((((((0x12U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                              | (0x13U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                             | (0x18U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                            | (0x19U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                           | (0x0eU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                          | (9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                         | (0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                        | ((0x11U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                           || (0x14U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))))) {
                if ((0x12U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX 
                        = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                           >> 0x0000000dU) 
                                          - (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                             >> 0x0000000dU)));
                    __Vfunc_Abs__34__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX;
                    vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                        = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__34__C)))
                                           ? (IData)(__Vfunc_Abs__34__C)
                                           : (- (IData)(__Vfunc_Abs__34__C))));
                    __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = 0U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x13U;
                    __Vfunc_Abs__34__Vfuncout = (0x00000fffU 
                                                 & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX 
                        = __Vfunc_Abs__34__Vfuncout;
                    if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1) 
                          & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2)) 
                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2) 
                                               << 0x0000000cU)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                     >> 0x0cU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2) 
                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX1)) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1) 
                                               << 0x0000000cU)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                     >> 0x0cU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1) 
                                 & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX2) 
                                    | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX2))) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                        >> 0x0cU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (1U | (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX2) 
                                  | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX2)) 
                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1)) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                     >> 0x0cU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2) 
                                 & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1) 
                                    | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX1))) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                        >> 0x0cU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (1U | (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else {
                        if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX1) 
                               | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX1)) 
                              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2)) 
                             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                         >> 0x0cU));
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        } else {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                         >> 0x0cU));
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX)));
                } else if ((0x13U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                          < (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH)) 
                         & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                            >> 0x0000001cU))) {
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                             < (0x000000ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                               >> 1U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH;
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & ((
                                                   (0x000000ffU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                       >> 1U)) 
                                                   - 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                    << 1U)) 
                                                  - 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        } else {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = (0x000001feU & ((
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                    >> 1U) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & ((- (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH)) 
                                                  + 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = 1U;
                    } else {
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                             < (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                  << 1U));
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                   - 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                    << 1U)) 
                                                  - 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        } else {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = (0x000003feU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & ((- (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH)) 
                                                  + 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = 0U;
                    }
                    if ((((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER) 
                            | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER)) 
                           | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER)) 
                          | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER)) 
                         & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                               >> 0x0000001bU)))) {
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1dU;
                    } else {
                        vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ = 1U;
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0eU;
                    }
                } else if ((0x18U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX 
                        = (0x00001fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                           >> 0x0000000dU) 
                                          - (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                             >> 0x0000000dU)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY 
                        = (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                          - vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x19U;
                    __Vfunc_Abs__35__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX;
                    vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                        = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__35__C)))
                                           ? (IData)(__Vfunc_Abs__35__C)
                                           : (- (IData)(__Vfunc_Abs__35__C))));
                    __Vfunc_Abs__35__Vfuncout = (0x00000fffU 
                                                 & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX 
                        = __Vfunc_Abs__35__Vfuncout;
                    __Vfunc_Abs__36__C = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY;
                    vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs 
                        = (0x00001fffU & (VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,13, (IData)(__Vfunc_Abs__36__C)))
                                           ? (IData)(__Vfunc_Abs__36__C)
                                           : (- (IData)(__Vfunc_Abs__36__C))));
                    __Vfunc_Abs__36__Vfuncout = (0x00000fffU 
                                                 & (IData)(vlSymsp->TOP__REF_VDP1_PKG.Abs__Vstatic__abs));
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY 
                        = __Vfunc_Abs__36__Vfuncout;
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP = 0U;
                    if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1) 
                          & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2)) 
                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2) 
                                               << 0x0000000cU)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                     >> 0x0cU));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                     >> 0x0cU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2) 
                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX1)) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1) 
                                               << 0x0000000cU)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                     >> 0x0cU));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                     >> 0x0cU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1) 
                                 & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX2) 
                                    | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX2))) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                        >> 0x0cU)));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                        >> 0x0cU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (1U | (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX2) 
                                  | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX2)) 
                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1)) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                     >> 0x0cU));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                            = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                     >> 0x0cU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2) 
                                 & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1) 
                                    | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX1))) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                            = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                               >> 1U)) 
                               | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                        >> 0x0cU)));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                            = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                        >> 0x0cU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (1U | (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    } else {
                        if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX1) 
                               | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX1)) 
                              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2)) 
                             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H))) {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                         >> 0x0cU));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                         >> 0x0cU));
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 1U;
                        } else {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB 
                                = ((0x00fff000U & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                                   >> 1U)) 
                                   | (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                         >> 0x0cU));
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY 
                                = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                         >> 0x0cU));
                            vlSelfRef.diff_top__DOT__u_r__DOT__LINE_CLIP = 0U;
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__DIR 
                            = (2U & (IData)(__Vdly__diff_top__DOT__u_r__DOT__DIR));
                    }
                    if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY) 
                         > (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_INC 
                            = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX) 
                                              << 1U));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_S = 1U;
                        if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                              >> 0x0000000cU) ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP))) {
                            __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC 
                                = (0x00000fffU & (- (IData)((IData)(
                                                                    (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                                                      >> 0x0000000cU) 
                                                                     ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP))))));
                            __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC 
                                = (0x00000fffU & (1U 
                                                  & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                                      >> 0x0cU) 
                                                     ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP))));
                        } else {
                            __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC 
                                = (0x00000fffU & (1U 
                                                  & (~ 
                                                     (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                                       >> 0x0cU) 
                                                      ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP)))));
                            __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC 
                                = (0x00000fffU & (- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                                                                  >> 0x0cU) 
                                                                 ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP)))))));
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_ADJ 
                            = (0x00003fffU & (- ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY) 
                                                 << 1U)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR 
                            = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY) 
                                               - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY) 
                                                  << 1U)) 
                                              - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX) 
                                                 << 1U)));
                        __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH 
                            = (0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY)));
                    } else {
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_INC 
                            = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY) 
                                              << 1U));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_S = 0U;
                        if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX) 
                              >> 0x0000000cU) ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP))) {
                            __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC 
                                = (0x00000fffU & (1U 
                                                  & (~ 
                                                     (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                                       >> 0x0cU) 
                                                      ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP)))));
                            __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC 
                                = (0x00000fffU & (1U 
                                                  & (~ 
                                                     (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                                       >> 0x0cU) 
                                                      ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP)))));
                        } else {
                            __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC 
                                = (0x00000fffU & (- (IData)((IData)(
                                                                    (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                                                      >> 0x0000000cU) 
                                                                     ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP))))));
                            __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC 
                                = (0x00000fffU & (- (IData)((IData)(
                                                                    (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY) 
                                                                      >> 0x0000000cU) 
                                                                     ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP))))));
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR_ADJ 
                            = (0x00003fffU & (- ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX) 
                                                 << 1U)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR 
                            = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX) 
                                               - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX) 
                                                  << 1U)) 
                                              - ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY) 
                                                 << 1U)));
                        __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH 
                            = (0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX)));
                    }
                } else if ((0x19U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if (((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                           <= (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                              - (IData)(1U)))) 
                          & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                             >> 0x0000001cU)) & (~ 
                                                 (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000012U)))) {
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                             < (0x000000ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                               >> 1U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH;
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & ((
                                                   (0x000000ffU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                       >> 1U)) 
                                                   - 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                    << 1U)) 
                                                  - 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        } else {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = (0x000001feU & ((
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                    >> 1U) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                   - 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                    << 1U)) 
                                                  + 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = 1U;
                    } else {
                        if (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                             < (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                  << 1U));
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                   - 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                    << 1U)) 
                                                  - 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        } else {
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_INC 
                                = (0x000003feU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                   - (IData)(1U)) 
                                                  << 1U));
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                                = (0x00003fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                   - 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH) 
                                                    << 1U)) 
                                                  + 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX)) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))))
                                                    ? 0U
                                                    : 1U)));
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__HSS_EN = 0U;
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = 0U;
                    __Vdly__diff_top__DOT__u_r__DOT__AA = 0U;
                    if ((((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER) 
                            | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER)) 
                           | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER)) 
                          | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER)) 
                         & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                               >> 0x0000001bU)))) {
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1dU;
                    } else {
                        vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ 
                            = (1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                        >> 0x00000012U)));
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0eU;
                    }
                } else if ((0x0eU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    __Vdly__diff_top__DOT__u_r__DOT__TEXT_X = 0U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 9U;
                    if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR) 
                                  >> 0x0cU)))) {
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP) {
                            __Vdly__diff_top__DOT__u_r__DOT__TEXT_X 
                                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN)
                                    ? 2U : 1U);
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR;
                    }
                } else if ((9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                        = ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR))
                            ? vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR
                            : vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR);
                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0aU;
                    __Vfunc_RGBFtoI__37__CF = vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR;
                    vlSymsp->TOP__REF_VDP1_PKG.RGBFtoI__Vstatic__CI 
                        = ((0x00007c00U & ((IData)(
                                                   (__Vfunc_RGBFtoI__37__CF 
                                                    >> 0x00000030U)) 
                                           << 0x0000000aU)) 
                           | ((0x000003e0U & ((IData)(
                                                      (__Vfunc_RGBFtoI__37__CF 
                                                       >> 0x0000001eU)) 
                                              << 5U)) 
                              | (0x0000001fU & (IData)(
                                                       (__Vfunc_RGBFtoI__37__CF 
                                                        >> 0x0000000cU)))));
                    __Vfunc_RGBFtoI__37__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.RGBFtoI__Vstatic__CI;
                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1 
                        = __Vfunc_RGBFtoI__37__Vfuncout;
                    __Vfunc_RGBFtoI__38__CF = vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR;
                    vlSymsp->TOP__REF_VDP1_PKG.RGBFtoI__Vstatic__CI 
                        = ((0x00007c00U & ((IData)(
                                                   (__Vfunc_RGBFtoI__38__CF 
                                                    >> 0x00000030U)) 
                                           << 0x0000000aU)) 
                           | ((0x000003e0U & ((IData)(
                                                      (__Vfunc_RGBFtoI__38__CF 
                                                       >> 0x0000001eU)) 
                                              << 5U)) 
                              | (0x0000001fU & (IData)(
                                                       (__Vfunc_RGBFtoI__38__CF 
                                                        >> 0x0000000cU)))));
                    __Vfunc_RGBFtoI__38__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.RGBFtoI__Vstatic__CI;
                    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2 
                        = __Vfunc_RGBFtoI__38__Vfuncout;
                } else if ((0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                    if ((0x14U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE))) {
                        __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE = 0U;
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP;
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
                            = ((0U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))
                                ? 0x11U : ((1U == (0x0000000fU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                      >> 0x00000010U)))
                                            ? 0x14U
                                            : 0x1aU));
                    }
                } else if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT)) 
                            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY))) {
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00000fffU & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                               | (0x00fff000U & (((vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                   >> 0x0000000cU) 
                                                  + 
                                                  (1U 
                                                   | (0x00000ffeU 
                                                      & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                                         << 1U)))) 
                                                 << 0x0000000cU)));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                            = ((0x003ffffffffe0000ULL 
                                & __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                               | (IData)((IData)((0x0001ffffU 
                                                  & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                                                      + 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP) 
                                                       ^ 
                                                       (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                                                      ^ (IData)(
                                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                                >> 0x00000011U)))))))) 
                                                     + 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)) 
                                                      ^ 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                  >> 0x00000011U)))))))));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                            = ((0x003ffff80003ffffULL 
                                & __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                               | ((QData)((IData)((0x0001ffffU 
                                                   & (((IData)(
                                                               (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                                                                >> 0x00000012U)) 
                                                       + 
                                                       ((IData)(
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                 >> 0x00000012U)) 
                                                        ^ 
                                                        (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                                                       ^ (IData)(
                                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                                >> 0x00000023U)))))))) 
                                                      + 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)) 
                                                       ^ 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                   >> 0x00000023U)))))))) 
                                  << 0x00000012U));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                            = ((0x0020000fffffffffULL 
                                & __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                               | ((QData)((IData)((0x0001ffffU 
                                                   & (((IData)(
                                                               (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                                                                >> 0x00000024U)) 
                                                       + 
                                                       ((IData)(
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                 >> 0x00000024U)) 
                                                        ^ 
                                                        (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                                                       ^ (IData)(
                                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                                >> 0x00000035U)))))))) 
                                                      + 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)) 
                                                       ^ 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                   >> 0x00000035U)))))))) 
                                  << 0x00000024U));
                        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_ENABLE = 1U;
                    } else {
                        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_ENABLE = 0U;
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR;
                    if (((((0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                           >> 0x0000000cU)) 
                           == (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB 
                                              >> 0x0000000cU))) 
                          & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP)) 
                         | (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC) 
                             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EC_FIND)) 
                            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ = 0U;
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1dU;
                    }
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__TEXT_X 
                            = (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X) 
                                              + ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN)
                                                  ? 2U
                                                  : 1U)));
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC) {
                            __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = 1U;
                        }
                    }
                }
            } else if ((0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT)) 
                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY) 
                        | (4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_ENABLE 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP;
                    __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR;
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__AA_DRAW = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__AA_X 
                        = (0x00000fffU & ((vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                           >> 0x0000000cU) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AA_X_INC)));
                    vlSelfRef.diff_top__DOT__u_r__DOT__AA_Y 
                        = (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AA_Y_INC)));
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP) {
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP) {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S)
                                    ? ((0x00000fffU 
                                        & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                                       | (0x00fff000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                               >> 0x0000000cU) 
                                              + (1U 
                                                 | (0x00000ffeU 
                                                    & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                                       << 1U)))) 
                                             << 0x0000000cU)))
                                    : ((0x00fff000U 
                                        & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                                       | (0x00000fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                             + (1U 
                                                | (0x00000ffeU 
                                                   & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY))) 
                                                      << 1U)))))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__AA_DRAW = 1U;
                            __Vdly__diff_top__DOT__u_r__DOT__AA = 1U;
                        } else if (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S) {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((0x00fff000U & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                                   | (0x00000fffU & 
                                      (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                       + (1U | (0x00000ffeU 
                                                & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY))) 
                                                   << 1U))))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR 
                                = (((VL_LTS_III(13, 
                                                (0x00001fffU 
                                                 & VL_EXTENDS_II(13,12, 
                                                                 (0x00000fffU 
                                                                  & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                                     >> 0x0000000cU)))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)) 
                                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX)) 
                                    & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                          >> 0x0000001bU))) 
                                   | ((VL_GTS_III(13, 
                                                  (0x00001fffU 
                                                   & VL_EXTENDS_II(13,12, 
                                                                   (0x00000fffU 
                                                                    & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                                       >> 0x0000000cU)))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)) 
                                       & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                      & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                            >> 0x0000001bU))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR 
                                = ((((0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA) 
                                     == (0x00000fffU 
                                         & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB)) 
                                    | ((VL_LTS_III(13, 
                                                   (0x00001fffU 
                                                    & VL_EXTENDS_II(13,12, 
                                                                    (0x00000fffU 
                                                                     & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1)) 
                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY)) 
                                       & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                             >> 0x0000001bU)))) 
                                   | ((VL_GTS_III(13, 
                                                  (0x00001fffU 
                                                   & VL_EXTENDS_II(13,12, 
                                                                   (0x00000fffU 
                                                                    & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2)) 
                                       & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY))) 
                                      & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                            >> 0x0000001bU))));
                        } else {
                            __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                                = ((0x00000fffU & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                                   | (0x00fff000U & 
                                      (((vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                         >> 0x0000000cU) 
                                        + (1U | (0x00000ffeU 
                                                 & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                                    << 1U)))) 
                                       << 0x0000000cU)));
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR 
                                = ((((0x00000fffU & 
                                      (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                       >> 0x0000000cU)) 
                                     == (0x00000fffU 
                                         & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB 
                                            >> 0x0000000cU))) 
                                    | ((VL_LTS_III(13, 
                                                   (0x00001fffU 
                                                    & VL_EXTENDS_II(13,12, 
                                                                    (0x00000fffU 
                                                                     & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                                        >> 0x0000000cU)))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1)) 
                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX)) 
                                       & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                             >> 0x0000001bU)))) 
                                   | ((VL_GTS_III(13, 
                                                  (0x00001fffU 
                                                   & VL_EXTENDS_II(13,12, 
                                                                   (0x00000fffU 
                                                                    & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                                       >> 0x0000000cU)))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2)) 
                                       & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                      & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                            >> 0x0000001bU))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR 
                                = (((VL_LTS_III(13, 
                                                (0x00001fffU 
                                                 & VL_EXTENDS_II(13,12, 
                                                                 (0x00000fffU 
                                                                  & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1)) 
                                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY)) 
                                    & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                          >> 0x0000001bU))) 
                                   | ((VL_GTS_III(13, 
                                                  (0x00001fffU 
                                                   & VL_EXTENDS_II(13,12, 
                                                                   (0x00000fffU 
                                                                    & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA))), (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2)) 
                                       & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY))) 
                                      & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                            >> 0x0000001bU))));
                        }
                        vlSelfRef.diff_top__DOT__u_r__DOT__LINE_ERROR 
                            = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR;
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                            = ((0x003ffffffffe0000ULL 
                                & __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                               | (IData)((IData)((0x0001ffffU 
                                                  & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                                                      + 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP) 
                                                       ^ 
                                                       (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                                                      ^ (IData)(
                                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                                >> 0x00000011U)))))))) 
                                                     + 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)) 
                                                      ^ 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                  >> 0x00000011U)))))))));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                            = ((0x003ffff80003ffffULL 
                                & __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                               | ((QData)((IData)((0x0001ffffU 
                                                   & (((IData)(
                                                               (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                                                                >> 0x00000012U)) 
                                                       + 
                                                       ((IData)(
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                 >> 0x00000012U)) 
                                                        ^ 
                                                        (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                                                       ^ (IData)(
                                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                                >> 0x00000023U)))))))) 
                                                      + 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)) 
                                                       ^ 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                   >> 0x00000023U)))))))) 
                                  << 0x00000012U));
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                            = ((0x0020000fffffffffULL 
                                & __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR) 
                               | ((QData)((IData)((0x0001ffffU 
                                                   & (((IData)(
                                                               (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
                                                                >> 0x00000024U)) 
                                                       + 
                                                       ((IData)(
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                 >> 0x00000024U)) 
                                                        ^ 
                                                        (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                                                       ^ (IData)(
                                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                                >> 0x00000035U)))))))) 
                                                      + 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)) 
                                                       ^ 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
                                                                   >> 0x00000035U)))))))) 
                                  << 0x00000024U));
                    }
                    if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC) 
                          & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__EC_FIND)) 
                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP))) {
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
                            = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__AA_DRAW)
                                ? 0x1cU : 0x1dU);
                    } else if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR) 
                                 | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR)) 
                                & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP))) {
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
                            = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__AA_DRAW)
                                ? 0x1cU : 0x1dU);
                    } else if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__AA_DRAW) {
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1bU;
                    }
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__TEXT_X 
                            = (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X) 
                                              + ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN)
                                                  ? 2U
                                                  : 1U)));
                        if (vlSelfRef.diff_top__DOT__u_r__DOT__IS_PAT_EC) {
                            __Vdly__diff_top__DOT__u_r__DOT__EC_FIND = 1U;
                        }
                    }
                }
            } else if ((0x1bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT)) 
                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY) 
                        | (4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_ENABLE = 1U;
                    __Vdly__diff_top__DOT__u_r__DOT__AA = 0U;
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR = 0U;
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S) {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00fff000U & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                               | (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                 + 
                                                 (1U 
                                                  | (0x00000ffeU 
                                                     & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY))) 
                                                        << 1U))))));
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR 
                            = ((0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA) 
                               == (0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB));
                    } else {
                        __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA 
                            = ((0x00000fffU & __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA) 
                               | (0x00fff000U & (((vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                                   >> 0x0000000cU) 
                                                  + 
                                                  (1U 
                                                   | (0x00000ffeU 
                                                      & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX))) 
                                                         << 1U)))) 
                                                 << 0x0000000cU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR 
                            = ((0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA 
                                               >> 0x0000000cU)) 
                               == (0x00000fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB 
                                                  >> 0x0000000cU)));
                    }
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
                        = ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR) 
                             | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR)) 
                            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP))
                            ? 0x1dU : 0x1aU);
                }
            } else if ((0x1cU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                if (((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT)) 
                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY) 
                        | (4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_ENABLE 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__AA;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1dU;
                    __Vdly__diff_top__DOT__u_r__DOT__AA = 0U;
                }
            } else if ((0x1dU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ = 0U;
                __Vdly__diff_top__DOT__u_r__DOT__TEXT_X = 0U;
                if ((((((0U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                        | (1U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                       | (2U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                      | (3U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                     | (4U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_X_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                            = ((0x00001fffU & __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT) 
                               | (0x03ffe000U & (((vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                   >> 0x0000000dU) 
                                                  + 
                                                  (1U 
                                                   | (0x00001ffeU 
                                                      & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRX))) 
                                                         << 1U)))) 
                                                 << 0x0000000dU)));
                    }
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_X_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                            = ((0x00001fffU & __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT) 
                               | (0x03ffe000U & (((vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                                   >> 0x0000000dU) 
                                                  + 
                                                  (1U 
                                                   | (0x00001ffeU 
                                                      & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRX))) 
                                                         << 1U)))) 
                                                 << 0x0000000dU)));
                    }
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_D_ERROR 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_D_ERROR;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_X;
                    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_Y;
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_D_ERROR 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_D_ERROR;
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_X;
                    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y 
                        = vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_Y;
                    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                        = ((0x003ffffffffe0000ULL & __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR) 
                           | (IData)((IData)((0x0001ffffU 
                                              & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP) 
                                                   ^ 
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                                          >> 0x00000011U))))))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                             >> 0x00000011U))))))));
                    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                        = ((0x003ffffffffe0000ULL & __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR) 
                           | (IData)((IData)((0x0001ffffU 
                                              & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR) 
                                                  + 
                                                  ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP) 
                                                   ^ 
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                                          >> 0x00000011U))))))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                             >> 0x00000011U))))))));
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST 
                        = ((1U & ((~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                      >> 0x0000001bU)) 
                                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FAST))))
                            ? 0x1eU : 0x0bU);
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_COL_Y_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                            = ((0x03ffe000U & __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT) 
                               | (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT 
                                                 + 
                                                 (1U 
                                                  | (0x00001ffeU 
                                                     & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRY))) 
                                                        << 1U))))));
                    }
                    if (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_COL_Y_STEP) {
                        __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                            = ((0x03ffe000U & __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT) 
                               | (0x00001fffU & (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                                 + 
                                                 (1U 
                                                  | (0x00001ffeU 
                                                     & ((- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRY))) 
                                                        << 1U))))));
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                        = ((0x003ffff80003ffffULL & __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR) 
                           | ((QData)((IData)((0x0001ffffU 
                                               & (((IData)(
                                                           (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                                                            >> 0x00000012U)) 
                                                   + 
                                                   ((IData)(
                                                            (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                             >> 0x00000012U)) 
                                                    ^ 
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                                           >> 0x00000023U))))))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                              >> 0x00000023U))))))) 
                              << 0x00000012U));
                    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                        = ((0x003ffff80003ffffULL & __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR) 
                           | ((QData)((IData)((0x0001ffffU 
                                               & (((IData)(
                                                           (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                                                            >> 0x00000012U)) 
                                                   + 
                                                   ((IData)(
                                                            (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                             >> 0x00000012U)) 
                                                    ^ 
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                                           >> 0x00000023U))))))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                              >> 0x00000023U))))))) 
                              << 0x00000012U));
                    __Vdly__diff_top__DOT__u_r__DOT__COL_D 
                        = (0x00001fffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_D) 
                                          - (IData)(1U)));
                    __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                        = ((0x0020000fffffffffULL & __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR) 
                           | ((QData)((IData)((0x0001ffffU 
                                               & (((IData)(
                                                           (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                                                            >> 0x00000024U)) 
                                                   + 
                                                   ((IData)(
                                                            (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                             >> 0x00000024U)) 
                                                    ^ 
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                                           >> 0x00000035U))))))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
                                                              >> 0x00000035U))))))) 
                              << 0x00000024U));
                    __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                        = ((0x0020000fffffffffULL & __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR) 
                           | ((QData)((IData)((0x0001ffffU 
                                               & (((IData)(
                                                           (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                                                            >> 0x00000024U)) 
                                                   + 
                                                   ((IData)(
                                                            (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                             >> 0x00000024U)) 
                                                    ^ 
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                                           >> 0x00000035U))))))) 
                                                  + 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
                                                              >> 0x00000035U))))))) 
                              << 0x00000024U));
                    if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__COL_D))) {
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1fU;
                    }
                } else if (((5U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                   >> 0x00000010U))) 
                            | (7U == (0x0000000fU & 
                                      (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                       >> 0x00000010U))))) {
                    if ((2U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_S))) {
                        if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_S))) {
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1fU;
                        } else {
                            __Vfunc_RGBItoF__39__CI 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_D;
                            __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__VERTD;
                            __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__VERTA;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffffffffc0000ULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | (IData)((IData)(
                                                     (0x0001f000U 
                                                      & ((IData)(__Vfunc_RGBItoF__39__CI) 
                                                         << 0x0000000cU)))));
                            vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0bU;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffff00003ffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__39__CI) 
                                                          << 7U)))) 
                                      << 0x00000012U));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x0000000fffffffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__39__CI) 
                                                          << 2U)))) 
                                      << 0x00000024U));
                            __Vfunc_RGBItoF__39__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                            __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                                = __Vfunc_RGBItoF__39__Vfuncout;
                            __Vfunc_RGBItoF__40__CI 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_A;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffffffffc0000ULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | (IData)((IData)(
                                                     (0x0001f000U 
                                                      & ((IData)(__Vfunc_RGBItoF__40__CI) 
                                                         << 0x0000000cU)))));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffff00003ffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__40__CI) 
                                                          << 7U)))) 
                                      << 0x00000012U));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x0000000fffffffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__40__CI) 
                                                          << 2U)))) 
                                      << 0x00000024U));
                            __Vfunc_RGBItoF__40__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                            __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                                = __Vfunc_RGBItoF__40__Vfuncout;
                        }
                    } else {
                        if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_S))) {
                            __Vfunc_RGBItoF__41__CI 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_C;
                            __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__VERTC;
                            __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__VERTD;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffffffffc0000ULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | (IData)((IData)(
                                                     (0x0001f000U 
                                                      & ((IData)(__Vfunc_RGBItoF__41__CI) 
                                                         << 0x0000000cU)))));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffff00003ffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__41__CI) 
                                                          << 7U)))) 
                                      << 0x00000012U));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x0000000fffffffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__41__CI) 
                                                          << 2U)))) 
                                      << 0x00000024U));
                            __Vfunc_RGBItoF__41__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                            __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                                = __Vfunc_RGBItoF__41__Vfuncout;
                            __Vfunc_RGBItoF__42__CI 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_D;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffffffffc0000ULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | (IData)((IData)(
                                                     (0x0001f000U 
                                                      & ((IData)(__Vfunc_RGBItoF__42__CI) 
                                                         << 0x0000000cU)))));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffff00003ffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__42__CI) 
                                                          << 7U)))) 
                                      << 0x00000012U));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x0000000fffffffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__42__CI) 
                                                          << 2U)))) 
                                      << 0x00000024U));
                            __Vfunc_RGBItoF__42__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                            __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                                = __Vfunc_RGBItoF__42__Vfuncout;
                        } else {
                            __Vfunc_RGBItoF__43__CI 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_B;
                            __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__VERTB;
                            __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__VERTC;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffffffffc0000ULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | (IData)((IData)(
                                                     (0x0001f000U 
                                                      & ((IData)(__Vfunc_RGBItoF__43__CI) 
                                                         << 0x0000000cU)))));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffff00003ffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__43__CI) 
                                                          << 7U)))) 
                                      << 0x00000012U));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x0000000fffffffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__43__CI) 
                                                          << 2U)))) 
                                      << 0x00000024U));
                            __Vfunc_RGBItoF__43__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                            __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
                                = __Vfunc_RGBItoF__43__Vfuncout;
                            __Vfunc_RGBItoF__44__CI 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_C;
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffffffffc0000ULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | (IData)((IData)(
                                                     (0x0001f000U 
                                                      & ((IData)(__Vfunc_RGBItoF__44__CI) 
                                                         << 0x0000000cU)))));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x003ffff00003ffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__44__CI) 
                                                          << 7U)))) 
                                      << 0x00000012U));
                            vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF 
                                = ((0x0000000fffffffffULL 
                                    & vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF) 
                                   | ((QData)((IData)(
                                                      (0x0001f000U 
                                                       & ((IData)(__Vfunc_RGBItoF__44__CI) 
                                                          << 2U)))) 
                                      << 0x00000024U));
                            __Vfunc_RGBItoF__44__Vfuncout 
                                = vlSymsp->TOP__REF_VDP1_PKG.RGBItoF__Vstatic__CF;
                            __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
                                = __Vfunc_RGBItoF__44__Vfuncout;
                        }
                        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0bU;
                    }
                    __Vdly__diff_top__DOT__u_r__DOT__POLY_S 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__POLY_S)));
                } else {
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x1fU;
                }
            } else if ((0x1eU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY 
                    = (0x000001ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY) 
                                      - (IData)(1U)));
                if ((1U & ((~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY))) 
                           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT) 
                              >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY))))) {
                    __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY = 8U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0x0bU;
                }
            } else if ((0x1fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEXT_ADDR 
                    = (0x0003ffffU & ((IData)(0x00000010U) 
                                      + vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ADDR));
                if ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                     >> 0x0000001fU)) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_END = 1U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0U;
                } else {
                    vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ = 1U;
                    vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 1U;
                }
                if ((0x20000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                    if ((0x10000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                        __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR 
                            = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN)
                                ? vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_RET_ADDR
                                : vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEXT_ADDR);
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 0U;
                    } else {
                        __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR 
                            = (0x0003fff0U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              << 2U));
                        if ((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_RET_ADDR 
                                = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEXT_ADDR;
                        }
                        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 1U;
                    }
                } else {
                    __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR 
                        = ((0x10000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])
                            ? (0x0003fff0U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              << 2U))
                            : vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEXT_ADDR);
                }
            }
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__RES_N) {
            if (vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) {
                vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VTIM_N_OLD 
                    = vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N;
            }
            vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__START_DRAW_PEND = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_TERMINATE = 0U;
            if ((((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REG_REQ) 
                  & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__WE_N))) 
                 & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N)))) {
                if (((2U == (0x0000001fU & vlSelfRef.diff_top__DOT__u_r__DOT__A)) 
                     & (1U == (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI))))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__START_DRAW_PEND = 1U;
                }
                if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.diff_top__DOT__u_r__DOT__A)) {
                                if ((1U & (~ vlSelfRef.diff_top__DOT__u_r__DOT__A))) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__PTMR 
                                        = (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI));
                                }
                            }
                            if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__A 
                                          >> 1U)))) {
                                if ((1U & vlSelfRef.diff_top__DOT__u_r__DOT__A)) {
                                    vlSelfRef.diff_top__DOT__u_r__DOT__FBCR 
                                        = (0x001fU 
                                           & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI));
                                }
                            }
                        }
                    }
                }
                if (((6U == (0x0000001fU & vlSelfRef.diff_top__DOT__u_r__DOT__A)) 
                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DI) 
                        >> 1U))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_TERMINATE = 1U;
                }
            }
        } else {
            vlSelfRef.diff_top__DOT__u_r__DOT__PTMR = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__FBCR = 0U;
        }
        if ((((((((0x1aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
                  & (3U >= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U)))) 
                 | (0x11U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
                | (0x14U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
               & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD_WAIT)) 
              & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY))) 
             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R))) {
            __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT)));
        }
        if (((((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
               | (0x1eU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST))) 
              & (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY))) 
             & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT) 
                >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY)))) {
            __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT 
                = (0x000003ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT) 
                                  - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY)));
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__CMD_WE) {
            if (((((((((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS)) 
                       | (6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) 
                      | (7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) 
                     | (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) 
                    | (9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) 
                   | (0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) 
                  | (0x0bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) 
                 | (0x0cU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS)))) {
                if ((5U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    __Vdly__diff_top__DOT__u_r__DOT__ORIG_WIDTH 
                        = ((0x000001f8U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                           >> 5U)) 
                           | (1U & (~ (0U != (0x0000003fU 
                                              & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 >> 8U))))));
                    __Vdly__diff_top__DOT__u_r__DOT__ORIG_HEIGHT 
                        = (0x000000ffU & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                          | (1U & (~ 
                                                   (0U 
                                                    != 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))))));
                } else if ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    if ((0U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP 
                            = (0x00001fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                               + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH)) 
                                              - (IData)(1U)));
                        __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                            = ((0x00001fffU & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                               | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP) 
                                  << 0x0000000dU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                               | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP) 
                                  << 0x0000000dU));
                    } else if ((1U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                        __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                            = ((0x00001fffU & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                    } else if (((((((2U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                                    || (3U == (0x0000000fU 
                                               & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                                   || (4U == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                                  || (5U == (0x0000000fU 
                                             & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                                 || (7U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                                || (6U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                        __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                            = ((0x00001fffU & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                    } else if (((8U == (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U))) 
                                || (0x0bU == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                            = ((0x00000001ffffffffULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP) 
                               | ((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))) 
                                  << 0x00000021U));
                    } else if ((9U != (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                        if ((0x0aU == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                = ((0x00000fffU & vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD) 
                                   | (0x00fff000U & 
                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                       << 0x0000000cU)));
                        }
                    }
                } else if ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    if ((0U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP 
                            = (0x00001fffU & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                               + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT)) 
                                              - (IData)(1U)));
                        __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                            = ((0x03ffe000U & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                               | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                               | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP));
                    } else if ((1U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                        __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                            = ((0x03ffe000U & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                    } else if (((((((2U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                                    || (3U == (0x0000000fU 
                                               & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                                   || (4U == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                                  || (5U == (0x0000000fU 
                                             & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                                 || (7U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                                || (6U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                        __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                            = ((0x03ffe000U & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                    } else if (((8U == (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U))) 
                                || (0x0bU == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                            = ((0x00000ffe003fffffULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP) 
                               | ((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))) 
                                  << 0x00000016U));
                    } else if ((9U != (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                        if ((0x0aU == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD 
                                = ((0x00fff000U & vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD) 
                                   | (0x00000fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                        }
                    }
                } else if ((8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    if ((1U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                        if ((0x02000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                            if ((0x01000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                                __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                                    = ((0x00001fffU 
                                        & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                                       | (0x03ffe000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                               >> 0x0000000dU) 
                                              - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)) 
                                             << 0x0000000dU)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                    = ((0x00001fffU 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                                       | (0x03ffe000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                               >> 0x0000000dU) 
                                              - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)) 
                                             << 0x0000000dU)));
                            } else {
                                __Vfunc_SDiv2__61__C 
                                    = (0x00001fffU 
                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_7__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__61__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__61__C) 
                                             >> 1U)));
                                __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                                    = ((0x00001fffU 
                                        & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                                       | (0x03ffe000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                               >> 0x0000000dU) 
                                              - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_7__SDiv2)) 
                                             << 0x0000000dU)));
                                __Vfunc_SDiv2__62__C 
                                    = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_8__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__62__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__62__C) 
                                             >> 1U)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                    = ((0x00001fffU 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                                       | (0x03ffe000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                               >> 0x0000000dU) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_8__SDiv2)) 
                                             << 0x0000000dU)));
                                __Vfunc_SDiv2__63__C 
                                    = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_9__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__63__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__63__C) 
                                             >> 1U)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                    = ((0x00001fffU 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                                       | (0x03ffe000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                               >> 0x0000000dU) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_9__SDiv2)) 
                                             << 0x0000000dU)));
                                __Vfunc_SDiv2__64__C 
                                    = (0x00001fffU 
                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_10__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__64__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__64__C) 
                                             >> 1U)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                    = ((0x00001fffU 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                                       | (0x03ffe000U 
                                          & (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                               >> 0x0000000dU) 
                                              - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_10__SDiv2)) 
                                             << 0x0000000dU)));
                            }
                        } else if ((0x01000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                                   | (0x03ffe000U & 
                                      (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                         >> 0x0000000dU) 
                                        + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)) 
                                       << 0x0000000dU)));
                            vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                                   | (0x03ffe000U & 
                                      (((vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                         >> 0x0000000dU) 
                                        + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)) 
                                       << 0x0000000dU)));
                        }
                    } else if (((((((2U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                                    || (3U == (0x0000000fU 
                                               & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                                   || (4U == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                                  || (5U == (0x0000000fU 
                                             & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                                 || (7U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                                || (6U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                    }
                } else if ((9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    if ((1U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                        if ((0x08000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                            if ((0x04000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                                __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                                    = ((0x03ffe000U 
                                        & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                                       | (0x00001fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                             - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT))));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                    = ((0x03ffe000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                                       | (0x00001fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                             - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT))));
                            } else {
                                __Vfunc_SDiv2__65__C 
                                    = (0x00001fffU 
                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_11__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__65__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__65__C) 
                                             >> 1U)));
                                __Vdly__diff_top__DOT__u_r__DOT__VERTA 
                                    = ((0x03ffe000U 
                                        & __Vdly__diff_top__DOT__u_r__DOT__VERTA) 
                                       | (0x00001fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                             - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_11__SDiv2))));
                                __Vfunc_SDiv2__66__C 
                                    = (0x00001fffU 
                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_12__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__66__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__66__C) 
                                             >> 1U)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                    = ((0x03ffe000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                                       | (0x00001fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                             - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_12__SDiv2))));
                                __Vfunc_SDiv2__67__C 
                                    = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_13__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__67__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__67__C) 
                                             >> 1U)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                    = ((0x03ffe000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                                       | (0x00001fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                             + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_13__SDiv2))));
                                __Vfunc_SDiv2__68__C 
                                    = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                                vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_14__SDiv2 
                                    = ((0x00001000U 
                                        & (IData)(__Vfunc_SDiv2__68__C)) 
                                       | (0x00000fffU 
                                          & ((IData)(__Vfunc_SDiv2__68__C) 
                                             >> 1U)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                    = ((0x03ffe000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                                       | (0x00001fffU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                             + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_14__SDiv2))));
                            }
                        } else if ((0x04000000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
                            vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                                   | (0x00001fffU & 
                                      (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                       + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT))));
                            vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                                   | (0x00001fffU & 
                                      (vlSelfRef.diff_top__DOT__u_r__DOT__VERTA 
                                       + (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT))));
                        }
                    } else if (((((((2U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                                    || (3U == (0x0000000fU 
                                               & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                                   || (4U == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                                  || (5U == (0x0000000fU 
                                             & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                                 || (7U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                                || (6U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                    }
                } else if ((0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    if ((1U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                        if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                      >> 0x00000019U)))) {
                            if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000018U)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTB 
                                    = ((0x00001fffU 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTB) 
                                       | (0x03ffe000U 
                                          & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                             << 0x0000000dU)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                    = ((0x00001fffU 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                                       | (0x03ffe000U 
                                          & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                             << 0x0000000dU)));
                            }
                        }
                    } else if (((((((2U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                                    || (3U == (0x0000000fU 
                                               & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                                   || (4U == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                                  || (5U == (0x0000000fU 
                                             & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                                 || (7U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                                || (6U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                            = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                               | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                                 << 0x0000000dU)));
                    } else if (((8U == (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U))) 
                                || (0x0bU == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                            = ((0x00000fffffc007ffULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP) 
                               | ((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))) 
                                  << 0x0000000bU));
                    } else if ((9U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                            = ((0x00000fffffc007ffULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP) 
                               | ((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))) 
                                  << 0x0000000bU));
                        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                            = ((0x00000fffffc007ffULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP) 
                               | ((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))) 
                                  << 0x0000000bU));
                    }
                } else if ((0x0bU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                    if ((1U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) {
                        if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                      >> 0x0000001bU)))) {
                            if ((1U & (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x0000001aU)))) {
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                                    = ((0x03ffe000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                                       | (0x00001fffU 
                                          & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                                vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                                    = ((0x03ffe000U 
                                        & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                                       | (0x00001fffU 
                                          & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                            }
                        }
                    } else if (((((((2U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))) 
                                    || (3U == (0x0000000fU 
                                               & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                                   || (4U == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                                  || (5U == (0x0000000fU 
                                             & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                                 || (7U == (0x0000000fU 
                                            & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U)))) 
                                || (6U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__VERTC 
                            = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTC) 
                               | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                    } else if (((8U == (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U))) 
                                || (0x0bU == (0x0000000fU 
                                              & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U))))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                            = ((0x00000ffffffff800ULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP) 
                               | (IData)((IData)((0x000003ffU 
                                                  & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))));
                    } else if ((9U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U)))) {
                        vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                            = ((0x00000ffffffff800ULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP) 
                               | (IData)((IData)((0x000003ffU 
                                                  & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))));
                        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                            = ((0x00000ffffffff800ULL 
                                & vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP) 
                               | (IData)((IData)((0x000003ffU 
                                                  & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)))));
                    }
                } else if (((((((2U == (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U))) 
                                || (3U == (0x0000000fU 
                                           & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                              >> 0x00000010U)))) 
                               || (4U == (0x0000000fU 
                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                             >> 0x00000010U)))) 
                              || (5U == (0x0000000fU 
                                         & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                            >> 0x00000010U)))) 
                             || (7U == (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                           >> 0x00000010U)))) 
                            || (6U == (0x0000000fU 
                                       & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                          >> 0x00000010U))))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                        = ((0x00001fffU & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                           | (0x03ffe000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                                             << 0x0000000dU)));
                }
            } else if ((0x0dU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                if (((((((2U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U))) 
                         || (3U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                   >> 0x00000010U)))) 
                        || (4U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                  >> 0x00000010U)))) 
                       || (5U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                 >> 0x00000010U)))) 
                      || (7U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                >> 0x00000010U)))) 
                     || (6U == (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                               >> 0x00000010U))))) {
                    vlSelfRef.diff_top__DOT__u_r__DOT__VERTD 
                        = ((0x03ffe000U & vlSelfRef.diff_top__DOT__u_r__DOT__VERTD) 
                           | (0x00001fffU & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT)));
                }
            }
            if ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                    = ((0x0000ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U]) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                          << 0x00000010U));
            } else if ((1U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                    = ((0xffff0000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U]) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT));
            } else if ((2U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                    = ((0x0000ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                          << 0x00000010U));
            } else if ((3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                    = ((0xffff0000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U]) 
                       | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT));
            } else if ((4U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CMD[5U] 
                    = ((0x0000ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[5U]) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                          << 0x00000010U));
            } else if ((0x0eU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS))) {
                vlSelfRef.diff_top__DOT__u_r__DOT__CMD[0U] 
                    = ((0x0000ffffU & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[0U]) 
                       | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT) 
                          << 0x00000010U));
            }
        }
        if (vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__GRD_WE) {
            __VdlyVal__diff_top__DOT__u_r__DOT__GRD_TBL__v0 
                = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT;
            __VdlyDim0__diff_top__DOT__u_r__DOT__GRD_TBL__v0 
                = (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS));
            __VdlySet__diff_top__DOT__u_r__DOT__GRD_TBL__v0 = 1U;
        }
        vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS 
            = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS;
        vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT 
            = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q;
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__EWDR = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__OUT_Y = 0U;
        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__OUT_X = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__VRAM_A = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_D = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__FB_ST = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB_A = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB_D = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__FB_WE = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__FB_RD = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND = 0U;
        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__A = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__BURST = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__READY = 1U;
        __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RRDY = 1U;
        __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY = 1U;
        __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RRDY = 1U;
        __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_FULL = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__EWRR = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__EWLR = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__DQM = 3U;
        __Vdly__diff_top__DOT__u_r__DOT__FBD_ST = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_PEND = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB_READ_PEND = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_NEXT = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__EDSR = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__IRQ_N = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PTMR = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__FBCR = 0U;
        vlSelfRef.__Vdly__diff_top__DOT__u_r__DOT__CMD_ST = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ = 0U;
        __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_TERMINATE = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP = 0ULL;
        vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP = 0ULL;
        vlSelfRef.diff_top__DOT__u_r__DOT__LOC_COORD = 0U;
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS;
    vlSelfRef.diff_top__DOT__u_r__DOT__RP_Xst = __Vdly__diff_top__DOT__u_r__DOT__RP_Xst;
    vlSelfRef.diff_top__DOT__u_r__DOT__RP_Yst = __Vdly__diff_top__DOT__u_r__DOT__RP_Yst;
    vlSelfRef.diff_top__DOT__u_r__DOT__RP_DXst = __Vdly__diff_top__DOT__u_r__DOT__RP_DXst;
    vlSelfRef.diff_top__DOT__u_r__DOT__RP_DYst = __Vdly__diff_top__DOT__u_r__DOT__RP_DYst;
    vlSelfRef.diff_top__DOT__u_r__DOT__RP_DX = __Vdly__diff_top__DOT__u_r__DOT__RP_DX;
    vlSelfRef.diff_top__DOT__u_r__DOT__RP_DY = __Vdly__diff_top__DOT__u_r__DOT__RP_DY;
    vlSelfRef.diff_top__DOT__u_r__DOT__RXst = __Vdly__diff_top__DOT__u_r__DOT__RXst;
    vlSelfRef.diff_top__DOT__u_r__DOT__RYst = __Vdly__diff_top__DOT__u_r__DOT__RYst;
    vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y = __Vdly__diff_top__DOT__u_r__DOT__OUT_Y;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3;
    vlSelfRef.diff_top__DOT__u_r__DOT__BURST = __Vdly__diff_top__DOT__u_r__DOT__BURST;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT;
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RPEND 
        = __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_RPEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND 
        = __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WPEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST = __Vdly__diff_top__DOT__u_r__DOT__FB_ST;
    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_A = __Vdly__diff_top__DOT__u_r__DOT__VRAM_A;
    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL = __Vdly__diff_top__DOT__u_r__DOT__VRAM_SEL;
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND 
        = __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND 
        = __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__FBRAM_SEL = __Vdly__diff_top__DOT__u_r__DOT__FBRAM_SEL;
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY 
        = __Vdly__diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY;
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WRDY 
        = __Vdly__diff_top__DOT__u_r__DOT__CPU_FB_WRDY;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD 
        = __Vdly__diff_top__DOT__u_r__DOT__PAT_PREREAD;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD = __Vdly__diff_top__DOT__u_r__DOT__FB_RD;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE = __Vdly__diff_top__DOT__u_r__DOT__FB_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT = __Vdly__diff_top__DOT__u_r__DOT__PAT_CNT;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WREN 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT_WE;
    vlSelfRef.diff_top__DOT__VRAM_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_A;
    vlSelfRef.diff_top__DOT__VRAM_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_D;
    vlSelfRef.diff_top__DOT__VRAM_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE;
    vlSelfRef.diff_top__DOT__VRAM_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD;
    vlSelfRef.diff_top__DOT__VRAM_BLEN_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN;
    vlSelfRef.diff_top__DOT__u_r__DOT__RDY_N = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY) 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WRDY) 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RRDY) 
                                                          & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RRDY) 
                                                             & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__READY)))))));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WREN;
    vlSelfRef.VRAM_A_r = vlSelfRef.diff_top__DOT__VRAM_A_r;
    vlSelfRef.VRAM_D_r = vlSelfRef.diff_top__DOT__VRAM_D_r;
    vlSelfRef.VRAM_WE_r = vlSelfRef.diff_top__DOT__VRAM_WE_r;
    vlSelfRef.VRAM_RD_r = vlSelfRef.diff_top__DOT__VRAM_RD_r;
    vlSelfRef.VRAM_BLEN_r = vlSelfRef.diff_top__DOT__VRAM_BLEN_r;
    vlSelfRef.diff_top__DOT__RDY_N_r = vlSelfRef.diff_top__DOT__u_r__DOT__RDY_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WAIT 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RPEND) 
              | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))));
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND) 
              | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND) 
                 | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS))));
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND;
    vlSelfRef.diff_top__DOT__u_r__DOT__VBOUT = __Vdly__diff_top__DOT__u_r__DOT__VBOUT;
    vlSelfRef.diff_top__DOT__u_r__DOT__EDSR = __Vdly__diff_top__DOT__u_r__DOT__EDSR;
    vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE = __Vdly__diff_top__DOT__u_r__DOT__HTIM_PIPE;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL = __Vdly__diff_top__DOT__u_r__DOT__FB_SEL;
    vlSelfRef.RDY_N_r = vlSelfRef.diff_top__DOT__RDY_N_r;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_RA = (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                    >> 2U));
    vlSelfRef.diff_top__DOT__IRQ_N_r = vlSelfRef.diff_top__DOT__u_r__DOT__IRQ_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE_EN 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ERASE_HIT) 
           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE)));
    vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ERASE_HIT) 
           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE) 
              & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N) 
                 | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_PIPE)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB0_RD = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB1_RD = ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL)) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT_RA;
    vlSelfRef.IRQ_N_r = vlSelfRef.diff_top__DOT__IRQ_N_r;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE 
        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) 
            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN)) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE_EN)));
    if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_r__DOT__FB_D;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_r__DOT__EWDR;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q 
            = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_Q;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE = 
            (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE));
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE = 
            (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE))));
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_r__DOT__EWDR;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_r__DOT__FB_D;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q 
            = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_Q;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE = 
            (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE))));
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE = 
            (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE));
    }
    vlSelfRef.diff_top__DOT__FB0_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_RD;
    vlSelfRef.diff_top__DOT__FB1_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_RD;
    vlSelfRef.diff_top__DOT__FB0_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D;
    vlSelfRef.diff_top__DOT__FB1_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_START 
        = __Vdly__diff_top__DOT__u_r__DOT__FRAME_START;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP;
    vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ADDR = __Vdly__diff_top__DOT__u_r__DOT__CMD_ADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__PENALTY_CNT 
        = __Vdly__diff_top__DOT__u_r__DOT__PENALTY_CNT;
    vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DELAY = __Vdly__diff_top__DOT__u_r__DOT__CMD_DELAY;
    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_VERT = __Vdly__diff_top__DOT__u_r__DOT__LEFT_VERT;
    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_VERT = __Vdly__diff_top__DOT__u_r__DOT__RIGHT_VERT;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H 
        = __Vdly__diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSX = __Vdly__diff_top__DOT__u_r__DOT__POLY_LSX;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LSY = __Vdly__diff_top__DOT__u_r__DOT__POLY_LSY;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSX = __Vdly__diff_top__DOT__u_r__DOT__POLY_RSX;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RSY = __Vdly__diff_top__DOT__u_r__DOT__POLY_RSY;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRX = __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRX;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_LDIRY = __Vdly__diff_top__DOT__u_r__DOT__POLY_LDIRY;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRX = __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRX;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_RDIRY = __Vdly__diff_top__DOT__u_r__DOT__POLY_RDIRY;
    vlSelfRef.diff_top__DOT__u_r__DOT__POLY_S = __Vdly__diff_top__DOT__u_r__DOT__POLY_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X = __Vdly__diff_top__DOT__u_r__DOT__TEXT_X;
    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR 
        = __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR;
    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR 
        = __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR;
    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_HEIGHT 
        = __Vdly__diff_top__DOT__u_r__DOT__LEFT_HEIGHT;
    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_HEIGHT 
        = __Vdly__diff_top__DOT__u_r__DOT__RIGHT_HEIGHT;
    vlSelfRef.diff_top__DOT__u_r__DOT__COL_HEIGHT = __Vdly__diff_top__DOT__u_r__DOT__COL_HEIGHT;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y = __Vdly__diff_top__DOT__u_r__DOT__TEXT_Y;
    vlSelfRef.diff_top__DOT__u_r__DOT__COL_D = __Vdly__diff_top__DOT__u_r__DOT__COL_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP 
        = __Vdly__diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP;
    vlSelfRef.diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP 
        = __Vdly__diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTB = __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTB;
    vlSelfRef.diff_top__DOT__u_r__DOT__ROW_WIDTH = __Vdly__diff_top__DOT__u_r__DOT__ROW_WIDTH;
    vlSelfRef.diff_top__DOT__u_r__DOT__AA_X_INC = __Vdly__diff_top__DOT__u_r__DOT__AA_X_INC;
    vlSelfRef.diff_top__DOT__u_r__DOT__AA_Y_INC = __Vdly__diff_top__DOT__u_r__DOT__AA_Y_INC;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP 
        = __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_VERTA = __Vdly__diff_top__DOT__u_r__DOT__LINE_VERTA;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRX = __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRX;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_GHCOLOR 
        = __Vdly__diff_top__DOT__u_r__DOT__LINE_GHCOLOR;
    vlSelfRef.diff_top__DOT__u_r__DOT__EC_FIND = __Vdly__diff_top__DOT__u_r__DOT__EC_FIND;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_S = __Vdly__diff_top__DOT__u_r__DOT__LINE_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DIRY = __Vdly__diff_top__DOT__u_r__DOT__LINE_DIRY;
    vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST = __Vdly__diff_top__DOT__u_r__DOT__FBD_ST;
    vlSelfRef.diff_top__DOT__u_r__DOT__HSS_EN = __Vdly__diff_top__DOT__u_r__DOT__HSS_EN;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE 
        = __Vdly__diff_top__DOT__u_r__DOT__GRD_CALC_STATE;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_ERROR = __Vdly__diff_top__DOT__u_r__DOT__TEXT_ERROR;
    vlSelfRef.diff_top__DOT__u_r__DOT__AA = __Vdly__diff_top__DOT__u_r__DOT__AA;
    vlSelfRef.diff_top__DOT__u_r__DOT__DIR = __Vdly__diff_top__DOT__u_r__DOT__DIR;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR;
    vlSelfRef.FB0_RD_r = vlSelfRef.diff_top__DOT__FB0_RD_r;
    vlSelfRef.FB1_RD_r = vlSelfRef.diff_top__DOT__FB1_RD_r;
    vlSelfRef.FB0_D_r = vlSelfRef.diff_top__DOT__FB0_D_r;
    vlSelfRef.FB1_D_r = vlSelfRef.diff_top__DOT__FB1_D_r;
    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT = 
        ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY) 
         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST)));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RST 
        = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_READ)));
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_R = ((
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                      - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                         - (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_G = ((
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 5U)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 5U)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 5U) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 5U)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                          >> 5U) 
                                                         - 
                                                         ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                          >> 5U)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_B = ((
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 0x0000000aU)) 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 0x0000000aU)))
                                                   ? 
                                                  (0x0000001fU 
                                                   & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                       >> 0x0000000aU) 
                                                      - 
                                                      ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  (0x00000020U 
                                                   | (0x0000001fU 
                                                      & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_1) 
                                                          >> 0x0000000aU) 
                                                         - 
                                                         ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_2) 
                                                          >> 0x0000000aU)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__FB0_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE;
    vlSelfRef.diff_top__DOT__FB1_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RST 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RST;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_R) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_G) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_B) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_HEIGHT 
        = __Vdly__diff_top__DOT__u_r__DOT__ORIG_HEIGHT;
    vlSelfRef.diff_top__DOT__u_r__DOT__VERTA = __Vdly__diff_top__DOT__u_r__DOT__VERTA;
    vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH = __Vdly__diff_top__DOT__u_r__DOT__ORIG_WIDTH;
    if (__VdlySet__diff_top__DOT__u_r__DOT__GRD_TBL__v0) {
        vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[__VdlyDim0__diff_top__DOT__u_r__DOT__GRD_TBL__v0] 
            = __VdlyVal__diff_top__DOT__u_r__DOT__GRD_TBL__v0;
    }
    vlSelfRef.FB0_WE_r = vlSelfRef.diff_top__DOT__FB0_WE_r;
    vlSelfRef.FB1_WE_r = vlSelfRef.diff_top__DOT__FB1_WE_r;
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_A = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[0U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_C = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[2U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_B = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[1U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__GHCOLOR_D = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_r__DOT__GRD_TBL[3U]);
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__CMD_WE 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RST_N) 
           && ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
               & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)));
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__GRD_WE 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__RST_N) 
           && ((9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
               & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_ADDR = (0x0003fff0U 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                      << 2U));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_ADDR = (0x0003fffcU 
                                                   & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[0U] 
                                                      >> 0x0000000eU));
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX = 
        (1U & ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                >> 0x00000014U) ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)));
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY = 
        (1U & ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                >> 0x00000015U) ^ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                   >> 1U)));
    if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                               >> 0x00000010U)))) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1 = 0x0003ffffU;
    } else {
        vlSelfRef.__Vfunc_SprAddr__47__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                   >> 0x00000013U));
        vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA = (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[5U] 
                                                  >> 0x00000010U);
        vlSelfRef.__Vfunc_SprAddr__47__OFFSY = vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY;
        vlSymsp->TOP__REF_VDP1_PKG.SprAddr__Vstatic__ADDR 
            = (0x0003ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                                   ? ((0x0003fff8U 
                                       & ((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                          << 2U)) + 
                                      ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                       << 3U)) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                                                   ? 
                                                  ((0x0003fff8U 
                                                    & ((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                                       << 2U)) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                    << 3U))
                                                   : 
                                                  (((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                                    << 2U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                    << 2U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__47__CM))
                                   ? (((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                 << 2U))
                                   : (((IData)(vlSelfRef.__Vfunc_SprAddr__47__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__47__OFFSY) 
                                                 << 1U)))));
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_0__SprAddr 
            = vlSymsp->TOP__REF_VDP1_PKG.SprAddr__Vstatic__ADDR;
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1 
            = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_0__SprAddr;
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1;
    if ((0x00040000U & vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U])) {
        vlSelfRef.diff_top__DOT__u_r__DOT__TP = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC = 0U;
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__TP = (1U 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                    >> 1U));
        vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC 
            = (1U & vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT);
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__SCLIP = ((((~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                                                        >> 0x0aU)))) 
                                                  & ((0x000003ffU 
                                                      & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                                     <= 
                                                     (0x000003ffU 
                                                      & (IData)(
                                                                (vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP 
                                                                 >> 0x0000000bU))))) 
                                                 & (~ 
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y) 
                                                         >> 0x0aU))))) 
                                                & ((0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)) 
                                                   <= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SYS_CLIP))));
    vlSelfRef.diff_top__DOT__u_r__DOT__UCLIP = ((((
                                                   ((~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                                                          >> 0x0aU)))) 
                                                    & ((0x000003ffU 
                                                        & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                                       >= 
                                                       (0x000003ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                   >> 0x00000021U))))) 
                                                   & ((0x000003ffU 
                                                       & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X)) 
                                                      <= 
                                                      (0x000003ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                  >> 0x0000000bU))))) 
                                                  & (~ 
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y) 
                                                          >> 0x0aU))))) 
                                                 & ((0x000003ffU 
                                                     & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)) 
                                                    >= 
                                                    (0x000003ffU 
                                                     & (IData)(
                                                               (vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP 
                                                                >> 0x00000016U))))) 
                                                & ((0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y)) 
                                                   <= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__USR_CLIP))));
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__MESH 
        = (1U & ((~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_X) 
                     ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y))) 
                 ^ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ODD) 
                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__BLUR_MESH))));
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__IDRAW 
        = (1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIL) 
                    ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_Y))));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WE = 
        (((((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TP)) 
              | (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                 >> 0x00000016U)) & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC)) 
                                     | (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                        >> 0x00000017U))) 
            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SCLIP)) 
           & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__UCLIP) 
               ^ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                  >> 0x00000019U)) | (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                         >> 0x0000001aU)))) 
          & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__MESH) 
             | (~ (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                   >> 0x00000018U)))) & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__IDRAW) 
                                         | (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIE))));
    __Vfunc_GetSprData__60__OFFSX = (3U & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                             >> 0x00000014U))))) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR))))));
    __Vfunc_GetSprData__60__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                        >> 0x00000013U));
    __Vfunc_GetSprData__60__DATA = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q;
    vlSymsp->TOP__REF_VDP1_PKG.GetSprData__Vstatic__D 
        = ((4U & (IData)(__Vfunc_GetSprData__60__CM))
            ? ((2U & (IData)(__Vfunc_GetSprData__60__CM))
                ? (IData)(__Vfunc_GetSprData__60__DATA)
                : ((1U & (IData)(__Vfunc_GetSprData__60__CM))
                    ? (IData)(__Vfunc_GetSprData__60__DATA)
                    : ((1U & (IData)(__Vfunc_GetSprData__60__OFFSX))
                        ? (0x000000ffU & (IData)(__Vfunc_GetSprData__60__DATA))
                        : (0x000000ffU & ((IData)(__Vfunc_GetSprData__60__DATA) 
                                          >> 8U)))))
            : ((2U & (IData)(__Vfunc_GetSprData__60__CM))
                ? ((1U & (IData)(__Vfunc_GetSprData__60__OFFSX))
                    ? (0x000000ffU & (IData)(__Vfunc_GetSprData__60__DATA))
                    : (0x000000ffU & ((IData)(__Vfunc_GetSprData__60__DATA) 
                                      >> 8U))) : ((2U 
                                                   & (IData)(__Vfunc_GetSprData__60__OFFSX))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_GetSprData__60__OFFSX))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (IData)(__Vfunc_GetSprData__60__DATA))
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(__Vfunc_GetSprData__60__DATA) 
                                                       >> 4U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_GetSprData__60__OFFSX))
                                                    ? 
                                                   (0x0000000fU 
                                                    & ((IData)(__Vfunc_GetSprData__60__DATA) 
                                                       >> 8U))
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(__Vfunc_GetSprData__60__DATA) 
                                                       >> 0x0cU))))));
    __Vfunc_GetSprData__60__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.GetSprData__Vstatic__D;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_D = __Vfunc_GetSprData__60__Vfuncout;
    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS 
        = __Vdly__diff_top__DOT__u_r__DOT__VRAM_READ_POS;
    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST = __Vdly__diff_top__DOT__u_r__DOT__VRAM_ST;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_D;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WRADDR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_POS;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CMD_DAT;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD_WAIT 
        = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
           & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CMD_READ_DONE 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
           & ((6U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
              & (0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_READ_DONE 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
           & ((0x0fU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS)) 
              & (8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST))));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_READ_DONE 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY) 
           & ((9U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
              & (3U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_READ_POS))));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_WRREQ 
        = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_ST)) 
           & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_PREREAD)) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY)));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__WRADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__data 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__DATA;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_WRREQ;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ;
}
