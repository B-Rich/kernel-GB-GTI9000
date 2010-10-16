/* linux/arch/arm/plat-s5pc1xx/include/plat/gpio-bank-f3.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 * 	Ben Dooks <ben@simtec.co.uk>
 * 	http://armlinux.simtec.co.uk/
 *
 * GPIO Bank F3 register and configuration definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#define S5PV210_GPF3CON			(S5PV210_GPF3_BASE + 0x00)
#define S5PV210_GPF3DAT			(S5PV210_GPF3_BASE + 0x04)
#define S5PV210_GPF3PUD			(S5PV210_GPF3_BASE + 0x08)
#define S5PV210_GPF3DRV			(S5PV210_GPF3_BASE + 0x0c)
#define S5PV210_GPF3CONPDN		(S5PV210_GPF3_BASE + 0x10)
#define S5PV210_GPF3PUDPDN		(S5PV210_GPF3_BASE + 0x14)

#define S5PV210_GPF3_CONMASK(__gpio)	(0xf << ((__gpio) * 4))
#define S5PV210_GPF3_INPUT(__gpio)	(0x0 << ((__gpio) * 4))
#define S5PV210_GPF3_OUTPUT(__gpio)	(0x1 << ((__gpio) * 4))

#define S5PV210_GPF3_0_LCD_VD_20	(0x2 << 0)
#define S5PV210_GPF3_0_SYS_VD_20	(0x3 << 0)
#define S5PV210_GPF3_0_GPIO_INT10_0	(0xf << 0)
#define S5PV210_GPF3_0_GPIO_INT13_0	(0xf << 0)

#define S5PV210_GPF3_1_LCD_VD_21	(0x2 << 4)
#define S5PV210_GPF3_1_SYS_VD_21	(0x3 << 4)
#define S5PV210_GPF3_1_GPIO_INT10_1	(0xf << 4)
#define S5PV210_GPF3_1_GPIO_INT13_1	(0xf << 4)

#define S5PV210_GPF3_2_LCD_VD_22	(0x2 << 8)
#define S5PV210_GPF3_2_VSYNC_LDI	(0x3 << 8)
#define S5PV210_GPF3_2_SYS_VD_22	(0x3 << 8)
#define S5PV210_GPF3_2_V656_CLK		(0x4 << 8)
#define S5PV210_GPF3_2_GPIO_INT10_2	(0xf << 8)
#define S5PV210_GPF3_2_GPIO_INT13_2	(0xf << 8)

#define S5PV210_GPF3_3_LCD_VD_23	(0x2 << 12)
#define S5PV210_GPF3_3_SYS_OE		(0x3 << 12)
#define S5PV210_GPF3_3_SYS_VD_22	(0x3 << 12)
#define S5PV210_GPF3_3_VEN_FIELD	(0x4 << 12)
#define S5PV210_GPF3_3_GPIO_INT10_3	(0xf << 12)
#define S5PV210_GPF3_3_GPIO_INT13_3	(0xf << 12)

#define S5PV210_GPF3_4_VSYNC_LDI	(0x2 << 16)
#define S5PV210_GPF3_4_GPIO_INT13_4	(0xf << 16)

#define S5PV210_GPF3_5_SYS_OE		(0x2 << 20)
#define S5PV210_GPF3_5_VEN_FIELD	(0x4 << 20)
#define S5PV210_GPF3_4_GPIO_INT13_5	(0xf << 20)
