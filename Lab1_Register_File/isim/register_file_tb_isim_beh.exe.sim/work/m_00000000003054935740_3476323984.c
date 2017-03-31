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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Victor Espinoza/Documents/Long Beach/Victor's Projects To Upload/Spring 2015/CECS 440/Lab 1/Lab1_Register_File/register_file_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};
static int ng4[] = {32, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {31, 0};
static const char *ng7 = "rd_addr1=%h rd_data1=%h || rd_addr2=%h rd_data2=%h";



static int sp_RegDump(char *t1, char *t2)
{
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(129, ng0);
    xsi_set_current_line(129, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(129, ng0);

LAB8:    xsi_set_current_line(130, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(131, ng0);
    t18 = (t1 + 4024);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 3704);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 5);
    xsi_set_current_line(132, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 3864);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3384);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4024);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_RegWrite(char *t1, char *t2)
{
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(150, ng0);

LAB5:    xsi_set_current_line(151, ng0);
    xsi_set_current_line(151, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(151, ng0);

LAB9:    xsi_set_current_line(152, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(153, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t1 + 3864);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 5);
    t20 = (t1 + 3704);
    xsi_vlogvar_assign_value(t20, t18, 5, 0, 5);
    xsi_set_current_line(154, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3384);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(155, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3544);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4024);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

}

static int sp_RegWrite2(char *t1, char *t2)
{
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(172, ng0);

LAB5:    xsi_set_current_line(173, ng0);
    xsi_set_current_line(173, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(173, ng0);

LAB9:    xsi_set_current_line(174, ng0);
    t15 = (t2 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    xsi_wp_set_status(t17, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(175, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t1 + 3864);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 5);
    t20 = (t1 + 3704);
    xsi_vlogvar_assign_value(t20, t18, 5, 0, 5);
    xsi_set_current_line(176, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3384);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t4, 32, t7, 32);
    t9 = (t1 + 3544);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 3224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t4 = (t1 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 4024);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

}

static void Always_65_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2904);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2904);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_68_1(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5528);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5000);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB9:    t5 = (t0 + 5096);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB11:    if (t13 != 0)
        goto LAB12;

LAB7:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB8:    t14 = (t0 + 5096);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5000);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t5 = (t0 + 5192U);
    *((char **)t5) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 5000);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 3704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2344U);
    t9 = *((char **)t8);
    t8 = (t0 + 3864);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2504U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t7, 5, (char)118, t9, 32, (char)118, t11, 5, (char)118, t14, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5000);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB17:    t5 = (t0 + 5096);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB19:    if (t13 != 0)
        goto LAB20;

LAB15:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB16:    t14 = (t0 + 5096);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 5000);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5000);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB23:    t5 = (t0 + 5096);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB25:    if (t13 != 0)
        goto LAB26;

LAB21:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB22:    t14 = (t0 + 5096);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5000);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB18:;
LAB20:    t5 = (t0 + 5192U);
    *((char **)t5) = &&LAB17;
    goto LAB1;

LAB24:;
LAB26:    t5 = (t0 + 5192U);
    *((char **)t5) = &&LAB23;
    goto LAB1;

LAB27:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 5000);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 3704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2344U);
    t9 = *((char **)t8);
    t8 = (t0 + 3864);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2504U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t7, 5, (char)118, t9, 32, (char)118, t11, 5, (char)118, t14, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5576);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5592);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5000);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB33:    t5 = (t0 + 5096);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB35:    if (t13 != 0)
        goto LAB36;

LAB31:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB32:    t14 = (t0 + 5096);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5000);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5608);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t5 = (t0 + 5192U);
    *((char **)t5) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 5000);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(108, ng0);
    t5 = (t0 + 3704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2344U);
    t9 = *((char **)t8);
    t8 = (t0 + 3864);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2504U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t7, 5, (char)118, t9, 32, (char)118, t11, 5, (char)118, t14, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5000);
    t3 = (t0 + 1712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB41:    t5 = (t0 + 5096);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB43:    if (t13 != 0)
        goto LAB44;

LAB39:    t6 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB40:    t14 = (t0 + 5096);
    t15 = *((char **)t14);
    t14 = (t0 + 1712);
    t16 = (t0 + 5000);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5000);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB47:    t5 = (t0 + 5096);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB49:    if (t13 != 0)
        goto LAB50;

LAB45:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB46:    t14 = (t0 + 5096);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5000);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB42:;
LAB44:    t5 = (t0 + 5192U);
    *((char **)t5) = &&LAB41;
    goto LAB1;

LAB48:;
LAB50:    t5 = (t0 + 5192U);
    *((char **)t5) = &&LAB47;
    goto LAB1;

LAB51:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 5000);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(116, ng0);
    t5 = (t0 + 3704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2344U);
    t9 = *((char **)t8);
    t8 = (t0 + 3864);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2504U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t7, 5, (char)118, t9, 32, (char)118, t11, 5, (char)118, t14, 32);
    xsi_set_current_line(120, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003054935740_3476323984_init()
{
	static char *pe[] = {(void *)Always_65_0,(void *)Initial_68_1};
	static char *se[] = {(void *)sp_RegDump,(void *)sp_RegWrite,(void *)sp_RegWrite2};
	xsi_register_didat("work_m_00000000003054935740_3476323984", "isim/register_file_tb_isim_beh.exe.sim/work/m_00000000003054935740_3476323984.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
