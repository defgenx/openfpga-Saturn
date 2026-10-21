// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top__pch.h"

Vtb_top__Syms::Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(6240);
    // Setup sub module instances
    TOP__REF_SH2_PKG.ctor(this, "REF_SH2_PKG");
    TOP__SH2_PKG.ctor(this, "SH2_PKG");
    TOP__tb_top__DOT__dut__DOT__MSH.ctor(this, "tb_top.dut.MSH");
    TOP__tb_top__DOT__dut__DOT__SSH.ctor(this, "tb_top.dut.SSH");
    TOP__tb_top__DOT__ref0__DOT__MSH.ctor(this, "tb_top.ref0.MSH");
    TOP__tb_top__DOT__ref0__DOT__SSH.ctor(this, "tb_top.ref0.SSH");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__REF_SH2_PKG = &TOP__REF_SH2_PKG;
    TOP.__PVT__SH2_PKG = &TOP__SH2_PKG;
    TOP.__PVT__tb_top__DOT__dut__DOT__MSH = &TOP__tb_top__DOT__dut__DOT__MSH;
    TOP.__PVT__tb_top__DOT__dut__DOT__SSH = &TOP__tb_top__DOT__dut__DOT__SSH;
    TOP.__PVT__tb_top__DOT__ref0__DOT__MSH = &TOP__tb_top__DOT__ref0__DOT__MSH;
    TOP.__PVT__tb_top__DOT__ref0__DOT__SSH = &TOP__tb_top__DOT__ref0__DOT__SSH;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__REF_SH2_PKG.__Vconfigure(true);
    TOP__SH2_PKG.__Vconfigure(true);
    TOP__tb_top__DOT__dut__DOT__MSH.__Vconfigure(true);
    TOP__tb_top__DOT__dut__DOT__SSH.__Vconfigure(false);
    TOP__tb_top__DOT__ref0__DOT__MSH.__Vconfigure(true);
    TOP__tb_top__DOT__ref0__DOT__SSH.__Vconfigure(false);
}

Vtb_top__Syms::~Vtb_top__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__tb_top__DOT__ref0__DOT__SSH.dtor();
    TOP__tb_top__DOT__ref0__DOT__MSH.dtor();
    TOP__tb_top__DOT__dut__DOT__SSH.dtor();
    TOP__tb_top__DOT__dut__DOT__MSH.dtor();
    TOP__SH2_PKG.dtor();
    TOP__REF_SH2_PKG.dtor();
}
