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

/* This file is designed for use with ISim build 0x36e8438f */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//VBOXSVR/virtual_share_files/lab2/lab02_reg/lab02_alu.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {0U, 0U};



static void Always_37_0(char *t0)
{
    char t10[16];
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 2188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2384);
    *((int *)t2) = 1;
    t3 = (t0 + 2216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1664);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1664);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 1160U);
    t8 = *((char **)t7);
    t7 = (t0 + 1252U);
    t9 = *((char **)t7);
    xsi_vlog_signed_add(t10, 33, t8, 32, t9, 32);
    t7 = (t0 + 1664);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    t11 = (t0 + 1572);
    xsi_vlogvar_assign_value(t11, t10, 32, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = (t0 + 1252U);
    t7 = *((char **)t3);
    xsi_vlog_signed_minus(t10, 33, t4, 32, t7, 32);
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    t8 = (t0 + 1572);
    xsi_vlogvar_assign_value(t8, t10, 32, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = (t0 + 1252U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_bit_and(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = (t0 + 1252U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_bit_or(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = (t0 + 1252U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_bit_xor(t12, 32, t4, 32, t7, 32);
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1160U);
    t4 = *((char **)t3);
    t3 = (t0 + 1252U);
    t7 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_signed_bit_or(t13, 32, t4, 32, t7, 32);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t8 = (t13 + 4);
    memcpy(t12, t13, 8);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t15 | t16);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 4294967295U);
    t9 = (t0 + 1664);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1664);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1664);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB23;

}


extern void work_m_00000000003916522724_4200319666_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000003916522724_4200319666", "isim/lab02_test_isim_beh.exe.sim/work/m_00000000003916522724_4200319666.didat");
	xsi_register_executes(pe);
}
