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

#include "quantum.h"

void board_init(void) {
    setPinInput(B9);
    setPinInput(B10);
}

led_config_t g_led_config = { {
	{ 71       , NO_LED     , 72         , 73         , 74         , 75         , 76         , 77         , 78         , 79         , 80         , 81         , 82         , 83         , 84         , 85         , 86        },
	{ 70       , 69         , 68         , 67         , 66         , 65         , 64         , 63         , 62         , 61         , 60         , 59         , 58         , 57         , 56         , 55         , 54        },
	{ 37       , 38         , 39         , 40         , 41         , 42         , 43         , 44         , 45         , 46         , 47         , 48         , 49         , 50         , 51         , 52         , 53        },
	{ 36       , 35         , 34         , 33         , 32         , 31         , 30         , 29         , 28         , 27         , 26         , 25         , NO_LED     , 24         , NO_LED     , NO_LED     , NO_LED    },
	{ 11       , NO_LED     , 12         , 13         , 14         , 15         , 16         , 17         , 18         , 19         , 20         , 21         , NO_LED     , 22         , NO_LED     , 23         , NO_LED    },
	{ 10       , 9          , 8          , NO_LED     , NO_LED     , 7          , NO_LED     , NO_LED     , NO_LED     , 6          , 5          , 4          , NO_LED     , 3          , 2          , 1          , 0         }
},{
	{ 224, 225}, { 210, 225}, { 196, 225}, { 168, 225}, { 154, 225}, { 140, 225}, { 126, 225}, {  84, 225}, {  28, 225}, {  14, 225}, {   0, 225},                                                                               //  0 - 10
	{  14, 180}, {  28, 180}, {  42, 180}, {  56, 180}, {  70, 180}, {  84, 180}, {  98, 180}, { 112, 180}, { 126, 180}, { 140, 180}, { 154, 180}, { 168, 180}, { 192, 180},                                                     // 11 - 23
	{ 168, 135}, { 154, 135}, { 140, 135}, { 126, 135}, { 112, 135}, {  98, 135}, {  84, 135}, {  70, 135}, {  56, 135}, {  42, 135}, {  28, 135}, {  14, 135}, {   0, 135},                                                     // 24 - 36
	{   0,  90}, {  14,  90}, {  28,  90}, {  42,  90}, {  56,  90}, {  70,  90}, {  84,  90}, {  98,  90}, { 112,  90}, { 126,  90}, { 140,  90}, { 154,  90}, { 168,  90}, { 182,  90}, { 196,  90}, { 210,  90}, { 224,  90}, // 37 - 53
	{ 224,  45}, { 210,  45}, { 196,  45}, { 182,  45}, { 168,  45}, { 154,  45}, { 140,  45}, { 126,  45}, { 112,  45}, {  98,  45}, {  84,  45}, {  70,  45}, {  56,  45}, {  42,  45}, {  28,  45}, {  14,  45}, {   0,  45}, // 54 - 70
	{   0,   0}, {  28,   0}, {  42,   0}, {  56,   0}, {  70,   0}, {  84,   0}, {  98,   0}, { 112,   0}, { 126,   0}, { 140,   0}, { 154,   0}, { 168,   0}, { 182,   0}, { 196,   0}, { 210,   0}, { 224,   0}               // 71 - 86
}, {
	1          , 1          , 1          , 1          , 1          , 1          , 1          , 4          , 1          , 1          , 1          ,                                                                               //  0 - 10
	1          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 1          , 1          ,                                                     // 11 - 23
	1          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 8          ,                                                     // 24 - 36
	1          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 1          , 1          , 1          , // 37 - 53
	1          , 1          , 1          , 1          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , // 54 - 70
	1          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 4          , 1          , 1          , 1                         // 71 - 86
} };
