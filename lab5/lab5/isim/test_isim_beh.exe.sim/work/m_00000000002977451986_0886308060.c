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
static const char *ng0 = "//vboxsrv/virtualbox_share_files/lab5/ALU.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Cont_29_0(char *t0)
{
    char t5[8];
    char t7[8];
    char t23[8];
    char t27[8];
    char t29[8];
    char t45[8];
    char t46[8];
    char t50[8];
    char t79[8];
    char t95[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
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
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 784U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = (t2 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    memset(t23, 0, 8);
    xsi_vlog_unsigned_multiply(t23, 32, t5, 32, t7, 32);
    t24 = (t0 + 600U);
    t25 = *((char **)t24);
    t24 = (t0 + 692U);
    t26 = *((char **)t24);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t25, 32, t26, 32);
    t24 = (t0 + 784U);
    t28 = *((char **)t24);
    t24 = ((char*)((ng2)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = (t24 + 4);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t24);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB11;

LAB8:    if (t41 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t29) = 1;

LAB11:    memset(t45, 0, 8);
    xsi_vlog_unsigned_multiply(t45, 32, t27, 32, t29, 32);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t23, 32, t45, 32);
    t47 = (t0 + 600U);
    t48 = *((char **)t47);
    t47 = (t0 + 692U);
    t49 = *((char **)t47);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t47 = (t48 + 4);
    t54 = (t49 + 4);
    t55 = (t50 + 4);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB12;

LAB13:
LAB14:    t77 = (t0 + 784U);
    t78 = *((char **)t77);
    t77 = ((char*)((ng3)));
    memset(t79, 0, 8);
    t80 = (t78 + 4);
    t81 = (t77 + 4);
    t82 = *((unsigned int *)t78);
    t83 = *((unsigned int *)t77);
    t84 = (t82 ^ t83);
    t85 = *((unsigned int *)t80);
    t86 = *((unsigned int *)t81);
    t87 = (t85 ^ t86);
    t88 = (t84 | t87);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t81);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB18;

LAB15:    if (t91 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t79) = 1;

LAB18:    memset(t95, 0, 8);
    xsi_vlog_unsigned_multiply(t95, 32, t50, 32, t79, 32);
    memset(t96, 0, 8);
    xsi_vlog_unsigned_add(t96, 32, t46, 32, t95, 32);
    t97 = (t0 + 1776);
    t98 = (t97 + 32U);
    t99 = *((char **)t98);
    t100 = (t99 + 40U);
    t101 = *((char **)t100);
    memcpy(t101, t96, 8);
    xsi_driver_vfirst_trans(t97, 0, 31);
    t102 = (t0 + 1732);
    *((int *)t102) = 1;

LAB1:    return;
LAB6:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB10:    t44 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB11;

LAB12:    t61 = *((unsigned int *)t50);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t50) = (t61 | t62);
    t63 = (t48 + 4);
    t64 = (t49 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (~(t65));
    t67 = *((unsigned int *)t48);
    t68 = (t67 & t66);
    t69 = *((unsigned int *)t64);
    t70 = (~(t69));
    t71 = *((unsigned int *)t49);
    t72 = (t71 & t70);
    t73 = (~(t68));
    t74 = (~(t72));
    t75 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t74);
    goto LAB14;

LAB17:    t94 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB18;

}


extern void work_m_00000000002977451986_0886308060_init()
{
	static char *pe[] = {(void *)Cont_29_0};
	xsi_register_didat("work_m_00000000002977451986_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000002977451986_0886308060.didat");
	xsi_register_executes(pe);
}
