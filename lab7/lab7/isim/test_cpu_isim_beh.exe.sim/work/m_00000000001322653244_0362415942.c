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
static const char *ng0 = "//vboxsrv/virtualbox_share_files/lab7/data_ram.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {31, 0};
static int ng4[] = {24, 0};
static int ng5[] = {23, 0};
static int ng6[] = {16, 0};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {7, 0};
static int ng10[] = {0, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t37[8];
    char t59[8];
    char t70[8];
    char t71[8];
    char t78[8];
    char t88[8];
    char t89[8];
    char t90[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    int t98;
    char *t99;
    unsigned int t100;
    int t101;
    int t102;
    char *t103;
    unsigned int t104;
    int t105;
    int t106;
    char *t107;
    unsigned int t108;
    int t109;
    int t110;
    char *t111;
    unsigned int t112;
    int t113;
    int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 1932);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 784U);
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(41, ng0);

LAB21:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 968U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 3);
    t33 = (t32 & 1);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 3);
    t36 = (t35 & 1);
    *((unsigned int *)t21) = t36;
    t29 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t30 + 4);
    t39 = (t29 + 4);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t29);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB25;

LAB22:    if (t49 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t37) = 1;

LAB25:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB35;

LAB32:    if (t26 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t30) = 1;

LAB35:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB45;

LAB42:    if (t26 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t30) = 1;

LAB45:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB55;

LAB52:    if (t26 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t30) = 1;

LAB55:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB20;

LAB24:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(43, ng0);

LAB29:    xsi_set_current_line(44, ng0);
    t60 = (t0 + 1060U);
    t61 = *((char **)t60);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t62 = (t61 + 4);
    t63 = *((unsigned int *)t61);
    t64 = (t63 >> 24);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 24);
    *((unsigned int *)t60) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 255U);
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 255U);
    t69 = (t0 + 1380);
    t72 = (t0 + 1380);
    t73 = (t72 + 44U);
    t74 = *((char **)t73);
    t75 = (t0 + 1380);
    t76 = (t75 + 40U);
    t77 = *((char **)t76);
    t79 = (t0 + 876U);
    t80 = *((char **)t79);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t81 = (t80 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (t82 >> 2);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 2);
    *((unsigned int *)t79) = t85;
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 131071U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 & 131071U);
    xsi_vlog_generic_convert_array_indices(t70, t71, t74, t77, 2, 1, t78, 17, 2);
    t91 = (t0 + 1380);
    t92 = (t91 + 44U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng3)));
    t95 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t88, t89, t90, ((int*)(t93)), 2, t94, 32, 1, t95, 32, 1);
    t96 = (t70 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (!(t97));
    t99 = (t71 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (!(t100));
    t102 = (t98 && t101);
    t103 = (t88 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (!(t104));
    t106 = (t102 && t105);
    t107 = (t89 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (!(t108));
    t110 = (t106 && t109);
    t111 = (t90 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (!(t112));
    t114 = (t110 && t113);
    if (t114 == 1)
        goto LAB30;

LAB31:    goto LAB28;

LAB30:    t115 = *((unsigned int *)t90);
    t116 = (t115 + 0);
    t117 = *((unsigned int *)t71);
    t118 = *((unsigned int *)t89);
    t119 = (t117 + t118);
    t120 = *((unsigned int *)t88);
    t121 = *((unsigned int *)t89);
    t122 = (t120 - t121);
    t123 = (t122 + 1);
    xsi_vlogvar_wait_assign_value(t69, t59, t116, t119, t123, 0LL);
    goto LAB31;

LAB34:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(47, ng0);

LAB39:    xsi_set_current_line(48, ng0);
    t28 = (t0 + 1060U);
    t29 = *((char **)t28);
    memset(t37, 0, 8);
    t28 = (t37 + 4);
    t38 = (t29 + 4);
    t40 = *((unsigned int *)t29);
    t41 = (t40 >> 16);
    *((unsigned int *)t37) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 16);
    *((unsigned int *)t28) = t43;
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 255U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 255U);
    t39 = (t0 + 1380);
    t52 = (t0 + 1380);
    t53 = (t52 + 44U);
    t60 = *((char **)t53);
    t61 = (t0 + 1380);
    t62 = (t61 + 40U);
    t69 = *((char **)t62);
    t72 = (t0 + 876U);
    t73 = *((char **)t72);
    memset(t71, 0, 8);
    t72 = (t71 + 4);
    t74 = (t73 + 4);
    t46 = *((unsigned int *)t73);
    t47 = (t46 >> 2);
    *((unsigned int *)t71) = t47;
    t48 = *((unsigned int *)t74);
    t49 = (t48 >> 2);
    *((unsigned int *)t72) = t49;
    t50 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t50 & 131071U);
    t51 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t51 & 131071U);
    xsi_vlog_generic_convert_array_indices(t59, t70, t60, t69, 2, 1, t71, 17, 2);
    t75 = (t0 + 1380);
    t76 = (t75 + 44U);
    t77 = *((char **)t76);
    t79 = ((char*)((ng5)));
    t80 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t78, t88, t89, ((int*)(t77)), 2, t79, 32, 1, t80, 32, 1);
    t81 = (t59 + 4);
    t54 = *((unsigned int *)t81);
    t98 = (!(t54));
    t91 = (t70 + 4);
    t55 = *((unsigned int *)t91);
    t101 = (!(t55));
    t102 = (t98 && t101);
    t92 = (t78 + 4);
    t56 = *((unsigned int *)t92);
    t105 = (!(t56));
    t106 = (t102 && t105);
    t93 = (t88 + 4);
    t57 = *((unsigned int *)t93);
    t109 = (!(t57));
    t110 = (t106 && t109);
    t94 = (t89 + 4);
    t58 = *((unsigned int *)t94);
    t113 = (!(t58));
    t114 = (t110 && t113);
    if (t114 == 1)
        goto LAB40;

LAB41:    goto LAB38;

LAB40:    t63 = *((unsigned int *)t89);
    t116 = (t63 + 0);
    t64 = *((unsigned int *)t70);
    t65 = *((unsigned int *)t88);
    t119 = (t64 + t65);
    t66 = *((unsigned int *)t78);
    t67 = *((unsigned int *)t88);
    t122 = (t66 - t67);
    t123 = (t122 + 1);
    xsi_vlogvar_wait_assign_value(t39, t37, t116, t119, t123, 0LL);
    goto LAB41;

LAB44:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(51, ng0);

LAB49:    xsi_set_current_line(52, ng0);
    t28 = (t0 + 1060U);
    t29 = *((char **)t28);
    memset(t37, 0, 8);
    t28 = (t37 + 4);
    t38 = (t29 + 4);
    t40 = *((unsigned int *)t29);
    t41 = (t40 >> 8);
    *((unsigned int *)t37) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 8);
    *((unsigned int *)t28) = t43;
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 255U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 255U);
    t39 = (t0 + 1380);
    t52 = (t0 + 1380);
    t53 = (t52 + 44U);
    t60 = *((char **)t53);
    t61 = (t0 + 1380);
    t62 = (t61 + 40U);
    t69 = *((char **)t62);
    t72 = (t0 + 876U);
    t73 = *((char **)t72);
    memset(t71, 0, 8);
    t72 = (t71 + 4);
    t74 = (t73 + 4);
    t46 = *((unsigned int *)t73);
    t47 = (t46 >> 2);
    *((unsigned int *)t71) = t47;
    t48 = *((unsigned int *)t74);
    t49 = (t48 >> 2);
    *((unsigned int *)t72) = t49;
    t50 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t50 & 131071U);
    t51 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t51 & 131071U);
    xsi_vlog_generic_convert_array_indices(t59, t70, t60, t69, 2, 1, t71, 17, 2);
    t75 = (t0 + 1380);
    t76 = (t75 + 44U);
    t77 = *((char **)t76);
    t79 = ((char*)((ng7)));
    t80 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t78, t88, t89, ((int*)(t77)), 2, t79, 32, 1, t80, 32, 1);
    t81 = (t59 + 4);
    t54 = *((unsigned int *)t81);
    t98 = (!(t54));
    t91 = (t70 + 4);
    t55 = *((unsigned int *)t91);
    t101 = (!(t55));
    t102 = (t98 && t101);
    t92 = (t78 + 4);
    t56 = *((unsigned int *)t92);
    t105 = (!(t56));
    t106 = (t102 && t105);
    t93 = (t88 + 4);
    t57 = *((unsigned int *)t93);
    t109 = (!(t57));
    t110 = (t106 && t109);
    t94 = (t89 + 4);
    t58 = *((unsigned int *)t94);
    t113 = (!(t58));
    t114 = (t110 && t113);
    if (t114 == 1)
        goto LAB50;

LAB51:    goto LAB48;

LAB50:    t63 = *((unsigned int *)t89);
    t116 = (t63 + 0);
    t64 = *((unsigned int *)t70);
    t65 = *((unsigned int *)t88);
    t119 = (t64 + t65);
    t66 = *((unsigned int *)t78);
    t67 = *((unsigned int *)t88);
    t122 = (t66 - t67);
    t123 = (t122 + 1);
    xsi_vlogvar_wait_assign_value(t39, t37, t116, t119, t123, 0LL);
    goto LAB51;

LAB54:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(55, ng0);

LAB59:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 1060U);
    t29 = *((char **)t28);
    memset(t37, 0, 8);
    t28 = (t37 + 4);
    t38 = (t29 + 4);
    t40 = *((unsigned int *)t29);
    t41 = (t40 >> 0);
    *((unsigned int *)t37) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    *((unsigned int *)t28) = t43;
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 255U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 255U);
    t39 = (t0 + 1380);
    t52 = (t0 + 1380);
    t53 = (t52 + 44U);
    t60 = *((char **)t53);
    t61 = (t0 + 1380);
    t62 = (t61 + 40U);
    t69 = *((char **)t62);
    t72 = (t0 + 876U);
    t73 = *((char **)t72);
    memset(t71, 0, 8);
    t72 = (t71 + 4);
    t74 = (t73 + 4);
    t46 = *((unsigned int *)t73);
    t47 = (t46 >> 2);
    *((unsigned int *)t71) = t47;
    t48 = *((unsigned int *)t74);
    t49 = (t48 >> 2);
    *((unsigned int *)t72) = t49;
    t50 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t50 & 131071U);
    t51 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t51 & 131071U);
    xsi_vlog_generic_convert_array_indices(t59, t70, t60, t69, 2, 1, t71, 17, 2);
    t75 = (t0 + 1380);
    t76 = (t75 + 44U);
    t77 = *((char **)t76);
    t79 = ((char*)((ng9)));
    t80 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t78, t88, t89, ((int*)(t77)), 2, t79, 32, 1, t80, 32, 1);
    t81 = (t59 + 4);
    t54 = *((unsigned int *)t81);
    t98 = (!(t54));
    t91 = (t70 + 4);
    t55 = *((unsigned int *)t91);
    t101 = (!(t55));
    t102 = (t98 && t101);
    t92 = (t78 + 4);
    t56 = *((unsigned int *)t92);
    t105 = (!(t56));
    t106 = (t102 && t105);
    t93 = (t88 + 4);
    t57 = *((unsigned int *)t93);
    t109 = (!(t57));
    t110 = (t106 && t109);
    t94 = (t89 + 4);
    t58 = *((unsigned int *)t94);
    t113 = (!(t58));
    t114 = (t110 && t113);
    if (t114 == 1)
        goto LAB60;

LAB61:    goto LAB58;

LAB60:    t63 = *((unsigned int *)t89);
    t116 = (t63 + 0);
    t64 = *((unsigned int *)t70);
    t65 = *((unsigned int *)t88);
    t119 = (t64 + t65);
    t66 = *((unsigned int *)t78);
    t67 = *((unsigned int *)t88);
    t122 = (t66 - t67);
    t123 = (t122 + 1);
    xsi_vlogvar_wait_assign_value(t39, t37, t116, t119, t123, 0LL);
    goto LAB61;

}

static void Always_61_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t36[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2252);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(72, ng0);

LAB22:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(68, ng0);

LAB21:    xsi_set_current_line(69, ng0);
    t21 = (t0 + 1380);
    t22 = (t21 + 36U);
    t28 = *((char **)t22);
    t29 = (t0 + 1380);
    t31 = (t29 + 44U);
    t32 = *((char **)t31);
    t33 = (t0 + 1380);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    t37 = (t0 + 876U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 2);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 131071U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 131071U);
    xsi_vlog_generic_get_array_select_value(t30, 32, t28, t32, t35, 2, 1, t36, 17, 2);
    t46 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t46, t30, 0, 0, 32, 0LL);
    goto LAB20;

}


extern void work_m_00000000001322653244_0362415942_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_61_1};
	xsi_register_didat("work_m_00000000001322653244_0362415942", "isim/test_cpu_isim_beh.exe.sim/work/m_00000000001322653244_0362415942.didat");
	xsi_register_executes(pe);
}
