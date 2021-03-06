/*
 * (C) Copyright 2013
 * Texas Instruments Incorporated.
 * Sricharan R	  <r.sricharan@ti.com>
 *
 * Configuration settings for the TI EVM5430 board.
 * See omap5_common.h for omap5 common settings.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_OMAP5_EVM_H
#define __CONFIG_OMAP5_EVM_H

#include <configs/omap5_common.h>

#define CONFIG_OMAP5430	/* which is in a 5430 */
#define CONFIG_5430EVM	/* working with EVM */

/* TWL6035 */
#ifndef CONFIG_SPL_BUILD
#define CONFIG_TWL6035_POWER
#endif

#define CONFIG_SYS_PROMPT		"OMAP5430 EVM # "

#endif /* __CONFIG_OMAP5_EVM_H */
