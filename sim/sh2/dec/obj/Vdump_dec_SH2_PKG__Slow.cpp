// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdump_dec.h for the primary calling header

#include "Vdump_dec__pch.h"


Vdump_dec_SH2_PKG::Vdump_dec_SH2_PKG() = default;
Vdump_dec_SH2_PKG::~Vdump_dec_SH2_PKG() = default;

void Vdump_dec_SH2_PKG::ctor(Vdump_dec__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vdump_dec_SH2_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdump_dec_SH2_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
