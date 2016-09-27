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
    xilinxcorelib_ver_m_00000000001184809869_1083086824_init();
    xilinxcorelib_ver_m_00000000001036818086_2877091463_init();
    xilinxcorelib_ver_m_00000000000414557669_0660832642_init();
    xilinxcorelib_ver_m_00000000002216354146_0949903343_init();
    work_m_00000000003645434707_2321183677_init();
    work_m_00000000000383617880_1938225339_init();
    work_m_00000000001410111434_3385901664_init();
    work_m_00000000000393814498_0886308060_init();
    work_m_00000000001980008863_0967961054_init();
    work_m_00000000002238764354_4232743156_init();
    work_m_00000000000888430339_1200043877_init();
    work_m_00000000001972671864_1985558087_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000001972671864_1985558087");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
