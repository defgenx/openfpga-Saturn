// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"


Vtb_top_REF_SH2_PKG::Vtb_top_REF_SH2_PKG() = default;
Vtb_top_REF_SH2_PKG::~Vtb_top_REF_SH2_PKG() = default;

void Vtb_top_REF_SH2_PKG::ctor(Vtb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_top_REF_SH2_PKG::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_top_REF_SH2_PKG::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
