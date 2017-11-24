// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "astroSim.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic astroSim::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic astroSim::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> astroSim::ap_ST_fsm_state1 = "1";
const sc_lv<2> astroSim::ap_ST_fsm_state2 = "10";
const sc_lv<32> astroSim::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> astroSim::ap_const_lv32_1 = "1";
const bool astroSim::ap_const_boolean_1 = true;

astroSim::astroSim(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_janus_run_fu_120 = new janus_run("grp_janus_run_fu_120");
    grp_janus_run_fu_120->ap_clk(ap_clk);
    grp_janus_run_fu_120->ap_rst(ap_rst);
    grp_janus_run_fu_120->ap_start(grp_janus_run_fu_120_ap_start);
    grp_janus_run_fu_120->ap_done(grp_janus_run_fu_120_ap_done);
    grp_janus_run_fu_120->ap_idle(grp_janus_run_fu_120_ap_idle);
    grp_janus_run_fu_120->ap_ready(grp_janus_run_fu_120_ap_ready);
    grp_janus_run_fu_120->p_int_out_address0(grp_janus_run_fu_120_p_int_out_address0);
    grp_janus_run_fu_120->p_int_out_ce0(grp_janus_run_fu_120_p_int_out_ce0);
    grp_janus_run_fu_120->p_int_out_we0(grp_janus_run_fu_120_p_int_out_we0);
    grp_janus_run_fu_120->p_int_out_d0(grp_janus_run_fu_120_p_int_out_d0);
    grp_janus_run_fu_120->p_int_out_address1(grp_janus_run_fu_120_p_int_out_address1);
    grp_janus_run_fu_120->p_int_out_ce1(grp_janus_run_fu_120_p_int_out_ce1);
    grp_janus_run_fu_120->p_int_out_we1(grp_janus_run_fu_120_p_int_out_we1);
    grp_janus_run_fu_120->p_int_out_d1(grp_janus_run_fu_120_p_int_out_d1);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( grp_janus_run_fu_120_ap_done );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( grp_janus_run_fu_120_ap_done );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_grp_janus_run_fu_120_ap_start);
    sensitive << ( ap_reg_grp_janus_run_fu_120_ap_start );

    SC_METHOD(thread_result_address0);
    sensitive << ( grp_janus_run_fu_120_p_int_out_address0 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_address1);
    sensitive << ( grp_janus_run_fu_120_p_int_out_address1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_ce0);
    sensitive << ( grp_janus_run_fu_120_p_int_out_ce0 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_ce1);
    sensitive << ( grp_janus_run_fu_120_p_int_out_ce1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_d0);
    sensitive << ( grp_janus_run_fu_120_p_int_out_d0 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_d1);
    sensitive << ( grp_janus_run_fu_120_p_int_out_d1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_we0);
    sensitive << ( grp_janus_run_fu_120_p_int_out_we0 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_result_we1);
    sensitive << ( grp_janus_run_fu_120_p_int_out_we1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( grp_janus_run_fu_120_ap_done );
    sensitive << ( ap_CS_fsm_state2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "01";
    ap_reg_grp_janus_run_fu_120_ap_start = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "astroSim_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, result_address0, "(port)result_address0");
    sc_trace(mVcdFile, result_ce0, "(port)result_ce0");
    sc_trace(mVcdFile, result_we0, "(port)result_we0");
    sc_trace(mVcdFile, result_d0, "(port)result_d0");
    sc_trace(mVcdFile, result_address1, "(port)result_address1");
    sc_trace(mVcdFile, result_ce1, "(port)result_ce1");
    sc_trace(mVcdFile, result_we1, "(port)result_we1");
    sc_trace(mVcdFile, result_d1, "(port)result_d1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, grp_janus_run_fu_120_ap_start, "grp_janus_run_fu_120_ap_start");
    sc_trace(mVcdFile, grp_janus_run_fu_120_ap_done, "grp_janus_run_fu_120_ap_done");
    sc_trace(mVcdFile, grp_janus_run_fu_120_ap_idle, "grp_janus_run_fu_120_ap_idle");
    sc_trace(mVcdFile, grp_janus_run_fu_120_ap_ready, "grp_janus_run_fu_120_ap_ready");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_address0, "grp_janus_run_fu_120_p_int_out_address0");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_ce0, "grp_janus_run_fu_120_p_int_out_ce0");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_we0, "grp_janus_run_fu_120_p_int_out_we0");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_d0, "grp_janus_run_fu_120_p_int_out_d0");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_address1, "grp_janus_run_fu_120_p_int_out_address1");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_ce1, "grp_janus_run_fu_120_p_int_out_ce1");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_we1, "grp_janus_run_fu_120_p_int_out_we1");
    sc_trace(mVcdFile, grp_janus_run_fu_120_p_int_out_d1, "grp_janus_run_fu_120_p_int_out_d1");
    sc_trace(mVcdFile, ap_reg_grp_janus_run_fu_120_ap_start, "ap_reg_grp_janus_run_fu_120_ap_start");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("astroSim.hdltvin.dat");
    mHdltvoutHandle.open("astroSim.hdltvout.dat");
}

astroSim::~astroSim() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete grp_janus_run_fu_120;
}

void astroSim::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_grp_janus_run_fu_120_ap_start = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_reg_grp_janus_run_fu_120_ap_start = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_janus_run_fu_120_ap_ready.read())) {
            ap_reg_grp_janus_run_fu_120_ap_start = ap_const_logic_0;
        }
    }
}

void astroSim::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void astroSim::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void astroSim::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(grp_janus_run_fu_120_ap_done.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void astroSim::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void astroSim::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(grp_janus_run_fu_120_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void astroSim::thread_grp_janus_run_fu_120_ap_start() {
    grp_janus_run_fu_120_ap_start = ap_reg_grp_janus_run_fu_120_ap_start.read();
}

void astroSim::thread_result_address0() {
    result_address0 = grp_janus_run_fu_120_p_int_out_address0.read();
}

void astroSim::thread_result_address1() {
    result_address1 = grp_janus_run_fu_120_p_int_out_address1.read();
}

void astroSim::thread_result_ce0() {
    result_ce0 = grp_janus_run_fu_120_p_int_out_ce0.read();
}

void astroSim::thread_result_ce1() {
    result_ce1 = grp_janus_run_fu_120_p_int_out_ce1.read();
}

void astroSim::thread_result_d0() {
    result_d0 = grp_janus_run_fu_120_p_int_out_d0.read();
}

void astroSim::thread_result_d1() {
    result_d1 = grp_janus_run_fu_120_p_int_out_d1.read();
}

void astroSim::thread_result_we0() {
    result_we0 = grp_janus_run_fu_120_p_int_out_we0.read();
}

void astroSim::thread_result_we1() {
    result_we1 = grp_janus_run_fu_120_p_int_out_we1.read();
}

void astroSim::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(grp_janus_run_fu_120_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

void astroSim::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_address0\" :  \"" << result_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_ce0\" :  \"" << result_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_we0\" :  \"" << result_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_d0\" :  \"" << result_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_address1\" :  \"" << result_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_ce1\" :  \"" << result_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_we1\" :  \"" << result_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_d1\" :  \"" << result_d1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

