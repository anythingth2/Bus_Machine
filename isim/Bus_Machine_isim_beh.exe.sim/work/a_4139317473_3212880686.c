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
static const char *ng0 = "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/Bus_Machine.vhd";



static void work_a_4139317473_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 4152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 10728);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4139317473_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    t1 = (t0 + 11064);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10744);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4139317473_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    t3 = (3 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 10760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t9 = (t0 + 4632U);
    t10 = *((char **)t9);
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = *((unsigned char *)t9);
    t16 = (t15 == (unsigned char)2);
    if (t16 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    goto LAB6;

LAB8:    goto LAB3;

}

static void work_a_4139317473_3212880686_p_3(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (0U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 0U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10776);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16704);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16708);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5368U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 5368U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_4(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (1U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 1U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10792);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16712);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16716);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5488U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 5488U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_5(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (2U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 2U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10808);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16720);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16724);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5608U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 5608U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_6(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (3U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 3U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10824);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16728);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16732);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5728U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 5728U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_7(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (4U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 4U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10840);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16736);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16740);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5848U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 5848U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_8(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (5U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 5U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10856);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16744);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16748);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5968U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 5968U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_9(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (6U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 6U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10872);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16752);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16756);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 6088U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 6088U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_10(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (7U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 7U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10888);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16760);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16764);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 6208U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 6208U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_11(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (8U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 8U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10904);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16768);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16772);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 6328U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 6328U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}

static void work_a_4139317473_3212880686_p_12(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    xsi_set_current_line(90, ng0);
    t2 = (9U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 3632U);
    t4 = xsi_signal_has_event_indexed(t3, 9U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 10920);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t16 = (t0 + 4632U);
    t17 = *((char **)t16);
    t16 = (t0 + 16776);
    t19 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t19 = 0;

LAB16:    if (t19 == 1)
        goto LAB11;

LAB12:    t24 = (t0 + 4632U);
    t25 = *((char **)t24);
    t24 = (t0 + 16780);
    t27 = 1;
    if (4U == 4U)
        goto LAB23;

LAB24:    t27 = 0;

LAB25:    if (t27 == 1)
        goto LAB20;

LAB21:    t23 = (unsigned char)0;

LAB22:    t15 = t23;

LAB13:    if (t15 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t5 = (t0 + 3672U);
    t6 = *((char **)t5);
    t5 = (t0 + 6448U);
    t7 = *((char **)t5);
    t8 = *((int *)t7);
    t9 = (t8 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t5 = (t6 + t12);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    goto LAB9;

LAB11:    t15 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = 0;

LAB17:    if (t20 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t21 = (t17 + t20);
    t22 = (t16 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB15;

LAB19:    t20 = (t20 + 1);
    goto LAB17;

LAB20:    t31 = (t0 + 4792U);
    t32 = *((char **)t31);
    t31 = (t0 + 6448U);
    t33 = *((char **)t31);
    t34 = *((int *)t33);
    t35 = (t34 - 9);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t31 = (t32 + t38);
    t39 = *((unsigned char *)t31);
    t40 = (t39 == (unsigned char)2);
    t23 = t40;
    goto LAB22;

LAB23:    t28 = 0;

LAB26:    if (t28 < 4U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t29 = (t25 + t28);
    t30 = (t24 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB24;

LAB28:    t28 = (t28 + 1);
    goto LAB26;

}


extern void work_a_4139317473_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4139317473_3212880686_p_0,(void *)work_a_4139317473_3212880686_p_1,(void *)work_a_4139317473_3212880686_p_2,(void *)work_a_4139317473_3212880686_p_3,(void *)work_a_4139317473_3212880686_p_4,(void *)work_a_4139317473_3212880686_p_5,(void *)work_a_4139317473_3212880686_p_6,(void *)work_a_4139317473_3212880686_p_7,(void *)work_a_4139317473_3212880686_p_8,(void *)work_a_4139317473_3212880686_p_9,(void *)work_a_4139317473_3212880686_p_10,(void *)work_a_4139317473_3212880686_p_11,(void *)work_a_4139317473_3212880686_p_12};
	xsi_register_didat("work_a_4139317473_3212880686", "isim/Bus_Machine_isim_beh.exe.sim/work/a_4139317473_3212880686.didat");
	xsi_register_executes(pe);
}
