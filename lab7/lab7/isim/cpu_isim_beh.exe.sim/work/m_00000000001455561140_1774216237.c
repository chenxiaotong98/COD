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
static unsigned int ng18[] = {240U, 0U};
static unsigned int ng19[] = {232U, 0U};
static unsigned int ng20[] = {233U, 0U};
static unsigned int ng21[] = {235U, 0U};
static unsigned int ng22[] = {234U, 0U};
static unsigned int ng23[] = {7U, 0U};
static unsigned int ng24[] = {238U, 0U};
static unsigned int ng25[] = {14U, 0U};
static unsigned int ng26[] = {248U, 0U};



static void Cont_63_0(char *t0)
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

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4616);
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
    t18 = (t0 + 4556);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_64_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4652);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void Always_66_2(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4564);
    *((int *)t2) = 1;
    t3 = (t0 + 4244);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
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

LAB11:    xsi_set_current_line(73, ng0);

LAB14:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1704U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(79, ng0);

LAB23:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t2 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(70, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(75, ng0);

LAB22:    xsi_set_current_line(76, ng0);
    t21 = (t0 + 1796U);
    t22 = *((char **)t21);
    t21 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 1, 0LL);
    goto LAB21;

}

static void Always_85_3(char *t0)
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

LAB0:    t1 = (t0 + 4360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4572);
    *((int *)t2) = 1;
    t3 = (t0 + 4388);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
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

LAB11:    xsi_set_current_line(104, ng0);

LAB14:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
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

LAB37:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(442, ng0);

LAB222:
LAB46:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(88, ng0);

LAB13:    xsi_set_current_line(89, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(119, ng0);

LAB47:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
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

LAB48:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t30 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t30 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t30 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t30 == 1)
        goto LAB55;

LAB56:
LAB58:
LAB57:    xsi_set_current_line(145, ng0);

LAB64:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB59:    goto LAB46;

LAB18:    xsi_set_current_line(151, ng0);

LAB65:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
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

LAB66:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t7, 2);
    if (t30 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t31, 2, t2, 2);
    if (t30 == 1)
        goto LAB73;

LAB74:
LAB76:
LAB75:    xsi_set_current_line(177, ng0);

LAB82:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB77:    goto LAB46;

LAB20:    xsi_set_current_line(183, ng0);

LAB83:    xsi_set_current_line(184, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
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

LAB84:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t7, 2);
    if (t30 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 2);
    if (t30 == 1)
        goto LAB87;

LAB88:
LAB90:
LAB89:    xsi_set_current_line(199, ng0);

LAB94:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB91:    goto LAB46;

LAB22:    xsi_set_current_line(205, ng0);

LAB95:    xsi_set_current_line(206, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
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

LAB96:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t33, 2, t7, 2);
    if (t30 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t33, 2, t2, 2);
    if (t30 == 1)
        goto LAB99;

LAB100:
LAB102:
LAB101:    xsi_set_current_line(221, ng0);

LAB106:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB103:    goto LAB46;

LAB24:    xsi_set_current_line(227, ng0);

LAB107:    xsi_set_current_line(228, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 1520U);
    t4 = *((char **)t2);
    t2 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB26:    xsi_set_current_line(235, ng0);

LAB108:    xsi_set_current_line(236, ng0);
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
    t21 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t21, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
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

LAB109:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t7, 2);
    if (t30 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 2);
    if (t30 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 2);
    if (t30 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 2);
    if (t30 == 1)
        goto LAB116;

LAB117:
LAB119:
LAB118:    xsi_set_current_line(258, ng0);

LAB125:    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB120:    goto LAB46;

LAB28:    xsi_set_current_line(264, ng0);

LAB126:    xsi_set_current_line(265, ng0);
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
    t21 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t21, t39, 0, 0, 32, 0LL);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(269, ng0);
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

LAB127:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t7, 2);
    if (t30 == 1)
        goto LAB128;

LAB129:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t30 == 1)
        goto LAB130;

LAB131:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t30 == 1)
        goto LAB132;

LAB133:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t39, 2, t2, 2);
    if (t30 == 1)
        goto LAB134;

LAB135:
LAB137:
LAB136:    xsi_set_current_line(287, ng0);

LAB143:    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB138:    goto LAB46;

LAB30:    xsi_set_current_line(293, ng0);

LAB144:    xsi_set_current_line(294, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = (t0 + 1520U);
    t4 = *((char **)t2);
    t2 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB32:    xsi_set_current_line(303, ng0);

LAB145:    xsi_set_current_line(304, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(306, ng0);
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
    t51 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t51, t40, 0, 0, 32, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(308, ng0);
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

LAB146:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t7, 2);
    if (t30 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t2, 2);
    if (t30 == 1)
        goto LAB149;

LAB150:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t2, 2);
    if (t30 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t40, 2, t2, 2);
    if (t30 == 1)
        goto LAB153;

LAB154:
LAB156:
LAB155:    xsi_set_current_line(326, ng0);

LAB162:    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB157:    goto LAB46;

LAB34:    xsi_set_current_line(332, ng0);

LAB163:    xsi_set_current_line(333, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(335, ng0);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t41, 0, 0, 32, 0LL);
    xsi_set_current_line(336, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(337, ng0);
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

LAB164:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t41, 2, t7, 2);
    if (t30 == 1)
        goto LAB165;

LAB166:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t30 == 1)
        goto LAB167;

LAB168:
LAB170:
LAB169:    xsi_set_current_line(347, ng0);

LAB174:    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB171:    goto LAB46;

LAB36:    xsi_set_current_line(353, ng0);

LAB175:    xsi_set_current_line(354, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB38:    xsi_set_current_line(361, ng0);

LAB176:    xsi_set_current_line(362, ng0);
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
    t21 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t21, t42, 0, 0, 32, 0LL);
    xsi_set_current_line(363, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(365, ng0);
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

LAB177:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t7, 2);
    if (t30 == 1)
        goto LAB178;

LAB179:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t2, 2);
    if (t30 == 1)
        goto LAB180;

LAB181:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t2, 2);
    if (t30 == 1)
        goto LAB182;

LAB183:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t42, 2, t2, 2);
    if (t30 == 1)
        goto LAB184;

LAB185:
LAB187:
LAB186:    xsi_set_current_line(387, ng0);

LAB193:    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB188:    goto LAB46;

LAB40:    xsi_set_current_line(393, ng0);

LAB194:    xsi_set_current_line(394, ng0);
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
    t21 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t21, t43, 0, 0, 32, 0LL);
    xsi_set_current_line(395, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(396, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(397, ng0);
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

LAB195:    t7 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t7, 2);
    if (t30 == 1)
        goto LAB196;

LAB197:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t30 == 1)
        goto LAB198;

LAB199:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t30 == 1)
        goto LAB200;

LAB201:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t30 == 1)
        goto LAB202;

LAB203:
LAB205:
LAB204:    xsi_set_current_line(419, ng0);

LAB211:    xsi_set_current_line(420, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB206:    goto LAB46;

LAB42:    xsi_set_current_line(425, ng0);

LAB212:    xsi_set_current_line(426, ng0);
    t4 = (t0 + 3312);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB216;

LAB213:    if (t18 != 0)
        goto LAB215;

LAB214:    *((unsigned int *)t44) = 1;

LAB216:    t29 = (t44 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t44);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB217;

LAB218:    xsi_set_current_line(438, ng0);

LAB221:    xsi_set_current_line(439, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB219:    goto LAB46;

LAB49:    xsi_set_current_line(125, ng0);

LAB60:    xsi_set_current_line(126, ng0);
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
    t38 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t38, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB59;

LAB51:    xsi_set_current_line(130, ng0);

LAB61:    xsi_set_current_line(131, ng0);
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
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB59;

LAB53:    xsi_set_current_line(135, ng0);

LAB62:    xsi_set_current_line(136, ng0);
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
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB59;

LAB55:    xsi_set_current_line(140, ng0);

LAB63:    xsi_set_current_line(141, ng0);
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
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 32, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB59;

LAB67:    xsi_set_current_line(157, ng0);

LAB78:    xsi_set_current_line(158, ng0);
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
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB77;

LAB69:    xsi_set_current_line(162, ng0);

LAB79:    xsi_set_current_line(163, ng0);
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
    t21 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t21, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB77;

LAB71:    xsi_set_current_line(167, ng0);

LAB80:    xsi_set_current_line(168, ng0);
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
    t21 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t21, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB77;

LAB73:    xsi_set_current_line(172, ng0);

LAB81:    xsi_set_current_line(173, ng0);
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
    t21 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t21, t32, 0, 0, 32, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB77;

LAB85:    xsi_set_current_line(189, ng0);

LAB92:    xsi_set_current_line(190, ng0);
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
    t38 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t38, t33, 0, 0, 32, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB91;

LAB87:    xsi_set_current_line(194, ng0);

LAB93:    xsi_set_current_line(195, ng0);
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
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t33, 0, 0, 32, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB91;

LAB97:    xsi_set_current_line(211, ng0);

LAB104:    xsi_set_current_line(212, ng0);
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
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB103;

LAB99:    xsi_set_current_line(216, ng0);

LAB105:    xsi_set_current_line(217, ng0);
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
    t21 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t21, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB103;

LAB110:    xsi_set_current_line(242, ng0);

LAB121:    xsi_set_current_line(243, ng0);
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
    t28 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB120;

LAB112:    xsi_set_current_line(246, ng0);

LAB122:    xsi_set_current_line(247, ng0);
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
    t28 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB120;

LAB114:    xsi_set_current_line(250, ng0);

LAB123:    xsi_set_current_line(251, ng0);
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
    t28 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB120;

LAB116:    xsi_set_current_line(254, ng0);

LAB124:    xsi_set_current_line(255, ng0);
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
    t28 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    goto LAB120;

LAB128:    xsi_set_current_line(271, ng0);

LAB139:    xsi_set_current_line(272, ng0);
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
    t36 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t36, t40, 0, 0, 32, 0LL);
    goto LAB138;

LAB130:    xsi_set_current_line(275, ng0);

LAB140:    xsi_set_current_line(276, ng0);
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
    t28 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t28, t40, 0, 0, 32, 0LL);
    goto LAB138;

LAB132:    xsi_set_current_line(279, ng0);

LAB141:    xsi_set_current_line(280, ng0);
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
    t28 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t28, t40, 0, 0, 32, 0LL);
    goto LAB138;

LAB134:    xsi_set_current_line(283, ng0);

LAB142:    xsi_set_current_line(284, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB138;

LAB147:    xsi_set_current_line(310, ng0);

LAB158:    xsi_set_current_line(311, ng0);
    t8 = ((char*)((ng6)));
    t21 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    goto LAB157;

LAB149:    xsi_set_current_line(314, ng0);

LAB159:    xsi_set_current_line(315, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB157;

LAB151:    xsi_set_current_line(318, ng0);

LAB160:    xsi_set_current_line(319, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB157;

LAB153:    xsi_set_current_line(322, ng0);

LAB161:    xsi_set_current_line(323, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB157;

LAB165:    xsi_set_current_line(339, ng0);

LAB172:    xsi_set_current_line(340, ng0);
    t8 = ((char*)((ng13)));
    t21 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    goto LAB171;

LAB167:    xsi_set_current_line(343, ng0);

LAB173:    xsi_set_current_line(344, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB171;

LAB178:    xsi_set_current_line(367, ng0);

LAB189:    xsi_set_current_line(368, ng0);
    t8 = ((char*)((ng3)));
    t21 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(369, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    goto LAB188;

LAB180:    xsi_set_current_line(372, ng0);

LAB190:    xsi_set_current_line(373, ng0);
    t4 = ((char*)((ng23)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(374, ng0);
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
    t7 = (t0 + 1980U);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t43, 0, 0, 32, 0LL);
    goto LAB188;

LAB182:    xsi_set_current_line(377, ng0);

LAB191:    xsi_set_current_line(378, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(379, ng0);
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
    t7 = (t0 + 1980U);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t43, 0, 0, 32, 0LL);
    goto LAB188;

LAB184:    xsi_set_current_line(382, ng0);

LAB192:    xsi_set_current_line(383, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(384, ng0);
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
    t7 = (t0 + 1980U);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t43, 0, 0, 32, 0LL);
    goto LAB188;

LAB196:    xsi_set_current_line(399, ng0);

LAB207:    xsi_set_current_line(400, ng0);
    t8 = ((char*)((ng6)));
    t21 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 1980U);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t44, 0, 0, 32, 0LL);
    goto LAB206;

LAB198:    xsi_set_current_line(404, ng0);

LAB208:    xsi_set_current_line(405, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(406, ng0);
    t2 = (t0 + 1980U);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t44, 0, 0, 32, 0LL);
    goto LAB206;

LAB200:    xsi_set_current_line(409, ng0);

LAB209:    xsi_set_current_line(410, ng0);
    t4 = ((char*)((ng25)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(411, ng0);
    t2 = (t0 + 1980U);
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
    t22 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t22, t44, 0, 0, 32, 0LL);
    goto LAB206;

LAB202:    xsi_set_current_line(414, ng0);

LAB210:    xsi_set_current_line(415, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(416, ng0);
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
    t7 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t7, t44, 0, 0, 32, 0LL);
    goto LAB206;

LAB215:    t28 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB216;

LAB217:    xsi_set_current_line(427, ng0);

LAB220:    xsi_set_current_line(428, ng0);
    t34 = ((char*)((ng2)));
    t36 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t36, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(429, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(430, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    t2 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(431, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(432, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(433, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(434, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(435, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB219;

}


extern void work_m_00000000001455561140_1774216237_init()
{
	static char *pe[] = {(void *)Cont_63_0,(void *)Cont_64_1,(void *)Always_66_2,(void *)Always_85_3};
	xsi_register_didat("work_m_00000000001455561140_1774216237", "isim/cpu_isim_beh.exe.sim/work/m_00000000001455561140_1774216237.didat");
	xsi_register_executes(pe);
}
