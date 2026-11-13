#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// Reduce layer-state storage and code size; this keymap uses only four layers
#define LAYER_STATE_8BIT

// Prefer the hold action when another key is pressed (ZMK hold-preferred equivalent)
#define HOLD_ON_OTHER_KEY_PRESS
