// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo_tb__Syms.h"


void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfifo_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo_tb___024root__trace_chg_0_sub_0(Vfifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.fifo_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.fifo_tb__DOT__wr_en));
        bufp->chgBit(oldp+2,(vlSelfRef.fifo_tb__DOT__rd_en));
        bufp->chgCData(oldp+3,(vlSelfRef.fifo_tb__DOT__din),8);
        bufp->chgIData(oldp+4,(vlSelfRef.fifo_tb__DOT__pass_count),32);
        bufp->chgIData(oldp+5,(vlSelfRef.fifo_tb__DOT__fail_count),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+6,(vlSelfRef.fifo_tb__DOT__dout),8);
        bufp->chgBit(oldp+7,((8U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count))));
        bufp->chgBit(oldp+8,((0U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count))));
        bufp->chgCData(oldp+9,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[0]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[1]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[2]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[3]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[4]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[5]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[6]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.fifo_tb__DOT__uut__DOT__mem[7]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr),3);
        bufp->chgCData(oldp+18,(vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr),3);
        bufp->chgCData(oldp+19,(vlSelfRef.fifo_tb__DOT__uut__DOT__count),4);
    }
    bufp->chgBit(oldp+20,(vlSelfRef.fifo_tb__DOT__clk));
}

void Vfifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root__trace_cleanup\n"); );
    // Init
    Vfifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo_tb___024root*>(voidSelf);
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
