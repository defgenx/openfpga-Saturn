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
class Vtb_top_REF_SCSP_PKG;
class Vtb_top_SCSP_PKG;


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
    VL_IN8(&CE,0,0);
    VL_IN8(&CE_R,0,0);
    VL_IN8(&CE_F,0,0);
    VL_IN8(&CS_N,0,0);
    VL_IN8(&AD_N,0,0);
    VL_IN8(&DTEN_N,0,0);
    VL_IN8(&REQ_N,0,0);
    VL_IN8(&SCRW_N,0,0);
    VL_IN8(&SCAS_N,0,0);
    VL_IN8(&SCLDS_N,0,0);
    VL_IN8(&SCUDS_N,0,0);
    VL_IN8(&SCFC,2,0);
    VL_IN8(&SND_EN,2,0);
    VL_OUT8(&R_RDY_N,0,0);
    VL_OUT8(&N_RDY_N,0,0);
    VL_OUT8(&R_INT_N,0,0);
    VL_OUT8(&N_INT_N,0,0);
    VL_OUT8(&R_SCCE_R,0,0);
    VL_OUT8(&N_SCCE_R,0,0);
    VL_OUT8(&R_SCCE_F,0,0);
    VL_OUT8(&N_SCCE_F,0,0);
    VL_OUT8(&R_SCDTACK_N,0,0);
    VL_OUT8(&N_SCDTACK_N,0,0);
    VL_OUT8(&R_SCAVEC_N,0,0);
    VL_OUT8(&N_SCAVEC_N,0,0);
    VL_OUT8(&R_SCIPL_N,2,0);
    VL_OUT8(&N_SCIPL_N,2,0);
    VL_OUT8(&R_RAM_WE,1,0);
    VL_OUT8(&N_RAM_WE,1,0);
    VL_OUT8(&R_RAM_RD,0,0);
    VL_OUT8(&N_RAM_RD,0,0);
    VL_OUT8(&R_RAM_CS,0,0);
    VL_OUT8(&N_RAM_CS,0,0);
    VL_OUT8(&R_RAM_RFS,0,0);
    VL_OUT8(&N_RAM_RFS,0,0);
    VL_IN16(&DI,15,0);
    VL_IN16(&SCDI,15,0);
    VL_IN16(&ESL,15,0);
    VL_IN16(&ESR,15,0);
    VL_IN16(&R_RAM_Q,15,0);
    VL_IN16(&N_RAM_Q,15,0);
    VL_OUT16(&R_DO,15,0);
    VL_OUT16(&N_DO,15,0);
    VL_OUT16(&R_SCDO,15,0);
    VL_OUT16(&N_SCDO,15,0);
    VL_OUT16(&R_RAM_D,15,0);
    VL_OUT16(&N_RAM_D,15,0);
    VL_OUT16(&R_SOUND_L,15,0);
    VL_OUT16(&N_SOUND_L,15,0);
    VL_OUT16(&R_SOUND_R,15,0);
    VL_OUT16(&N_SOUND_R,15,0);
    VL_IN(&SCA,23,1);
    VL_OUT(&R_RAM_A,18,1);
    VL_OUT(&N_RAM_A,18,1);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_top_SCSP_PKG* const __PVT__SCSP_PKG;
    Vtb_top_REF_SCSP_PKG* const __PVT__REF_SCSP_PKG;

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
