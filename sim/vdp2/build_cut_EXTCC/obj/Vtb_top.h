// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_TOP_H_
#define VERILATED_VTB_TOP_H_  // guard

#include "verilated.h"

class Vtb_top__Syms;
class Vtb_top___024root;
#include "Vtb_top_REF_VDP2_PKG.h"
class Vtb_top_VDP2_PKG;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb_top VL_NOT_FINAL : public VerilatedModel {
    friend class Vtb_top__Syms;
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_top__Syms* const vlSymsp;
    // Evaluation loop
    VerilatedEvalLoop m_evalLoop;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&CLK,0,0);
    VL_IN8(&RST_N,0,0);
    VL_IN8(&RES_N,0,0);
    VL_IN8(&CE_R,0,0);
    VL_IN8(&CE_F,0,0);
    VL_IN8(&CS_N,0,0);
    VL_IN8(&AD_N,0,0);
    VL_IN8(&DTEN_N,0,0);
    VL_IN8(&REQ_N,0,0);
    VL_IN8(&PAL,0,0);
    VL_IN8(&EXLAT_N,0,0);
    VL_IN8(&SCRN_EN,7,0);
    VL_IN8(&DBG_EXT,7,0);
    VL_OUT8(&r_RA_WE,7,0);
    VL_OUT8(&d_RA_WE,7,0);
    VL_OUT8(&r_RA_RD,0,0);
    VL_OUT8(&d_RA_RD,0,0);
    VL_OUT8(&r_RB_WE,7,0);
    VL_OUT8(&d_RB_WE,7,0);
    VL_OUT8(&r_RB_RD,0,0);
    VL_OUT8(&d_RB_RD,0,0);
    VL_IN16(&DI,15,0);
    VL_IN16(&FBDI,15,0);
    VL_OUT16(&r_RA1_A,16,1);
    VL_OUT16(&d_RA1_A,16,1);
    VL_OUT16(&r_RB1_A,16,1);
    VL_OUT16(&d_RB1_A,16,1);
    VL_OUT16(&cov,15,0);
    VL_IN(&r_RA0_Q,31,0);
    VL_IN(&r_RA1_Q,31,0);
    VL_IN(&r_RB0_Q,31,0);
    VL_IN(&r_RB1_Q,31,0);
    VL_IN(&d_RA0_Q,31,0);
    VL_IN(&d_RA1_Q,31,0);
    VL_IN(&d_RB0_Q,31,0);
    VL_IN(&d_RB1_Q,31,0);
    VL_OUTW(&r_misc,74,0,3);
    VL_OUTW(&d_misc,74,0,3);
    VL_OUT(&r_RA0_A,17,1);
    VL_OUT(&d_RA0_A,17,1);
    VL_OUT(&r_RB0_A,17,1);
    VL_OUT(&d_RB0_A,17,1);
    VL_OUT64(&r_RA_D,63,0);
    VL_OUT64(&d_RA_D,63,0);
    VL_OUT64(&r_RB_D,63,0);
    VL_OUT64(&d_RB_D,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_top_REF_VDP2_PKG* const __PVT__REF_VDP2_PKG;
    Vtb_top_VDP2_PKG* const __PVT__VDP2_PKG;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_top();
  private:
    VL_UNCOPYABLE(Vtb_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:

    // Internal functions - the model's evaluation entry points
    void evalBegin() override final;
    void evalEnd() override final;
    void evalStatic() override final;
    void evalInitial() override final;
    bool evalStl(bool firstIteration) override final;
    void evalSample() override final;
    bool evalIco(bool firstIteration) override final;
    bool evalAct() override final;
    bool evalInact() override final;
    bool evalNba() override final;
    bool evalObs() override final;
    bool evalReact() override final;
    void evalPostponed() override final;
    void evalFinal() override final;
    void dumpTriggersStl() override final;
    void dumpTriggersIco() override final;
    void dumpTriggersAct() override final;
    void dumpTriggersNba() override final;
    void dumpTriggersObs() override final;
    void dumpTriggersReact() override final;

    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
