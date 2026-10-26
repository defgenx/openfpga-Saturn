// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sndram.h for the primary calling header

#include "Vtb_sndram__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_h7a94dd37_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_sndram__ConstPool__TABLE_hdc2324bb_0;

void Vtb_sndram___024root___nba_comb__TOP__1(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___nba_comb__TOP__1\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL;
    tb_sndram__DOT__SCSP__DOT__MOD_PHASE_SEL = 0;
    IData/*16:0*/ tb_sndram__DOT__SCSP__DOT__SO_MOD;
    tb_sndram__DOT__SCSP__DOT__SO_MOD = 0;
    CData/*0:0*/ tb_sndram__DOT__SCSP__DOT__STACK_WE;
    tb_sndram__DOT__SCSP__DOT__STACK_WE = 0;
    CData/*6:0*/ tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP;
    tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP = 0;
    IData/*31:0*/ tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q;
    tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA;
    tb_sndram__DOT__MSH__DOT__core__DOT__EX_WA = 0;
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
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_38;
    __VdfgRegularize_hebeb780c_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_85;
    __VdfgRegularize_hebeb780c_0_85 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_102;
    __VdfgRegularize_hebeb780c_0_102 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_105;
    __VdfgRegularize_hebeb780c_0_105 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_118;
    __VdfgRegularize_hebeb780c_0_118 = 0;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_SAME 
        = ((0x0000000fU & (~ (IData)(vlSelfRef.tb_sndram__DOT__CIRL_N))) 
           == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__IRL_PREV));
    tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q = ((0U >= 
                                               (1U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT)))
                                               ? vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_DRAM__DOT__MEM
                                              [(1U 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__MDEC_CT))]
                                               : 0U);
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CW_STB = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__REG_WWAIT) 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WPW 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__PW));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FRC_CE 
        = (1U & ((2U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS))
                  ? ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS))
                      ? (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__FTCI_OLD))
                      : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK128_CE))
                  : ((1U & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__frt__DOT__CKS))
                      ? (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK32_CE)
                      : (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__CLK8_CE))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_84 = (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCU__DOT__BCACHE__DOT__MEM
                                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_BBUS_CACHE_RPOS] 
                                                            >> 5U)));
    tb_sndram__DOT__SCU__DOT__dm_idle = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_ST)) 
                                         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__KB_SWEEP = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__RST) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SAMPLE_CE 
        = ((0x1fU == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT1_CE));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = (1U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCU__DOT__ACACHE__DOT__MEM
                                                            [vlSelfRef.tb_sndram__DOT__SCU__DOT__CPU_ABUS_CACHE_RPOS] 
                                                            >> 1U)));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__RD_DATA = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_DONE)
                                                    ? vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_BUF
                                                    : 
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_DONE)
                                                     ? vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_BUF
                                                     : vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE__DOT__MEM
                                                    [vlSelfRef.tb_sndram__DOT__SCU__DOT__CCACHE_RADDR]));
    if ((0U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                      >> 1U)))) {
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR5_RA 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR6_RA 
            = vlSelfRef.tb_sndram__DOT__SCSP__DOT__SLOT;
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA 
            = (0x0000001fU & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                      >> 0x00000023U)));
        vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA = 0U;
    } else {
        if ((2U == (2U & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                          >> 1U)))) {
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR5_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR6_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR2_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                  >> 0x00000016U));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR0_RA 
                = (0x0000001fU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP3[2U] 
                                  >> 0x00000012U));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT____Vcellinp__decrom__RESET 
        = (1U & ((~ (IData)(vlSelfRef.tb_sndram__DOT__RST_N)) 
                 | (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N))));
    __VdfgRegularize_hebeb780c_0_102 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV));
    tb_sndram__DOT__SCSP__DOT__DSP_MPRO_STEP = ((0x0000007cU 
                                                 & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7 
                                                    >> 0x00000012U)) 
                                                | (3U 
                                                   & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM) 
                                                      >> 1U)));
    tb_sndram__DOT__SCSP__DOT__STACK_WE = ((~ vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7) 
                                           & (0U == (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE_NUM)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ra = ((0x20U 
                                                 == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_wa = ((0x23U 
                                                 == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                                & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    tb_sndram__DOT__SCU__DOT__b_idle = ((0U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_ST)) 
                                        & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
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
    if ((0x00080000U & vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP7)) {
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
    __VdfgRegularize_hebeb780c_0_38 = (IData)(((0U 
                                                == 
                                                (0x0600U 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A))) 
                                               & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__CYCLE1_CE)));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUF_SIZE) 
                                                      >> 2U)) 
                                                    & (5U 
                                                       == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_ST))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MSBY_SBY)) 
           & (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__INT_ACTIVE)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__CLR0 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
              & ((0x3fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                 | (0U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))));
    tb_sndram__DOT__MSH__DOT__divu__DOT__AT38 = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                 & (0x26U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opZD 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS1 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (2U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS2 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    tb_sndram__DOT__MSH__DOT__divu__DOT__opRL = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                                                 & (0x17U 
                                                    == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS3 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
           & (3U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0 
        = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
           & (7U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_83 = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag23__wren 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV))) 
                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_WE) 
                    >> 2U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT____Vcellinp__tag01__wren 
        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_WE) 
                 & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)))));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_READ_ACK 
        = ((((5U == (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_ST)) 
             & ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_DMA_OUT) 
                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_116))) 
            | ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_IND)) 
               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86))) 
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opLS 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF_DEC) 
           & ((4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
              | ((~ (IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV)) 
                 & (5U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)))));
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
    __VdfgRegularize_hebeb780c_0_105 = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__BSC_DBUS_BUSY))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
                                                 & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__IB_WR));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE) 
           & ((IData)(vlSelfRef.tb_sndram__DOT__MCLK_DIV) 
              & (0U != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__TEMP_Q = (
                                                   (0x00ffff00U 
                                                    & (tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & (tb_sndram__DOT__SCSP__DOT__TEMP_DRAM_Q 
                                                         >> 0x00000010U)));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_i3 = (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U] 
                                                 & (IData)(tb_sndram__DOT__SCU__DOT__dm_idle));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_79 = ((IData)(tb_sndram__DOT__SCU__DOT__dm_idle) 
                                                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[3U])) 
                                                    & (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[0U] 
                                                       | (vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[1U] 
                                                          | vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_PEND[2U]))));
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
    vlSelfRef.tb_sndram__DOT__SCSP__DOT____Vcellinp__STACK0____pinNumber5 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_RD)
                           ? (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__REG_A)
                           : (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK_RA)));
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
    tb_sndram__DOT__MSH__DOT__divu__DOT__BUSW = ((IData)(__VdfgRegularize_hebeb780c_0_102) 
                                                 & ((0x3fU 
                                                     == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__WR)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RWR 
        = ((IData)(__VdfgRegularize_hebeb780c_0_102) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__WR));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_ACK 
        = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_A1) 
           & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__aw_dr));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_94 = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__RES_SYNC_N)) 
                                                 & (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__AT38));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_93 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__OVF) 
                                                 & (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__AT38));
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
    tb_sndram__DOT__MSH__DOT__divu__DOT__opRS = ((7U 
                                                  <= (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP)) 
                                                 & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0)) 
                                                    & (0x16U 
                                                       >= (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__STEP))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__MW_IB 
        = ((~ (IData)((0U != (0x00000028U & vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR)))) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__IDI = (vlSelfRef.tb_sndram__DOT__MSHDI 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__bsc__DOT__MST_BUS_RLS))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__CLR 
        = ((0x0fU == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS 
        = (((4U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP)) 
            | (8U == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__GO));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_ich = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__f_ind = ((IData)(__VdfgRegularize_hebeb780c_0_85) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76));
    tb_sndram__DOT__SCU__DOT__b_nreq = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76)) 
                                        & (IData)(__VdfgRegularize_hebeb780c_0_85));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_ANY = 
        ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RDD) 
         | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__PUSH_RD));
    vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_rack = ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__ABUS_READ_ACK) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__CBUS_READ_ACK) 
                                                      | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__BBUS_READ_ACK)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_GC 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_93) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__DIV64)) 
              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__GCLR)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opS1) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_100));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_101 = ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRL) 
                                                  | (IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRS));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSHF 
        = ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRS) 
           | ((IData)(tb_sndram__DOT__MSH__DOT__divu__DOT__opRL) 
              | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opLS)));
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
    __VdfgRegularize_hebeb780c_0_118 = (1U & (~ ((vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[0U] 
                                                  >> 6U) 
                                                 | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__IFID_STALL) 
                                                    | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_DELAY_SLOT)))));
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
    vlSelfRef.tb_sndram__DOT__SCU__DOT__CHW_DW_W = 
        ((((IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__dm_dack) 
           & ((~ (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_DSP)) 
              & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72)) 
                    & (0U != (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_WADD)))))) 
          | (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__IND_WUP)) 
         & (IData)(vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_BUS_EN));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__WRH 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DMUL_EXEC) 
           | ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACL_EXEC) 
              | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__MACW_EXEC) 
                  & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__SAT)) 
                     | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__OVFW))) 
                 | (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL) 
                     >> 1U) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__LDS)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_81 = ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82))) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80)
                                                     ? 2U
                                                     : 1U));
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
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE4 = 
        (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
               | (- (IData)((1U & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP4 
                                   >> 0x00000015U))))));
    vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_WE6 = 
        (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40) 
               | (- (IData)((1U & (IData)((vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP6 
                                           >> 0x0000001cU)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_99 = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opSH) 
                                                 | (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isSide));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__opJ0) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_101));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__L_SEL 
        = (3U & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSUM)
                   ? 1U : (2U | (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LSHF))))))) 
                 & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__LBUS)))))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_EXP 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_118) 
              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__INT_ACP = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT____Vcellinp__core__INT_REQ) 
                                                   & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__INT_REQ_LATCH)) 
                                                      & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__ID_STALL)) 
                                                         & (IData)(__VdfgRegularize_hebeb780c_0_118))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__RAM_WE 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_E) 
           & ((~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR) 
                  >> 4U)) & (0U != (0x0000000fU & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__W_ADDR)))));
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
}

extern const VlUnpacked<CData/*7:0*/, 256> Vtb_sndram__ConstPool__TABLE_h225c9f2c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_sndram__ConstPool__TABLE_hd6bce6fb_0;
extern const VlWide<64>/*2047:0*/ Vtb_sndram__ConstPool__CONST_hc4d6a76a_0;
extern const VlWide<1024>/*32767:0*/ Vtb_sndram__ConstPool__CONST_h65aed1fe_0;

void Vtb_sndram___024root___nba_comb__TOP__2(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___nba_comb__TOP__2\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__SLA;
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLA = 0;
    CData/*0:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__SLB;
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLB = 0;
    CData/*3:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__VA;
    tb_sndram__DOT__MSH__DOT__cache__DOT__VA = 0;
    CData/*5:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__LRUN;
    tb_sndram__DOT__MSH__DOT__cache__DOT__LRUN = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A;
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B;
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B = 0;
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
    VlWide<4>/*111:0*/ __VdfgRegularize_hebeb780c_0_4;
    VL_ZERO_W(112, __VdfgRegularize_hebeb780c_0_4);
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_46;
    __VdfgRegularize_hebeb780c_0_46 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_103;
    __VdfgRegularize_hebeb780c_0_103 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_106;
    __VdfgRegularize_hebeb780c_0_106 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    IData/*31:0*/ __VExpandSel_Lsb_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    // Body
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__OLDB 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q) 
           & (- (IData)((1U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__VB) 
                               >> (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__BIDX))))));
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLA = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT)) 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH) 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q) 
                                                        >> 0x0000000aU))));
    tb_sndram__DOT__MSH__DOT__cache__DOT__SLB = ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__INIT)) 
                                                 & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__EPOCH) 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q) 
                                                        >> 0x0000000aU))));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__LRU_DATA 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q) 
                          & (- (IData)((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLB)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q 
        = (0x0000000fU & (((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q) 
                           >> 6U) & (- (IData)((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__SLB)))));
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
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_B = ((1U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_C
                                                   : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_B);
    tb_sndram__DOT__MSH__DOT__core__DOT__ALU_A = ((2U 
                                                   & vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__EX_DI[2U])
                                                   ? vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_C
                                                   : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__REG_A);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__TBIT 
        = (1U & (~ ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__SD) 
                    ^ (IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                               >> 0x0000001fU)))));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HSUM 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_99) 
           | (((IData)((vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__ADD 
                        >> 0x00000020U)) & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__isRest)) 
              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_96)));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__H_SEL 
        = (3U & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HBUS)
                  ? (1U == (7U & (vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__IBADDR 
                                  >> 2U))) : (2U | 
                                              (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__HSUM))))))));
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
    __VExpandSel_Lsb_1 = ((((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__RES_EXP)
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
                                       & __VExpandSel_Lsb_1))
                                ? 0U : (Vtb_sndram__ConstPool__CONST_hc4d6a76a_0
                                        [(((IData)(7U) 
                                           + __VExpandSel_Lsb_1) 
                                          >> 5U)] << 
                                        ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & __VExpandSel_Lsb_1)))) 
                              | (Vtb_sndram__ConstPool__CONST_hc4d6a76a_0
                                 [(__VExpandSel_Lsb_1 
                                   >> 5U)] >> (0x0000001fU 
                                               & __VExpandSel_Lsb_1)))
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
    __VExpandSel_WordIdx_2 = (0x07fffffcU & ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CLS) 
                                             << 2U));
    __VdfgRegularize_hebeb780c_0_4[0U] = Vtb_sndram__ConstPool__CONST_h65aed1fe_0
        [__VExpandSel_WordIdx_2];
    __VdfgRegularize_hebeb780c_0_4[1U] = Vtb_sndram__ConstPool__CONST_h65aed1fe_0
        [((IData)(1U) + __VExpandSel_WordIdx_2)];
    __VdfgRegularize_hebeb780c_0_4[2U] = Vtb_sndram__ConstPool__CONST_h65aed1fe_0
        [((IData)(2U) + __VExpandSel_WordIdx_2)];
    __VdfgRegularize_hebeb780c_0_4[3U] = (0x0000ffffU 
                                          & Vtb_sndram__ConstPool__CONST_h65aed1fe_0
                                          [((IData)(3U) 
                                            + __VExpandSel_WordIdx_2)]);
    __Vtemp_7[0U] = ((IData)(((QData)((IData)(((0x00000020U 
                                                & __VdfgRegularize_hebeb780c_0_4[0U])
                                                ? (0x10U 
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
                                                : (
                                                   (0x00000010U 
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
    __Vtemp_7[1U] = ((IData)((((QData)((IData)(((0x00000020U 
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
                     | (IData)((((QData)((IData)(((4U 
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
        = (__VdfgRegularize_hebeb780c_0_4[1U] | __Vtemp_7[0U]);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__dec__DOT__CWN[1U] 
        = (__VdfgRegularize_hebeb780c_0_4[2U] | __Vtemp_7[1U]);
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

void Vtb_sndram___024root___nba_comb__TOP__6(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___nba_comb__TOP__6\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__CACHE_DO;
    tb_sndram__DOT__MSH__DOT__CACHE_DO = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY;
    tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY = 0;
    CData/*1:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__mask = 0;
    IData/*31:0*/ tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp;
    tb_sndram__DOT__MSH__DOT__core__DOT__unnamedblk4__DOT__temp = 0;
    IData/*31:0*/ __Vfunc_ByteShiftRigth__26__Vfuncout;
    __Vfunc_ByteShiftRigth__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ByteShiftRigth__26__val;
    __Vfunc_ByteShiftRigth__26__val = 0;
    CData/*1:0*/ __Vfunc_ByteShiftRigth__26__s;
    __Vfunc_ByteShiftRigth__26__s = 0;
    IData/*31:0*/ TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp0;
    TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp0 = 0;
    IData/*31:0*/ TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1;
    TOP__SH2P_PKG__DOT__ByteShiftRigth__Vstatic__temp1 = 0;
    // Body
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_HIT 
        = ((IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG) 
           & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CVALID_Q));
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
    vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI = ((IData)(
                                                           ((8U 
                                                             == 
                                                             (0x0cU 
                                                              & (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL))))
                                                    ? tb_sndram__DOT__MSH__DOT__CACHE_DO
                                                    : vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__MA_WDATA);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_DI = (
                                                   ((0U 
                                                     != (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_SEL)) 
                                                    & ((~ (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_WE)) 
                                                       & (0x0cU 
                                                          == (IData)(vlSelfRef.tb_sndram__DOT__MSH__DOT__MAC_OP))))
                                                    ? vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DO
                                                    : tb_sndram__DOT__MSH__DOT__CACHE_DO);
    vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDADDR 
        = (((IData)(tb_sndram__DOT__MSH__DOT__cache__DOT__CRAM_RDWAY) 
            << 8U) | (0x000000ffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                     >> 2U)));
    vlSelfRef.tb_sndram__DOT__MSH__DOT__mult__DOT__DW15 
        = (1U & ((2U & vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A)
                  ? (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                     >> 0x0000000fU) : (vlSelfRef.tb_sndram__DOT__MSH__DOT__MULT_DI 
                                        >> 0x0000001fU)));
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
}

void Vtb_sndram___024root___nba_sequent__TOP__0(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___nba_sequent__TOP__1(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___nba_sequent__TOP__2(Vtb_sndram___024root* vlSelf);

void Vtb_sndram___024root___eval_body__nba(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_body__nba\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sndram___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sndram___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sndram___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_B__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__RDBUF__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__dmac__DOT__adr__DOT__SARDAR_A__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RB__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__divu__DOT__mem__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_a__DOT__ram__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__lv_b__DOT__ram__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramB__DOT__ram__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__core__DOT__regfile__DOT__regramA__DOT__ram__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__intc__DOT__RA__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0_Q 
                = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__H__DOT__q) 
                    << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK0__DOT__L__DOT__q));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1_Q 
                = (((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__H__DOT__q) 
                    << 8U) | (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__STACK1__DOT__L__DOT__q));
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[3U] 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__3__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[2U] 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__2__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[1U] 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__1__KET____DOT__L__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCU__DOT__DMA_LQ[0U] 
                = vlSelfRef.tb_sndram__DOT__SCU__DOT__LANE__BRA__0__KET____DOT__L__DOT__q;
        }
    }
    if ((0x0000000000000011ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__EVOL_RAM_2__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_4__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__LFO_RAM_1__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram3__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram2__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram1__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__ram0__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag23__DOT__altsyncram_component__DOT__q;
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q 
                = vlSelfRef.__Vdly__tb_sndram__DOT__MSH__DOT__cache__DOT__tag01__DOT__altsyncram_component__DOT__q;
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
        }
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__a_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__a_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__a_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__a_d__v0;
            }
        }
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__ba_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__ba_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__ba_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__ba_d__v0;
            }
        }
    }
    if ((0x0000000000000500ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__dqm_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__dqm_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__dqm_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__dqm_d__v0;
            }
        }
    }
    if ((0x0000000000000900ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__ras_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__ras_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__ras_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__ras_d__v0;
            }
        }
    }
    if ((0x0000000000001100ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__cas_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__cas_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__cas_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__cas_d__v0;
            }
        }
    }
    if ((0x0000000000002100ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__we_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__we_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__we_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__we_d__v0;
            }
        }
    }
    if ((0x0000000000010100ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__sdr_clk__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__sdr_clk__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__sdr_clk = vlSelfRef.__VdlyVal__tb_sndram__DOT__sdr_clk__v0;
            }
        }
    }
    if ((0x0000000000000140ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__m_drive__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__m_drive__v0 = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out2 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v0;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out2 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v1;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out2 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__out2__v2;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_en__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_en__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_en 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_en__v0;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v0;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v1;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2 = 0U;
                vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__model__DOT__dq_out__strong__en2__v2;
            }
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__13
            vlSelfRef.tb_sndram__DOT__sdram__DOT__cap_n 
                = vlSelfRef.__Vdly__tb_sndram__DOT__sdram__DOT__cap_n;
        }
    }
    if ((0x0000000000004100ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__oe_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__oe_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__oe_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__oe_d__v0;
            }
        }
    }
    if ((0x0000000000008100ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__15
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__o_d__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__o_d__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__o_d = vlSelfRef.__VdlyVal__tb_sndram__DOT__o_d__v0;
            }
        }
    }
    if ((0x0000000000020100ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__16
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__dq_in_r__strong__out3__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__dq_in_r__strong__out3__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__dq_in_r__strong__out3 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__dq_in_r__strong__out3__v0;
            }
            if (vlSelfRef.__VdlySet__tb_sndram__DOT__dq_in_r__strong__en3__v0) {
                vlSelfRef.__VdlySet__tb_sndram__DOT__dq_in_r__strong__en3__v0 = 0U;
                vlSelfRef.tb_sndram__DOT__dq_in_r__strong__en3 
                    = vlSelfRef.__VdlyVal__tb_sndram__DOT__dq_in_r__strong__en3__v0;
            }
            vlSelfRef.tb_sndram__DOT__dram_dq_i = (
                                                   ((IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__out3) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__en3)) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__out4) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__dq_in_r__strong__en4)));
        }
    }
    if (((0x0000000000040100ULL & vlSelfRef.__VnbaTriggered[1U]) 
         | (2ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        {
            // Inlined CFunc: _act_comb__TOP__0
            vlSelfRef.tb_sndram__DOT__dram_clk = (1U 
                                                  & ((IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cn)
                                                      ? (IData)(vlSelfRef.tb_sndram__DOT__clk_ram)
                                                      : 
                                                     (~ (IData)(vlSelfRef.tb_sndram__DOT__clk_ram))));
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sndram___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sndram___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000015ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__REV_OUT;
            __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__REV_OUT = 0;
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__F_SUB;
            __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__F_SUB = 0;
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                = (0x0007ffffU & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__SO_RAM__DOT__altsyncram_component__DOT__q) 
                                  & (- (IData)((1U 
                                                & (~ (IData)(
                                                             (vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2 
                                                              >> 0x00000021U))))))));
            vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__WAY_TAG 
                = (((((0x0007ffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                      >> 0x0000000aU)) 
                      == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[3U]) 
                     << 3U) | (((0x0007ffffU & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                                >> 0x0000000aU)) 
                                == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[2U]) 
                               << 2U)) | (((vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[1U] 
                                            == (0x0007ffffU 
                                                & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                                   >> 0x0000000aU))) 
                                           << 1U) | 
                                          ((0x0007ffffU 
                                            & (vlSelfRef.tb_sndram__DOT__MSH__DOT__CBUS_A 
                                               >> 0x0000000aU)) 
                                           == vlSelfRef.tb_sndram__DOT__MSH__DOT__cache__DOT__CTAG_Q[0U])));
            vlSelfRef.__VdfgRegularize_hebeb780c_0_36 
                = (1U & ((vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                          >> 0x00000010U) & ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                             >> 6U)));
            __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__REV_OUT 
                = (IData)(((~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                               >> 0x00000011U)) & (0x0040U 
                                                   == 
                                                   (0x0060U 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0)))));
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__COMP_X 
                = (0x0000ffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                  ^ (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36)))));
            __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__F_SUB 
                = ((IData)(((~ (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                >> 0x00000010U)) & 
                            (0x0060U == (0x0060U & (IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0))))) 
                   | __Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__REV_OUT);
            vlSelfRef.tb_sndram__DOT__SCSP__DOT__K_W 
                = (0x0000ffffU & (vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W 
                                  + ((((3U == (3U & 
                                               ((IData)(vlSelfRef.tb_sndram__DOT__SCSP__DOT__OP2_SCR0) 
                                                >> 5U)))
                                        ? (0x0000fffeU 
                                           & (((0x00010000U 
                                                & vlSelfRef.tb_sndram__DOT__SCSP__DOT__CUR_W)
                                                ? (IData)(
                                                          (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                           >> 0x00000010U))
                                                : (IData)(
                                                          (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                           >> 0x00000020U))) 
                                              << 1U))
                                        : ((IData)(
                                                   (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                    >> 0x00000010U)) 
                                           + ((1U & 
                                               (~ (IData)(__Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__REV_OUT))) 
                                              + ((- (IData)(
                                                            (1U 
                                                             & (~ (IData)(__Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__REV_OUT))))) 
                                                 ^ (IData)(
                                                           (vlSelfRef.tb_sndram__DOT__SCSP__DOT__SCR_G2__DOT__altsyncram_component__DOT__q 
                                                            >> 0x00000020U)))))) 
                                      ^ (- (IData)(__Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__F_SUB))) 
                                     + (IData)(__Vinline_0__nba_comb__TOP__3_tb_sndram__DOT__SCSP__DOT__F_SUB))));
        }
    }
    if ((0x0000000000000140ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en 
                = (((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1) 
                    | (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2)) 
                   & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))));
        }
    }
    if (((0x0000000000020100ULL & vlSelfRef.__VnbaTriggered[1U]) 
         | (0x0000000000000022ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.tb_sndram__DOT__sdram__DOT__dq_cap 
                = ((4U & (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cs))
                    ? (IData)(vlSelfRef.tb_sndram__DOT__sdram__DOT__cap_n)
                    : (IData)(vlSelfRef.tb_sndram__DOT__dram_dq_i));
        }
    }
    if ((0x000000000000001dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sndram___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x000000000000c140ULL & vlSelfRef.__VnbaTriggered[1U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.tb_sndram__DOT__dq = (((IData)(vlSelfRef.tb_sndram__DOT__o_d) 
                                             & (- (IData)((IData)(vlSelfRef.tb_sndram__DOT__oe_d)))) 
                                            | ((- (IData)((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_en))) 
                                               & ((((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out1) 
                                                    & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en1)) 
                                                   | ((IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__out2) 
                                                      & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq_out__strong__en2))) 
                                                  & (IData)(vlSelfRef.tb_sndram__DOT__model__DOT__dq__out__strong__en))));
        }
    }
}

void Vtb_sndram___024root___timing_ready(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___timing_ready\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000040000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_hc9d59cf1__0.ready("@( tb_sndram.clk_run)");
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_hd0c814cc__0.ready("@( tb_sndram.dram_a)");
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_hc9e7124c__0.ready("@( tb_sndram.dram_ba)");
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h82373107__0.ready("@( tb_sndram.dram_dqm)");
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_hc98dedca__0.ready("@( tb_sndram.dram_ras_n)");
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h23c291f1__0.ready("@( tb_sndram.dram_cas_n)");
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h66198558__0.ready("@( tb_sndram.dram_we_n)");
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h5a73f95d__0.ready("@( tb_sndram.dram_dq_oe)");
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_hd673bf82__0.ready("@( tb_sndram.dram_dq_o)");
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h48cf05bf__0.ready("@( tb_sndram.dram_clk)");
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h474ec7ad__0.ready("@( tb_sndram.dq)");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_hcd6a6a57__0.ready("@(posedge tb_sndram.sdr_clk)");
    }
}

void Vtb_sndram___024root___timing_resume(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___timing_resume\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc9d59cf1__0.moveToResumeQueue(
                                                          "@( tb_sndram.clk_run)");
    vlSelfRef.__VtrigSched_hd0c814cc__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_a)");
    vlSelfRef.__VtrigSched_hc9e7124c__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_ba)");
    vlSelfRef.__VtrigSched_h82373107__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_dqm)");
    vlSelfRef.__VtrigSched_hc98dedca__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_ras_n)");
    vlSelfRef.__VtrigSched_h23c291f1__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_cas_n)");
    vlSelfRef.__VtrigSched_h66198558__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_we_n)");
    vlSelfRef.__VtrigSched_h5a73f95d__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_dq_oe)");
    vlSelfRef.__VtrigSched_hd673bf82__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_dq_o)");
    vlSelfRef.__VtrigSched_h48cf05bf__0.moveToResumeQueue(
                                                          "@( tb_sndram.dram_clk)");
    vlSelfRef.__VtrigSched_h474ec7ad__0.moveToResumeQueue(
                                                          "@( tb_sndram.dq)");
    vlSelfRef.__VtrigSched_hcd6a6a57__0.moveToResumeQueue(
                                                          "@(posedge tb_sndram.sdr_clk)");
    vlSelfRef.__VtrigSched_hc9d59cf1__0.resume("@( tb_sndram.clk_run)");
    vlSelfRef.__VtrigSched_hd0c814cc__0.resume("@( tb_sndram.dram_a)");
    vlSelfRef.__VtrigSched_hc9e7124c__0.resume("@( tb_sndram.dram_ba)");
    vlSelfRef.__VtrigSched_h82373107__0.resume("@( tb_sndram.dram_dqm)");
    vlSelfRef.__VtrigSched_hc98dedca__0.resume("@( tb_sndram.dram_ras_n)");
    vlSelfRef.__VtrigSched_h23c291f1__0.resume("@( tb_sndram.dram_cas_n)");
    vlSelfRef.__VtrigSched_h66198558__0.resume("@( tb_sndram.dram_we_n)");
    vlSelfRef.__VtrigSched_h5a73f95d__0.resume("@( tb_sndram.dram_dq_oe)");
    vlSelfRef.__VtrigSched_hd673bf82__0.resume("@( tb_sndram.dram_dq_o)");
    vlSelfRef.__VtrigSched_h48cf05bf__0.resume("@( tb_sndram.dram_clk)");
    vlSelfRef.__VtrigSched_h474ec7ad__0.resume("@( tb_sndram.dq)");
    vlSelfRef.__VtrigSched_hcd6a6a57__0.resume("@(posedge tb_sndram.sdr_clk)");
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sndram___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_orInto__act_vec_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

void Vtb_sndram___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_orInto__act_ext_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

bool Vtb_sndram___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_anySet__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

void Vtb_sndram___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

void Vtb_sndram___024root____VbeforeTrig_hc9d59cf1__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_hc9d59cf1__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__clk_run) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_run__0)) 
                                  << 0x00000012U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__clk_run__0 
        = vlSelfRef.tb_sndram__DOT__clk_run;
    if ((0x0000000000040000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_hc9d59cf1__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc9d59cf1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_hd0c814cc__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_hd0c814cc__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_a) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_a__0)) 
                                  << 7U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_a__0 
        = vlSelfRef.tb_sndram__DOT__dram_a;
    if ((0x0000000000000080ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_hd0c814cc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_hc9e7124c__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_hc9e7124c__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_ba) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ba__0)) 
                                  << 9U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ba__0 
        = vlSelfRef.tb_sndram__DOT__dram_ba;
    if ((0x0000000000000200ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_hc9e7124c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_h82373107__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_h82373107__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_dqm) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dqm__0)) 
                                  << 0x0000000aU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dqm__0 
        = vlSelfRef.tb_sndram__DOT__dram_dqm;
    if ((0x0000000000000400ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h82373107__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_hc98dedca__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_hc98dedca__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_ras_n) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ras_n__0)) 
                                  << 0x0000000bU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_ras_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_ras_n;
    if ((0x0000000000000800ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_hc98dedca__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_h23c291f1__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_h23c291f1__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_cas_n) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_cas_n__0)) 
                                  << 0x0000000cU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_cas_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_cas_n;
    if ((0x0000000000001000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h23c291f1__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_h66198558__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_h66198558__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_we_n) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_we_n__0)) 
                                  << 0x0000000dU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_we_n__0 
        = vlSelfRef.tb_sndram__DOT__dram_we_n;
    if ((0x0000000000002000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h66198558__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_h5a73f95d__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_h5a73f95d__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_dq_oe) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_oe__0)) 
                                  << 0x0000000eU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_oe__0 
        = vlSelfRef.tb_sndram__DOT__dram_dq_oe;
    if ((0x0000000000004000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h5a73f95d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_hd673bf82__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_hd673bf82__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_dq_o) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_o__0)) 
                                  << 0x0000000fU)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_dq_o__0 
        = vlSelfRef.tb_sndram__DOT__dram_dq_o;
    if ((0x0000000000008000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_hd673bf82__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_h48cf05bf__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_h48cf05bf__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dram_clk) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_clk__0)) 
                                  << 0x00000010U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dram_clk__0 
        = vlSelfRef.tb_sndram__DOT__dram_clk;
    if ((0x0000000000010000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h48cf05bf__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_h474ec7ad__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_h474ec7ad__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__dq) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dq__0)) 
                                  << 0x00000011U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__dq__0 
        = vlSelfRef.tb_sndram__DOT__dq;
    if ((0x0000000000020000ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h474ec7ad__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h474ec7ad__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

void Vtb_sndram___024root____VbeforeTrig_hcd6a6a57__0(Vtb_sndram___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root____VbeforeTrig_hcd6a6a57__0\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(vlSelfRef.tb_sndram__DOT__sdr_clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__sdr_clk__0))) 
                                  << 6U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sndram__DOT__sdr_clk__0 
        = vlSelfRef.tb_sndram__DOT__sdr_clk;
    if ((0x0000000000000040ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_hcd6a6a57__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

#ifdef VL_DEBUG
void Vtb_sndram___024root___eval_debug_assertions(Vtb_sndram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sndram___024root___eval_debug_assertions\n"); );
    Vtb_sndram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
