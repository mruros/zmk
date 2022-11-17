#include <zmk/sticky_key.h>

#include <stdbool.h>
#include <kernel.h>

struct zmk_sticky_modifiers zmk_sticky_modifier_state() { 
    struct zmk_sticky_modifiers sticky_modifiers = {ctrl: last_state_of_sticky_ctrl, alt: last_state_of_sticky_alt, gui: last_state_of_sticky_gui};
    return sticky_modifiers;
}