/* Copyright 2023 Po-Chen Lin (@danielpclin)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include_next <board.h>

#undef STM32_HSECLK
// using 8Mhz xtal
#define STM32_HSECLK 8000000U
// using 16Mhz xtal
// #define STM32_HSECLK 16000000U


#undef STM32_HSE_BYPASS