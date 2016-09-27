/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002416213546_2725559894_init();
    work_m_00000000000471480893_1621107508_init();
    xilinxcorelib_ver_m_00000000001184809869_0608877610_init();
    xilinxcorelib_ver_m_00000000001184809869_3110940425_init();
    xilinxcorelib_ver_m_00000000001036818086_0193980919_init();
    xilinxcorelib_ver_m_00000000003102381108_4285940428_init();
    xilinxcorelib_ver_m_00000000002216354146_0655331240_init();
    work_m_00000000002129493273_0450250084_init();
    work_m_00000000001445211451_2885957937_init();
    work_m_00000000000288821692_1985558087_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000000288821692_1985558087");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
