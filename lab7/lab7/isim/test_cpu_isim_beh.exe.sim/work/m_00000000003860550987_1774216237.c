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
static const char *ng0 = "//vboxsrv/virtualbox_share_files/lab7/mem.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {224U, 0U};
static int ng5[] = {24, 0};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {228U, 0U};
static unsigned int ng11[] = {225U, 0U};
static int ng12[] = {16, 0};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {229U, 0U};
static unsigned int ng15[] = {227U, 0U};
static unsigned int ng16[] = {226U, 0U};
static unsigned int ng17[] = {230U, 0U};
static unsigned int ng18[] = {232U, 0U};
static unsigned int ng19[] = {233U, 0U};
static unsigned int ng20[] = {235U, 0U};
static unsigned int ng21[] = {234U, 0U};
static unsigned int ng22[] = {7U, 0U};
static unsigned int ng23[] = {238U, 0U};
static unsigned int ng24[] = {14U, 0U};



static void Cont_56_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2944);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4004);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 3952);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_57_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4040);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_59_2(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t35[8];
    char t39[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t52[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t34;
    char *t36;
    unsigned int t37;
    char *t38;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 3756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(76, ng0);

LAB14:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng23)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB38;

LAB39:
LAB41:
LAB40:    xsi_set_current_line(384, ng0);

LAB207:
LAB42:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(89, ng0);

LAB43:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB44:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t30 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t30 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t30 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t30 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(115, ng0);

LAB60:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB55:    goto LAB42;

LAB18:    xsi_set_current_line(121, ng0);

LAB61:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB62:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t7, 2);
    if (t30 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB69;

LAB70:
LAB72:
LAB71:    xsi_set_current_line(147, ng0);

LAB78:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB73:    goto LAB42;

LAB20:    xsi_set_current_line(153, ng0);

LAB79:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB80:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t7, 2);
    if (t30 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t30 == 1)
        goto LAB83;

LAB84:
LAB86:
LAB85:    xsi_set_current_line(169, ng0);

LAB90:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB87:    goto LAB42;

LAB22:    xsi_set_current_line(175, ng0);

LAB91:    xsi_set_current_line(176, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t33 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB92:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t33, 2, t7, 2);
    if (t30 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t33, 2, t2, 2);
    if (t30 == 1)
        goto LAB95;

LAB96:
LAB98:
LAB97:    xsi_set_current_line(191, ng0);

LAB102:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB99:    goto LAB42;

LAB24:    xsi_set_current_line(197, ng0);

LAB103:    xsi_set_current_line(198, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1520U);
    t4 = *((char **)t2);
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB42;

LAB26:    xsi_set_current_line(205, ng0);

LAB104:    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t39, 0, 8);
    t5 = (t39 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t39) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t35, 32, 32, 2U, t39, 30, t4, 2);
    t21 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t21, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    t2 = (t35 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t35) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB105:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t7, 2);
    if (t30 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 2);
    if (t30 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 2);
    if (t30 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 2);
    if (t30 == 1)
        goto LAB112;

LAB113:
LAB115:
LAB114:    xsi_set_current_line(228, ng0);

LAB121:    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB116:    goto LAB42;

LAB28:    xsi_set_current_line(234, ng0);

LAB122:    xsi_set_current_line(235, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t40, 0, 8);
    t5 = (t40 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t39, 32, 32, 2U, t40, 30, t4, 2);
    t21 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t21, t39, 0, 0, 32, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t39, 0, 8);
    t2 = (t39 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t39) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB123:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t7, 2);
    if (t30 == 1)
        goto LAB124;

LAB125:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t30 == 1)
        goto LAB126;

LAB127:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t30 == 1)
        goto LAB128;

LAB129:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t30 == 1)
        goto LAB130;

LAB131:
LAB133:
LAB132:    xsi_set_current_line(257, ng0);

LAB139:    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB134:    goto LAB42;

LAB30:    xsi_set_current_line(263, ng0);

LAB140:    xsi_set_current_line(264, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t41 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t41) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 1428U);
    t8 = *((char **)t7);
    memset(t42, 0, 8);
    t7 = (t42 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t42) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t19 & 255U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 255U);
    t22 = (t0 + 1428U);
    t28 = *((char **)t22);
    memset(t43, 0, 8);
    t22 = (t43 + 4);
    t29 = (t28 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (t23 >> 0);
    *((unsigned int *)t43) = t24;
    t25 = *((unsigned int *)t29);
    t26 = (t25 >> 0);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t27 & 255U);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t37 & 255U);
    t34 = (t0 + 1428U);
    t36 = *((char **)t34);
    memset(t44, 0, 8);
    t34 = (t44 + 4);
    t38 = (t36 + 4);
    t45 = *((unsigned int *)t36);
    t46 = (t45 >> 0);
    *((unsigned int *)t44) = t46;
    t47 = *((unsigned int *)t38);
    t48 = (t47 >> 0);
    *((unsigned int *)t34) = t48;
    t49 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t49 & 255U);
    t50 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t50 & 255U);
    xsi_vlogtype_concat(t40, 32, 32, 4U, t44, 8, t43, 8, t42, 8, t41, 8);
    t51 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t51, t40, 0, 0, 32, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t40, 0, 8);
    t2 = (t40 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB141:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t7, 2);
    if (t30 == 1)
        goto LAB142;

LAB143:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t2, 2);
    if (t30 == 1)
        goto LAB144;

LAB145:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t2, 2);
    if (t30 == 1)
        goto LAB146;

LAB147:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t2, 2);
    if (t30 == 1)
        goto LAB148;

LAB149:
LAB151:
LAB150:    xsi_set_current_line(286, ng0);

LAB157:    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB152:    goto LAB42;

LAB32:    xsi_set_current_line(292, ng0);

LAB158:    xsi_set_current_line(293, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    memset(t42, 0, 8);
    t2 = (t42 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t42) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t7 = (t0 + 1428U);
    t8 = *((char **)t7);
    memset(t43, 0, 8);
    t7 = (t43 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t43) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t43, 16, t42, 16);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t41, 0, 0, 32, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t41 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t41) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB159:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t41, 2, t7, 2);
    if (t30 == 1)
        goto LAB160;

LAB161:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t30 == 1)
        goto LAB162;

LAB163:
LAB165:
LAB164:    xsi_set_current_line(307, ng0);

LAB169:    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB166:    goto LAB42;

LAB34:    xsi_set_current_line(313, ng0);

LAB170:    xsi_set_current_line(314, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(316, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB42;

LAB36:    xsi_set_current_line(321, ng0);

LAB171:    xsi_set_current_line(322, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t43, 0, 8);
    t5 = (t43 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t43) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t42, 32, 32, 2U, t43, 30, t4, 2);
    t21 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t21, t42, 0, 0, 32, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t42, 0, 8);
    t2 = (t42 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t42) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB172:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t7, 2);
    if (t30 == 1)
        goto LAB173;

LAB174:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t2, 2);
    if (t30 == 1)
        goto LAB175;

LAB176:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t2, 2);
    if (t30 == 1)
        goto LAB177;

LAB178:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t2, 2);
    if (t30 == 1)
        goto LAB179;

LAB180:
LAB182:
LAB181:    xsi_set_current_line(347, ng0);

LAB188:    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB183:    goto LAB42;

LAB38:    xsi_set_current_line(353, ng0);

LAB189:    xsi_set_current_line(354, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1336U);
    t7 = *((char **)t5);
    memset(t44, 0, 8);
    t5 = (t44 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t44) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t43, 32, 32, 2U, t44, 30, t4, 2);
    t21 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t21, t43, 0, 0, 32, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t43, 0, 8);
    t2 = (t43 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t43) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);

LAB190:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t7, 2);
    if (t30 == 1)
        goto LAB191;

LAB192:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t30 == 1)
        goto LAB193;

LAB194:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t30 == 1)
        goto LAB195;

LAB196:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t30 == 1)
        goto LAB197;

LAB198:
LAB200:
LAB199:    xsi_set_current_line(379, ng0);

LAB206:    xsi_set_current_line(380, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB201:    goto LAB42;

LAB45:    xsi_set_current_line(95, ng0);

LAB56:    xsi_set_current_line(96, ng0);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t32, 0, 8);
    t8 = (t32 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 24);
    *((unsigned int *)t32) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 24);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t19 & 255U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 255U);
    t28 = ((char*)((ng5)));
    t29 = (t0 + 1520U);
    t34 = *((char **)t29);
    memset(t35, 0, 8);
    t29 = (t35 + 4);
    t36 = (t34 + 4);
    t23 = *((unsigned int *)t34);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t35) = t25;
    t26 = *((unsigned int *)t36);
    t27 = (t26 >> 31);
    t37 = (t27 & 1);
    *((unsigned int *)t29) = t37;
    xsi_vlog_mul_concat(t33, 24, 1, t28, 1U, t35, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t33, 24, t32, 8);
    t38 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t38, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB55;

LAB47:    xsi_set_current_line(100, ng0);

LAB57:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = ((char*)((ng5)));
    t21 = (t0 + 1520U);
    t22 = *((char **)t21);
    memset(t35, 0, 8);
    t21 = (t35 + 4);
    t28 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (t15 >> 23);
    t17 = (t16 & 1);
    *((unsigned int *)t35) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 23);
    t20 = (t19 & 1);
    *((unsigned int *)t21) = t20;
    xsi_vlog_mul_concat(t33, 24, 1, t8, 1U, t35, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t33, 24, t32, 8);
    t29 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB55;

LAB49:    xsi_set_current_line(105, ng0);

LAB58:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = ((char*)((ng5)));
    t21 = (t0 + 1520U);
    t22 = *((char **)t21);
    memset(t35, 0, 8);
    t21 = (t35 + 4);
    t28 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t35) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t21) = t20;
    xsi_vlog_mul_concat(t33, 24, 1, t8, 1U, t35, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t33, 24, t32, 8);
    t29 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB55;

LAB51:    xsi_set_current_line(110, ng0);

LAB59:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = ((char*)((ng5)));
    t21 = (t0 + 1520U);
    t22 = *((char **)t21);
    memset(t35, 0, 8);
    t21 = (t35 + 4);
    t28 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t35) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t21) = t20;
    xsi_vlog_mul_concat(t33, 24, 1, t8, 1U, t35, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t33, 24, t32, 8);
    t29 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB55;

LAB63:    xsi_set_current_line(127, ng0);

LAB74:    xsi_set_current_line(128, ng0);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t33, 0, 8);
    t8 = (t33 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 24);
    *((unsigned int *)t33) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 24);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t19 & 255U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 255U);
    t28 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t28, 24, t33, 8);
    t29 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t29, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB73;

LAB65:    xsi_set_current_line(132, ng0);

LAB75:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t33, 0, 8);
    t4 = (t33 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t8, 24, t33, 8);
    t21 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t21, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB73;

LAB67:    xsi_set_current_line(137, ng0);

LAB76:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t33, 0, 8);
    t4 = (t33 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t8, 24, t33, 8);
    t21 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t21, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB73;

LAB69:    xsi_set_current_line(142, ng0);

LAB77:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t33, 0, 8);
    t4 = (t33 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 32, 32, 2U, t8, 24, t33, 8);
    t21 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t21, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB73;

LAB81:    xsi_set_current_line(159, ng0);

LAB88:    xsi_set_current_line(160, ng0);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t35, 0, 8);
    t8 = (t35 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 16);
    *((unsigned int *)t35) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 16);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t28 = ((char*)((ng12)));
    t29 = (t0 + 1520U);
    t34 = *((char **)t29);
    memset(t40, 0, 8);
    t29 = (t40 + 4);
    t36 = (t34 + 4);
    t23 = *((unsigned int *)t34);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t40) = t25;
    t26 = *((unsigned int *)t36);
    t27 = (t26 >> 31);
    t37 = (t27 & 1);
    *((unsigned int *)t29) = t37;
    xsi_vlog_mul_concat(t39, 16, 1, t28, 1U, t40, 1);
    xsi_vlogtype_concat(t33, 32, 32, 2U, t39, 16, t35, 16);
    t38 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t38, t33, 0, 0, 32, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB87;

LAB83:    xsi_set_current_line(164, ng0);

LAB89:    xsi_set_current_line(165, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t35, 0, 8);
    t4 = (t35 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t35) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t8 = ((char*)((ng12)));
    t21 = (t0 + 1520U);
    t22 = *((char **)t21);
    memset(t40, 0, 8);
    t21 = (t40 + 4);
    t28 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t40) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t21) = t20;
    xsi_vlog_mul_concat(t39, 16, 1, t8, 1U, t40, 1);
    xsi_vlogtype_concat(t33, 32, 32, 2U, t39, 16, t35, 16);
    t29 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t29, t33, 0, 0, 32, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB87;

LAB93:    xsi_set_current_line(181, ng0);

LAB100:    xsi_set_current_line(182, ng0);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t39, 0, 8);
    t8 = (t39 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 16);
    *((unsigned int *)t39) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 16);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t28 = ((char*)((ng1)));
    xsi_vlogtype_concat(t35, 32, 32, 2U, t28, 16, t39, 16);
    t29 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t29, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB99;

LAB95:    xsi_set_current_line(186, ng0);

LAB101:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t39, 0, 8);
    t4 = (t39 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t39) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t35, 32, 32, 2U, t8, 16, t39, 16);
    t21 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t21, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB99;

LAB106:    xsi_set_current_line(212, ng0);

LAB117:    xsi_set_current_line(213, ng0);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t39, 0, 8);
    t8 = (t39 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 0);
    *((unsigned int *)t39) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t19 & 4294967295U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 4294967295U);
    t28 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB116;

LAB108:    xsi_set_current_line(216, ng0);

LAB118:    xsi_set_current_line(217, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    memset(t40, 0, 8);
    t4 = (t40 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 255U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t41, 0, 8);
    t8 = (t41 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 0);
    *((unsigned int *)t41) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t19 & 16777215U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 16777215U);
    xsi_vlogtype_concat(t39, 32, 32, 2U, t41, 24, t40, 8);
    t28 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB116;

LAB110:    xsi_set_current_line(220, ng0);

LAB119:    xsi_set_current_line(221, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    memset(t40, 0, 8);
    t4 = (t40 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t41, 0, 8);
    t8 = (t41 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 0);
    *((unsigned int *)t41) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    xsi_vlogtype_concat(t39, 32, 32, 2U, t41, 16, t40, 16);
    t28 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB116;

LAB112:    xsi_set_current_line(224, ng0);

LAB120:    xsi_set_current_line(225, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    memset(t40, 0, 8);
    t4 = (t40 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 16777215U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 16777215U);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t41, 0, 8);
    t8 = (t41 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 0);
    *((unsigned int *)t41) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t19 & 255U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 255U);
    xsi_vlogtype_concat(t39, 32, 32, 2U, t41, 8, t40, 24);
    t28 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB116;

LAB124:    xsi_set_current_line(241, ng0);

LAB135:    xsi_set_current_line(242, ng0);
    t8 = (t0 + 1520U);
    t21 = *((char **)t8);
    memset(t41, 0, 8);
    t8 = (t41 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 24);
    *((unsigned int *)t41) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 24);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t19 & 255U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 255U);
    t28 = (t0 + 1428U);
    t29 = *((char **)t28);
    memset(t42, 0, 8);
    t28 = (t42 + 4);
    t34 = (t29 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (t23 >> 8);
    *((unsigned int *)t42) = t24;
    t25 = *((unsigned int *)t34);
    t26 = (t25 >> 8);
    *((unsigned int *)t28) = t26;
    t27 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t27 & 16777215U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 16777215U);
    xsi_vlogtype_concat(t40, 32, 32, 2U, t42, 24, t41, 8);
    t36 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t36, t40, 0, 0, 32, 0LL);
    goto LAB134;

LAB126:    xsi_set_current_line(245, ng0);

LAB136:    xsi_set_current_line(246, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t41, 0, 8);
    t4 = (t41 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t41) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t8 = (t0 + 1428U);
    t21 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 16);
    *((unsigned int *)t42) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 16);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    xsi_vlogtype_concat(t40, 32, 32, 2U, t42, 16, t41, 16);
    t28 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t28, t40, 0, 0, 32, 0LL);
    goto LAB134;

LAB128:    xsi_set_current_line(249, ng0);

LAB137:    xsi_set_current_line(250, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t41, 0, 8);
    t4 = (t41 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t41) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t13 & 16777215U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 16777215U);
    t8 = (t0 + 1428U);
    t21 = *((char **)t8);
    memset(t42, 0, 8);
    t8 = (t42 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 24);
    *((unsigned int *)t42) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 24);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t19 & 255U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 255U);
    xsi_vlogtype_concat(t40, 32, 32, 2U, t42, 8, t41, 24);
    t28 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t28, t40, 0, 0, 32, 0LL);
    goto LAB134;

LAB130:    xsi_set_current_line(253, ng0);

LAB138:    xsi_set_current_line(254, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    t4 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB134;

LAB142:    xsi_set_current_line(270, ng0);

LAB153:    xsi_set_current_line(271, ng0);
    t8 = ((char*)((ng6)));
    t21 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    goto LAB152;

LAB144:    xsi_set_current_line(274, ng0);

LAB154:    xsi_set_current_line(275, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB152;

LAB146:    xsi_set_current_line(278, ng0);

LAB155:    xsi_set_current_line(279, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB152;

LAB148:    xsi_set_current_line(282, ng0);

LAB156:    xsi_set_current_line(283, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB152;

LAB160:    xsi_set_current_line(299, ng0);

LAB167:    xsi_set_current_line(300, ng0);
    t8 = ((char*)((ng13)));
    t21 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    goto LAB166;

LAB162:    xsi_set_current_line(303, ng0);

LAB168:    xsi_set_current_line(304, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB166;

LAB173:    xsi_set_current_line(327, ng0);

LAB184:    xsi_set_current_line(328, ng0);
    t8 = ((char*)((ng3)));
    t21 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    goto LAB183;

LAB175:    xsi_set_current_line(332, ng0);

LAB185:    xsi_set_current_line(333, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(334, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    memset(t44, 0, 8);
    t2 = (t44 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t44) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t13 & 16777215U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 16777215U);
    t7 = (t0 + 1704U);
    t8 = *((char **)t7);
    memset(t52, 0, 8);
    t7 = (t52 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t52) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t19 & 255U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 255U);
    xsi_vlogtype_concat(t43, 32, 32, 2U, t52, 8, t44, 24);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t43, 0, 0, 32, 0LL);
    goto LAB183;

LAB177:    xsi_set_current_line(337, ng0);

LAB186:    xsi_set_current_line(338, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    memset(t44, 0, 8);
    t2 = (t44 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t44) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t7 = (t0 + 1704U);
    t8 = *((char **)t7);
    memset(t52, 0, 8);
    t7 = (t52 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t52) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    xsi_vlogtype_concat(t43, 32, 32, 2U, t52, 16, t44, 16);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t43, 0, 0, 32, 0LL);
    goto LAB183;

LAB179:    xsi_set_current_line(342, ng0);

LAB187:    xsi_set_current_line(343, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    memset(t44, 0, 8);
    t2 = (t44 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 24);
    *((unsigned int *)t44) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 24);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 1704U);
    t8 = *((char **)t7);
    memset(t52, 0, 8);
    t7 = (t52 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t52) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t19 & 16777215U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 16777215U);
    xsi_vlogtype_concat(t43, 32, 32, 2U, t52, 24, t44, 8);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t43, 0, 0, 32, 0LL);
    goto LAB183;

LAB191:    xsi_set_current_line(359, ng0);

LAB202:    xsi_set_current_line(360, ng0);
    t8 = ((char*)((ng6)));
    t21 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(361, ng0);
    t2 = (t0 + 1704U);
    t4 = *((char **)t2);
    memset(t52, 0, 8);
    t2 = (t52 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 16777215U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 16777215U);
    t7 = (t0 + 1428U);
    t8 = *((char **)t7);
    memset(t53, 0, 8);
    t7 = (t53 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t53) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t19 & 255U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 255U);
    xsi_vlogtype_concat(t44, 32, 32, 2U, t53, 8, t52, 24);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t44, 0, 0, 32, 0LL);
    goto LAB201;

LAB193:    xsi_set_current_line(364, ng0);

LAB203:    xsi_set_current_line(365, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = (t0 + 1704U);
    t4 = *((char **)t2);
    memset(t52, 0, 8);
    t2 = (t52 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t7 = (t0 + 1428U);
    t8 = *((char **)t7);
    memset(t53, 0, 8);
    t7 = (t53 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t53) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    xsi_vlogtype_concat(t44, 32, 32, 2U, t53, 16, t52, 16);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t44, 0, 0, 32, 0LL);
    goto LAB201;

LAB195:    xsi_set_current_line(369, ng0);

LAB204:    xsi_set_current_line(370, ng0);
    t4 = ((char*)((ng24)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = (t0 + 1704U);
    t4 = *((char **)t2);
    memset(t52, 0, 8);
    t2 = (t52 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t52) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 1428U);
    t8 = *((char **)t7);
    memset(t53, 0, 8);
    t7 = (t53 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t53) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t19 & 16777215U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 16777215U);
    xsi_vlogtype_concat(t44, 32, 32, 2U, t53, 24, t52, 8);
    t22 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t22, t44, 0, 0, 32, 0LL);
    goto LAB201;

LAB197:    xsi_set_current_line(374, ng0);

LAB205:    xsi_set_current_line(375, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    memset(t44, 0, 8);
    t2 = (t44 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t44) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t7 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t7, t44, 0, 0, 32, 0LL);
    goto LAB201;

}


extern void work_m_00000000003860550987_1774216237_init()
{
	static char *pe[] = {(void *)Cont_56_0,(void *)Cont_57_1,(void *)Always_59_2};
	xsi_register_didat("work_m_00000000003860550987_1774216237", "isim/test_cpu_isim_beh.exe.sim/work/m_00000000003860550987_1774216237.didat");
	xsi_register_executes(pe);
}
