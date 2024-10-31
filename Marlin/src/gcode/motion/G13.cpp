/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../gcode.h"
#include "../../module/motion.h"
#include "../../inc/MarlinConfig.h"

#include "../../MarlinCore.h"

void GcodeSuite::G13() {
  //set pins 9 and 89 to outputs
  SERIAL_ECHOLNPGM("touchdown");
  SET_OUTPUT(9); //PH5? https://user-images.githubusercontent.com/2480569/28038775-4872064e-65c0-11e7-9c6a-46cb7ff6c48c.png top right of expansion port 1
  SET_OUTPUT(82); //PD5?
  OUT_WRITE(9, HIGH); //goes to AIN1 on driver board
  OUT_WRITE(82, LOW); //goes to AINB on driver board
}
