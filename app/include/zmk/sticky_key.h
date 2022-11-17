/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <stdbool.h>

extern bool last_state_of_sticky_ctrl;
extern bool last_state_of_sticky_alt;
extern bool last_state_of_sticky_gui;

struct zmk_sticky_modifiers {
    bool ctrl, alt, gui;
};

bool zmk_sticky_modifier_state();