/*
 * Tux Droid - Battery
 * Copyright (C) 2008 C2ME Sa <Acness : remi.jocaille@c2me.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

/**
 * \file tux_battery.c
 * \brief Battery level header.
 * \author remi.jocaille@c2me.be
 * \ingroup power
 */

#ifndef _TUX_BATTERY_H_
#define _TUX_BATTERY_H_

/**
 * \name Battery level thresholds in mV.
 * @{
 */
/** Battery level threshold FULL */
#define TUX_BATTERY_FULL_VALUE                  6000
/** Battery level threshold HIGH */
#define TUX_BATTERY_HIGH_VALUE                  5400
/** Battery level threshold LOW */
#define TUX_BATTERY_LOW_VALUE                   4800
/** Battery level threshold EMPTY */
#define TUX_BATTERY_EMPTY_VALUE                 0000
/** @} */

extern void tux_battery_update_level(void);

#endif /* _TUX_BATTERY_H_ */
