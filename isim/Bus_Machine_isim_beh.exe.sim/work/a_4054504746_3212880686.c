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
static const char *ng0 = "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/Display_LED.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_4054504746_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 - 1);
    t11 = (t10 - 9);
    t12 = (t11 * -1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t4 = (t0 + 4080);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_delta(t4, t14, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 4144);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t10;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 10);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t10 = (t9 - 9);
    t12 = (t10 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, t9);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7090);
    t5 = (t0 + 4208);
    t8 = (t5 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);

LAB12:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 - 9);
    t12 = (t10 * -1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t2 = (t0 + 4080);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, t14, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4144);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(75, ng0);
    t8 = (t0 + 7087);
    t16 = (t0 + 4208);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 3U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB12;

}

static void work_a_4054504746_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 7093);
    *((int *)t2) = 9;
    t3 = (t0 + 7097);
    *((int *)t3) = 0;
    t4 = 9;
    t5 = 0;

LAB4:    if (t4 >= t5)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(89, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 7093);
    t8 = *((int *)t6);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t7 + t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t14 = *((unsigned char *)t3);
    t2 = (t0 + 7093);
    t8 = *((int *)t2);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1 * t10);
    t12 = (0U + t11);
    t6 = (t0 + 4336);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t14;
    xsi_driver_first_trans_delta(t6, t12, 1, 0LL);

LAB6:    t2 = (t0 + 7093);
    t4 = *((int *)t2);
    t3 = (t0 + 7097);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB11:    t8 = (t4 + -1);
    t4 = t8;
    t6 = (t0 + 7093);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(90, ng0);
    t16 = (t0 + 1992U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t19 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t18);
    t16 = (t0 + 4272);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t19;
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB1:    return;
}


extern void work_a_4054504746_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4054504746_3212880686_p_0,(void *)work_a_4054504746_3212880686_p_1};
	xsi_register_didat("work_a_4054504746_3212880686", "isim/Bus_Machine_isim_beh.exe.sim/work/a_4054504746_3212880686.didat");
	xsi_register_executes(pe);
}
