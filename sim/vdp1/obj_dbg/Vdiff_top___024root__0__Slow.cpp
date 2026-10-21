// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiff_top.h for the primary calling header

#include "Vdiff_top__pch.h"

VL_ATTR_COLD void Vdiff_top_REF_VDP1_PKG___eval_static__TOP__REF_VDP1_PKG(Vdiff_top_REF_VDP1_PKG* vlSelf);
VL_ATTR_COLD void Vdiff_top_VDP1_PKG___eval_static__TOP__VDP1_PKG(Vdiff_top_VDP1_PKG* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_static__TOP(Vdiff_top___024root* vlSelf);

VL_ATTR_COLD void Vdiff_top___024root___eval_static(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_static\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdiff_top_REF_VDP1_PKG___eval_static__TOP__REF_VDP1_PKG((&vlSymsp->TOP__REF_VDP1_PKG));
    Vdiff_top_VDP1_PKG___eval_static__TOP__VDP1_PKG((&vlSymsp->TOP__VDP1_PKG));
    Vdiff_top___024root___eval_static__TOP(vlSelf);
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
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__RST_N__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock;
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

VL_ATTR_COLD void Vdiff_top___024root___eval_initial(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_initial\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__aclr = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__byteena = 1U;
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclocken = 1U;
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rden = 1U;
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wraddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__i)) {
            vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__mem[(0x0000000fU 
                                                                              & vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__i)] = 0U;
            vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__i 
                = ((IData)(1U) + vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__i);
        }
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__aclr = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__byteena = 1U;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclocken = 1U;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rden = 1U;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i)) {
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem[(1U 
                                                                                & vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i)] = 0U;
            vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i 
                = ((IData)(1U) + vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i);
        }
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__aclr = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__byteena = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclocken = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rden = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wraddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__i)) {
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__mem[(0x0000000fU 
                                                                              & vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__i)] = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__i 
                = ((IData)(1U) + vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__i);
        }
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__aclr = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__byteena = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclocken = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rden = 1U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddressstall = 0U;
        vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i = 0U;
        while (VL_GTS_III(32, 2U, vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i)) {
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem[(1U 
                                                                                & vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i)] = 0U;
            vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i 
                = ((IData)(1U) + vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdiff_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vdiff_top___024root___stl_sequent__TOP__0(Vdiff_top___024root* vlSelf);

VL_ATTR_COLD bool Vdiff_top___024root___eval_stl(Vdiff_top___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_stl\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdiff_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdiff_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vdiff_top___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__stl(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_dump_triggers__stl\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdiff_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__ico(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_dump_triggers__ico\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdiff_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__act(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_dump_triggers__act\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdiff_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__nba(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_dump_triggers__nba\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vdiff_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__obs(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_dump_triggers__obs\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__react(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_dump_triggers__react\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdiff_top___024root___eval_final(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_final\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdiff_top___024root___eval_static__TOP(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___eval_static__TOP\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__COL_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEXT_ADDR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__CMD_RET_ADDR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_LINE_SX = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_LINE_SY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_LINE_ASX = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_LINE_ASY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_POLY_LSX = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_POLY_LSY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_POLY_RSX = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__NEW_POLY_RSY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__AA_DRAW = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_SWAP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SPR_OFFSY_NEXT = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__CLIP_H = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__GRD_CALC_STEP = 0;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_STATE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_A = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_B = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_RES = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_X1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_X2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_Y1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__SYS_CLIP_Y2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_LEFT_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_TOP_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk2__DOT__CLIP_DELAY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk3__DOT__RAS_DELAY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk3__DOT__FBD_RAS = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__CALC_C = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__EC = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__MESH = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__IDRAW = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk5__DOT__HTIM_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk5__DOT__VTIM_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk5__DOT__RP_POS = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk5__DOT__RP_FIRST = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CS_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__READY2 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__READY3 = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_RA = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_WA = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_FB_WA = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_D = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_FB_D = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_WE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_FB_WE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__SAVE_WA = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__SAVE_FB_WA = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__SAVE_D = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__SAVE_FB_D = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__SAVE_WE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__SAVE_FB_WE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CMD_READ_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CLT_READ_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__GRD_READ_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__FB_Y = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__FB_FIFO_FULL = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk7__DOT__CMD_WE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk7__DOT__GRD_WE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk7__DOT__TEMP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk8__DOT__VTIM_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk8__DOT__FRAME_CHANGE = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk8__DOT__START_DRAW_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk8__DOT__VBERASE_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__unnamedblk1__DOT__STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__unnamedblk1__DOT__STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__unnamedblk1__DOT__STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__COL_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEXT_ADDR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_RET_ADDR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CMD_SUB_RUN = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SX = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_SY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASX = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_LINE_ASY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSX = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_LSY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSX = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__NEW_POLY_RSY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_X_OVR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_VERTA_Y_OVR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__AA_DRAW = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_SWAP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SPR_OFFSY_NEXT = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_H = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_STEP = 0;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_R = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_G = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__GRD_CALC_DIR_B = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_STATE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_A = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_B = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_RES = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_X2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__SYS_CLIP_Y2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_DIFF_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_EQ_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_GT_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_LEFT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX1 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LT_RIGHT_CLIPX2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_LEFT_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_RIGHT_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_TOP_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__LINE_BOTTOM_OVER = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk2__DOT__CLIP_DELAY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__RAS_DELAY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk3__DOT__FBD_RAS = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__CALC_C = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__EC = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__MESH = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__IDRAW = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__HTIM_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__VTIM_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_POS = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk5__DOT__RP_FIRST = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CS_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY2 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__READY3 = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_RA = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WA = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WA = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_D = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_D = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_WE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_FB_WE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WA = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WA = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_D = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_D = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_WE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__SAVE_FB_WE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CMD_READ_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CLT_READ_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__GRD_READ_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_Y = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_FULL = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_FULL = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__VRAM_FIFO_EMPTY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__FB_FIFO_EMPTY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_ACCESS_WAIT = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__DRAW_ACCESS_WAIT = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk6__DOT__CPU_VRAM_WDELAY = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__CMD_WE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__GRD_WE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk7__DOT__TEMP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VTIM_N_OLD = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__FRAME_CHANGE = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__MANUAL_ERASECHANGE_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__START_DRAW_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk8__DOT__VBERASE_PEND = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__unnamedblk1__DOT__STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__unnamedblk1__DOT__STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__unnamedblk1__DOT__STEP = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdiff_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdiff_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vdiff_top___024root___stl_sequent__TOP__0(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___stl_sequent__TOP__0\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*17:0*/ __Vfunc_GetPattern__20__Vfuncout;
    __Vfunc_GetPattern__20__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetPattern__20__DATA;
    __Vfunc_GetPattern__20__DATA = 0;
    CData/*2:0*/ __Vfunc_GetPattern__20__CM;
    __Vfunc_GetPattern__20__CM = 0;
    SData/*15:0*/ __Vfunc_GetSprData__35__Vfuncout;
    __Vfunc_GetSprData__35__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetSprData__35__DATA;
    __Vfunc_GetSprData__35__DATA = 0;
    CData/*2:0*/ __Vfunc_GetSprData__35__CM;
    __Vfunc_GetSprData__35__CM = 0;
    CData/*1:0*/ __Vfunc_GetSprData__35__OFFSX;
    __Vfunc_GetSprData__35__OFFSX = 0;
    IData/*17:0*/ __Vfunc_GetPattern__64__Vfuncout;
    __Vfunc_GetPattern__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetPattern__64__DATA;
    __Vfunc_GetPattern__64__DATA = 0;
    CData/*2:0*/ __Vfunc_GetPattern__64__CM;
    __Vfunc_GetPattern__64__CM = 0;
    SData/*15:0*/ __Vfunc_GetSprData__79__Vfuncout;
    __Vfunc_GetSprData__79__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_GetSprData__79__DATA;
    __Vfunc_GetSprData__79__DATA = 0;
    CData/*2:0*/ __Vfunc_GetSprData__79__CM;
    __Vfunc_GetSprData__79__CM = 0;
    CData/*1:0*/ __Vfunc_GetSprData__79__OFFSX;
    __Vfunc_GetSprData__79__OFFSX = 0;
    IData/*16:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    IData/*16:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    // Body
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT_ADDR = (0x0003fff0U 
                                                   & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                      << 2U));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_ADDR = (0x0003fffcU 
                                                   & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[0U] 
                                                      >> 0x0000000eU));
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_A = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[0U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_C = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[2U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_B = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[1U]);
    vlSelfRef.diff_top__DOT__u_n__DOT__GHCOLOR_D = 
        (0x00007fffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_TBL[3U]);
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
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRX = 
        (1U & ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                >> 0x00000014U) ^ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR)));
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_DIRY = 
        (1U & ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                >> 0x00000015U) ^ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR) 
                                   >> 1U)));
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRX = 
        (1U & ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                >> 0x00000014U) ^ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR)));
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_DIRY = 
        (1U & ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                >> 0x00000015U) ^ ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR) 
                                   >> 1U)));
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_Y_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_WAIT 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_WPEND) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_RPEND) 
              | (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_ST))));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_WAIT 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_WPEND) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_RPEND) 
              | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ST))));
    vlSelfRef.diff_top__DOT__FB_RDY_r = vlSelfRef.FB_RDY_r;
    vlSelfRef.diff_top__DOT__IRQ_N_r = vlSelfRef.diff_top__DOT__u_r__DOT__IRQ_N;
    vlSelfRef.diff_top__DOT__VOUTO_r = vlSelfRef.diff_top__DOT__u_r__DOT__VOUTO;
    vlSelfRef.diff_top__DOT__VRAM_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_A;
    vlSelfRef.diff_top__DOT__VRAM_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_D;
    vlSelfRef.diff_top__DOT__VRAM_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_WE;
    vlSelfRef.diff_top__DOT__VRAM_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RD;
    vlSelfRef.diff_top__DOT__VRAM_BLEN_r = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_BLEN;
    vlSelfRef.diff_top__DOT__FB_RDY_n = vlSelfRef.FB_RDY_n;
    vlSelfRef.diff_top__DOT__IRQ_N_n = vlSelfRef.diff_top__DOT__u_n__DOT__IRQ_N;
    vlSelfRef.diff_top__DOT__VOUTO_n = vlSelfRef.diff_top__DOT__u_n__DOT__VOUTO;
    vlSelfRef.diff_top__DOT__VRAM_A_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_A;
    vlSelfRef.diff_top__DOT__VRAM_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_D;
    vlSelfRef.diff_top__DOT__VRAM_WE_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_WE;
    vlSelfRef.diff_top__DOT__VRAM_RD_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RD;
    vlSelfRef.diff_top__DOT__VRAM_BLEN_n = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_BLEN;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__FULL 
        = (1U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__AMOUNT) 
                 >> 1U));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RST 
        = (1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_READ)));
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WRADDR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CMD_POS;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CMD_DAT;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WREN 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT_WE;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__QUOT 
        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__D);
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__QUOT 
        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__D);
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__QUOT 
        = (0x0001ffffU & vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__D);
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
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVSR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_S;
    vlSelfRef.diff_top__DOT__RST_N = vlSelfRef.RST_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_MODE3 = (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR)));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_MODE3 = (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR)));
    vlSelfRef.diff_top__DOT__CE_F = vlSelfRef.CE_F;
    vlSelfRef.diff_top__DOT__EN = vlSelfRef.EN;
    vlSelfRef.diff_top__DOT__RES_N = vlSelfRef.RES_N;
    vlSelfRef.diff_top__DOT__FAST = vlSelfRef.FAST;
    vlSelfRef.diff_top__DOT__DBG_EXT = vlSelfRef.DBG_EXT;
    vlSelfRef.diff_top__DOT__DCE_F = vlSelfRef.DCE_F;
    vlSelfRef.diff_top__DOT__VOUTI = vlSelfRef.VOUTI;
    vlSelfRef.diff_top__DOT__DI = vlSelfRef.DI;
    vlSelfRef.diff_top__DOT__DTEN_N = vlSelfRef.DTEN_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB0_RD = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_n__DOT__FB1_RD = ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL)) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB0_RD = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB1_RD = ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL)) 
                                                 & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_RD));
    vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_BUSY 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_SEL) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_RPEND) 
              | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_WPEND) 
                 | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_ACCESS))));
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_SEL) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND) 
              | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND) 
                 | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS))));
    vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__COL_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR = 0U;
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
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START = 
        ((0U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_CALC_STATE)) 
         & ((7U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
            | ((8U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)) 
               | (0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST)))));
    vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START = 
        ((0U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__GRD_CALC_STATE)) 
         & ((7U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
            | ((8U == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)) 
               | (0x0aU == (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CMD_ST)))));
    if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                               >> 0x00000010U)))) {
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCond_1 = 0x0003ffffU;
    } else {
        vlSelfRef.__Vfunc_SprAddr__22__CM = (7U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                   >> 0x00000013U));
        vlSelfRef.__Vfunc_SprAddr__22__CMDSRCA = (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[5U] 
                                                  >> 0x00000010U);
        vlSelfRef.__Vfunc_SprAddr__22__OFFSY = vlSelfRef.diff_top__DOT__u_n__DOT__SPR_OFFSY;
        vlSymsp->TOP__VDP1_PKG.SprAddr__Vstatic__ADDR 
            = (0x0003ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_SprAddr__22__CM))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__22__CM))
                                   ? ((0x0003fff8U 
                                       & ((IData)(vlSelfRef.__Vfunc_SprAddr__22__CMDSRCA) 
                                          << 2U)) + 
                                      ((IData)(vlSelfRef.__Vfunc_SprAddr__22__OFFSY) 
                                       << 3U)) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_SprAddr__22__CM))
                                                   ? 
                                                  ((0x0003fff8U 
                                                    & ((IData)(vlSelfRef.__Vfunc_SprAddr__22__CMDSRCA) 
                                                       << 2U)) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__22__OFFSY) 
                                                    << 3U))
                                                   : 
                                                  (((IData)(vlSelfRef.__Vfunc_SprAddr__22__CMDSRCA) 
                                                    << 2U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__22__OFFSY) 
                                                    << 2U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__22__CM))
                                   ? (((IData)(vlSelfRef.__Vfunc_SprAddr__22__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__22__OFFSY) 
                                                 << 2U))
                                   : (((IData)(vlSelfRef.__Vfunc_SprAddr__22__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__22__OFFSY) 
                                                 << 1U)))));
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_0__SprAddr 
            = vlSymsp->TOP__VDP1_PKG.SprAddr__Vstatic__ADDR;
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCond_1 
            = vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_0__SprAddr;
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__SPR_ADDR = vlSelfRef.diff_top__DOT__u_n__DOT____VlemCond_1;
    if ((4U <= (0x0000000fU & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                               >> 0x00000010U)))) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1 = 0x0003ffffU;
    } else {
        vlSelfRef.__Vfunc_SprAddr__66__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                   >> 0x00000013U));
        vlSelfRef.__Vfunc_SprAddr__66__CMDSRCA = (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[5U] 
                                                  >> 0x00000010U);
        vlSelfRef.__Vfunc_SprAddr__66__OFFSY = vlSelfRef.diff_top__DOT__u_r__DOT__SPR_OFFSY;
        vlSymsp->TOP__REF_VDP1_PKG.SprAddr__Vstatic__ADDR 
            = (0x0003ffffU & ((4U & (IData)(vlSelfRef.__Vfunc_SprAddr__66__CM))
                               ? ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__66__CM))
                                   ? ((0x0003fff8U 
                                       & ((IData)(vlSelfRef.__Vfunc_SprAddr__66__CMDSRCA) 
                                          << 2U)) + 
                                      ((IData)(vlSelfRef.__Vfunc_SprAddr__66__OFFSY) 
                                       << 3U)) : ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_SprAddr__66__CM))
                                                   ? 
                                                  ((0x0003fff8U 
                                                    & ((IData)(vlSelfRef.__Vfunc_SprAddr__66__CMDSRCA) 
                                                       << 2U)) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__66__OFFSY) 
                                                    << 3U))
                                                   : 
                                                  (((IData)(vlSelfRef.__Vfunc_SprAddr__66__CMDSRCA) 
                                                    << 2U) 
                                                   + 
                                                   ((IData)(vlSelfRef.__Vfunc_SprAddr__66__OFFSY) 
                                                    << 2U))))
                               : ((2U & (IData)(vlSelfRef.__Vfunc_SprAddr__66__CM))
                                   ? (((IData)(vlSelfRef.__Vfunc_SprAddr__66__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__66__OFFSY) 
                                                 << 2U))
                                   : (((IData)(vlSelfRef.__Vfunc_SprAddr__66__CMDSRCA) 
                                       << 2U) + ((IData)(vlSelfRef.__Vfunc_SprAddr__66__OFFSY) 
                                                 << 1U)))));
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_0__SprAddr 
            = vlSymsp->TOP__REF_VDP1_PKG.SprAddr__Vstatic__ADDR;
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1 
            = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_0__SprAddr;
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_ADDR = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCond_1;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__EMPTY 
        = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__AMOUNT))));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__EMPTY 
        = (1U & (~ (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__AMOUNT))));
    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__LINE_AA_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR = 0U;
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
    vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_X_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_Y_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_D_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_X = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_Y = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_X_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_Y_STEP = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_D_ERROR = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_X = 0U;
    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_Y = 0U;
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
                                if ((1U & (~ ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR) 
                                              >> 0x0dU)))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_READ_STEP = 1U;
                                }
                            }
                            if ((4U <= (0x0000000fU 
                                        & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                           >> 0x00000010U)))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 1U;
                            } else if ((0x00002000U 
                                        & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR;
                                vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_Y_ERROR_ADJUSTED;
                                }
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
                        if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CMD_ST))) {
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_D_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_D_ERROR_INC)));
                            if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED), 
                                            (0x00003fffU 
                                             & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_D_ERROR_CMP)))))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X_INC)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y_INC)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_D_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_D_ERROR_ADJ)));
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_X 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_X_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_X 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_X_ICREMENTED;
                                }
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_Y 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_Y_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_Y 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_COL_ERROR_Y_ICREMENTED;
                                }
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_D_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LEFT_D_ERROR_ICREMENTED;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_X 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_Y 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y;
                            }
                            vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED 
                                = (0x00003fffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_D_ERROR) 
                                                  + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_D_ERROR_INC)));
                            if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED), 
                                            (0x00003fffU 
                                             & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_D_ERROR_CMP)))))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X_INC)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y_INC)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_D_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_D_ERROR_ADJ)));
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_X 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_X_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_X 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_X_ICREMENTED;
                                }
                                if (VL_GTES_III(14, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED), 
                                                (0x00003fffU 
                                                 & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y_CMP)))))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_Y 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_ADJ)));
                                    vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_Y_STEP = 1U;
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_Y 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_COL_ERROR_Y_ICREMENTED;
                                }
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_D_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__RIGHT_D_ERROR_ICREMENTED;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_X 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_Y 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y;
                            }
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
                            if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR;
                                vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED;
                                }
                            }
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
                            if (VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED;
                            }
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
                            if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR;
                                vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED;
                                }
                            }
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
                            if (VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED;
                            }
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
                            if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR;
                                vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)));
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR) 
                                          - (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ)));
                                if ((0x00002000U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED))) {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 1U;
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                        = (0x00003fffU 
                                           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED) 
                                              + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TEXT_ERROR_INC)));
                                } else {
                                    vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR 
                                        = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__TEXT_ERROR_ADJUSTED;
                                }
                            }
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
                            if (VL_LTES_III(14, 1U, (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED))) {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                    = (0x00003fffU 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED) 
                                          + (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ)));
                                vlSelfRef.diff_top__DOT__u_n__DOT__LINE_AA_STEP = 1U;
                            } else {
                                vlSelfRef.diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR 
                                    = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk1__DOT__LINE_ERROR_ICREMENTED;
                            }
                        }
                    }
                }
            }
        }
    }
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
    vlSelfRef.diff_top__DOT__VRAM_Q_r = vlSelfRef.VRAM_Q_r;
    vlSelfRef.diff_top__DOT__VRAM_Q_n = vlSelfRef.VRAM_Q_n;
    vlSelfRef.diff_top__DOT__FB0_Q_r = vlSelfRef.FB0_Q_r;
    vlSelfRef.diff_top__DOT__FB1_Q_r = vlSelfRef.FB1_Q_r;
    vlSelfRef.diff_top__DOT__FB0_Q_n = vlSelfRef.FB0_Q_n;
    vlSelfRef.diff_top__DOT__FB1_Q_n = vlSelfRef.FB1_Q_n;
    vlSelfRef.diff_top__DOT__VRAM_RDY_r = vlSelfRef.VRAM_RDY_r;
    vlSelfRef.diff_top__DOT__VRAM_RDY_n = vlSelfRef.VRAM_RDY_n;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RADDR;
    vlSelfRef.diff_top__DOT__CS_N = vlSelfRef.CS_N;
    vlSelfRef.diff_top__DOT__AD_N = vlSelfRef.AD_N;
    vlSelfRef.diff_top__DOT__REQ_N = vlSelfRef.REQ_N;
    vlSelfRef.diff_top__DOT__CLK = vlSelfRef.CLK;
    vlSelfRef.diff_top__DOT__BLUR_MESH = vlSelfRef.BLUR_MESH;
    vlSelfRef.diff_top__DOT__CE_R = vlSelfRef.CE_R;
    vlSelfRef.diff_top__DOT__DCE_R = vlSelfRef.DCE_R;
    __VdfgRegularize_hebeb780c_0_6 = ((0x0001fe00U 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__OUT_Y) 
                                          << 9U)) | (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__OUT_X));
    __VdfgRegularize_hebeb780c_0_7 = ((0x0001fe00U 
                                       & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_Y) 
                                          << 9U)) | (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__OUT_X));
    vlSelfRef.diff_top__DOT__VTIM_N = vlSelfRef.VTIM_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT_RA = (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_PAT 
                                                    >> 2U));
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_RA = (0x0000000fU 
                                                 & (vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_PAT 
                                                    >> 2U));
    vlSelfRef.diff_top__DOT__HTIM_N = vlSelfRef.HTIM_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_RDY = vlSelfRef.diff_top__DOT__FB_RDY_r;
    vlSelfRef.IRQ_N_r = vlSelfRef.diff_top__DOT__IRQ_N_r;
    vlSelfRef.VOUTO_r = vlSelfRef.diff_top__DOT__VOUTO_r;
    vlSelfRef.VRAM_A_r = vlSelfRef.diff_top__DOT__VRAM_A_r;
    vlSelfRef.VRAM_D_r = vlSelfRef.diff_top__DOT__VRAM_D_r;
    vlSelfRef.VRAM_WE_r = vlSelfRef.diff_top__DOT__VRAM_WE_r;
    vlSelfRef.VRAM_RD_r = vlSelfRef.diff_top__DOT__VRAM_RD_r;
    vlSelfRef.VRAM_BLEN_r = vlSelfRef.diff_top__DOT__VRAM_BLEN_r;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_RDY = vlSelfRef.diff_top__DOT__FB_RDY_n;
    vlSelfRef.IRQ_N_n = vlSelfRef.diff_top__DOT__IRQ_N_n;
    vlSelfRef.VOUTO_n = vlSelfRef.diff_top__DOT__VOUTO_n;
    vlSelfRef.VRAM_A_n = vlSelfRef.diff_top__DOT__VRAM_A_n;
    vlSelfRef.VRAM_D_n = vlSelfRef.diff_top__DOT__VRAM_D_n;
    vlSelfRef.VRAM_WE_n = vlSelfRef.diff_top__DOT__VRAM_WE_n;
    vlSelfRef.VRAM_RD_n = vlSelfRef.diff_top__DOT__VRAM_RD_n;
    vlSelfRef.VRAM_BLEN_n = vlSelfRef.diff_top__DOT__VRAM_BLEN_n;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_FULL 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__FULL;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RST 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RST;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wraddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WRADDR;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__data 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__DATA;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__WREN;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_B_Q = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__QUOT;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_G_Q = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__QUOT;
    vlSelfRef.diff_top__DOT__u_n__DOT__DIV_R_Q = vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__QUOT;
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
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_R) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_G) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIV_A_B) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_R) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_G) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVDNT 
        = (0x0001f000U & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIV_A_B) 
                          << 0x0000000cU));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__SUM 
        = (0x1fffffffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__T)
                           ? (vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__D 
                              - ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR) 
                                 << 0x00000011U)) : 
                          (vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__D 
                           + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR) 
                              << 0x00000011U))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__SUM 
        = (0x1fffffffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__T)
                           ? (vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__D 
                              - ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR) 
                                 << 0x00000011U)) : 
                          (vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__D 
                           + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR) 
                              << 0x00000011U))));
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__SUM 
        = (0x1fffffffU & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__T)
                           ? (vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__D 
                              - ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR) 
                                 << 0x00000011U)) : 
                          (vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__D 
                           + ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR) 
                              << 0x00000011U))));
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
    vlSelfRef.diff_top__DOT__u_n__DOT__RST_N = vlSelfRef.diff_top__DOT__RST_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__RST_N = vlSelfRef.diff_top__DOT__RST_N;
    vlSelfRef.diff_top__DOT__FB_MODE3_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB_MODE3;
    vlSelfRef.diff_top__DOT__FB_MODE3_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB_MODE3;
    vlSelfRef.diff_top__DOT__u_n__DOT__CE_F = vlSelfRef.diff_top__DOT__CE_F;
    vlSelfRef.diff_top__DOT__u_r__DOT__CE_F = vlSelfRef.diff_top__DOT__CE_F;
    vlSelfRef.diff_top__DOT__u_n__DOT__EN = vlSelfRef.diff_top__DOT__EN;
    vlSelfRef.diff_top__DOT__u_r__DOT__EN = vlSelfRef.diff_top__DOT__EN;
    vlSelfRef.diff_top__DOT__u_n__DOT__RES_N = vlSelfRef.diff_top__DOT__RES_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__RES_N = vlSelfRef.diff_top__DOT__RES_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__FAST = vlSelfRef.diff_top__DOT__FAST;
    vlSelfRef.diff_top__DOT__u_r__DOT__FAST = vlSelfRef.diff_top__DOT__FAST;
    vlSelfRef.diff_top__DOT__u_n__DOT__DBG_EXT = vlSelfRef.diff_top__DOT__DBG_EXT;
    vlSelfRef.diff_top__DOT__u_r__DOT__DBG_EXT = vlSelfRef.diff_top__DOT__DBG_EXT;
    vlSelfRef.diff_top__DOT__u_n__DOT__DCE_F = vlSelfRef.diff_top__DOT__DCE_F;
    vlSelfRef.diff_top__DOT__u_r__DOT__DCE_F = vlSelfRef.diff_top__DOT__DCE_F;
    vlSelfRef.diff_top__DOT__u_n__DOT__VOUTI = vlSelfRef.diff_top__DOT__VOUTI;
    vlSelfRef.diff_top__DOT__u_r__DOT__VOUTI = vlSelfRef.diff_top__DOT__VOUTI;
    vlSelfRef.diff_top__DOT__u_n__DOT__DI = vlSelfRef.diff_top__DOT__DI;
    vlSelfRef.diff_top__DOT__u_r__DOT__DI = vlSelfRef.diff_top__DOT__DI;
    vlSelfRef.diff_top__DOT__u_n__DOT__DTEN_N = vlSelfRef.diff_top__DOT__DTEN_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__DTEN_N = vlSelfRef.diff_top__DOT__DTEN_N;
    vlSelfRef.diff_top__DOT__FB0_RD_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_RD;
    vlSelfRef.diff_top__DOT__FB1_RD_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_RD;
    vlSelfRef.diff_top__DOT__FB0_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_RD;
    vlSelfRef.diff_top__DOT__FB1_RD_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_RD;
    vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_WAIT = 
        ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_BUSY) 
         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBD_ST)));
    vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_WAIT = 
        ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY) 
         | (0U != (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBD_ST)));
    if (vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_n__DOT__FB_D;
        vlSelfRef.diff_top__DOT__FB0_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_n__DOT__EWDR;
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_n__DOT__EWDR;
        vlSelfRef.diff_top__DOT__FB0_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_D;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_n__DOT__FB_D;
    }
    vlSelfRef.diff_top__DOT__FB1_D_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_D;
    if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_r__DOT__FB_D;
        vlSelfRef.diff_top__DOT__FB0_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_r__DOT__EWDR;
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D = vlSelfRef.diff_top__DOT__u_r__DOT__EWDR;
        vlSelfRef.diff_top__DOT__FB0_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_D;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D = vlSelfRef.diff_top__DOT__u_r__DOT__FB_D;
    }
    vlSelfRef.diff_top__DOT__FB1_D_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_D;
    vlSelfRef.diff_top__DOT__RDY_N_r = vlSelfRef.diff_top__DOT__u_r__DOT__RDY_N;
    vlSelfRef.diff_top__DOT__RDY_N_n = vlSelfRef.diff_top__DOT__u_n__DOT__RDY_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__START 
        = vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__START 
        = vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__START 
        = vlSelfRef.diff_top__DOT__u_n__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__START 
        = vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__START 
        = vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__START 
        = vlSelfRef.diff_top__DOT__u_r__DOT__DIV_START;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_EMPTY 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__EMPTY;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_EMPTY 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__EMPTY;
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
    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q = vlSelfRef.diff_top__DOT__VRAM_Q_r;
    vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_Q = vlSelfRef.diff_top__DOT__VRAM_Q_n;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB0_Q = vlSelfRef.diff_top__DOT__FB0_Q_r;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB1_Q = vlSelfRef.diff_top__DOT__FB1_Q_r;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB0_Q = vlSelfRef.diff_top__DOT__FB0_Q_n;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB1_Q = vlSelfRef.diff_top__DOT__FB1_Q_n;
    vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_RDY = vlSelfRef.diff_top__DOT__VRAM_RDY_r;
    vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY = vlSelfRef.diff_top__DOT__VRAM_RDY_n;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem
        [vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem
        [vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_n__DOT__CS_N = vlSelfRef.diff_top__DOT__CS_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__CS_N = vlSelfRef.diff_top__DOT__CS_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__AD_N = vlSelfRef.diff_top__DOT__AD_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__AD_N = vlSelfRef.diff_top__DOT__AD_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N = vlSelfRef.diff_top__DOT__REQ_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N = vlSelfRef.diff_top__DOT__REQ_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLK = vlSelfRef.diff_top__DOT__CLK;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLK = vlSelfRef.diff_top__DOT__CLK;
    vlSelfRef.diff_top__DOT__u_n__DOT__BLUR_MESH = vlSelfRef.diff_top__DOT__BLUR_MESH;
    vlSelfRef.diff_top__DOT__u_r__DOT__BLUR_MESH = vlSelfRef.diff_top__DOT__BLUR_MESH;
    vlSelfRef.diff_top__DOT__u_n__DOT__CE_R = vlSelfRef.diff_top__DOT__CE_R;
    vlSelfRef.diff_top__DOT__u_r__DOT__CE_R = vlSelfRef.diff_top__DOT__CE_R;
    vlSelfRef.diff_top__DOT__u_n__DOT__DCE_R = vlSelfRef.diff_top__DOT__DCE_R;
    vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R = vlSelfRef.diff_top__DOT__DCE_R;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_A = __VdfgRegularize_hebeb780c_0_6;
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
                                            : __VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_A = __VdfgRegularize_hebeb780c_0_7;
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
                                            : __VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.diff_top__DOT__u_n__DOT__VTIM_N = vlSelfRef.diff_top__DOT__VTIM_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N = vlSelfRef.diff_top__DOT__VTIM_N;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__RDADDR 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT_RA;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT_RA;
    vlSelfRef.diff_top__DOT__u_n__DOT__HTIM_N = vlSelfRef.diff_top__DOT__HTIM_N;
    vlSelfRef.diff_top__DOT__u_r__DOT__HTIM_N = vlSelfRef.diff_top__DOT__HTIM_N;
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
    vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA_READY 
        = (1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_EMPTY)) 
                 | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT) 
                    >= (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_WIDTH))));
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY 
        = (1U & ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_EMPTY)) 
                 | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                    >= (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_WIDTH))));
    __Vfunc_GetSprData__79__OFFSX = (3U & (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_CNT) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[7U] 
                                                             >> 0x00000014U))))) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DIR))))));
    __Vfunc_GetSprData__79__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                        >> 0x00000013U));
    __Vfunc_GetSprData__79__DATA = vlSelfRef.diff_top__DOT__u_r__DOT__VRAM_Q;
    vlSymsp->TOP__REF_VDP1_PKG.GetSprData__Vstatic__D 
        = ((4U & (IData)(__Vfunc_GetSprData__79__CM))
            ? ((2U & (IData)(__Vfunc_GetSprData__79__CM))
                ? (IData)(__Vfunc_GetSprData__79__DATA)
                : ((1U & (IData)(__Vfunc_GetSprData__79__CM))
                    ? (IData)(__Vfunc_GetSprData__79__DATA)
                    : ((1U & (IData)(__Vfunc_GetSprData__79__OFFSX))
                        ? (0x000000ffU & (IData)(__Vfunc_GetSprData__79__DATA))
                        : (0x000000ffU & ((IData)(__Vfunc_GetSprData__79__DATA) 
                                          >> 8U)))))
            : ((2U & (IData)(__Vfunc_GetSprData__79__CM))
                ? ((1U & (IData)(__Vfunc_GetSprData__79__OFFSX))
                    ? (0x000000ffU & (IData)(__Vfunc_GetSprData__79__DATA))
                    : (0x000000ffU & ((IData)(__Vfunc_GetSprData__79__DATA) 
                                      >> 8U))) : ((2U 
                                                   & (IData)(__Vfunc_GetSprData__79__OFFSX))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_GetSprData__79__OFFSX))
                                                    ? 
                                                   (0x0000000fU 
                                                    & (IData)(__Vfunc_GetSprData__79__DATA))
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(__Vfunc_GetSprData__79__DATA) 
                                                       >> 4U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_GetSprData__79__OFFSX))
                                                    ? 
                                                   (0x0000000fU 
                                                    & ((IData)(__Vfunc_GetSprData__79__DATA) 
                                                       >> 8U))
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(__Vfunc_GetSprData__79__DATA) 
                                                       >> 0x0cU))))));
    __Vfunc_GetSprData__79__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.GetSprData__Vstatic__D;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_D = __Vfunc_GetSprData__79__Vfuncout;
    __Vfunc_GetSprData__35__OFFSX = (3U & (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_CNT) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[7U] 
                                                             >> 0x00000014U))))) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DIR))))));
    __Vfunc_GetSprData__35__CM = (7U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                        >> 0x00000013U));
    __Vfunc_GetSprData__35__DATA = vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_Q;
    vlSymsp->TOP__VDP1_PKG.GetSprData__Vstatic__D = 
        ((4U & (IData)(__Vfunc_GetSprData__35__CM))
          ? ((2U & (IData)(__Vfunc_GetSprData__35__CM))
              ? (IData)(__Vfunc_GetSprData__35__DATA)
              : ((1U & (IData)(__Vfunc_GetSprData__35__CM))
                  ? (IData)(__Vfunc_GetSprData__35__DATA)
                  : ((1U & (IData)(__Vfunc_GetSprData__35__OFFSX))
                      ? (0x000000ffU & (IData)(__Vfunc_GetSprData__35__DATA))
                      : (0x000000ffU & ((IData)(__Vfunc_GetSprData__35__DATA) 
                                        >> 8U))))) : 
         ((2U & (IData)(__Vfunc_GetSprData__35__CM))
           ? ((1U & (IData)(__Vfunc_GetSprData__35__OFFSX))
               ? (0x000000ffU & (IData)(__Vfunc_GetSprData__35__DATA))
               : (0x000000ffU & ((IData)(__Vfunc_GetSprData__35__DATA) 
                                 >> 8U))) : ((2U & (IData)(__Vfunc_GetSprData__35__OFFSX))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_GetSprData__35__OFFSX))
                                                  ? 
                                                 (0x0000000fU 
                                                  & (IData)(__Vfunc_GetSprData__35__DATA))
                                                  : 
                                                 (0x0000000fU 
                                                  & ((IData)(__Vfunc_GetSprData__35__DATA) 
                                                     >> 4U)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_GetSprData__35__OFFSX))
                                                  ? 
                                                 (0x0000000fU 
                                                  & ((IData)(__Vfunc_GetSprData__35__DATA) 
                                                     >> 8U))
                                                  : 
                                                 (0x0000000fU 
                                                  & ((IData)(__Vfunc_GetSprData__35__DATA) 
                                                     >> 0x0cU))))));
    __Vfunc_GetSprData__35__Vfuncout = vlSymsp->TOP__VDP1_PKG.GetSprData__Vstatic__D;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_D = __Vfunc_GetSprData__35__Vfuncout;
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
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD_WAIT 
        = ((7U == (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_ST)) 
           & ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VRAM_RDY)) 
              & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_PREREAD)));
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
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q;
    vlSelfRef.diff_top__DOT__u_n__DOT__CPU_VRAM_REQ 
        = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__AD_N)) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CS_N))) 
            & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N))) 
           & (0U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_n__DOT__A)));
    vlSelfRef.diff_top__DOT__u_n__DOT__CPU_FB_REQ = 
        ((((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__AD_N)) 
           & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CS_N))) 
          & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N))) 
         & (0x00040000U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_n__DOT__A)));
    vlSelfRef.diff_top__DOT__u_n__DOT__REG_REQ = ((
                                                   ((~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__AD_N)) 
                                                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CS_N))) 
                                                   & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REQ_N))) 
                                                  & (0x00080000U 
                                                     == 
                                                     (0x000c0000U 
                                                      & vlSelfRef.diff_top__DOT__u_n__DOT__A)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_VRAM_REQ 
        = ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N)) 
             & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N))) 
            & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N))) 
           & (0U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_r__DOT__A)));
    vlSelfRef.diff_top__DOT__u_r__DOT__CPU_FB_REQ = 
        ((((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N)) 
           & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N))) 
          & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N))) 
         & (0x00040000U == (0x000c0000U & vlSelfRef.diff_top__DOT__u_r__DOT__A)));
    vlSelfRef.diff_top__DOT__u_r__DOT__REG_REQ = ((
                                                   ((~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__AD_N)) 
                                                    & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CS_N))) 
                                                   & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REQ_N))) 
                                                  & (0x00080000U 
                                                     == 
                                                     (0x000c0000U 
                                                      & vlSelfRef.diff_top__DOT__u_r__DOT__A)));
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
    vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ERASE_EN 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__ERASE_HIT) 
           & ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VTIM_N) 
              & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ERASE)));
    vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE_EN 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__ERASE_HIT) 
           & ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VTIM_N) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE)));
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__RDADDR;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddress 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR;
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
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RDREQ 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_NEXT) 
           & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA_READY));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RDREQ 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_NEXT) 
           & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA_READY));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_D;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__DATA 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_D;
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
    vlSelfRef.diff_top__DOT__u_r__DOT__DO = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REG_SEL)
                                              ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__REG_DO)
                                              : ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FBRAM_SEL)
                                                  ? (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_Q)
                                                  : (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__MEM_DO)));
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
    vlSelfRef.diff_top__DOT__u_n__DOT__DO = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REG_SEL)
                                              ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__REG_DO)
                                              : ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FBRAM_SEL)
                                                  ? (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_Q)
                                                  : (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__MEM_DO)));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_WRREQ;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WRREQ 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_WRREQ;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__Q 
        = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__sub_wire0) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__NULL))))));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__Q 
        = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__sub_wire0) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__NULL))))));
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__CLK;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__CLK;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__mem
        [vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__q 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__mem
        [vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddress];
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_OUT_A = ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VBLANK_ERASE_EN)
                                                    ? vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_A
                                                    : vlSelfRef.diff_top__DOT__u_n__DOT__FB_DISP_A);
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_WE 
        = (((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__CE_R) 
            & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__VBLANK_ERASE_EN)) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__DCE_R) 
              & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FRAME_ERASE_EN)));
    if (vlSelfRef.diff_top__DOT__u_n__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_A = vlSelfRef.diff_top__DOT__u_n__DOT__FB_A;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_A = vlSelfRef.diff_top__DOT__u_n__DOT__FB_OUT_A;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_WE = 
            (3U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_WE));
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_WE = 
            (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_WE))));
    } else {
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_A = vlSelfRef.diff_top__DOT__u_n__DOT__FB_OUT_A;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_A = vlSelfRef.diff_top__DOT__u_n__DOT__FB_A;
        vlSelfRef.diff_top__DOT__u_n__DOT__FB0_WE = 
            (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_ERASE_WE))));
        vlSelfRef.diff_top__DOT__u_n__DOT__FB1_WE = 
            (3U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__FB_WE));
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_OUT_A = ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN)
                                                    ? vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_A
                                                    : vlSelfRef.diff_top__DOT__u_r__DOT__FB_DISP_A);
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE 
        = (((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__CE_R) 
            & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN)) 
           | ((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__DCE_R) 
              & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FRAME_ERASE_EN)));
    if (vlSelfRef.diff_top__DOT__u_r__DOT__FB_SEL) {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_A = vlSelfRef.diff_top__DOT__u_r__DOT__FB_A;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_A = vlSelfRef.diff_top__DOT__u_r__DOT__FB_OUT_A;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE = 
            (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE));
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE = 
            (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE))));
    } else {
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_A = vlSelfRef.diff_top__DOT__u_r__DOT__FB_OUT_A;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_A = vlSelfRef.diff_top__DOT__u_r__DOT__FB_A;
        vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE = 
            (3U & (- (IData)((IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_ERASE_WE))));
        vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE = 
            (3U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__FB_WE));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RDREQ 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_RDREQ;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RDREQ 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_RDREQ;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__DATA;
    vlSelfRef.diff_top__DOT__DO_r = vlSelfRef.diff_top__DOT__u_r__DOT__DO;
    vlSelfRef.diff_top__DOT__DO_n = vlSelfRef.diff_top__DOT__u_n__DOT__DO;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren 
        = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WRREQ;
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_Q = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__Q;
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_Q = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__q;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__sub_wire0 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__q;
    vlSelfRef.DO_r = vlSelfRef.diff_top__DOT__DO_r;
    vlSelfRef.DO_n = vlSelfRef.diff_top__DOT__DO_n;
    vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA = vlSelfRef.diff_top__DOT__u_n__DOT__PAT_FIFO_Q;
    vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA = vlSelfRef.diff_top__DOT__u_r__DOT__PAT_FIFO_Q;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__Q 
        = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__sub_wire0;
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__Q 
        = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__sub_wire0;
    vlSelfRef.diff_top__DOT__FB0_A_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_A;
    vlSelfRef.diff_top__DOT__FB1_A_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_A;
    vlSelfRef.diff_top__DOT__FB0_WE_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB0_WE;
    vlSelfRef.diff_top__DOT__FB1_WE_n = vlSelfRef.diff_top__DOT__u_n__DOT__FB1_WE;
    vlSelfRef.diff_top__DOT__FB0_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_A;
    vlSelfRef.diff_top__DOT__FB1_A_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_A;
    vlSelfRef.diff_top__DOT__FB0_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB0_WE;
    vlSelfRef.diff_top__DOT__FB1_WE_r = vlSelfRef.diff_top__DOT__u_r__DOT__FB1_WE;
    __Vfunc_GetPattern__20__CM = (7U & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                        >> 0x00000013U));
    __Vfunc_GetPattern__20__DATA = vlSelfRef.diff_top__DOT__u_n__DOT__SPR_DATA;
    if ((4U & (IData)(__Vfunc_GetPattern__20__CM))) {
        if ((2U & (IData)(__Vfunc_GetPattern__20__CM))) {
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__20__DATA;
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__20__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__20__DATA));
        } else if ((1U & (IData)(__Vfunc_GetPattern__20__CM))) {
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__20__DATA;
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__20__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__20__DATA));
        } else {
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__C 
                = (0x000000ffU & (IData)(__Vfunc_GetPattern__20__DATA));
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__20__DATA)))));
            vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__20__DATA)));
        }
    } else if ((2U & (IData)(__Vfunc_GetPattern__20__CM))) {
        vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__C 
            = (0x000000ffU & (IData)(__Vfunc_GetPattern__20__DATA));
        vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__20__DATA)))));
        vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__EC 
            = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__20__DATA)));
    } else {
        vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__C 
            = (0x0000000fU & (IData)(__Vfunc_GetPattern__20__DATA));
        vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x0000000fU & (IData)(__Vfunc_GetPattern__20__DATA)))));
        vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__EC 
            = (0x0000000fU == (0x0000000fU & (IData)(__Vfunc_GetPattern__20__DATA)));
    }
    __Vfunc_GetPattern__20__Vfuncout = (((IData)(vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__C) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__TP) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__VDP1_PKG.GetPattern__Vstatic__EC)));
    vlSelfRef.diff_top__DOT__u_n__DOT__PAT = __Vfunc_GetPattern__20__Vfuncout;
    __Vfunc_GetPattern__64__CM = (7U & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                        >> 0x00000013U));
    __Vfunc_GetPattern__64__DATA = vlSelfRef.diff_top__DOT__u_r__DOT__SPR_DATA;
    if ((4U & (IData)(__Vfunc_GetPattern__64__CM))) {
        if ((2U & (IData)(__Vfunc_GetPattern__64__CM))) {
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__64__DATA;
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__64__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__64__DATA));
        } else if ((1U & (IData)(__Vfunc_GetPattern__64__CM))) {
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
                = __Vfunc_GetPattern__64__DATA;
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ ((IData)(__Vfunc_GetPattern__64__DATA) 
                            >> 0x0fU)));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x7fffU == (IData)(__Vfunc_GetPattern__64__DATA));
        } else {
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
                = (0x000000ffU & (IData)(__Vfunc_GetPattern__64__DATA));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
                = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__64__DATA)))));
            vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
                = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__64__DATA)));
        }
    } else if ((2U & (IData)(__Vfunc_GetPattern__64__CM))) {
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
            = (0x000000ffU & (IData)(__Vfunc_GetPattern__64__DATA));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x000000ffU & (IData)(__Vfunc_GetPattern__64__DATA)))));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
            = (0x000000ffU == (0x000000ffU & (IData)(__Vfunc_GetPattern__64__DATA)));
    } else {
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C 
            = (0x0000000fU & (IData)(__Vfunc_GetPattern__64__DATA));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP 
            = (1U & (~ (0U != (0x0000000fU & (IData)(__Vfunc_GetPattern__64__DATA)))));
        vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC 
            = (0x0000000fU == (0x0000000fU & (IData)(__Vfunc_GetPattern__64__DATA)));
    }
    __Vfunc_GetPattern__64__Vfuncout = (((IData)(vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__C) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__TP) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__REF_VDP1_PKG.GetPattern__Vstatic__EC)));
    vlSelfRef.diff_top__DOT__u_r__DOT__PAT = __Vfunc_GetPattern__64__Vfuncout;
    vlSelfRef.diff_top__DOT__u_n__DOT__CLT_Q = vlSelfRef.diff_top__DOT__u_n__DOT__CLT__DOT__Q;
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
    vlSelfRef.diff_top__DOT__u_r__DOT__CLT_Q = vlSelfRef.diff_top__DOT__u_r__DOT__CLT__DOT__Q;
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
    vlSelfRef.FB0_A_n = vlSelfRef.diff_top__DOT__FB0_A_n;
    vlSelfRef.FB1_A_n = vlSelfRef.diff_top__DOT__FB1_A_n;
    vlSelfRef.FB0_WE_n = vlSelfRef.diff_top__DOT__FB0_WE_n;
    vlSelfRef.FB1_WE_n = vlSelfRef.diff_top__DOT__FB1_WE_n;
    vlSelfRef.FB0_A_r = vlSelfRef.diff_top__DOT__FB0_A_r;
    vlSelfRef.FB1_A_r = vlSelfRef.diff_top__DOT__FB1_A_r;
    vlSelfRef.FB0_WE_r = vlSelfRef.diff_top__DOT__FB0_WE_r;
    vlSelfRef.FB1_WE_r = vlSelfRef.diff_top__DOT__FB1_WE_r;
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
    if ((vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
         >> 0x0000001fU)) {
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_2__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_BACK_C;
    } else if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_n__DOT__TVMR))) {
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_2__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_C;
    } else {
        vlSelfRef.__Vfunc_ColorCalc__23__CCB = (7U 
                                                & (vlSelfRef.diff_top__DOT__u_n__DOT__CMD[6U] 
                                                   >> 0x00000010U));
        vlSelfRef.__Vfunc_ColorCalc__23__CG = vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_GHCOLOR;
        vlSelfRef.__Vfunc_ColorCalc__23__BACK = vlSelfRef.diff_top__DOT__u_n__DOT__DRAW_BACK_C;
        vlSelfRef.__Vfunc_ColorCalc__23__ORIG = vlSelfRef.diff_top__DOT__u_n__DOT__ORIG_C;
        vlSelfRef.__Vfunc_GouraudAdd__24__CG = vlSelfRef.__Vfunc_ColorCalc__23__CG;
        vlSelfRef.__Vfunc_GouraudAdd__24__CO = (0x00007fffU 
                                                & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG));
        vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMR 
            = (0x0000007fU & (((0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__24__CO)) 
                               + (0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__24__CG))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMG 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__24__CO) 
                                               >> 5U)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__24__CG) 
                                                 >> 5U))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMB 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__24__CO) 
                                               >> 0x0000000aU)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__24__CG) 
                                                 >> 0x0000000aU))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR 
            = ((0x7fe0U & (IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR)) 
               | ((3U == (3U & ((IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMR) 
                                >> 5U))) ? 0U : ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMR) 
                                                      >> 5U)))
                                                  ? 0x0000001fU
                                                  : 
                                                 (0x0000001fU 
                                                  & (IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMR)))));
        vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR 
            = ((0x7c1fU & (IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR)) 
               | (((3U == (3U & ((IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMG) 
                                 >> 5U))) ? 0U : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMG) 
                                                       >> 5U)))
                                                   ? 0x0000001fU
                                                   : 
                                                  (0x0000001fU 
                                                   & (IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMG)))) 
                  << 5U));
        vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR)) 
               | (((3U == (3U & ((IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMB) 
                                 >> 5U))) ? 0U : ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMB) 
                                                       >> 5U)))
                                                   ? 0x0000001fU
                                                   : 
                                                  (0x0000001fU 
                                                   & (IData)(vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__SUMB)))) 
                  << 0x0000000aU));
        vlSelfRef.__Vfunc_GouraudAdd__24__Vfuncout 
            = vlSymsp->TOP__VDP1_PKG.GouraudAdd__Vstatic__CR;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR 
            = vlSelfRef.__Vfunc_GouraudAdd__24__Vfuncout;
        vlSelfRef.__Vfunc_ColorHalf__25__CA = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG));
        vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__25__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__25__CA) 
                                                >> 1U))));
        vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__25__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__25__Vfuncout = vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__25__Vfuncout;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE 
            = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG));
        vlSelfRef.__Vfunc_ColorHalf__26__CA = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR;
        vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__26__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__26__CA) 
                                                >> 1U))));
        vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__26__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__26__Vfuncout = vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__26__Vfuncout;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE 
            = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR;
        vlSelfRef.__Vfunc_ColorHalf__27__CA = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK));
        vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__27__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__27__CA) 
                                                >> 1U))));
        vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__27__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__27__Vfuncout = vlSymsp->TOP__VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__27__Vfuncout;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_ONE 
            = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK));
        if ((4U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
            if ((2U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
                if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
                    if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK))) {
                        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                            = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF;
                        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B 
                            = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_HALF;
                    } else {
                        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                            = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE;
                        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                    }
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK) 
                                  | (IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG)) 
                                 >> 0x0fU));
                } else {
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF;
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG) 
                                 >> 0x0fU));
                }
            } else if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A = 0U;
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B 
                    = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_ONE;
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK) 
                             >> 0x0fU));
            } else {
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                    = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE;
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG) 
                             >> 0x0fU));
            }
        } else if ((2U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
            if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK))) {
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF;
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B 
                        = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_HALF;
                } else {
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE;
                    vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                }
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK) 
                              | (IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG)) 
                             >> 0x0fU));
            } else {
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                    = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF;
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG) 
                             >> 0x0fU));
            }
        } else if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__CCB))) {
            vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A = 0U;
            vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B 
                = ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK))
                    ? (IData)(vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_HALF)
                    : (IData)(vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__BACK_ONE));
            vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__23__BACK) 
                         >> 0x0fU));
        } else {
            vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A 
                = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE;
            vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B = 0U;
            vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB 
                = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__23__ORIG) 
                         >> 0x0fU));
        }
        vlSelfRef.__Vfunc_ColorAdd__28__CB = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__B;
        vlSelfRef.__Vfunc_ColorAdd__28__CA = vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__A;
        vlSymsp->TOP__VDP1_PKG.ColorAdd__Vstatic__CR 
            = ((0x7c00U & (IData)(vlSymsp->TOP__VDP1_PKG.ColorAdd__Vstatic__CR)) 
               | ((0x000003e0U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__28__CA) 
                                    >> 5U) + ((IData)(vlSelfRef.__Vfunc_ColorAdd__28__CB) 
                                              >> 5U)) 
                                  << 5U)) | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorAdd__28__CA) 
                                                + (IData)(vlSelfRef.__Vfunc_ColorAdd__28__CB)))));
        vlSymsp->TOP__VDP1_PKG.ColorAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__VDP1_PKG.ColorAdd__Vstatic__CR)) 
               | (0x00007c00U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__28__CA) 
                                   >> 0x0000000aU) 
                                  + ((IData)(vlSelfRef.__Vfunc_ColorAdd__28__CB) 
                                     >> 0x0000000aU)) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_ColorAdd__28__Vfuncout = vlSymsp->TOP__VDP1_PKG.ColorAdd__Vstatic__CR;
        vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__S 
            = vlSelfRef.__Vfunc_ColorAdd__28__Vfuncout;
        vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_2__ColorCalc 
            = (((IData)(vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__MSB) 
                << 0x0000000fU) | (IData)(vlSymsp->TOP__VDP1_PKG.ColorCalc__Vstatic__S));
    }
    vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__CALC_C 
        = vlSelfRef.diff_top__DOT__u_n__DOT____VlemCall_2__ColorCalc;
    vlSelfRef.diff_top__DOT__u_n__DOT__FB_DRAW_D = vlSelfRef.diff_top__DOT__u_n__DOT__unnamedblk4__DOT__CALC_C;
    if ((vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
         >> 0x0000001fU)) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_BACK_C;
    } else if ((1U & (IData)(vlSelfRef.diff_top__DOT__u_r__DOT__TVMR))) {
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc 
            = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_C;
    } else {
        vlSelfRef.__Vfunc_ColorCalc__67__CCB = (7U 
                                                & (vlSelfRef.diff_top__DOT__u_r__DOT__CMD[6U] 
                                                   >> 0x00000010U));
        vlSelfRef.__Vfunc_ColorCalc__67__CG = vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_GHCOLOR;
        vlSelfRef.__Vfunc_ColorCalc__67__BACK = vlSelfRef.diff_top__DOT__u_r__DOT__DRAW_BACK_C;
        vlSelfRef.__Vfunc_ColorCalc__67__ORIG = vlSelfRef.diff_top__DOT__u_r__DOT__ORIG_C;
        vlSelfRef.__Vfunc_GouraudAdd__68__CG = vlSelfRef.__Vfunc_ColorCalc__67__CG;
        vlSelfRef.__Vfunc_GouraudAdd__68__CO = (0x00007fffU 
                                                & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMR 
            = (0x0000007fU & (((0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__68__CO)) 
                               + (0x0000001fU & (IData)(vlSelfRef.__Vfunc_GouraudAdd__68__CG))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMG 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__68__CO) 
                                               >> 5U)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__68__CG) 
                                                 >> 5U))) 
                              - (IData)(0x10U)));
        vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__SUMB 
            = (0x0000007fU & (((0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__68__CO) 
                                               >> 0x0000000aU)) 
                               + (0x0000001fU & ((IData)(vlSelfRef.__Vfunc_GouraudAdd__68__CG) 
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
        vlSelfRef.__Vfunc_GouraudAdd__68__Vfuncout 
            = vlSymsp->TOP__REF_VDP1_PKG.GouraudAdd__Vstatic__CR;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR 
            = vlSelfRef.__Vfunc_GouraudAdd__68__Vfuncout;
        vlSelfRef.__Vfunc_ColorHalf__69__CA = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__69__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__69__CA) 
                                                >> 1U))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__69__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__69__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__69__Vfuncout;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE 
            = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG));
        vlSelfRef.__Vfunc_ColorHalf__70__CA = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR;
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__70__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__70__CA) 
                                                >> 1U))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__70__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__70__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__70__Vfuncout;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE 
            = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR;
        vlSelfRef.__Vfunc_ColorHalf__71__CA = (0x00007fffU 
                                               & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | ((0x000001e0U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__71__CA) 
                                  >> 1U)) | (0x0000000fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorHalf__71__CA) 
                                                >> 1U))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH)) 
               | (0x00003c00U & ((IData)(vlSelfRef.__Vfunc_ColorHalf__71__CA) 
                                 >> 1U)));
        vlSelfRef.__Vfunc_ColorHalf__71__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorHalf__Vstatic__CH;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_HALF 
            = vlSelfRef.__Vfunc_ColorHalf__71__Vfuncout;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_ONE 
            = (0x00007fffU & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK));
        if ((4U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
            if ((2U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
                if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
                    if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK))) {
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
                        = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK) 
                                  | (IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG)) 
                                 >> 0x0fU));
                } else {
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                        = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_HALF;
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                    vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                        = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG) 
                                 >> 0x0fU));
                }
            } else if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A = 0U;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B 
                    = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_ONE;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK) 
                             >> 0x0fU));
            } else {
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                    = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__GOUR_ONE;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG) 
                             >> 0x0fU));
            }
        } else if ((2U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
            if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
                if ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK))) {
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
                    = (1U & (((IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK) 
                              | (IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG)) 
                             >> 0x0fU));
            } else {
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                    = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_HALF;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
                vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                    = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG) 
                             >> 0x0fU));
            }
        } else if ((1U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__CCB))) {
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A = 0U;
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B 
                = ((0x00008000U & (IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK))
                    ? (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_HALF)
                    : (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__BACK_ONE));
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__67__BACK) 
                         >> 0x0fU));
        } else {
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A 
                = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__ORIG_ONE;
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B = 0U;
            vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB 
                = (1U & ((IData)(vlSelfRef.__Vfunc_ColorCalc__67__ORIG) 
                         >> 0x0fU));
        }
        vlSelfRef.__Vfunc_ColorAdd__72__CB = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__B;
        vlSelfRef.__Vfunc_ColorAdd__72__CA = vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__A;
        vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR 
            = ((0x7c00U & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR)) 
               | ((0x000003e0U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__72__CA) 
                                    >> 5U) + ((IData)(vlSelfRef.__Vfunc_ColorAdd__72__CB) 
                                              >> 5U)) 
                                  << 5U)) | (0x0000001fU 
                                             & ((IData)(vlSelfRef.__Vfunc_ColorAdd__72__CA) 
                                                + (IData)(vlSelfRef.__Vfunc_ColorAdd__72__CB)))));
        vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR 
            = ((0x03ffU & (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR)) 
               | (0x00007c00U & ((((IData)(vlSelfRef.__Vfunc_ColorAdd__72__CA) 
                                   >> 0x0000000aU) 
                                  + ((IData)(vlSelfRef.__Vfunc_ColorAdd__72__CB) 
                                     >> 0x0000000aU)) 
                                 << 0x0000000aU)));
        vlSelfRef.__Vfunc_ColorAdd__72__Vfuncout = vlSymsp->TOP__REF_VDP1_PKG.ColorAdd__Vstatic__CR;
        vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__S 
            = vlSelfRef.__Vfunc_ColorAdd__72__Vfuncout;
        vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc 
            = (((IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__MSB) 
                << 0x0000000fU) | (IData)(vlSymsp->TOP__REF_VDP1_PKG.ColorCalc__Vstatic__S));
    }
    vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__CALC_C 
        = vlSelfRef.diff_top__DOT__u_r__DOT____VlemCall_2__ColorCalc;
    vlSelfRef.diff_top__DOT__u_r__DOT__FB_DRAW_D = vlSelfRef.diff_top__DOT__u_r__DOT__unnamedblk4__DOT__CALC_C;
}

bool Vdiff_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vdiff_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( CE_R)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( CE_F)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( EN)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( RES_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( FAST)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( BLUR_MESH)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( DBG_EXT)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( DCE_R)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( DCE_F)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( HTIM_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( VTIM_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( VOUTI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( DI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( CS_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( AD_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( DTEN_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( REQ_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( VRAM_Q_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( VRAM_RDY_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( FB0_Q_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( FB1_Q_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @( FB_RDY_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @( VRAM_Q_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @( VRAM_RDY_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @( FB0_Q_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @( FB1_Q_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @( FB_RDY_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vdiff_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdiff_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge diff_top.u_n.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge diff_top.u_n.RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge diff_top.u_n.CLT.altdpram0.inclock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge diff_top.u_n.PAT_FIFO.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge diff_top.u_n.PAT_FIFO.altdpram_component.inclock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge diff_top.u_n.GRD_DIV_B.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge diff_top.u_n.GRD_DIV_G.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge diff_top.u_n.GRD_DIV_R.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge diff_top.u_r.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge diff_top.u_r.RST_N)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge diff_top.u_r.CLT.altdpram0.inclock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge diff_top.u_r.PAT_FIFO.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge diff_top.u_r.PAT_FIFO.altdpram_component.inclock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge diff_top.u_r.GRD_DIV_B.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge diff_top.u_r.GRD_DIV_G.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge diff_top.u_r.GRD_DIV_R.CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiff_top___024root___ctor_var_reset(Vdiff_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiff_top___024root___ctor_var_reset\n"); );
    Vdiff_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLK = 0;
    vlSelf->RST_N = 0;
    vlSelf->CE_R = 0;
    vlSelf->CE_F = 0;
    vlSelf->EN = 0;
    vlSelf->RES_N = 0;
    vlSelf->FAST = 0;
    vlSelf->BLUR_MESH = 0;
    vlSelf->DBG_EXT = 0;
    vlSelf->DCE_R = 0;
    vlSelf->DCE_F = 0;
    vlSelf->HTIM_N = 0;
    vlSelf->VTIM_N = 0;
    vlSelf->VOUTI = 0;
    vlSelf->DI = 0;
    vlSelf->CS_N = 0;
    vlSelf->AD_N = 0;
    vlSelf->DTEN_N = 0;
    vlSelf->REQ_N = 0;
    vlSelf->VRAM_Q_r = 0;
    vlSelf->VRAM_RDY_r = 0;
    vlSelf->FB0_Q_r = 0;
    vlSelf->FB1_Q_r = 0;
    vlSelf->FB_RDY_r = 0;
    vlSelf->DO_r = 0;
    vlSelf->RDY_N_r = 0;
    vlSelf->IRQ_N_r = 0;
    vlSelf->VOUTO_r = 0;
    vlSelf->VRAM_A_r = 0;
    vlSelf->VRAM_D_r = 0;
    vlSelf->VRAM_WE_r = 0;
    vlSelf->VRAM_RD_r = 0;
    vlSelf->VRAM_BLEN_r = 0;
    vlSelf->FB0_A_r = 0;
    vlSelf->FB0_D_r = 0;
    vlSelf->FB0_WE_r = 0;
    vlSelf->FB0_RD_r = 0;
    vlSelf->FB1_A_r = 0;
    vlSelf->FB1_D_r = 0;
    vlSelf->FB1_WE_r = 0;
    vlSelf->FB1_RD_r = 0;
    vlSelf->FB_MODE3_r = 0;
    vlSelf->VRAM_Q_n = 0;
    vlSelf->VRAM_RDY_n = 0;
    vlSelf->FB0_Q_n = 0;
    vlSelf->FB1_Q_n = 0;
    vlSelf->FB_RDY_n = 0;
    vlSelf->DO_n = 0;
    vlSelf->RDY_N_n = 0;
    vlSelf->IRQ_N_n = 0;
    vlSelf->VOUTO_n = 0;
    vlSelf->VRAM_A_n = 0;
    vlSelf->VRAM_D_n = 0;
    vlSelf->VRAM_WE_n = 0;
    vlSelf->VRAM_RD_n = 0;
    vlSelf->VRAM_BLEN_n = 0;
    vlSelf->FB0_A_n = 0;
    vlSelf->FB0_D_n = 0;
    vlSelf->FB0_WE_n = 0;
    vlSelf->FB0_RD_n = 0;
    vlSelf->FB1_A_n = 0;
    vlSelf->FB1_D_n = 0;
    vlSelf->FB1_WE_n = 0;
    vlSelf->FB1_RD_n = 0;
    vlSelf->FB_MODE3_n = 0;
    vlSelf->diff_top__DOT__CLK = 0;
    vlSelf->diff_top__DOT__RST_N = 0;
    vlSelf->diff_top__DOT__CE_R = 0;
    vlSelf->diff_top__DOT__CE_F = 0;
    vlSelf->diff_top__DOT__EN = 0;
    vlSelf->diff_top__DOT__RES_N = 0;
    vlSelf->diff_top__DOT__FAST = 0;
    vlSelf->diff_top__DOT__BLUR_MESH = 0;
    vlSelf->diff_top__DOT__DBG_EXT = 0;
    vlSelf->diff_top__DOT__DCE_R = 0;
    vlSelf->diff_top__DOT__DCE_F = 0;
    vlSelf->diff_top__DOT__HTIM_N = 0;
    vlSelf->diff_top__DOT__VTIM_N = 0;
    vlSelf->diff_top__DOT__VOUTI = 0;
    vlSelf->diff_top__DOT__DI = 0;
    vlSelf->diff_top__DOT__CS_N = 0;
    vlSelf->diff_top__DOT__AD_N = 0;
    vlSelf->diff_top__DOT__DTEN_N = 0;
    vlSelf->diff_top__DOT__REQ_N = 0;
    vlSelf->diff_top__DOT__VRAM_Q_r = 0;
    vlSelf->diff_top__DOT__VRAM_RDY_r = 0;
    vlSelf->diff_top__DOT__FB0_Q_r = 0;
    vlSelf->diff_top__DOT__FB1_Q_r = 0;
    vlSelf->diff_top__DOT__FB_RDY_r = 0;
    vlSelf->diff_top__DOT__DO_r = 0;
    vlSelf->diff_top__DOT__RDY_N_r = 0;
    vlSelf->diff_top__DOT__IRQ_N_r = 0;
    vlSelf->diff_top__DOT__VOUTO_r = 0;
    vlSelf->diff_top__DOT__VRAM_A_r = 0;
    vlSelf->diff_top__DOT__VRAM_D_r = 0;
    vlSelf->diff_top__DOT__VRAM_WE_r = 0;
    vlSelf->diff_top__DOT__VRAM_RD_r = 0;
    vlSelf->diff_top__DOT__VRAM_BLEN_r = 0;
    vlSelf->diff_top__DOT__FB0_A_r = 0;
    vlSelf->diff_top__DOT__FB0_D_r = 0;
    vlSelf->diff_top__DOT__FB0_WE_r = 0;
    vlSelf->diff_top__DOT__FB0_RD_r = 0;
    vlSelf->diff_top__DOT__FB1_A_r = 0;
    vlSelf->diff_top__DOT__FB1_D_r = 0;
    vlSelf->diff_top__DOT__FB1_WE_r = 0;
    vlSelf->diff_top__DOT__FB1_RD_r = 0;
    vlSelf->diff_top__DOT__FB_MODE3_r = 0;
    vlSelf->diff_top__DOT__VRAM_Q_n = 0;
    vlSelf->diff_top__DOT__VRAM_RDY_n = 0;
    vlSelf->diff_top__DOT__FB0_Q_n = 0;
    vlSelf->diff_top__DOT__FB1_Q_n = 0;
    vlSelf->diff_top__DOT__FB_RDY_n = 0;
    vlSelf->diff_top__DOT__DO_n = 0;
    vlSelf->diff_top__DOT__RDY_N_n = 0;
    vlSelf->diff_top__DOT__IRQ_N_n = 0;
    vlSelf->diff_top__DOT__VOUTO_n = 0;
    vlSelf->diff_top__DOT__VRAM_A_n = 0;
    vlSelf->diff_top__DOT__VRAM_D_n = 0;
    vlSelf->diff_top__DOT__VRAM_WE_n = 0;
    vlSelf->diff_top__DOT__VRAM_RD_n = 0;
    vlSelf->diff_top__DOT__VRAM_BLEN_n = 0;
    vlSelf->diff_top__DOT__FB0_A_n = 0;
    vlSelf->diff_top__DOT__FB0_D_n = 0;
    vlSelf->diff_top__DOT__FB0_WE_n = 0;
    vlSelf->diff_top__DOT__FB0_RD_n = 0;
    vlSelf->diff_top__DOT__FB1_A_n = 0;
    vlSelf->diff_top__DOT__FB1_D_n = 0;
    vlSelf->diff_top__DOT__FB1_WE_n = 0;
    vlSelf->diff_top__DOT__FB1_RD_n = 0;
    vlSelf->diff_top__DOT__FB_MODE3_n = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RST_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CE_R = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CE_F = 0;
    vlSelf->diff_top__DOT__u_n__DOT__EN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RES_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DI = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DO = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CS_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__AD_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DTEN_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__REQ_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RDY_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__IRQ_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DCE_R = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DCE_F = 0;
    vlSelf->diff_top__DOT__u_n__DOT__HTIM_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VTIM_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VOUTI = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VOUTO = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_RD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_BLEN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_RDY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB0_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB0_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB0_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB0_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB0_RD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB1_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB1_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB1_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB1_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB1_RD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_RDY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_MODE3 = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FAST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__BLUR_MESH = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DBG_EXT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TVMR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FBCR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PTMR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__EWDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__EWLR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__EWRR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__EDSR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LOPR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__COPR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__MODR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FRAME_START = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FRAME_ERASE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VBLANK_ERASE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FRAME_ERASE_EN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VBLANK_ERASE_EN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__OUT_EN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_TERMINATE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_END = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FRAME_ODD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_SEL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_RD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DRAW_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DRAW_WAIT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DISP_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DISP_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DISP_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_ERASE_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_ERASE_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_OUT_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_ST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_ADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_READ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_READ_DONE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SPR_ADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SPR_READ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SPR_DATA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SPR_DATA_READY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT_ADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT_READ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT_READ_DONE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_ADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_READ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_READ_DONE = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->diff_top__DOT__u_n__DOT__GRD_TBL[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(256, vlSelf->diff_top__DOT__u_n__DOT__CMD);
    vlSelf->diff_top__DOT__u_n__DOT__SYS_CLIP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__USR_CLIP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LOC_COORD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VERTA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VERTB = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VERTC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VERTD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SPR_OFFSY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_LSX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_LSY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_RSX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_RSY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_LDIRX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_LDIRY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_RDIRX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_RDIRY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__POLY_S = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_VERTA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_VERTB = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_VERT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_VERT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__BOTTOM_VERT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_DIRX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_DIRY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_CLIP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_S = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ROW_WIDTH = 0;
    vlSelf->diff_top__DOT__u_n__DOT__COL_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__COL_DIRY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SPR_COL_ENLARGE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__EC_FIND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__AA_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__AA_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__AA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__AA_X_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__AA_Y_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__HSS_EN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_WAIT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_ENABLE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_DRAW_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_AA_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__COL_DRAW_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_X_READ_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXTY_READ_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_Y_READ_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_X_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_Y_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_X_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_Y_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_CALC_STATE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_CALC_S = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_CALC_1 = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_CALC_2 = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ORIG_WIDTH = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ORIG_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_DIRX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_DIRY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__IS_PAT_EC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__COL_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_LEFT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_RIGHT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_LEFT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_D_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_D_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_RIGHT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_D_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_D_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_D_ERROR_CMP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_D_ERROR_CMP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_X_CMP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_COL_ERROR_Y_CMP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_X_CMP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_COL_ERROR_Y_CMP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_LINE_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_TEXT_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__NEXT_TEXT_Y_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_Y_ERROR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TEXT_Y_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_R_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_G_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_B_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_START = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_A_R = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_A_G = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DIV_A_B = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GHCOLOR_A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GHCOLOR_B = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GHCOLOR_C = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GHCOLOR_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LEFT_GHCOLOR_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RIGHT_GHCOLOR_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__LINE_GHCOLOR_STEP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_DELAY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PENALTY_CNT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FBD_ST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_BUSY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_PAT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DRAW_BACK_C = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DRAW_PEND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_READ_PEND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_NEXT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DRAW_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_DRAW_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__SCLIP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__UCLIP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ORIG_C = 0;
    vlSelf->diff_top__DOT__u_n__DOT__TP = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RP_Xst = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RP_Yst = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RP_DXst = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RP_DYst = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RP_DX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RP_DY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RXst = 0;
    vlSelf->diff_top__DOT__u_n__DOT__RYst = 0;
    vlSelf->diff_top__DOT__u_n__DOT__OUT_RX = 0;
    vlSelf->diff_top__DOT__u_n__DOT__OUT_RY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__OUT_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__OUT_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FRAME_ERASE_HIT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ERASE_X = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ERASE_Y = 0;
    vlSelf->diff_top__DOT__u_n__DOT__ERASE_HIT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__HTIM_PIPE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DCLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_ST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FB_ST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_REQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_FB_REQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__A = 0;
    vlSelf->diff_top__DOT__u_n__DOT__WE_N = 0;
    vlSelf->diff_top__DOT__u_n__DOT__DQM = 0;
    vlSelf->diff_top__DOT__u_n__DOT__BURST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__READY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_SEL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__FBRAM_SEL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__REG_SEL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_RRDY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_FB_RRDY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_WRDY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_FB_WRDY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_FB_RPEND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_FB_WPEND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_WRREQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_RDREQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_EMPTY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_FULL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO_RST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__MEM_DO = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_CNT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_PREREAD = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VRAM_READ_POS = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_RPEND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_WPEND = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CPU_VRAM_ACCESS = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_PREREAD_WAIT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_POS = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_DAT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CMD_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_WE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT_RA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__REG_REQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__VBOUT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__REG_DO = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__WRADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__DATA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__WREN = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__RDADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__sub_wire0 = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__data = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddress = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wraddress = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wren = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__aclr = 0U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__byteena = 1U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclocken = 1U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rdaddressstall = 0U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__rden = 1U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__wraddressstall = 0U;
    ;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__mem[__Vi0] = 0;
    }
    vlSelf->diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__i = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RST = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__DATA = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WRREQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RDREQ = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__Q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__EMPTY = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__FULL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__sub_wire0 = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__RADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__WADDR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__AMOUNT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__NULL = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddress = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q = 0;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__aclr = 0U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__byteena = 1U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclocken = 1U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddressstall = 0U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rden = 1U;
    ;
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddressstall = 0U;
    ;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVDNT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DVSR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__START = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__QUOT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__DONE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__T = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__SUM = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVDNT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DVSR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__START = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__QUOT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__DONE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__T = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__SUM = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVDNT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DVSR = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__START = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__QUOT = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__DONE = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__D = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__T = 0;
    vlSelf->diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__SUM = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RST_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CE_R = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CE_F = 0;
    vlSelf->diff_top__DOT__u_r__DOT__EN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RES_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DI = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DO = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CS_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__AD_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DTEN_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__REQ_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RDY_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__IRQ_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DCE_R = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DCE_F = 0;
    vlSelf->diff_top__DOT__u_r__DOT__HTIM_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VTIM_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VOUTI = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VOUTO = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_RD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_BLEN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_RDY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB0_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB0_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB0_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB0_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB0_RD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB1_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB1_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB1_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB1_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB1_RD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_RDY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_MODE3 = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FAST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__BLUR_MESH = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DBG_EXT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TVMR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FBCR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PTMR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__EWDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__EWLR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__EWRR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__EDSR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LOPR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__COPR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__MODR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FRAME_START = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FRAME_ERASE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VBLANK_ERASE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FRAME_ERASE_EN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VBLANK_ERASE_EN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__OUT_EN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_TERMINATE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_END = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FRAME_ODD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_SEL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_RD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DRAW_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DRAW_WAIT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DISP_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DISP_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DISP_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_ERASE_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_ERASE_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_OUT_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_ST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_ADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_READ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_READ_DONE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SPR_ADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SPR_READ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SPR_DATA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SPR_DATA_READY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT_ADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT_READ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT_READ_DONE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_ADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_READ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_READ_DONE = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->diff_top__DOT__u_r__DOT__GRD_TBL[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(256, vlSelf->diff_top__DOT__u_r__DOT__CMD);
    vlSelf->diff_top__DOT__u_r__DOT__SYS_CLIP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__USR_CLIP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LOC_COORD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VERTA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VERTB = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VERTC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VERTD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SPR_OFFSY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_LSX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_LSY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_RSX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_RSY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_LDIRX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_LDIRY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_RDIRX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_RDIRY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__POLY_S = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_VERTA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_VERTB = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_VERT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_VERT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__BOTTOM_VERT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_DIRX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_DIRY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_CLIP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_S = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ROW_WIDTH = 0;
    vlSelf->diff_top__DOT__u_r__DOT__COL_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__COL_DIRY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SPR_COL_ENLARGE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__EC_FIND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__AA_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__AA_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__AA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__AA_X_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__AA_Y_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__HSS_EN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_WAIT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_ENABLE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_DRAW_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_AA_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__COL_DRAW_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_X_READ_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXTY_READ_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_Y_READ_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_X_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_Y_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_X_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_Y_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_CALC_STATE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_CALC_S = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_CALC_1 = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_CALC_2 = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ORIG_WIDTH = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ORIG_HEIGHT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_DIRX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_DIRY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__IS_PAT_EC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__COL_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_LEFT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_RIGHT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_LEFT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_D_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_D_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_RIGHT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_D_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_D_ERROR_CMP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_D_ERROR_CMP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_X_CMP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_COL_ERROR_Y_CMP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_X_CMP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_COL_ERROR_Y_CMP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_LINE_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_TEXT_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__NEXT_TEXT_Y_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_Y_ERROR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_INC = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TEXT_Y_ERROR_ADJ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_R_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_G_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_B_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_START = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_A_R = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_A_G = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DIV_A_B = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GHCOLOR_A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GHCOLOR_B = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GHCOLOR_C = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GHCOLOR_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LEFT_GHCOLOR_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RIGHT_GHCOLOR_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__LINE_GHCOLOR_STEP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_DELAY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PENALTY_CNT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FBD_ST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_BUSY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_PAT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_GHCOLOR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DRAW_BACK_C = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DRAW_PEND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_READ_PEND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_NEXT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DRAW_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_DRAW_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__SCLIP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__UCLIP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ORIG_C = 0;
    vlSelf->diff_top__DOT__u_r__DOT__TP = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RP_Xst = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RP_Yst = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RP_DXst = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RP_DYst = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RP_DX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RP_DY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RXst = 0;
    vlSelf->diff_top__DOT__u_r__DOT__RYst = 0;
    vlSelf->diff_top__DOT__u_r__DOT__OUT_RX = 0;
    vlSelf->diff_top__DOT__u_r__DOT__OUT_RY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__OUT_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__OUT_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FRAME_ERASE_HIT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ERASE_X = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ERASE_Y = 0;
    vlSelf->diff_top__DOT__u_r__DOT__ERASE_HIT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__HTIM_PIPE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DCLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_ST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FB_ST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_REQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_FB_REQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__A = 0;
    vlSelf->diff_top__DOT__u_r__DOT__WE_N = 0;
    vlSelf->diff_top__DOT__u_r__DOT__DQM = 0;
    vlSelf->diff_top__DOT__u_r__DOT__BURST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__READY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_SEL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__FBRAM_SEL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__REG_SEL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_RRDY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_FB_RRDY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_WRDY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_FB_WRDY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_FB_RPEND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_FB_WPEND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_WRREQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_RDREQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_EMPTY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_FULL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO_RST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__MEM_DO = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_CNT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_PREREAD = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VRAM_READ_POS = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_RPEND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_WPEND = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CPU_VRAM_ACCESS = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_PREREAD_WAIT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_POS = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_DAT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CMD_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_WE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT_RA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__REG_REQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__VBOUT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__REG_DO = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__WRADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__DATA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__WREN = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__RDADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__sub_wire0 = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__data = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddress = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wraddress = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wren = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__aclr = 0U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__byteena = 1U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclocken = 1U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rdaddressstall = 0U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__rden = 1U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__wraddressstall = 0U;
    ;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__mem[__Vi0] = 0;
    }
    vlSelf->diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__i = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RST = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__DATA = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WRREQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RDREQ = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__Q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__EMPTY = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__FULL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__sub_wire0 = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__RADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__WADDR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__AMOUNT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__NULL = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__data = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddress = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddress = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wren = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__q = 0;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__aclr = 0U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__byteena = 1U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclocken = 1U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rdaddressstall = 0U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__rden = 1U;
    ;
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__wraddressstall = 0U;
    ;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__mem[__Vi0] = 0;
    }
    vlSelf->diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__i = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVDNT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DVSR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__START = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__QUOT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__DONE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__T = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__SUM = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVDNT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DVSR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__START = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__QUOT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__DONE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__T = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__SUM = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVDNT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DVSR = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__START = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__QUOT = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__DONE = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__D = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__T = 0;
    vlSelf->diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__SUM = 0;
    vlSelf->__Vfunc_SprAddr__22__OFFSY = 0;
    vlSelf->__Vfunc_SprAddr__22__CMDSRCA = 0;
    vlSelf->__Vfunc_SprAddr__22__CM = 0;
    vlSelf->__Vfunc_ColorCalc__23__ORIG = 0;
    vlSelf->__Vfunc_ColorCalc__23__BACK = 0;
    vlSelf->__Vfunc_ColorCalc__23__CG = 0;
    vlSelf->__Vfunc_ColorCalc__23__CCB = 0;
    vlSelf->__Vfunc_GouraudAdd__24__Vfuncout = 0;
    vlSelf->__Vfunc_GouraudAdd__24__CO = 0;
    vlSelf->__Vfunc_GouraudAdd__24__CG = 0;
    vlSelf->__Vfunc_ColorHalf__25__Vfuncout = 0;
    vlSelf->__Vfunc_ColorHalf__25__CA = 0;
    vlSelf->__Vfunc_ColorHalf__26__Vfuncout = 0;
    vlSelf->__Vfunc_ColorHalf__26__CA = 0;
    vlSelf->__Vfunc_ColorHalf__27__Vfuncout = 0;
    vlSelf->__Vfunc_ColorHalf__27__CA = 0;
    vlSelf->__Vfunc_ColorAdd__28__Vfuncout = 0;
    vlSelf->__Vfunc_ColorAdd__28__CA = 0;
    vlSelf->__Vfunc_ColorAdd__28__CB = 0;
    vlSelf->__Vfunc_SprAddr__66__OFFSY = 0;
    vlSelf->__Vfunc_SprAddr__66__CMDSRCA = 0;
    vlSelf->__Vfunc_SprAddr__66__CM = 0;
    vlSelf->__Vfunc_ColorCalc__67__ORIG = 0;
    vlSelf->__Vfunc_ColorCalc__67__BACK = 0;
    vlSelf->__Vfunc_ColorCalc__67__CG = 0;
    vlSelf->__Vfunc_ColorCalc__67__CCB = 0;
    vlSelf->__Vfunc_GouraudAdd__68__Vfuncout = 0;
    vlSelf->__Vfunc_GouraudAdd__68__CO = 0;
    vlSelf->__Vfunc_GouraudAdd__68__CG = 0;
    vlSelf->__Vfunc_ColorHalf__69__Vfuncout = 0;
    vlSelf->__Vfunc_ColorHalf__69__CA = 0;
    vlSelf->__Vfunc_ColorHalf__70__Vfuncout = 0;
    vlSelf->__Vfunc_ColorHalf__70__CA = 0;
    vlSelf->__Vfunc_ColorHalf__71__Vfuncout = 0;
    vlSelf->__Vfunc_ColorHalf__71__CA = 0;
    vlSelf->__Vfunc_ColorAdd__72__Vfuncout = 0;
    vlSelf->__Vfunc_ColorAdd__72__CA = 0;
    vlSelf->__Vfunc_ColorAdd__72__CB = 0;
    vlSelf->__Vdly__diff_top__DOT__u_n__DOT__OUT_RX = 0;
    vlSelf->__Vdly__diff_top__DOT__u_n__DOT__OUT_RY = 0;
    vlSelf->__Vdly__diff_top__DOT__u_n__DOT__OUT_X = 0;
    vlSelf->__Vdly__diff_top__DOT__u_n__DOT__A = 0;
    vlSelf->__Vdly__diff_top__DOT__u_r__DOT__OUT_RX = 0;
    vlSelf->__Vdly__diff_top__DOT__u_r__DOT__OUT_RY = 0;
    vlSelf->__Vdly__diff_top__DOT__u_r__DOT__OUT_X = 0;
    vlSelf->__Vdly__diff_top__DOT__u_r__DOT__A = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RST_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE_R__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CE_F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EN__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__RES_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FAST__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__BLUR_MESH__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DBG_EXT__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DCE_R__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DCE_F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__HTIM_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__VTIM_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__VOUTI__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DI__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__CS_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__AD_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__DTEN_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__REQ_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__VRAM_Q_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__VRAM_RDY_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FB0_Q_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FB1_Q_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FB_RDY_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__VRAM_Q_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__VRAM_RDY_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FB0_Q_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FB1_Q_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FB_RDY_n__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__RST_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__CLT__DOT__altdpram0__DOT__inclock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_B__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_G__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_n__DOT__GRD_DIV_R__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__RST_N__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__CLT__DOT__altdpram0__DOT__inclock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__PAT_FIFO__DOT__altdpram_component__DOT__inclock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_B__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_G__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__diff_top__DOT__u_r__DOT__GRD_DIV_R__DOT__CLK__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
