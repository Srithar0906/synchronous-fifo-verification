// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"
#include "Vfifo_tb___024root.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_initial__TOP(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_fifo_tb__DOT__write_fifo__0__data;
    __Vtask_fifo_tb__DOT__write_fifo__0__data = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__write_fifo__1__data;
    __Vtask_fifo_tb__DOT__write_fifo__1__data = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__write_fifo__2__data;
    __Vtask_fifo_tb__DOT__write_fifo__2__data = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__write_fifo__3__data;
    __Vtask_fifo_tb__DOT__write_fifo__3__data = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__read_check__4__expected;
    __Vtask_fifo_tb__DOT__read_check__4__expected = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__read_check__5__expected;
    __Vtask_fifo_tb__DOT__read_check__5__expected = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__read_check__6__expected;
    __Vtask_fifo_tb__DOT__read_check__6__expected = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__read_check__7__expected;
    __Vtask_fifo_tb__DOT__read_check__7__expected = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__write_only__8__data;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0;
    CData/*7:0*/ __Vtask_fifo_tb__DOT__read_check__9__expected;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0;
    // Body
    vlSelfRef.fifo_tb__DOT__pass_count = 0U;
    vlSelfRef.fifo_tb__DOT__fail_count = 0U;
    vlSelfRef.fifo_tb__DOT__rst = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    vlSelfRef.fifo_tb__DOT__din = 0U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rst = 0U;
    VL_WRITEF_NX("\n--- Basic Order Test ---\n",0);
    __Vtask_fifo_tb__DOT__write_fifo__0__data = 0xaaU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_fifo__0__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         35);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    __Vtask_fifo_tb__DOT__write_fifo__1__data = 0xbbU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_fifo__1__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         35);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    __Vtask_fifo_tb__DOT__write_fifo__2__data = 0xccU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_fifo__2__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         35);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    __Vtask_fifo_tb__DOT__write_fifo__3__data = 0xddU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         32);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_fifo__3__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         35);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__read_check__4__expected = 0xaaU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__4__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__4__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__4__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__5__expected = 0xbbU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__5__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__5__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__5__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__6__expected = 0xccU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__6__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__6__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__6__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__7__expected = 0xddU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__7__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__7__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__7__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    VL_WRITEF_NX("\n--- Full Flag Test ---\n",0);
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_fifo_tb__DOT__write_only__8__data = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         41);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 1U;
    vlSelfRef.fifo_tb__DOT__din = __Vtask_fifo_tb__DOT__write_only__8__data;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__wr_en = 0U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((8U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count))) {
        VL_WRITEF_NX("PASS: Full flag set correctly\n",0);
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Full flag not set\n",0);
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- Empty Flag Test ---\n",0);
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    __Vtask_fifo_tb__DOT__read_check__9__expected = 0xffU;
    co_await vlSelfRef.__VtrigSched_h3478f8eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.fifo_tb__DOT__dout) == (IData)(__Vtask_fifo_tb__DOT__read_check__9__expected))) {
        VL_WRITEF_NX("PASS: Read = %x (expected %x)\n",0,
                     8,vlSelfRef.fifo_tb__DOT__dout,
                     8,(IData)(__Vtask_fifo_tb__DOT__read_check__9__expected));
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Expected %x got %x\n",0,
                     8,__Vtask_fifo_tb__DOT__read_check__9__expected,
                     8,(IData)(vlSelfRef.fifo_tb__DOT__dout));
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    vlSelfRef.fifo_tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VtrigSched_h3478f92c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fifo_tb.clk)", 
                                                         "tb/fifo_tb.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/fifo_tb.sv", 
                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count))) {
        VL_WRITEF_NX("PASS: Empty flag set correctly\n",0);
        vlSelfRef.fifo_tb__DOT__pass_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: Empty flag not set\n",0);
        vlSelfRef.fifo_tb__DOT__fail_count = ((IData)(1U) 
                                              + vlSelfRef.fifo_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n==============================\nPASSED: %0d / %0d\nFAILED: %0d / %0d\n==============================\n",0,
                 32,vlSelfRef.fifo_tb__DOT__pass_count,
                 32,(vlSelfRef.fifo_tb__DOT__pass_count 
                     + vlSelfRef.fifo_tb__DOT__fail_count),
                 32,vlSelfRef.fifo_tb__DOT__fail_count,
                 32,(vlSelfRef.fifo_tb__DOT__pass_count 
                     + vlSelfRef.fifo_tb__DOT__fail_count));
    VL_FINISH_MT("tb/fifo_tb.sv", 122, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/fifo_tb.sv", 
                                             24);
        vlSelfRef.fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__clk)));
    }
}

void Vfifo_tb___024root___eval_act(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfifo_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0;
    CData/*3:0*/ __Vdly__fifo_tb__DOT__uut__DOT__count;
    __Vdly__fifo_tb__DOT__uut__DOT__count = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0;
    __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0 = 0;
    // Body
    __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr;
    __Vdly__fifo_tb__DOT__uut__DOT__count = vlSelfRef.fifo_tb__DOT__uut__DOT__count;
    __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr;
    __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0 = 0U;
    if (vlSelfRef.fifo_tb__DOT__rst) {
        __Vdly__fifo_tb__DOT__uut__DOT__count = 0U;
        __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr = 0U;
        __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
        vlSelfRef.fifo_tb__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.fifo_tb__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.fifo_tb__DOT__full)))) {
            __Vdly__fifo_tb__DOT__uut__DOT__count = 
                (0xfU & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count)));
        }
        if (((IData)(vlSelfRef.fifo_tb__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.fifo_tb__DOT__empty)))) {
            __Vdly__fifo_tb__DOT__uut__DOT__count = 
                (0xfU & ((IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.fifo_tb__DOT__wr_en) 
             & (8U != (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count)))) {
            __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0 
                = vlSelfRef.fifo_tb__DOT__din;
            __VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0 
                = vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr;
            __VdlySet__fifo_tb__DOT__uut__DOT__mem__v0 = 1U;
            __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.fifo_tb__DOT__rd_en) 
             & (0U != (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count)))) {
            vlSelfRef.fifo_tb__DOT__dout = vlSelfRef.fifo_tb__DOT__uut__DOT__mem
                [vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr];
            __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr)));
        }
    }
    vlSelfRef.fifo_tb__DOT__uut__DOT__wr_ptr = __Vdly__fifo_tb__DOT__uut__DOT__wr_ptr;
    vlSelfRef.fifo_tb__DOT__uut__DOT__rd_ptr = __Vdly__fifo_tb__DOT__uut__DOT__rd_ptr;
    if (__VdlySet__fifo_tb__DOT__uut__DOT__mem__v0) {
        vlSelfRef.fifo_tb__DOT__uut__DOT__mem[__VdlyDim0__fifo_tb__DOT__uut__DOT__mem__v0] 
            = __VdlyVal__fifo_tb__DOT__uut__DOT__mem__v0;
    }
    vlSelfRef.fifo_tb__DOT__uut__DOT__count = __Vdly__fifo_tb__DOT__uut__DOT__count;
    vlSelfRef.fifo_tb__DOT__full = (8U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count));
    vlSelfRef.fifo_tb__DOT__empty = (0U == (IData)(vlSelfRef.fifo_tb__DOT__uut__DOT__count));
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3478f92c__0.resume(
                                                   "@(posedge fifo_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3478f8eb__0.resume(
                                                   "@(negedge fifo_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo_tb___024root___timing_commit(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3478f92c__0.commit(
                                                   "@(posedge fifo_tb.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3478f8eb__0.commit(
                                                   "@(negedge fifo_tb.clk)");
    }
}

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf);

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__act(vlSelf);
    Vfifo_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfifo_tb___024root___timing_resume(vlSelf);
        Vfifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__nba(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(Vfifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/fifo_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/fifo_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfifo_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfifo_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
