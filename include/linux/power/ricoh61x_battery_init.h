/*
 * include/linux/power/ricoh61x_battery_init.h
 *
 * Battery initial parameter for RICOH R5T618/619 power management chip.
 *
 * Copyright (C) 2012-2013 RICOH COMPANY,LTD
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef __LINUX_POWER_RICOH61X_BATTERY_INIT_H
#define __LINUX_POWER_RICOH61X_BATTERY_INIT_H


uint8_t battery_init_para[][32] = {
    {
  0x0B, 0x7D, 0x0B, 0xCE, 0x0B, 0xF4, 0x0C, 0x0B, 
  0x0C, 0x25, 0x0C, 0x43, 0x0C, 0x67, 0x0C, 0x97, 
  0x0C, 0xC7, 0x0C, 0xF3, 0x0D, 0x50, 0x13, 0x3D, 
  0x00, 0x4A, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
    }
};

#endif

/*
<Other Parameter>
nominal_capacity=5000
cut-off_v=3400
thermistor_b=3435
board_impe=0
bat_impe=0.1767
load_c=992
available_c=4926
battery_v=3591
MakingMode=Normal
ChargeV=4.20V
LoadMode=Resistor
 */
