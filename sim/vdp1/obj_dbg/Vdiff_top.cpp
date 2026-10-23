// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdiff_top__pch.h"

//============================================================
// Constructors

Vdiff_top::Vdiff_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdiff_top__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , CE_R{vlSymsp->TOP.CE_R}
    , CE_F{vlSymsp->TOP.CE_F}
    , EN{vlSymsp->TOP.EN}
    , RES_N{vlSymsp->TOP.RES_N}
    , FAST{vlSymsp->TOP.FAST}
    , BLUR_MESH{vlSymsp->TOP.BLUR_MESH}
    , DBG_EXT{vlSymsp->TOP.DBG_EXT}
    , DCE_R{vlSymsp->TOP.DCE_R}
    , DCE_F{vlSymsp->TOP.DCE_F}
    , HTIM_N{vlSymsp->TOP.HTIM_N}
    , VTIM_N{vlSymsp->TOP.VTIM_N}
    , CS_N{vlSymsp->TOP.CS_N}
    , AD_N{vlSymsp->TOP.AD_N}
    , DTEN_N{vlSymsp->TOP.DTEN_N}
    , REQ_N{vlSymsp->TOP.REQ_N}
    , TAINT{vlSymsp->TOP.TAINT}
    , VRAM_RDY_r{vlSymsp->TOP.VRAM_RDY_r}
    , FB_RDY_r{vlSymsp->TOP.FB_RDY_r}
    , RDY_N_r{vlSymsp->TOP.RDY_N_r}
    , IRQ_N_r{vlSymsp->TOP.IRQ_N_r}
    , VRAM_WE_r{vlSymsp->TOP.VRAM_WE_r}
    , VRAM_RD_r{vlSymsp->TOP.VRAM_RD_r}
    , FB0_WE_r{vlSymsp->TOP.FB0_WE_r}
    , FB0_RD_r{vlSymsp->TOP.FB0_RD_r}
    , FB1_WE_r{vlSymsp->TOP.FB1_WE_r}
    , FB1_RD_r{vlSymsp->TOP.FB1_RD_r}
    , FB_MODE3_r{vlSymsp->TOP.FB_MODE3_r}
    , VRAM_RDY_n{vlSymsp->TOP.VRAM_RDY_n}
    , FB_RDY_n{vlSymsp->TOP.FB_RDY_n}
    , RDY_N_n{vlSymsp->TOP.RDY_N_n}
    , IRQ_N_n{vlSymsp->TOP.IRQ_N_n}
    , VRAM_WE_n{vlSymsp->TOP.VRAM_WE_n}
    , VRAM_RD_n{vlSymsp->TOP.VRAM_RD_n}
    , FB0_WE_n{vlSymsp->TOP.FB0_WE_n}
    , FB0_RD_n{vlSymsp->TOP.FB0_RD_n}
    , FB1_WE_n{vlSymsp->TOP.FB1_WE_n}
    , FB1_RD_n{vlSymsp->TOP.FB1_RD_n}
    , FB_MODE3_n{vlSymsp->TOP.FB_MODE3_n}
    , VOUTI{vlSymsp->TOP.VOUTI}
    , DI{vlSymsp->TOP.DI}
    , VRAM_Q_r{vlSymsp->TOP.VRAM_Q_r}
    , FB0_Q_r{vlSymsp->TOP.FB0_Q_r}
    , FB1_Q_r{vlSymsp->TOP.FB1_Q_r}
    , DO_r{vlSymsp->TOP.DO_r}
    , VOUTO_r{vlSymsp->TOP.VOUTO_r}
    , VRAM_D_r{vlSymsp->TOP.VRAM_D_r}
    , VRAM_BLEN_r{vlSymsp->TOP.VRAM_BLEN_r}
    , FB0_D_r{vlSymsp->TOP.FB0_D_r}
    , FB1_D_r{vlSymsp->TOP.FB1_D_r}
    , VRAM_Q_n{vlSymsp->TOP.VRAM_Q_n}
    , FB0_Q_n{vlSymsp->TOP.FB0_Q_n}
    , FB1_Q_n{vlSymsp->TOP.FB1_Q_n}
    , DO_n{vlSymsp->TOP.DO_n}
    , VOUTO_n{vlSymsp->TOP.VOUTO_n}
    , VRAM_D_n{vlSymsp->TOP.VRAM_D_n}
    , VRAM_BLEN_n{vlSymsp->TOP.VRAM_BLEN_n}
    , FB0_D_n{vlSymsp->TOP.FB0_D_n}
    , FB1_D_n{vlSymsp->TOP.FB1_D_n}
    , VRAM_A_r{vlSymsp->TOP.VRAM_A_r}
    , FB0_A_r{vlSymsp->TOP.FB0_A_r}
    , FB1_A_r{vlSymsp->TOP.FB1_A_r}
    , VRAM_A_n{vlSymsp->TOP.VRAM_A_n}
    , FB0_A_n{vlSymsp->TOP.FB0_A_n}
    , FB1_A_n{vlSymsp->TOP.FB1_A_n}
    , __PVT__REF_VDP1_PKG{vlSymsp->TOP.__PVT__REF_VDP1_PKG}
    , __PVT__VDP1P_PKG{vlSymsp->TOP.__PVT__VDP1P_PKG}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdiff_top::Vdiff_top(const char* _vcname__)
    : Vdiff_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdiff_top::~Vdiff_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdiff_top___024root___eval_debug_assertions(Vdiff_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdiff_top___024root___eval_static(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_initial(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD bool Vdiff_top___024root___eval_stl(Vdiff_top___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vdiff_top___024root___eval_sample(Vdiff_top___024root* vlSelf);
bool Vdiff_top___024root___eval_ico(Vdiff_top___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vdiff_top___024root___eval_act(Vdiff_top___024root* vlSelf);
bool Vdiff_top___024root___eval_inact(Vdiff_top___024root* vlSelf);
bool Vdiff_top___024root___eval_nba(Vdiff_top___024root* vlSelf);
bool Vdiff_top___024root___eval_obs(Vdiff_top___024root* vlSelf);
bool Vdiff_top___024root___eval_react(Vdiff_top___024root* vlSelf);
void Vdiff_top___024root___eval_postponed(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_final(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__stl(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__ico(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__act(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__nba(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__obs(Vdiff_top___024root* vlSelf);
VL_ATTR_COLD void Vdiff_top___024root___eval_dump_triggers__react(Vdiff_top___024root* vlSelf);

void Vdiff_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdiff_top::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdiff_top::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdiff_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdiff_top::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdiff_top::evalStatic() {
    Vdiff_top___024root___eval_static(&(vlSymsp->TOP));
}

void Vdiff_top::evalInitial() {
    Vdiff_top___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vdiff_top::evalStl(bool firstIteration) {
    return Vdiff_top___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vdiff_top::evalSample() {
    Vdiff_top___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vdiff_top::evalIco(bool firstIteration) {
    return Vdiff_top___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vdiff_top::evalAct() {
    return Vdiff_top___024root___eval_act(&(vlSymsp->TOP));
}

bool Vdiff_top::evalInact() {
    return Vdiff_top___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vdiff_top::evalNba() {
    return Vdiff_top___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vdiff_top::evalObs() {
    return Vdiff_top___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vdiff_top::evalReact() {
    return Vdiff_top___024root___eval_react(&(vlSymsp->TOP));
}

void Vdiff_top::evalPostponed() {
    Vdiff_top___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vdiff_top::evalFinal() {
    Vdiff_top___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdiff_top::dumpTriggersStl() {
    Vdiff_top___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdiff_top::dumpTriggersIco() {
    Vdiff_top___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdiff_top::dumpTriggersAct() {
    Vdiff_top___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdiff_top::dumpTriggersNba() {
    Vdiff_top___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdiff_top::dumpTriggersObs() {
    Vdiff_top___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdiff_top::dumpTriggersReact() {
    Vdiff_top___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vdiff_top::eventsPending() { return false; }

uint64_t Vdiff_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdiff_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdiff_top::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdiff_top::hierName() const { return vlSymsp->name(); }
const char* Vdiff_top::modelName() const { return "Vdiff_top"; }
unsigned Vdiff_top::threads() const { return 1; }
void Vdiff_top::prepareClone() const { contextp()->prepareClone(); }
void Vdiff_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
