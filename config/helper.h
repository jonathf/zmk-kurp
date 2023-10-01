/*
 * helper.h
 *
 * Convenience macros simplifying ZMK's keymap configuration.
 * See https://github.com/urob/zmk-nodefree-config for documentation.
 */

#pragma once

#define ZMK_HELPER_STRINGIFY(x) #x

/* ZMK_BEHAVIOR */

#define ZMK_BEHAVIOR_CORE_caps_word      compatible = "zmk,behavior-caps-word";      #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_dynamic_macro  compatible = "zmk,behavior-dynamic-macro";  #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_hold_tap       compatible = "zmk,behavior-hold-tap";       #binding-cells = <2>
#define ZMK_BEHAVIOR_CORE_key_repeat     compatible = "zmk,behavior-key-repeat";     #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_macro          compatible = "zmk,behavior-macro";          #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_mod_morph      compatible = "zmk,behavior-mod-morph";      #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_sticky_key     compatible = "zmk,behavior-sticky-key";     #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_tap_dance      compatible = "zmk,behavior-tap-dance";      #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_tri_state      compatible = "zmk,behavior-tri-state";      #binding-cells = <0>

#define ZMK_BEHAVIOR(name, type, ...) \
    / { \
        behaviors { \
            name: name { \
                label = ZMK_HELPER_STRINGIFY(ZB_ ## name); \
                ZMK_BEHAVIOR_CORE_ ## type; \
                __VA_ARGS__ \
            }; \
        }; \
    };

/* ZMK_LAYER */

#define MACRO_CHOOSER3(_1, _2, _3, FUNC, ...) FUNC
#define ZMK_LAYER(...) MACRO_CHOOSER3(__VA_ARGS__, ZMK_LAYER_3_ARGS, ZMK_LAYER_2_ARGS)(__VA_ARGS__)
#define ZMK_LAYER_2_ARGS(name, layout) \
    / { \
        keymap { \
            compatible = "zmk,keymap"; \
            layer_ ## name { \
                label = ZMK_HELPER_STRINGIFY(name); \
                bindings = <layout>; \
            }; \
        }; \
    };
#define ZMK_LAYER_3_ARGS(name, layout, sensors) \
    / { \
        keymap { \
            compatible = "zmk,keymap"; \
            layer_ ## name { \
                label = ZMK_HELPER_STRINGIFY(name); \
                bindings = <layout>; \
                sensor-bindings = <sensors>; \
            }; \
        }; \
    };

/* ZMK_COMBOS */

#define ALL 0xff
#if !defined COMBO_TERM
    #define COMBO_TERM 30
#endif
#if !defined COMBO_HOOK
    #define COMBO_HOOK
#endif

#define MACRO_CHOOSER5(_1, _2, _3, _4, _5, FUNC, ...) FUNC
#define ZMK_COMBO(...) MACRO_CHOOSER5(__VA_ARGS__, ZMK_COMBO_5_ARGS, ZMK_COMBO_4_ARGS)(__VA_ARGS__)
#define ZMK_COMBO_4_ARGS(name, combo_bindings, keypos, combo_layers) \
    ZMK_COMBO_5_ARGS(name, combo_bindings, keypos, combo_layers, COMBO_TERM)
#define ZMK_COMBO_5_ARGS(name, combo_bindings, keypos, combo_layers, combo_timeout) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                timeout-ms = <combo_timeout>; \
                bindings = <combo_bindings>; \
                key-positions = <keypos>; \
                layers = <combo_layers>; \
                COMBO_HOOK \
            }; \
        }; \
    };

/* ZMK_CONDITIONAL_LAYER */

#define ZMK_CONDITIONAL_LAYER(if_layers, then_layer) \
    / { \
        conditional_layers { \
            compatible = "zmk,conditional-layers"; \
            tri_layer { \
                if-layers = <if_layers>; \
                then-layer = <then_layer>; \
            }; \
        }; \
    };
