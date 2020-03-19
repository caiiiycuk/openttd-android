/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file settings_gui.h Functions for setting GUIs. */

#ifndef SETTING_GUI_H
#define SETTING_GUI_H

#include "gfx_type.h"
#include "widgets/dropdown_type.h"

extern int SETTING_BUTTON_WIDTH; ///< Width of setting buttons
extern int SETTING_BUTTON_HEIGHT; ///< Height of setting buttons

void DrawArrowButtons(int x, int y, Colours button_colour, byte state, bool clickable_left, bool clickable_right);
void DrawDropDownButton(int x, int y, Colours button_colour, bool state, bool clickable);
void DrawBoolButton(int x, int y, bool state, bool clickable);

DropDownList BuildMusicSetDropDownList(int *selected_index);

/* Actually implemented in music_gui.cpp */
void ChangeMusicSet(int index);

#endif /* SETTING_GUI_H */

