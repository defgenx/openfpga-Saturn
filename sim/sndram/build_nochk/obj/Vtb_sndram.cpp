// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sndram__pch.h"

//============================================================
// Constructors

Vtb_sndram::Vtb_sndram(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sndram__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT__SCUP2_PKG{vlSymsp->TOP.__PVT__SCUP2_PKG}
    , __PVT__SCSPP_PKG{vlSymsp->TOP.__PVT__SCSPP_PKG}
    , __PVT__SH2P_PKG{vlSymsp->TOP.__PVT__SH2P_PKG}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sndram::Vtb_sndram(const char* _vcname__)
    : Vtb_sndram(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sndram::~Vtb_sndram() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sndram___024root___eval_debug_assertions(Vtb_sndram___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_sndram___024root___eval_static(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___eval_initial(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD bool Vtb_sndram___024root___eval_stl(Vtb_sndram___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_sndram___024root___eval_sample(Vtb_sndram___024root* vlSelf);
bool Vtb_sndram___024root___eval_ico(Vtb_sndram___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_sndram___024root___eval_act(Vtb_sndram___024root* vlSelf);
bool Vtb_sndram___024root___eval_inact(Vtb_sndram___024root* vlSelf);
bool Vtb_sndram___024root___eval_nba(Vtb_sndram___024root* vlSelf);
bool Vtb_sndram___024root___eval_obs(Vtb_sndram___024root* vlSelf);
bool Vtb_sndram___024root___eval_react(Vtb_sndram___024root* vlSelf);
void Vtb_sndram___024root___eval_postponed(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_final(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__stl(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__ico(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__act(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__nba(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__obs(Vtb_sndram___024root* vlSelf);
VL_ATTR_COLD void Vtb_sndram___024root___eval_dump_triggers__react(Vtb_sndram___024root* vlSelf);

void Vtb_sndram::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sndram::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_sndram::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sndram___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_sndram::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_sndram::evalStatic() {
    Vtb_sndram___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_sndram::evalInitial() {
    Vtb_sndram___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_sndram::evalStl(bool firstIteration) {
    return Vtb_sndram___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_sndram::evalSample() {
    Vtb_sndram___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_sndram::evalIco(bool firstIteration) {
    return Vtb_sndram___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_sndram::evalAct() {
    return Vtb_sndram___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_sndram::evalInact() {
    return Vtb_sndram___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_sndram::evalNba() {
    return Vtb_sndram___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_sndram::evalObs() {
    return Vtb_sndram___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_sndram::evalReact() {
    return Vtb_sndram___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_sndram::evalPostponed() {
    Vtb_sndram___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_sndram::evalFinal() {
    Vtb_sndram___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_sndram::dumpTriggersStl() {
    Vtb_sndram___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_sndram::dumpTriggersIco() {
    Vtb_sndram___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_sndram::dumpTriggersAct() {
    Vtb_sndram___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_sndram::dumpTriggersNba() {
    Vtb_sndram___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_sndram::dumpTriggersObs() {
    Vtb_sndram___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_sndram::dumpTriggersReact() {
    Vtb_sndram___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtb_sndram::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_sndram::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_sndram::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_sndram::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sndram::hierName() const { return vlSymsp->name(); }
const char* Vtb_sndram::modelName() const { return "Vtb_sndram"; }
unsigned Vtb_sndram::threads() const { return 1; }
void Vtb_sndram::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sndram::atClone() const {
    contextp()->threadPoolpOnClone();
}
