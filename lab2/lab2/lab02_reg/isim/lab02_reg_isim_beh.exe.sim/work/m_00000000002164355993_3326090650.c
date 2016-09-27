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
static const char *ng0 = "//VBOXSVR/virtual_share_files/lab2/lab02_reg/lab02_reg.v";
static int ng1[] = {16, 0};
static int ng2[] = {4, 0};
static int ng3[] = {8, 0};
static int ng4[] = {3, 0};
static int ng5[] = {2, 0};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {32, 0};
static unsigned int ng10[] = {0U, 0U};



static void Always_41_0(char *t0)
{
    char t7[8];
    char t11[8];
    char t15[8];
    char t19[8];
    char t20[8];
    char t24[8];
    char t28[8];
    char t29[8];
    char t33[8];
    char t37[8];
    char t38[8];
    char t41[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2940);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    t5 = (t0 + 760U);
    t8 = (t5 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t9, 2, t10, 32, 1);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t4, 32, t7, 32);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 784U);
    t14 = *((char **)t13);
    t13 = (t0 + 760U);
    t16 = (t13 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t14, t17, 2, t18, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t12, 32, t15, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t11, 32, t19, 32);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 784U);
    t23 = *((char **)t22);
    t22 = (t0 + 760U);
    t25 = (t22 + 44U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t24, 32, t23, t26, 2, t27, 32, 1);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_multiply(t28, 32, t21, 32, t24, 32);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t20, 32, t28, 32);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 784U);
    t32 = *((char **)t31);
    t31 = (t0 + 760U);
    t34 = (t31 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t32, t35, 2, t36, 32, 1);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_multiply(t37, 32, t30, 32, t33, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t29, 32, t37, 32);
    t39 = (t0 + 784U);
    t40 = *((char **)t39);
    t39 = (t0 + 760U);
    t42 = (t39 + 44U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t41, 32, t40, t43, 2, t44, 32, 1);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_add(t45, 32, t38, 32, t41, 32);
    t46 = (t0 + 1656);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 876U);
    t4 = *((char **)t3);
    t3 = (t0 + 852U);
    t5 = (t3 + 44U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t6, 2, t8, 32, 1);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t2, 32, t7, 32);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 876U);
    t12 = *((char **)t10);
    t10 = (t0 + 852U);
    t13 = (t10 + 44U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t12, t14, 2, t16, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t9, 32, t15, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t11, 32, t19, 32);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 876U);
    t21 = *((char **)t18);
    t18 = (t0 + 852U);
    t22 = (t18 + 44U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t24, 32, t21, t23, 2, t25, 32, 1);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_multiply(t28, 32, t17, 32, t24, 32);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t20, 32, t28, 32);
    t26 = ((char*)((ng5)));
    t27 = (t0 + 876U);
    t30 = *((char **)t27);
    t27 = (t0 + 852U);
    t31 = (t27 + 44U);
    t32 = *((char **)t31);
    t34 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t30, t32, 2, t34, 32, 1);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_multiply(t37, 32, t26, 32, t33, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t29, 32, t37, 32);
    t35 = (t0 + 876U);
    t36 = *((char **)t35);
    t35 = (t0 + 852U);
    t39 = (t35 + 44U);
    t40 = *((char **)t39);
    t42 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t41, 32, t36, t40, 2, t42, 32, 1);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_add(t45, 32, t38, 32, t41, 32);
    t43 = (t0 + 1748);
    xsi_vlogvar_assign_value(t43, t45, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 944U);
    t5 = (t3 + 44U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t4, t6, 2, t8, 32, 1);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t2, 32, t7, 32);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 968U);
    t12 = *((char **)t10);
    t10 = (t0 + 944U);
    t13 = (t10 + 44U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t12, t14, 2, t16, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t9, 32, t15, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t11, 32, t19, 32);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 968U);
    t21 = *((char **)t18);
    t18 = (t0 + 944U);
    t22 = (t18 + 44U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t24, 32, t21, t23, 2, t25, 32, 1);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_multiply(t28, 32, t17, 32, t24, 32);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t20, 32, t28, 32);
    t26 = ((char*)((ng5)));
    t27 = (t0 + 968U);
    t30 = *((char **)t27);
    t27 = (t0 + 944U);
    t31 = (t27 + 44U);
    t32 = *((char **)t31);
    t34 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t30, t32, 2, t34, 32, 1);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_multiply(t37, 32, t26, 32, t33, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t29, 32, t37, 32);
    t35 = (t0 + 968U);
    t36 = *((char **)t35);
    t35 = (t0 + 944U);
    t39 = (t35 + 44U);
    t40 = *((char **)t39);
    t42 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t41, 32, t36, t40, 2, t42, 32, 1);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_add(t45, 32, t38, 32, t41, 32);
    t43 = (t0 + 1840);
    xsi_vlogvar_assign_value(t43, t45, 0, 0, 32);
    goto LAB2;

}

static void Always_47_1(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2948);
    *((int *)t2) = 1;
    t3 = (t0 + 2628);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(50, ng0);

LAB15:    xsi_set_current_line(51, ng0);
    t29 = ((char*)((ng8)));
    t30 = (t0 + 1564);
    t33 = (t0 + 1564);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t0 + 1564);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t31, t32, t35, t38, 2, 1, t39, 32, 1);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t32 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1564);
    t5 = (t0 + 1564);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = (t0 + 1564);
    t14 = (t13 + 40U);
    t23 = *((char **)t14);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t31, t12, t23, 2, 1, t29, 32, 1);
    t30 = (t4 + 4);
    t7 = *((unsigned int *)t30);
    t42 = (!(t7));
    t33 = (t31 + 4);
    t8 = *((unsigned int *)t33);
    t45 = (!(t8));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:    goto LAB14;

LAB16:    t47 = *((unsigned int *)t31);
    t48 = *((unsigned int *)t32);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, *((unsigned int *)t32), t50, 0LL);
    goto LAB17;

LAB18:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t31);
    t49 = (t9 - t10);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t31), t50, 0LL);
    goto LAB19;

LAB21:    xsi_set_current_line(54, ng0);
    t13 = ((char*)((ng10)));
    t14 = (t0 + 1564);
    t23 = (t0 + 1564);
    t29 = (t23 + 44U);
    t30 = *((char **)t29);
    t33 = (t0 + 1564);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    t36 = (t0 + 1932);
    t37 = (t36 + 36U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t31, t32, t30, t35, 2, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t15 = *((unsigned int *)t39);
    t42 = (!(t15));
    t40 = (t32 + 4);
    t16 = *((unsigned int *)t40);
    t45 = (!(t16));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB20;

LAB23:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t49 = (t17 - t18);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t32), t50, 0LL);
    goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 1060U);
    t6 = *((char **)t5);
    t5 = (t0 + 1564);
    t12 = (t0 + 1564);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t23 = (t0 + 1564);
    t29 = (t23 + 40U);
    t30 = *((char **)t29);
    t33 = (t0 + 1840);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t4, t31, t14, t30, 2, 1, t35, 32, 1);
    t36 = (t4 + 4);
    t15 = *((unsigned int *)t36);
    t42 = (!(t15));
    t37 = (t31 + 4);
    t16 = *((unsigned int *)t37);
    t45 = (!(t16));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB28:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t31);
    t49 = (t17 - t18);
    t50 = (t49 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t31), t50, 0LL);
    goto LAB29;

}

static void Always_61_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2956);
    *((int *)t2) = 1;
    t3 = (t0 + 2772);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 1564);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 1564);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = (t0 + 1656);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t17, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t5 + 44U);
    t8 = *((char **)t6);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 1748);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t15, t7, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000002164355993_3326090650_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_47_1,(void *)Always_61_2};
	xsi_register_didat("work_m_00000000002164355993_3326090650", "isim/lab02_reg_isim_beh.exe.sim/work/m_00000000002164355993_3326090650.didat");
	xsi_register_executes(pe);
}
