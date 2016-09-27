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
    work_m_00000000002220527683_0317860448_init();
    work_m_00000000001945023295_1938225339_init();
    work_m_00000000000927891057_2356217838_init();
    work_m_00000000001410111434_3385901664_init();
    work_m_00000000002977451986_0886308060_init();
    work_m_00000000001980008863_0548912183_init();
    work_m_00000000002238764354_0194703348_init();
    work_m_00000000002284824268_1200043877_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000002284824268_1200043877");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}
