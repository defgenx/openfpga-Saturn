// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___ctor_var_reset(Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1* vlSelf);

Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1::Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1() = default;
Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1::~Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1() = default;

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1::ctor(Vtb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1___ctor_var_reset(this);
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_top_SH7604__Uz1_Sz1_Bz2_BBz1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
