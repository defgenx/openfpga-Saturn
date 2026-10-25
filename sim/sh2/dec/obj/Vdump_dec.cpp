// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdump_dec__pch.h"

//============================================================
// Constructors

Vdump_dec::Vdump_dec(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdump_dec__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT__SH2_PKG{vlSymsp->TOP.__PVT__SH2_PKG}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdump_dec::Vdump_dec(const char* _vcname__)
    : Vdump_dec(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdump_dec::~Vdump_dec() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdump_dec___024root___eval_debug_assertions(Vdump_dec___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdump_dec___024root___eval_static(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_initial(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD bool Vdump_dec___024root___eval_stl(Vdump_dec___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vdump_dec___024root___eval_sample(Vdump_dec___024root* vlSelf);
bool Vdump_dec___024root___eval_ico(Vdump_dec___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vdump_dec___024root___eval_act(Vdump_dec___024root* vlSelf);
bool Vdump_dec___024root___eval_inact(Vdump_dec___024root* vlSelf);
bool Vdump_dec___024root___eval_nba(Vdump_dec___024root* vlSelf);
bool Vdump_dec___024root___eval_obs(Vdump_dec___024root* vlSelf);
bool Vdump_dec___024root___eval_react(Vdump_dec___024root* vlSelf);
void Vdump_dec___024root___eval_postponed(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_final(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_dump_triggers__stl(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_dump_triggers__ico(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_dump_triggers__act(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_dump_triggers__nba(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_dump_triggers__obs(Vdump_dec___024root* vlSelf);
VL_ATTR_COLD void Vdump_dec___024root___eval_dump_triggers__react(Vdump_dec___024root* vlSelf);

void Vdump_dec::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdump_dec::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdump_dec::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdump_dec___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdump_dec::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdump_dec::evalStatic() {
    Vdump_dec___024root___eval_static(&(vlSymsp->TOP));
}

void Vdump_dec::evalInitial() {
    Vdump_dec___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vdump_dec::evalStl(bool firstIteration) {
    return Vdump_dec___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vdump_dec::evalSample() {
    Vdump_dec___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vdump_dec::evalIco(bool firstIteration) {
    return Vdump_dec___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vdump_dec::evalAct() {
    return Vdump_dec___024root___eval_act(&(vlSymsp->TOP));
}

bool Vdump_dec::evalInact() {
    return Vdump_dec___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vdump_dec::evalNba() {
    return Vdump_dec___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vdump_dec::evalObs() {
    return Vdump_dec___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vdump_dec::evalReact() {
    return Vdump_dec___024root___eval_react(&(vlSymsp->TOP));
}

void Vdump_dec::evalPostponed() {
    Vdump_dec___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vdump_dec::evalFinal() {
    Vdump_dec___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdump_dec::dumpTriggersStl() {
    Vdump_dec___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdump_dec::dumpTriggersIco() {
    Vdump_dec___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdump_dec::dumpTriggersAct() {
    Vdump_dec___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdump_dec::dumpTriggersNba() {
    Vdump_dec___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdump_dec::dumpTriggersObs() {
    Vdump_dec___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdump_dec::dumpTriggersReact() {
    Vdump_dec___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vdump_dec::eventsPending() { return false; }

uint64_t Vdump_dec::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdump_dec::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdump_dec::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdump_dec::hierName() const { return vlSymsp->name(); }
const char* Vdump_dec::modelName() const { return "Vdump_dec"; }
unsigned Vdump_dec::threads() const { return 1; }
void Vdump_dec::prepareClone() const { contextp()->prepareClone(); }
void Vdump_dec::atClone() const {
    contextp()->threadPoolpOnClone();
}
