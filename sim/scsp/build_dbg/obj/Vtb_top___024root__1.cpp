// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root___nba_comb__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER;
    tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER = 0;
    IData/*16:0*/ tb_top__DOT__ref_i__DOT__SO_MOD;
    tb_top__DOT__ref_i__DOT__SO_MOD = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_27;
    __VdfgRegularize_hebeb780c_0_27 = 0;
    // Body
    vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MIXS_Q = 
        ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)
          ? vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q
          : vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q);
    if ((0U == (2U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_top__DOT__ref_i__DOT__SA_RA = 
            (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                    >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA = 0U;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR5_RA 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__ref_i__DOT__SCR6_RA 
            = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RA = vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                      >> 0x00000023U)));
    } else {
        if ((2U == (2U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__SA_RA 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                          >> 0x00000023U)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR2_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR0_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[2U] 
                                  >> 0x00000012U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR5_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR6_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                  >> 0x00000016U));
        }
        if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4) 
                                     >> 6U)));
        } else if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                 >> 1U)))) {
            vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP2_SCR4)));
        }
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)) 
                                                 & (4U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN) 
                                                 & (4U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP 
        = ((0x0000007cU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                           >> 0x00000012U)) | (3U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                                >> 1U)));
    vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE = (
                                                   (~ vlSelfRef.tb_top__DOT__ref_i__DOT__OP7) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)));
    tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER = (0x0000ffffU 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))
                                                      ? 
                                                     (0x0000ffffU 
                                                      & ((((vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                                                            << 0x0000000fU) 
                                                           | (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[0U] 
                                                              >> 0x00000011U)) 
                                                          + 
                                                          (0x0000003fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP3_PHASE_FRAC_NEXT) 
                                                              >> 8U))) 
                                                         >> 6U))
                                                      : 
                                                     (vlSelfRef.tb_top__DOT__ref_i__DOT__MOD_PHASE_CURR 
                                                      >> 6U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_32 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x1eU 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                      >> 5U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)(
                                                                 (0x0eU 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                      >> 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_34 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000bU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_35 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000aU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (9U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_37 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_38 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (7U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (6U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (5U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_41 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (4U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (3U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_43 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (2U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (1U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(
                                                                       (0U 
                                                                        == 
                                                                        (0x060fU 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                        & (- (IData)(
                                                                     (0x76U 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                                          >> 4U)))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                                                >> 0x0000001cU))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = (0x0000000fU 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                                                    & (((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                                        & ((0x0000000cU 
                                                            & ((- (IData)((IData)(
                                                                                (0x0700U 
                                                                                == 
                                                                                (0x07c1U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                               << 2U)) 
                                                           | (3U 
                                                              & (- (IData)((IData)(
                                                                                (0x0701U 
                                                                                == 
                                                                                (0x07c1U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                                                >> 0x00000025U))))))));
    __VdfgRegularize_hebeb780c_0_27 = (0x0000000fU 
                                       & ((((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                            & ((0x0000000cU 
                                                & ((- (IData)((IData)(
                                                                      (0x0600U 
                                                                       == 
                                                                       (0x0701U 
                                                                        & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)((IData)(
                                                                       (0x0601U 
                                                                        == 
                                                                        (0x0701U 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A))))))))) 
                                           | (- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                                                    >> 0x00000037U)))))) 
                                          & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__SAMPLE_CE = 
        ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT)) 
         & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber5 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                           ? (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A)
                           : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_RA)));
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_13) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_30;
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28))))));
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_14) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_30;
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE)) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN))))))))));
    if ((0x00080000U & vlSelfRef.tb_top__DOT__ref_i__DOT__OP7)) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP));
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MPRO_RAM____pinNumber2 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                              >> 2U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber2 
            = (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber2 
            = (0x0000007fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                             >> 0x00000037U)))
                               ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MDEC_CT) 
                                  + (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO1_Q 
                                             >> 0x00000030U)))
                               : ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                  >> 1U)));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO0_Q = (vlSelfRef.tb_top__DOT__ref_i__DOT__MPRO_RAM__DOT__altsyncram_component__DOT__q 
                                                  & (- (QData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_SET
                                                                       [vlSelfRef.tb_top__DOT__ref_i__DOT__DSP_MPRO_STEP]))));
    if (vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE) {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                              >> 1U));
    } else {
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK0____pinNumber4 
        = (3U & (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x18U == (0x0000003fU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                >> 5U))))))) 
                 | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE))) 
                    & (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE)))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__STACK1____pinNumber4 
        = (3U & (((- (IData)(((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WGEN) 
                              & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__STACK_WE)))) 
                  & (- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE)))) 
                 | ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_WE) 
                    & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE))) 
                       & (- (IData)((0x19U == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                                  >> 5U)))))))));
    tb_top__DOT__ref_i__DOT__SO_MOD = (0x0001ffffU 
                                       & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[0U] 
                                          & (((0x00010000U 
                                               & ((IData)(tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER) 
                                                  << 1U)) 
                                              | (IData)(tb_top__DOT__ref_i__DOT__MOD_PHASE_INTEGER)) 
                                             + (0x0000ffffU 
                                                & (((vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.tb_top__DOT__ref_i__DOT__OP3[1U] 
                                                       >> 7U)) 
                                                   + 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                                                                     >> 2U))))))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MADRS_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__COEF_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP6 
                                           >> 0x0000001cU))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LEA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_LSA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__ref_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__MEMS_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31)));
    vlSelfRef.tb_top__DOT__ref_i__DOT____Vcellinp__TEMP_RAM____pinNumber4 
        = (0x0000000fU & ((IData)(__VdfgRegularize_hebeb780c_0_27) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__ref_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_27))));
    vlSelfRef.tb_top__DOT__ref_i__DOT__ADP = (0x000fffffU 
                                              & (vlSelfRef.tb_top__DOT__ref_i__DOT__ADP_SA 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__ADP_PCM8B)
                                                   ? 
                                                  ((0x000e0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__ref_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000011U)) 
                                                   | tb_top__DOT__ref_i__DOT__SO_MOD)
                                                   : 
                                                  ((0x000c0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__ref_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000012U)) 
                                                   | (tb_top__DOT__ref_i__DOT__SO_MOD 
                                                      << 1U)))));
}

void Vtb_top___024root___nba_sequent__TOP__7(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__7\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0;
    tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0 = 0;
    CData/*4:0*/ tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE = 0;
    SData/*14:0*/ tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE;
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE = 0;
    SData/*15:0*/ __Vfunc_MDCalc__3__X;
    __Vfunc_MDCalc__3__X = 0;
    SData/*15:0*/ __Vfunc_MDCalc__3__Y;
    __Vfunc_MDCalc__3__Y = 0;
    CData/*3:0*/ __Vfunc_MDCalc__3__MDL;
    __Vfunc_MDCalc__3__MDL = 0;
    SData/*15:0*/ __Vfunc_WaveMask__4__LEA;
    __Vfunc_WaveMask__4__LEA = 0;
    CData/*5:0*/ __Vfunc_EffRateCalc__5__Vfuncout;
    __Vfunc_EffRateCalc__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateCalc__5__RATE;
    __Vfunc_EffRateCalc__5__RATE = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__5__KRS;
    __Vfunc_EffRateCalc__5__KRS = 0;
    CData/*3:0*/ __Vfunc_EffRateCalc__5__OCT;
    __Vfunc_EffRateCalc__5__OCT = 0;
    CData/*3:0*/ __Vfunc_EffRateBit__6__Vfuncout;
    __Vfunc_EffRateBit__6__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_EffRateBit__6__ERATE;
    __Vfunc_EffRateBit__6__ERATE = 0;
    CData/*4:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES = 0;
    CData/*5:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP = 0;
    CData/*3:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE = 0;
    CData/*5:0*/ TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 = 0;
    CData/*4:0*/ TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP;
    TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP = 0;
    // Body
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.RES_N) {
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__OP4_PCM8B_LATCH 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0) 
                             >> 4U));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                    = ((0x000003ffU & vlSelfRef.tb_top__DOT__new_i__DOT__OP4) 
                       | (((0x0001fe00U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                           >> 6U)) 
                           | ((0x00000100U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                              >> 5U)) 
                              | (0x000000ffU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                >> 0x00000017U)))) 
                          << 0x0000000aU));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                    = ((0x07fffc00U & vlSelfRef.tb_top__DOT__new_i__DOT__OP4) 
                       | ((0x000003f0U & (vlSelfRef.tb_top__DOT__new_i__DOT__MOD_PHASE_CURR 
                                          << 4U)) | 
                          ((0x0000000cU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0) 
                                           >> 5U)) 
                           | (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0) 
                                    >> 9U)))));
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000012U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000011U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR 
                = (1U & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000021U)))
                           ? 0U : vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                         >> 0x00000010U));
            if ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                               >> 0x00000021U)))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO = 0U;
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC = 0U;
            } else {
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO 
                    = (0x0000ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q);
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q;
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP 
                = ((0x0000ffffU & ((IData)(1U) + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                  ^ 
                                                  (- (IData)(
                                                             ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR) 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                                                 >> 6U))))))) 
                   > ((1U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR) 
                              & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                 >> 6U)) | (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP))))
                       ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA)
                       : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA)));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 1U;
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 0U;
                if ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                   >> 0x00000022U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC = 0U;
                } else {
                    if ((((0x03c0U <= (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__OP2_EVOL)) 
                          & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR2) 
                                >> 0x0000000fU))) & 
                         (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                     >> 0x00000021U))))) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                    } else {
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR;
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO;
                        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0))) {
                            if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0))) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                    if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SADIR) {
                                        if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                        } else {
                                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                                = (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                                       << 1U)));
                                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                        }
                                    } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                            = (0x0000ffffU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                                  - 
                                                  ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA) 
                                                   << 1U)));
                                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                    }
                                } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 0U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                } else {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = (0x0000ffffU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                                 - (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA))));
                                }
                            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                          - ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                             + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA))));
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR = 1U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0))) {
                            if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO 
                                        = (0x0000ffffU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SO) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA) 
                                                 - (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA))));
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                            }
                        } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_LOOPEND)))) {
                                if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) 
                                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED)))) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND = 1U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                                }
                            }
                        } else if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__COMP) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP = 1U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT = 1U;
                        }
                        if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW = 0U;
                        }
                    }
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT 
                        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                           + (IData)(
                                                     (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                      >> 9U))) 
                                          >> 0x0000000eU));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC 
                        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                          + (IData)(
                                                    (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                     >> 9U))));
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__ADP_SA 
                    = ((0x000f0000U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                       << 0x00000010U)) 
                       | ((0x0000fffeU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA)) 
                          | (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA) 
                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                      >> 4U)))));
                vlSelfRef.tb_top__DOT__new_i__DOT__ADP_PCM8B 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                             >> 4U));
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__LOOP0_DELAYED 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__EVENT;
                vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CALC_SO 
                    = (0x0000ffffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                      + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_INT)));
                vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM_D 
                    = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_LOOPEND) 
                        << 0x00000012U) | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SALOOP) 
                                            << 0x00000011U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                               << 0x00000010U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CALC_SO))));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                    = ((0x00001fffU & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U]) 
                       | (0x007fffffU & (((0x000003fcU 
                                           & ((IData)(
                                                      (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                       >> 0x00000020U)) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_SALOOP))) 
                                         << 0x0000000dU)));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0xff80007fU & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (0x007fff80U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                          ^ (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR)))) 
                                         << 7U)));
                __Vfunc_MDCalc__3__MDL = (0x0000000fU 
                                          & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4) 
                                             >> 0x0000000cU));
                __Vfunc_MDCalc__3__Y = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY;
                __Vfunc_MDCalc__3__X = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX;
                vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__TEMP 
                    = (0x0001ffffU & (((0x00010000U 
                                        & ((IData)(__Vfunc_MDCalc__3__X) 
                                           << 1U)) 
                                       | (IData)(__Vfunc_MDCalc__3__X)) 
                                      + ((0x00010000U 
                                          & ((IData)(__Vfunc_MDCalc__3__Y) 
                                             << 1U)) 
                                         | (IData)(__Vfunc_MDCalc__3__Y))));
                vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__MD 
                    = (0x007fffffU & VL_SHIFTRS_III(23,23,4, 
                                                    (0x007fff80U 
                                                     & (vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__TEMP 
                                                        << 6U)), 
                                                    (0x0000000fU 
                                                     & (- (IData)(__Vfunc_MDCalc__3__MDL)))));
                vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_0__MDCalc 
                    = ((4U < (IData)(__Vfunc_MDCalc__3__MDL))
                        ? ((0x003e0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__MD 
                                                          >> 0x10U)))) 
                                           << 0x00000011U)) 
                           | (0x0001fffeU & vlSymsp->TOP__SCSP_PKG.MDCalc__Vstatic__MD))
                        : 0U);
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                    = ((0x0001ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U]) 
                       | (vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_0__MDCalc 
                          << 0x00000011U));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0xffffff80U & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_0__MDCalc 
                          >> 0x0000000fU));
                __Vfunc_WaveMask__4__LEA = vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA;
                vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x0001ffffU;
                if ((0x00000400U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x000003ffU;
                }
                if ((0x00000200U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x000001ffU;
                }
                if ((0x00000100U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x000000ffU;
                }
                if ((0x00000080U & (IData)(__Vfunc_WaveMask__4__LEA))) {
                    vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET = 0x0000007fU;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_1__WaveMask 
                    = vlSymsp->TOP__SCSP_PKG.WaveMask__Vstatic__RET;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                    = ((0xfffe0000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U]) 
                       | (0x0001ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_1__WaveMask 
                                         | (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                                     >> 8U)))))))));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0x7fffffffU & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                           ^ (- (IData)(((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                            >> 6U))))) 
                          << 0x0000001fU));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                    = ((0x007fe000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U]) 
                       | (0x00001fffU & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                          ^ (- (IData)(
                                                       ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                                           >> 6U))))) 
                                         >> 1U)));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                    = ((0x807fffffU & vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U]) 
                       | (0x7f800000U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2) 
                                         << 0x00000017U)));
                if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 1U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM_D 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__PHASE_FRAC;
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM_D = 0U;
                }
                if (((0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                             >> 0x00000023U))) 
                     == (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR4) 
                                        >> 0x0000000bU)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MONITOR_CA 
                        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__ALLOW)
                            ? (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SAO) 
                                              >> 0x0cU))
                            : 0U);
                }
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT0_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__OP3_PHASE_FRAC_NEXT 
                    = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__CUR_PHASE_FRAC) 
                                      ^ (- (IData)(
                                                   ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__NEW_SADIR) 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0) 
                                                       >> 6U))))));
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE) {
                if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q;
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__OP2_EVOL 
                        = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__q));
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR2 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q;
                }
                if ((0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    if ((2U != (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                          >> 1U)))) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY 
                                = ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA))
                                    ? vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                                   [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]
                                    : vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                                   [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]);
                        }
                    }
                    if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                      >> 1U)))) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX 
                            = ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA))
                                ? vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                               [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]
                                : vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                               [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5]);
                    }
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q;
            }
        } else {
            vlSelfRef.tb_top__DOT__new_i__DOT__OP4 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP3_SCR0 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LSA = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_LEA = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSY = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk2__DOT__SOUSX = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SA = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR0 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR2 = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT__OP4 = 0U;
    }
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE 
        = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT) 
            ^ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT) 
               - (IData)(1U))) & (1U ^ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCNT)));
    tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE 
        = (0x0000001fU & ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_EST))
                           ? ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_EST))
                               ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2)
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1) 
                                  >> 0x0000000bU)) : 
                          ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_EST))
                            ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1) 
                               >> 6U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1))));
    if (((3U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_EST)) 
         & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
            >> 0x00000014U))) {
        tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR1));
    } else if (((3U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_EST)) 
                & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                   >> 0x00000013U))) {
        tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2));
    }
    __Vfunc_EffRateCalc__5__OCT = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR5) 
                                                  >> 0x0000000bU));
    __Vfunc_EffRateCalc__5__KRS = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_SCR2) 
                                                  >> 0x0000000aU));
    __Vfunc_EffRateCalc__5__RATE = tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE;
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__5__KRS) 
                          + ((0x00000020U & ((IData)(__Vfunc_EffRateCalc__5__OCT) 
                                             << 2U)) 
                             | ((0x00000010U & ((IData)(__Vfunc_EffRateCalc__5__OCT) 
                                                << 1U)) 
                                | (IData)(__Vfunc_EffRateCalc__5__OCT)))));
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE 
        = ((0x0fU == (IData)(__Vfunc_EffRateCalc__5__KRS))
            ? 0U : ((0x00000020U & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                     ? 0U : ((0x00000010U & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP))
                              ? 0x0000000fU : (0x0000000fU 
                                               & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP)))));
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2 
        = (0x0000003fU & ((IData)(__Vfunc_EffRateCalc__5__RATE) 
                          + (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__KEY_EG_SCALE)));
    TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES = 
        ((0x00000020U & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2))
          ? 0x0000001fU : (0x0000001fU & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)));
    __Vfunc_EffRateCalc__5__Vfuncout = ((0x00000020U 
                                         & (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__TEMP2)) 
                                        | (IData)(TOP__SCSP_PKG__DOT__EffRateCalc__Vstatic__RES));
    tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0 
        = __Vfunc_EffRateCalc__5__Vfuncout;
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_OVR 
        = (1U & ((IData)(tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0) 
                 >> 5U));
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE = (0x0000001fU 
                                                   & (IData)(tb_top__DOT__new_i__DOT____Vconcswap_1_h56c797d1__0));
    __Vfunc_EffRateBit__6__ERATE = vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE;
    TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP = 
        (0x0000001fU & ((IData)(0x18U) - ((0x18U < (IData)(__Vfunc_EffRateBit__6__ERATE))
                                           ? 0x18U : (IData)(__Vfunc_EffRateBit__6__ERATE))));
    __Vfunc_EffRateBit__6__Vfuncout = (0x0000000fU 
                                       & ((IData)(TOP__SCSP_PKG__DOT__EffRateBit__Vstatic__TEMP) 
                                          >> 1U));
    vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT 
        = __Vfunc_EffRateBit__6__Vfuncout;
    vlSelfRef.tb_top__DOT__new_i__DOT__ENV_STEP = (
                                                   (1U 
                                                    & (~ 
                                                       ((0U 
                                                         == (IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__RATE)) 
                                                        | ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_OVR) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP4_EST)))))) 
                                                   && (((0x18U 
                                                         > (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE)) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE))
                                                        ? 
                                                       (((0x0eU 
                                                          >= 
                                                          (0x0000000fU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))) 
                                                         && (1U 
                                                             & ((IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                                >> 
                                                                (0x0000000fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))))) 
                                                        | ((0x0eU 
                                                            >= 
                                                            (0x0000000fU 
                                                             & ((IData)(2U) 
                                                                + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))) 
                                                           && (1U 
                                                               & ((IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                                  >> 
                                                                  (0x0000000fU 
                                                                   & ((IData)(2U) 
                                                                      + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)))))))
                                                        : 
                                                       ((0x0eU 
                                                         >= (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT)) 
                                                        && (1U 
                                                            & ((IData)(tb_top__DOT__new_i__DOT__unnamedblk3__DOT__SCNT_EDGE) 
                                                               >> (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__EFF_RATE_BIT))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__CR4 = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR4;
    vlSelfRef.tb_top__DOT__new_i__DOT__MOD_PHASE_CURR 
        = (0x003fffffU & (((vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                            << 0x0000000fU) | (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                                               >> 0x00000011U)) 
                          + (0x0000003fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                            >> 7U))));
}

void Vtb_top___024root___nba_sequent__TOP__8(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__8\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK1__DOT__altdpram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__STACK0__DOT__altdpram_component__DOT__mem__v1)) 
                  << 8U));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                 >> 0x00000023U)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                 >> 0x00000023U)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5];
    vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem
        [vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RA];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SA_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR0_RA)))];
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__q 
        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
        [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                          ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                             >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR2_RA)))];
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SO_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__PHASE_FRAC_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LSA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_LEA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR4__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SA__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR0__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0] 
            = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0]) 
               | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1] 
            = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1]) 
               | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR2__DOT__altsyncram_component__DOT__mem__v1)) 
                  << 8U));
    }
}

void Vtb_top___024root___nba_sequent__TOP__9(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__9\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_PLFOCalc__0__Vfuncout;
    __Vfunc_PLFOCalc__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__0__DATA;
    __Vfunc_PLFOCalc__0__DATA = 0;
    CData/*7:0*/ __Vfunc_PLFOCalc__0__NOISE;
    __Vfunc_PLFOCalc__0__NOISE = 0;
    CData/*1:0*/ __Vfunc_PLFOCalc__0__PLFOWS;
    __Vfunc_PLFOCalc__0__PLFOWS = 0;
    CData/*2:0*/ __Vfunc_PLFOCalc__0__PLFOS;
    __Vfunc_PLFOCalc__0__PLFOS = 0;
    IData/*22:0*/ __Vfunc_PhaseCalc__1__Vfuncout;
    __Vfunc_PhaseCalc__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_PhaseCalc__1__SCR5;
    __Vfunc_PhaseCalc__1__SCR5 = 0;
    CData/*7:0*/ __Vfunc_PhaseCalc__1__PLFO_WAVE;
    __Vfunc_PhaseCalc__1__PLFO_WAVE = 0;
    SData/*9:0*/ __Vfunc_LFOFreqDiv__2__Vfuncout;
    __Vfunc_LFOFreqDiv__2__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_LFOFreqDiv__2__LFOF;
    __Vfunc_LFOFreqDiv__2__LFOF = 0;
    // Body
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.RES_N) {
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                if ((IData)((((0U == (0x0600U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))) 
                              & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                 >> 1U)) & (0U == (0x0000001eU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                      << 1U)))))) {
                    if ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))) {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 1U;
                    }
                }
            }
            __Vfunc_PLFOCalc__0__PLFOS = (7U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6) 
                                                >> 5U));
            __Vfunc_PLFOCalc__0__PLFOWS = (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6) 
                                                 >> 8U));
            __Vfunc_PLFOCalc__0__NOISE = (0x000000ffU 
                                          & vlSelfRef.tb_top__DOT__new_i__DOT__NOISE);
            __Vfunc_PLFOCalc__0__DATA = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA;
            vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__WAVE 
                = ((2U & (IData)(__Vfunc_PLFOCalc__0__PLFOWS))
                    ? ((1U & (IData)(__Vfunc_PLFOCalc__0__PLFOWS))
                        ? (0x80U ^ (IData)(__Vfunc_PLFOCalc__0__NOISE))
                        : (0x000000feU & (((0x0000003fU 
                                            & ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                               ^ (- (IData)(
                                                            (1U 
                                                             & ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                                                >> 6U)))))) 
                                           ^ (- (IData)(
                                                        (1U 
                                                         & ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                                            >> 7U))))) 
                                          << 1U))) : 
                   ((1U & (IData)(__Vfunc_PLFOCalc__0__PLFOWS))
                     ? ((0x00000080U & (IData)(__Vfunc_PLFOCalc__0__DATA)) 
                        | (0x0000007fU & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(__Vfunc_PLFOCalc__0__DATA) 
                                                         >> 7U)))))))
                     : (IData)(__Vfunc_PLFOCalc__0__DATA)));
            vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__RET 
                = ((0U != (IData)(__Vfunc_PLFOCalc__0__PLFOS))
                    ? (0x000000ffU & VL_SHIFTRS_III(8,8,3, 
                                                    (0xfeU 
                                                     & (IData)(vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__WAVE)), 
                                                    (7U 
                                                     & (~ (IData)(__Vfunc_PLFOCalc__0__PLFOS)))))
                    : 0U);
            __Vfunc_PLFOCalc__0__Vfuncout = vlSymsp->TOP__SCSP_PKG.PLFOCalc__Vstatic__RET;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
                = __Vfunc_PLFOCalc__0__Vfuncout;
            __Vfunc_PhaseCalc__1__PLFO_WAVE = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
            __Vfunc_PhaseCalc__1__SCR5 = vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5;
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__S 
                = (0x0000000fU & (8U ^ ((IData)(__Vfunc_PhaseCalc__1__SCR5) 
                                        >> 0x0000000bU)));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__F 
                = (0x000007ffU & ((IData)(0x0400U) 
                                  + (IData)(__Vfunc_PhaseCalc__1__SCR5)));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__TEMP 
                = (0x00007fffU & ((IData)(__Vfunc_PhaseCalc__1__PLFO_WAVE) 
                                  * (0x0000007fU & 
                                     ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__F) 
                                      >> 4U))));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__FM 
                = ((0x00000e00U & ((- (IData)((1U & 
                                               ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                >> 0x0eU)))) 
                                   << 9U)) | (0x000001ffU 
                                              & ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__TEMP) 
                                                 >> 6U)));
            vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__P 
                = (0x07ffffffU & ((0x00000fffU & ((IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__F) 
                                                  + (IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__FM))) 
                                  << (IData)(vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__S)));
            __Vfunc_PhaseCalc__1__Vfuncout = (0x007fffffU 
                                              & (vlSymsp->TOP__SCSP_PKG.PhaseCalc__Vstatic__P 
                                                 >> 4U));
            vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PHASE 
                = __Vfunc_PhaseCalc__1__Vfuncout;
            if (vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D = 0U;
                if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST)))) {
                    if ((vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
                         [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT] 
                         & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem
                                      [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT])))) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D 
                            = (1U | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D));
                    }
                    if (((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem
                                    [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT])) 
                         & vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem
                         [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT])) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D 
                            = (2U | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM_D));
                    }
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                    = ((0x00000001ffffffffULL & vlSelfRef.tb_top__DOT__new_i__DOT__OP2) 
                       | ((QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
                                               << 1U) 
                                              | (1U 
                                                 & vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                 [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT]))))) 
                          << 0x00000021U));
                if ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN = 0U;
                    if (vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_PEND) {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_RUN = 1U;
                    }
                    vlSelfRef.tb_top__DOT__new_i__DOT__RST = 0U;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                    = ((0x000000fe000000ffULL & vlSelfRef.tb_top__DOT__new_i__DOT__OP2) 
                       | ((QData)((IData)(((0x01000000U 
                                            & ((vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem
                                                [vlSelfRef.tb_top__DOT__new_i__DOT__SLOT] 
                                                >> 1U) 
                                               << 0x00000018U)) 
                                           | ((vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PHASE 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5) 
                                                    >> 0x0000000fU)))))) 
                          << 8U));
                vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                    = ((0x000000ffffffff00ULL & vlSelfRef.tb_top__DOT__new_i__DOT__OP2) 
                       | (IData)((IData)((0x000000ffU 
                                          & vlSelfRef.tb_top__DOT__new_i__DOT__NOISE))));
                vlSelfRef.tb_top__DOT__new_i__DOT__SLOT 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)));
                vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                    = ((0x00010000U & ((0xffff0000U 
                                        & (vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                                           << 0x0000000bU)) 
                                       ^ (vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                                          << 0x00000010U))) 
                       | (0x0000ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__NOISE 
                                         >> 1U)));
                if ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                        = (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA;
                } else {
                    __Vfunc_LFOFreqDiv__2__LFOF = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6) 
                                                      >> 0x0000000aU));
                    vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (7U & (~ 
                                                   (3U 
                                                    & (IData)(__Vfunc_LFOFreqDiv__2__LFOF))))));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA)));
                    vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP2 
                        = (((IData)(vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP) 
                            << 7U) >> (7U & ((IData)(__Vfunc_LFOFreqDiv__2__LFOF) 
                                             >> 2U)));
                    __Vfunc_LFOFreqDiv__2__Vfuncout 
                        = (0x000003ffU & (((IData)(vlSymsp->TOP__SCSP_PKG.LFOFreqDiv__Vstatic__TEMP2) 
                                           - (IData)(4U)) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV 
                        = __Vfunc_LFOFreqDiv__2__Vfuncout;
                }
                if ((0x00008000U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA = 0U;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM_D 
                    = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DIV) 
                        << 8U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__NEW_LFO_DATA));
            }
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE) {
                if ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                  >> 1U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DATA 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q);
                    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__OP1_LFO_DIV 
                        = (0x000003ffU & (vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q 
                                          >> 8U));
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q;
                    vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q;
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__SLOT = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__NOISE = 1U;
            vlSelfRef.tb_top__DOT__new_i__DOT__RST = 1U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP2 = 0ULL;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR6 = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__OP1_SCR5 = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT__OP2 = 0ULL;
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__KYONEX_PEND 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__KYONEX_PEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk1__DOT__PLFO_WAVE;
}

void Vtb_top___024root___nba_sequent__TOP__11(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__11\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*23:0*/ __Vfunc_DSPItoF__19__I;
    __Vfunc_DSPItoF__19__I = 0;
    // Body
    if (vlSelfRef.RST_N) {
        if (((((~ (IData)(vlSelfRef.CS_N)) & (IData)(vlSelfRef.DTEN_N)) 
              & (IData)(vlSelfRef.AD_N)) & (IData)(vlSelfRef.CE_R))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A 
                = ((0x00008000U & (IData)(vlSelfRef.DI))
                    ? ((0x000fff00U & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A) 
                       | (0x000000ffU & (IData)(vlSelfRef.DI)))
                    : ((0x000000ffU & vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A) 
                       | (0x000fff00U & ((IData)(vlSelfRef.DI) 
                                         << 8U))));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_REQ) 
             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__WE_N))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RA 
                = vlSelfRef.tb_top__DOT__new_i__DOT__A;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RPEND = 1U;
            vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RRDY = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_top__DOT__new_i__DOT__A));
        }
        if ((((4U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH)) 
              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE)) 
             | (((0x10U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST)) 
                 & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)) 
                & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RRDY = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RPEND = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCU_REQ) 
              & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__WE_N))) 
             & (~ (IData)(vlSelfRef.DTEN_N)))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WA 
                = vlSelfRef.tb_top__DOT__new_i__DOT__A;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_D 
                = vlSelfRef.DI;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WE 
                = (3U & ((~ (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__WE_N)))) 
                         & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DQM))));
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND = 1U;
            vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WRDY = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_top__DOT__new_i__DOT__A));
        }
        if (((((~ (IData)(vlSelfRef.CS_N)) & (IData)(vlSelfRef.DTEN_N)) 
              & (IData)(vlSelfRef.AD_N)) & (IData)(vlSelfRef.CE_R))) {
            if ((1U & (~ ((IData)(vlSelfRef.DI) >> 0x0fU)))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__WE_N 
                    = (1U & ((IData)(vlSelfRef.DI) 
                             >> 0x0eU));
            }
            if ((0x00008000U & (IData)(vlSelfRef.DI))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__DQM 
                    = (3U & ((IData)(vlSelfRef.DI) 
                             >> 0x0cU));
            }
        }
        if (((((0x10U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST)) 
               & (0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE))) 
              | ((0x10U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST)) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)))) 
             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WRDY = 1U;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND = 0U;
        }
        if ((((((~ (IData)(vlSelfRef.SCAS_N)) & (IData)(vlSelfRef.SCRW_N)) 
               & (IData)(vlSelfRef.N_SCDTACK_N)) & 
              (7U != (IData)(vlSelfRef.SCFC))) & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND)))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RA 
                = vlSelfRef.SCA;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND = 1U;
        }
        if ((((0x20U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST)) 
              | (0x20U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__IO_ST))) 
             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND = 0U;
        } else if ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND) 
                     & (5U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) 
                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND = 0U;
        }
        if (((((((~ (IData)(vlSelfRef.SCAS_N)) & (~ (IData)(vlSelfRef.SCRW_N))) 
                & ((~ (IData)(vlSelfRef.SCLDS_N)) | 
                   (~ (IData)(vlSelfRef.SCUDS_N)))) 
               & (IData)(vlSelfRef.N_SCDTACK_N)) & 
              (7U != (IData)(vlSelfRef.SCFC))) & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WPEND)))) {
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WA 
                = vlSelfRef.SCA;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_D 
                = vlSelfRef.SCDI;
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WE 
                = ((2U & ((~ (IData)(vlSelfRef.SCUDS_N)) 
                          << 1U)) | (1U & (~ (IData)(vlSelfRef.SCLDS_N))));
            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND = 1U;
            vlSelfRef.__Vdly__N_SCDTACK_N = 0U;
        }
        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RFS = 0U;
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST)))) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 0U;
                                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST)))) {
                            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                                vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 0U;
                                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST)))) {
                        if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 0U;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST)))) {
                    if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 0U;
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST)))) {
                if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST))) {
            if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_START) {
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WPEND;
                if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__WD_READ) 
                     & ((1U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                      >> 1U))) | (3U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                                      >> 1U)))))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__ADP 
                                          >> 1U));
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 1U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 2U;
                } else if ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ) 
                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_WRITE)) 
                            & ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                             >> 1U))) 
                               | (2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                               >> 1U)))))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMA_REG);
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__DSP_OUT_REG;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE 
                        = (3U & (- (IData)(((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_WRITE) 
                                            & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMA_REG 
                                                  >> 0x12U))))));
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 2U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 4U;
                } else if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC) 
                            & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR)) 
                               ^ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__DMA_MA);
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D 
                        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DAT) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7) 
                                                  >> 0x0000000eU))))));
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE 
                        = (3U & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR))));
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD 
                        = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR)));
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 3U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 8U;
                } else if ((((~ (vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA 
                                 >> 0x13U)) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RPEND)) 
                            & (4U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA);
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 4U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 0x10U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA 
                                    >> 0x12U)));
                } else if (((~ (vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA 
                                >> 0x13U)) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA);
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_D;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WE;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 0x10U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA 
                                    >> 0x12U)));
                } else if ((IData)(((0U == (0x00780000U 
                                            & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA)) 
                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WPEND)))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA);
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_D;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE 
                        = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WE;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 0x20U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA 
                                    >> 0x12U)));
                } else if ((IData)(((0U == (0x00780000U 
                                            & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA)) 
                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A 
                        = (0x0003ffffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA);
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 1U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 5U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 0x20U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS 
                        = (1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA 
                                    >> 0x12U)));
                } else {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV = 0U;
                    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RFS = 1U;
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
            if ((5U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.__Vdly__N_SCDTACK_N = 0U;
            }
        }
        if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE) {
            if ((1U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WD 
                    = vlSelfRef.N_RAM_Q;
            } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_INP_REG 
                    = vlSelfRef.N_RAM_Q;
            } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DAT 
                    = vlSelfRef.N_RAM_Q;
            } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.N_DO = vlSelfRef.N_RAM_Q;
            } else if ((5U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH))) {
                vlSelfRef.N_SCDO = vlSelfRef.N_RAM_Q;
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH 
                = vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST)))) {
                                if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                                    vlSelfRef.N_SCDO 
                                        = vlSelfRef.tb_top__DOT__new_i__DOT__REG_Q;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE = 0U;
                                    vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 0U;
                                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST)))) {
                            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND = 0U;
                                vlSelfRef.N_DO = vlSelfRef.tb_top__DOT__new_i__DOT__REG_Q;
                                vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE = 0U;
                                vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 0U;
                                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST)))) {
                        if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DAT 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__REG_Q;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 0U;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST))) {
                    if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__REG_START) {
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WPEND;
                        if (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC) 
                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR) 
                                ^ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR)))) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_A 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_RA;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_D 
                                = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DAT) 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CR7) 
                                                     >> 0x0000000eU))))));
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE 
                                = (3U & (~ (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR)))));
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 8U;
                        } else if (((vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA 
                                     >> 0x13U) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND))) {
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA);
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 1U;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 0x10U;
                        } else if (((vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA 
                                     >> 0x13U) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND))) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA);
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_D 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_D;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WE;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 0U;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 0x10U;
                        } else if ((IData)(((0x00080000U 
                                             == (0x00780000U 
                                                 & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA)) 
                                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WPEND)))) {
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA);
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_D 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_D;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE 
                                = vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WE;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 0U;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 0x20U;
                        } else if ((IData)(((0x00080000U 
                                             == (0x00780000U 
                                                 & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA)) 
                                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND)))) {
                            vlSelfRef.__Vdly__N_SCDTACK_N = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_A 
                                = (0x000007ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA);
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE = 0U;
                            vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 1U;
                            vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 0x20U;
                        }
                        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND 
                            = vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RPEND;
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__IO_ST))) {
            if (vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__REG_START) {
                if (((0U != (7U & (vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA 
                                   >> 0x14U))) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WPEND))) {
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__IO_ST = 0x20U;
                } else if (((0U != (7U & (vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA 
                                          >> 0x14U))) 
                            & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND))) {
                    vlSelfRef.__Vdly__N_SCDTACK_N = 0U;
                    vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__IO_ST = 0x20U;
                }
            }
        } else if ((0x20U == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__IO_ST))) {
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                vlSelfRef.N_SCDO = 0U;
                vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__IO_ST = 1U;
            }
        }
        if (((IData)(vlSelfRef.SCAS_N) & (~ (IData)(vlSelfRef.N_SCDTACK_N)))) {
            vlSelfRef.__Vdly__N_SCDTACK_N = 1U;
        }
        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__REG_START 
            = vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE;
        vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_START 
            = vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE;
        if (vlSelfRef.RES_N) {
            if (vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE) {
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                     >> 0x0000001dU)));
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_WRITE 
                    = (1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                     >> 0x0000001eU)));
                if ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                   >> 8U)))) {
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_8 
                        = (0x0000ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                                          >> 8U));
                } else {
                    __Vfunc_DSPItoF__19__I = vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT;
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__SIGN 
                        = (1U & (__Vfunc_DSPItoF__19__I 
                                 >> 0x17U));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                        = (0x007fffffU & (__Vfunc_DSPItoF__19__I 
                                          ^ (- (IData)((IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__SIGN)))));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__E1 
                        = (0x0000000fU & (((0U != (0x0000000fU 
                                                   & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                      >> 0x13U)))
                                            ? vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0
                                            : ((0U 
                                                != 
                                                (0x0000000fU 
                                                 & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                    >> 0x0fU)))
                                                ? (0x02000000U 
                                                   | (0x007ffff0U 
                                                      & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                         << 4U)))
                                                : (0x04000000U 
                                                   | (0x007fff00U 
                                                      & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                         << 8U))))) 
                                          >> 0x00000017U));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1 
                        = (0x007fffffU & ((0U != (0x0000000fU 
                                                  & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                     >> 0x13U)))
                                           ? vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0
                                           : ((0U != 
                                               (0x0000000fU 
                                                & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                   >> 0x0fU)))
                                               ? (0x02000000U 
                                                  | (0x007ffff0U 
                                                     & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                        << 4U)))
                                               : (0x04000000U 
                                                  | (0x007fff00U 
                                                     & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T0 
                                                        << 8U))))));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__E2 
                        = (0x0000000fU & (((0U != (3U 
                                                   & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1 
                                                      >> 0x15U)))
                                            ? vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1
                                            : (0x01000000U 
                                               | (0x007ffffcU 
                                                  & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1 
                                                     << 2U)))) 
                                          >> 0x00000017U));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2 
                        = (0x007fffffU & ((0U != (3U 
                                                  & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1 
                                                     >> 0x15U)))
                                           ? vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1
                                           : (0x01000000U 
                                              | (0x007ffffcU 
                                                 & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T1 
                                                    << 2U)))));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__E3 
                        = (0x0000000fU & (((0x00400000U 
                                            & vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2)
                                            ? vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2
                                            : ((0x00200000U 
                                                & vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2)
                                                ? (0x00800000U 
                                                   | (0x007ffffeU 
                                                      & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2 
                                                         << 1U)))
                                                : (0x01000000U 
                                                   | (0x007ffffeU 
                                                      & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2 
                                                         << 1U))))) 
                                          >> 0x00000017U));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T3 
                        = (0x007fffffU & ((0x00400000U 
                                           & vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2)
                                           ? vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2
                                           : ((0x00200000U 
                                               & vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2)
                                               ? (0x00800000U 
                                                  | (0x007ffffeU 
                                                     & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2 
                                                        << 1U)))
                                               : (0x01000000U 
                                                  | (0x007ffffeU 
                                                     & (vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T2 
                                                        << 1U))))));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__EXP 
                        = (0x0000000fU & (((IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__E1) 
                                           + (IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__E2)) 
                                          + (IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__E3)));
                    vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__MANT 
                        = (0x000007ffU & ((vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__T3 
                                           >> 0x0bU) 
                                          ^ (- (IData)((IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__SIGN)))));
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_7__DSPItoF 
                        = (((IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__SIGN) 
                            << 0x0000000fU) | (((IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__EXP) 
                                                << 0x0000000bU) 
                                               | (IData)(vlSymsp->TOP__SCSP_PKG.DSPItoF__Vstatic__MANT)));
                    vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_8 
                        = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_7__DSPItoF;
                }
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_OUT_REG 
                    = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_8;
            }
        } else {
            vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ = 0U;
            vlSelfRef.tb_top__DOT__new_i__DOT__DSP_WRITE = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST = 1U;
        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST = 1U;
        vlSelfRef.tb_top__DOT__new_i__DOT__REG_A = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__REG_D = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__IO_ST = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND = 0U;
        vlSelfRef.__Vdly__N_SCDTACK_N = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RPEND = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RRDY = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WRDY = 1U;
        vlSelfRef.tb_top__DOT__new_i__DOT__WE_N = 1U;
        vlSelfRef.tb_top__DOT__new_i__DOT__DQM = 3U;
        vlSelfRef.tb_top__DOT__new_i__DOT__MEM_DEV_LATCH = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ = 0U;
        vlSelfRef.tb_top__DOT__new_i__DOT__DSP_WRITE = 0U;
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMA_REG 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DSP_MEMA_REG;
    vlSelfRef.tb_top__DOT__new_i__DOT__REG_Q = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_Q;
    vlSelfRef.tb_top__DOT__new_i__DOT__A = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__A;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RA = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RA;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RPEND = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_RPEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_RPEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WA = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WA;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCU_D = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_D;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WE = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WE;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WPEND = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCU_WPEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RA = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RA;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_RPEND = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_RPEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WA = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WA;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_D = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_D;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WE = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WE;
    vlSelfRef.tb_top__DOT__new_i__DOT__SCPU_WPEND = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__SCPU_WPEND;
    vlSelfRef.N_SCDTACK_N = vlSelfRef.__Vdly__N_SCDTACK_N;
    vlSelfRef.tb_top__DOT__new_i__DOT__MEM_ST = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__MEM_ST;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_MEM_WPEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_WR = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_WR;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DIR = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DIR;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_MA = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_MA;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_DAT = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_DAT;
    vlSelfRef.tb_top__DOT__new_i__DOT__REG_ST = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__REG_ST;
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__SCU_REG_WPEND;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_RA = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_RA;
    vlSelfRef.tb_top__DOT__new_i__DOT__IO_ST = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__IO_ST;
    vlSelfRef.tb_top__DOT__new_i__DOT__WD_READ = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__WD_READ;
    vlSelfRef.tb_top__DOT__new_i__DOT__CR7 = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CR7;
    vlSelfRef.tb_top__DOT__new_i__DOT__DMA_EXEC = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__DMA_EXEC;
    vlSelfRef.N_RAM_RFS = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RFS;
    vlSelfRef.N_RAM_WE = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_WE;
    vlSelfRef.N_RAM_RD = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_RD;
    vlSelfRef.N_RAM_CS = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_CS;
    vlSelfRef.N_RAM_A = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_A;
    vlSelfRef.N_RAM_D = vlSelfRef.tb_top__DOT__new_i__DOT__MEM_D;
    vlSelfRef.N_RDY_N = (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCU_RRDY) 
                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCU_WRDY))));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_READ_NOFL2) {
        vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_10 
            = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_INP_REG) 
               << 8U);
    } else {
        vlSelfRef.__Vfunc_DSPFtoI__20__F = vlSelfRef.tb_top__DOT__new_i__DOT__DSP_INP_REG;
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN 
            = (1U & ((IData)(vlSelfRef.__Vfunc_DSPFtoI__20__F) 
                     >> 0x0000000fU));
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__EXP 
            = (0x0000000fU & ((IData)(vlSelfRef.__Vfunc_DSPFtoI__20__F) 
                              >> 0x0000000bU));
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__MANT 
            = (0x000007ffU & (IData)(vlSelfRef.__Vfunc_DSPFtoI__20__F));
        vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__RES 
            = (0x00ffffffU & ((0x0cU <= (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__EXP))
                               ? ((0x00fff800U & ((- (IData)((IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN))) 
                                                  << 0x0000000bU)) 
                                  | (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__MANT))
                               : VL_SHIFTRS_III(24,24,4, 
                                                ((((IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN) 
                                                   << 0x00000017U) 
                                                  | (0x00400000U 
                                                     & ((~ (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__SIGN)) 
                                                        << 0x00000016U))) 
                                                 | ((IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__MANT) 
                                                    << 0x0000000bU)), (IData)(vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__EXP))));
        vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_9__DSPFtoI 
            = vlSymsp->TOP__SCSP_PKG.DSPFtoI__Vstatic__RES;
        vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_10 
            = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCall_9__DSPFtoI;
    }
    vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMS_D = vlSelfRef.tb_top__DOT__new_i__DOT____VlemCond_10;
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber3 
        = (0x00ffU & ((- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                           >> 0x00000013U))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber3 
        = (0x0fffU & ((- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                                   >> 0x0000001cU)))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000015U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                          >> 0x00000022U)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber3 
        = (0x0fffU & ((- (IData)((1U & (~ (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                   >> 0x00000022U)))))) 
                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_DRAM____pinNumber3 
        = ((((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
             << 0x00000030U) | (((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
                                 << 0x00000020U) | 
                                (((QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
                                  << 0x00000010U) | (QData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))))) 
           & (- (QData)((IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                          >> 0x00000013U)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_DRAM____pinNumber3 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U))))));
    if ((0x00080000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP7)) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber2 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber2 
        = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                         >> 0x0000001cU)))
                           ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                      >> 0x0000001dU))
                           : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber2 
        = (0x0000001fU & ((0x00200000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP4)
                           ? (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                              >> 0x00000016U) : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                 >> 4U)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber2 
        = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                         >> 0x00000022U)))
                           ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U))
                           : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U)));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber5 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber5 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber2 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST)
                           ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)
                           : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 4U)));
    vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0_SEL 
        = (IData)((0U == (0x060fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = ((0x0000000cU 
                                                  & ((- (IData)((IData)(
                                                                        (0x0740U 
                                                                         == 
                                                                         (0x07e1U 
                                                                          & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x0741U 
                                                                          == 
                                                                          (0x07e1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL = (IData)(
                                                           (0x0403U 
                                                            == 
                                                            (0x0603U 
                                                             & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                  << 6U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                     << 4U) 
                                                    | (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                        << 2U) 
                                                       | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)))) 
                                                & ((((0x0000000cU 
                                                      & ((- (IData)((IData)(
                                                                            (0x0400U 
                                                                             == 
                                                                             (0x0603U 
                                                                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (- (IData)((IData)(
                                                                             (0x0401U 
                                                                              == 
                                                                              (0x0603U 
                                                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))))) 
                                                    << 4U) 
                                                   | ((0x0000000cU 
                                                       & ((- (IData)((IData)(
                                                                             (0x0402U 
                                                                              == 
                                                                              (0x0603U 
                                                                               & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV 
        = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__unnamedblk12__DOT__MEM_DEV;
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_RAM____pinNumber4 
        = (0x000000ffU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_RAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7))));
}

void Vtb_top___024root___nba_comb__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ tb_top__DOT__new_i__DOT__MOD_PHASE_INTEGER;
    tb_top__DOT__new_i__DOT__MOD_PHASE_INTEGER = 0;
    IData/*16:0*/ tb_top__DOT__new_i__DOT__SO_MOD;
    tb_top__DOT__new_i__DOT__SO_MOD = 0;
    IData/*23:0*/ __Vfunc_DSPShifter__17__Vfuncout;
    __Vfunc_DSPShifter__17__Vfuncout = 0;
    IData/*25:0*/ __Vfunc_DSPShifter__17__A;
    __Vfunc_DSPShifter__17__A = 0;
    CData/*1:0*/ __Vfunc_DSPShifter__17__SHFT;
    __Vfunc_DSPShifter__17__SHFT = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_22;
    __VdfgRegularize_hebeb780c_0_22 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_49;
    __VdfgRegularize_hebeb780c_0_49 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_50;
    __VdfgRegularize_hebeb780c_0_50 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_51;
    __VdfgRegularize_hebeb780c_0_51 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_52;
    __VdfgRegularize_hebeb780c_0_52 = 0;
    IData/*25:0*/ TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP;
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP = 0;
    IData/*23:0*/ TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES;
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES = 0;
    // Body
    if ((0U == (2U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_top__DOT__new_i__DOT__SA_RA = 
            (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                    >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RA = vlSelfRef.tb_top__DOT__new_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR5_RA 
            = vlSelfRef.tb_top__DOT__new_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__new_i__DOT__SCR6_RA 
            = vlSelfRef.tb_top__DOT__new_i__DOT__SLOT;
        vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA = 0U;
    } else {
        if ((2U == (2U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__SA_RA 
                = (0x0000001fU & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                          >> 0x00000023U)));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR2_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR0_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[2U] 
                                  >> 0x00000012U));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR5_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR6_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_top__DOT__new_i__DOT__EVOL_RA 
                = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                  >> 0x00000016U));
        }
        if ((2U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4) 
                                     >> 6U)));
        } else if ((3U == (3U & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                 >> 1U)))) {
            vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RGEN) 
                                    << 5U) | (0x0000001fU 
                                              & (IData)(
                                                        (vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                                         >> 0x00000023U)))) 
                                  + (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP2_SCR4)));
        }
    }
    tb_top__DOT__new_i__DOT__MOD_PHASE_INTEGER = (0x0000ffffU 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))
                                                      ? 
                                                     (0x0000ffffU 
                                                      & ((((vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                            << 0x0000000fU) 
                                                           | (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                                                              >> 0x00000011U)) 
                                                          + 
                                                          (0x0000003fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP3_PHASE_FRAC_NEXT) 
                                                              >> 8U))) 
                                                         >> 6U))
                                                      : 
                                                     (vlSelfRef.tb_top__DOT__new_i__DOT__MOD_PHASE_CURR 
                                                      >> 6U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN)) 
                                                & (4U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) 
                                                 & (4U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))));
    vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE = (
                                                   (~ vlSelfRef.tb_top__DOT__new_i__DOT__OP7) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)));
    vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP 
        = ((0x0000007cU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                           >> 0x00000012U)) | (3U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                                >> 1U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000bU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (0x000aU 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_55 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (9U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (8U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (7U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (6U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (5U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (4U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_61 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (3U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_62 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (2U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_64 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (- (IData)((IData)(
                                                                         (1U 
                                                                          == 
                                                                          (0x060fU 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_65 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR0_SEL))) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))));
    __VdfgRegularize_hebeb780c_0_50 = ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                       & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    __VdfgRegularize_hebeb780c_0_51 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                       & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                          & (- (IData)(
                                                       (0x1eU 
                                                        == 
                                                        (0x0000003fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                            >> 5U)))))));
    __VdfgRegularize_hebeb780c_0_52 = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                       & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                          & (- (IData)(
                                                       (0x0eU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                            >> 6U)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber4 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                     & ((0U != (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                        & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO3_SEL)))));
    vlSelfRef.tb_top__DOT__new_i__DOT__SAMPLE_CE = 
        ((0x1fU == (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT)) 
         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__new_i__DOT__KB_SWEEP = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE));
    vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_NULL_SET 
        = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE) 
           & ((~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000018U)) & (IData)(vlSelfRef.RES_N)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber5 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                           ? (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)
                           : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_RA)));
    tb_top__DOT__new_i__DOT__SO_MOD = (0x0001ffffU 
                                       & (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[0U] 
                                          & (((0x00010000U 
                                               & ((IData)(tb_top__DOT__new_i__DOT__MOD_PHASE_INTEGER) 
                                                  << 1U)) 
                                              | (IData)(tb_top__DOT__new_i__DOT__MOD_PHASE_INTEGER)) 
                                             + (0x0000ffffU 
                                                & (((vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.tb_top__DOT__new_i__DOT__OP3[1U] 
                                                       >> 7U)) 
                                                   + 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                                                                     >> 2U))))))))));
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_9) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_48;
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSA_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23))))));
    if (vlSelfRef.__VdfgRegularize_hebeb780c_0_10) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__OP7_SCR7) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_48;
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber2 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber3 
            = (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MIXSB_RAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                          & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))) 
                             | ((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                  << 2U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN))))))))));
    if (vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 1U));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber2 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber3 
            = (0x0000ffffU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK0____pinNumber4 
        = (3U & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                  & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                     & (- (IData)((0x18U == (0x0000003fU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                >> 5U))))))) 
                 | ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE))) 
                    & (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN)) 
                                  & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE)))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__STACK1____pinNumber4 
        = (3U & (((- (IData)(((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WGEN) 
                              & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__STACK_WE)))) 
                  & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE)))) 
                 | ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                    & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                       & (- (IData)((0x19U == (0x0000003fU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                  >> 5U)))))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q = (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT__altsyncram_component__DOT__q 
                                                  & (- (QData)((IData)(
                                                                       ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_OK) 
                                                                        & vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_SET_RAM__DOT__altdpram_component__DOT__mem
                                                                        [vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP])))));
    if ((0x00080000U & vlSelfRef.tb_top__DOT__new_i__DOT__OP7)) {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_DRAM____pinNumber2 
            = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP) 
                              >> 1U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_DRAM____pinNumber2 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000014U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 
            = (0x0000000fU & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                              >> 0x00000015U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber2 
            = (0x0000007fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MPRO_STEP));
    } else {
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_DRAM____pinNumber2 
            = (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_SET_RAM____pinNumber2 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                              >> 2U));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_DRAM____pinNumber2 
            = (0x0000001fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x00000025U)))
                               ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                          >> 0x00000020U))
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 1U)));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber2 
            = (0x0000000fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x0000001cU)))
                               ? (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                          >> 0x00000018U))
                               : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)));
        vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber2 
            = (0x0000007fU & ((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x00000037U)))
                               ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__MDEC_CT) 
                                  + (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                             >> 0x00000030U)))
                               : ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                  >> 1U)));
    }
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR8____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR7____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR6____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR5____pinNumber4 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__RST))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR4____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR3____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                           >> 0x0000001cU))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR2____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR1____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                   >> 0x00000015U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LEA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_LSA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SA____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__SCR_SCR0____pinNumber4 
        = (3U & ((- (IData)((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__OP2 
                                           >> 0x00000022U))))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_65)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MPRO_DRAM____pinNumber4 
        = (0x000000ffU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(__VdfgRegularize_hebeb780c_0_50)));
    vlSelfRef.tb_top__DOT__new_i__DOT__MPRO_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_50))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MADRS_DRAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(__VdfgRegularize_hebeb780c_0_51)));
    vlSelfRef.tb_top__DOT__new_i__DOT__MADRS_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_51))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__COEF_DRAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(__VdfgRegularize_hebeb780c_0_52)));
    vlSelfRef.tb_top__DOT__new_i__DOT__COEF_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_52))));
    vlSelfRef.tb_top__DOT__new_i__DOT__ADP = (0x000fffffU 
                                              & (vlSelfRef.tb_top__DOT__new_i__DOT__ADP_SA 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__ADP_PCM8B)
                                                   ? 
                                                  ((0x000e0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__new_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000011U)) 
                                                   | tb_top__DOT__new_i__DOT__SO_MOD)
                                                   : 
                                                  ((0x000c0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (tb_top__DOT__new_i__DOT__SO_MOD 
                                                                      >> 0x00000010U)))) 
                                                       << 0x00000012U)) 
                                                   | (tb_top__DOT__new_i__DOT__SO_MOD 
                                                      << 1U)))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_DRAM____pinNumber3 
        = (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                           >> 0x00000025U))) ? ((0x00ff0000U 
                                                 & (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMS_D 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MEMS_D 
                                                      >> 8U)))
             : (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_47 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                                    & (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                        & (- (IData)(
                                                                     (0x76U 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                                                          >> 4U)))))) 
                                                       | (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                                                >> 0x0000001cU))))))));
    __VdfgRegularize_hebeb780c_0_22 = (0x0000000fU 
                                       & ((((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                            & ((0x0000000cU 
                                                & ((- (IData)((IData)(
                                                                      (0x0600U 
                                                                       == 
                                                                       (0x0701U 
                                                                        & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)((IData)(
                                                                       (0x0601U 
                                                                        == 
                                                                        (0x0701U 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))))) 
                                           | (- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                                    >> 0x00000037U)))))) 
                                          & (- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)))));
    __VdfgRegularize_hebeb780c_0_49 = (0x0000000fU 
                                       & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE))) 
                                          & (((((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE) 
                                                << 2U) 
                                               | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_WE)) 
                                              & ((0x0000000cU 
                                                  & ((- (IData)((IData)(
                                                                        (0x0700U 
                                                                         == 
                                                                         (0x07c1U 
                                                                          & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A)))))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x0701U 
                                                                          == 
                                                                          (0x07c1U 
                                                                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A))))))))) 
                                             | (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                                      >> 0x00000025U))))))));
    __Vfunc_DSPShifter__17__SHFT = (3U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                                  >> 0x00000014U)));
    __Vfunc_DSPShifter__17__A = vlSelfRef.tb_top__DOT__new_i__DOT__SFT_REG;
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP = 
        ((2U & (IData)(__Vfunc_DSPShifter__17__SHFT))
          ? ((1U & (IData)(__Vfunc_DSPShifter__17__SHFT))
              ? __Vfunc_DSPShifter__17__A : (0x03fffffeU 
                                             & (__Vfunc_DSPShifter__17__A 
                                                << 1U)))
          : ((1U & (IData)(__Vfunc_DSPShifter__17__SHFT))
              ? (0x03fffffeU & (__Vfunc_DSPShifter__17__A 
                                << 1U)) : __Vfunc_DSPShifter__17__A));
    TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES = 
        ((((~ ((IData)(__Vfunc_DSPShifter__17__SHFT) 
               >> 1U)) & (~ (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                             >> 0x19U))) & (0U != (3U 
                                                   & (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                                      >> 0x17U))))
          ? 0x007fffffU : ((((~ ((IData)(__Vfunc_DSPShifter__17__SHFT) 
                                 >> 1U)) & (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                            >> 0x19U)) 
                            & (3U != (3U & (TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP 
                                            >> 0x17U))))
                            ? 0x00800000U : (0x00ffffffU 
                                             & TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__TEMP)));
    __Vfunc_DSPShifter__17__Vfuncout = TOP__SCSP_PKG__DOT__DSPShifter__Vstatic__RES;
    vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT = __Vfunc_DSPShifter__17__Vfuncout;
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber4 
        = (3U & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                   >> 0x00000013U)))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_47)));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber4 
        = (0x0000000fU & ((IData)(__VdfgRegularize_hebeb780c_0_22) 
                          | (- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                              >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT__TEMP_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_22))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__MEMS_DRAM____pinNumber4 
        = (0x0000000fU & ((- (IData)((1U & (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                            >> 0x00000013U)))) 
                          | (IData)(__VdfgRegularize_hebeb780c_0_49)));
    vlSelfRef.tb_top__DOT__new_i__DOT__MEMS_DRAM__DOT____Vcellinp__altsyncram_component__wren_a 
        = (1U & ((vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                  >> 0x00000013U) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_49))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__TEMP_DRAM____pinNumber3 
        = (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                           >> 0x00000037U))) ? ((0x00ff0000U 
                                                 & (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                                                      >> 8U)))
             : (((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D) 
                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                  >> 0x00000013U))))));
    vlSelfRef.tb_top__DOT__new_i__DOT____Vcellinp__EFREG_RAM____pinNumber3 
        = (0x0000ffffU & (((1U & (IData)((vlSelfRef.tb_top__DOT__new_i__DOT__MPRO0_Q 
                                          >> 0x0000001cU)))
                            ? (vlSelfRef.tb_top__DOT__new_i__DOT__SHFT_OUT 
                               >> 8U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_D)) 
                          & (- (IData)((1U & (~ (vlSelfRef.tb_top__DOT__new_i__DOT__OP7 
                                                 >> 0x00000013U)))))));
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__5(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_body__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_body__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_top__DOT__ref_i__DOT__PCM_MIXS_Q 
                = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__MIXS_GEN)
                    ? vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q
                    : vlSelfRef.tb_top__DOT__ref_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q);
            if (vlSelfRef.tb_top__DOT__new_i__DOT__MIXS_GEN) {
                vlSelfRef.tb_top__DOT__new_i__DOT__PCM_MIXS_Q 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MIXS_Q 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q;
            } else {
                vlSelfRef.tb_top__DOT__new_i__DOT__PCM_MIXS_Q 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSA_RAM__DOT__altsyncram_component__DOT__q;
                vlSelfRef.tb_top__DOT__new_i__DOT__DSP_MIXS_Q 
                    = vlSelfRef.tb_top__DOT__new_i__DOT__MIXSB_RAM__DOT__altsyncram_component__DOT__q;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0;
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                                  ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                     >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR6_RA)))];
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_RD)
                                  ? ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__REG_A) 
                                     >> 4U) : (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__SCR5_RA)))];
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                                  ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                     >> 4U) : (IData)(
                                                      (vlSelfRef.tb_top__DOT__new_i__DOT__OP6 
                                                       >> 0x0000001dU))))];
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0] 
                    = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0]) 
                       | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1] 
                    = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1]) 
                       | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1)) 
                          << 8U));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0] 
                    = ((0xff00U & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0]) 
                       | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1] 
                    = ((0x00ffU & vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1]) 
                       | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1)) 
                          << 8U));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0] 
                    = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0]) 
                       | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v0));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1] 
                    = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1]) 
                       | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__mem__v1)) 
                          << 8U));
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MEMS_RAM__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__TEMP_RAM__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__COEF_RAM__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__MADRS_RAM__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__SCR_SCR3__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM 
                = vlSelfRef.__Vdly__tb_top__DOT__ref_i__DOT__CYCLE_NUM;
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                                  ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                     >> 4U) : (vlSelfRef.tb_top__DOT__new_i__DOT__OP4 
                                               >> 0x00000016U)))];
            vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RA];
            vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RA];
            vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE0_CE 
                = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV) 
                   & ((~ (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM)) 
                      & (IData)(vlSelfRef.CE)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE 
                = ((IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM) 
                   & ((IData)(vlSelfRef.CE) & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CLK_DIV)));
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0] 
                    = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0]) 
                       | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v0));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1] 
                    = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1]) 
                       | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR1__DOT__altsyncram_component__DOT__mem__v1)) 
                          << 8U));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0;
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__ref_i__DOT__EVOL_RAM__DOT__altsyncram_component__DOT__mem__v0;
            }
            vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT0_CE 
                = (IData)(((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))) 
                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)));
            vlSelfRef.tb_top__DOT__ref_i__DOT__SLOT1_CE 
                = (IData)(((6U == (6U & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE_NUM))) 
                           & (IData)(vlSelfRef.tb_top__DOT__ref_i__DOT__CYCLE1_CE)));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KBO_RAM__DOT__altdpram_component__DOT__mem__v0;
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KEY_RAM__DOT__altdpram_component__DOT__mem__v0;
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__KB_RAM__DOT__altdpram_component__DOT__mem__v0;
            }
            vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem
                [vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RA];
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                                  ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                     >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR6_RA)))];
            vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                [(0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_RD)
                                  ? ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__REG_A) 
                                     >> 4U) : (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__SCR5_RA)))];
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__LFO_RAM__DOT__altsyncram_component__DOT__mem__v0;
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0] 
                    = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0]) 
                       | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v0));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1] 
                    = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1]) 
                       | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR6__DOT__altsyncram_component__DOT__mem__v1)) 
                          << 8U));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0] 
                    = ((0xff00U & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0]) 
                       | (SData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v0));
            }
            if (vlSelfRef.__VdlySet__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1) {
                vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem[vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1] 
                    = ((0x00ffU & vlSelfRef.tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem
                        [vlSelfRef.__VdlyDim0__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1]) 
                       | ((SData)((IData)(vlSelfRef.__VdlyVal__tb_top__DOT__new_i__DOT__SCR_SCR5__DOT__altsyncram_component__DOT__mem__v1)) 
                          << 8U));
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM 
                = vlSelfRef.__Vdly__tb_top__DOT__new_i__DOT__CYCLE_NUM;
            vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE0_CE 
                = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV) 
                   & ((~ (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM)) 
                      & (IData)(vlSelfRef.CE)));
            vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE 
                = ((IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM) 
                   & ((IData)(vlSelfRef.CE) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CLK_DIV)));
            vlSelfRef.tb_top__DOT__new_i__DOT__SLOT0_CE 
                = (IData)(((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_16 
                = ((IData)(vlSelfRef.RES_N) & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE));
            vlSelfRef.tb_top__DOT__new_i__DOT__SLOT1_CE 
                = (IData)(((6U == (6U & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE_NUM))) 
                           & (IData)(vlSelfRef.tb_top__DOT__new_i__DOT__CYCLE1_CE)));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__2(vlSelf);
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
    if (VL_UNLIKELY(((vlSelfRef.CE & 0xfeU)))) {
        Verilated::overWidthError("CE");
    }
    if (VL_UNLIKELY(((vlSelfRef.RES_N & 0xfeU)))) {
        Verilated::overWidthError("RES_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.CE_R & 0xfeU)))) {
        Verilated::overWidthError("CE_R");
    }
    if (VL_UNLIKELY(((vlSelfRef.CE_F & 0xfeU)))) {
        Verilated::overWidthError("CE_F");
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
    if (VL_UNLIKELY(((vlSelfRef.SCA & 0xff800000U)))) {
        Verilated::overWidthError("SCA");
    }
    if (VL_UNLIKELY(((vlSelfRef.SCRW_N & 0xfeU)))) {
        Verilated::overWidthError("SCRW_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.SCAS_N & 0xfeU)))) {
        Verilated::overWidthError("SCAS_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.SCLDS_N & 0xfeU)))) {
        Verilated::overWidthError("SCLDS_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.SCUDS_N & 0xfeU)))) {
        Verilated::overWidthError("SCUDS_N");
    }
    if (VL_UNLIKELY(((vlSelfRef.SCFC & 0xf8U)))) {
        Verilated::overWidthError("SCFC");
    }
    if (VL_UNLIKELY(((vlSelfRef.SND_EN & 0xf8U)))) {
        Verilated::overWidthError("SND_EN");
    }
}
#endif  // VL_DEBUG
