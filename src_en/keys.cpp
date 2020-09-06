#include "keys.h"

//------------------------------------------------------------------------------
//key base
std::string key_up::get_key_codes() const {return "key_up";}
std::string key_down::get_key_codes() const {return "key_down";}
std::string key_right::get_key_codes() const {return "key_right";}
std::string key_left::get_key_codes() const {return "key_left";}
std::string key_esc::get_key_codes() const {return "key_esc";}
std::string key_f1::get_key_codes() const {return "key_f1";}
std::string key_error::get_key_codes() const {return "key_error";}
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
//keymap factory
//class keyboard
keymap keyboard::get_key_map(std::array<int, 4> temp) {
    keymap all_key;

    if (temp == upkey) {all_key._direct_key = std::make_unique<key_up>();}
    else if (temp == downkey) {all_key._direct_key = std::make_unique<key_down>();}
    else if (temp == rightkey) {all_key._direct_key = std::make_unique<key_right>();}
    else if (temp == leftkey) {all_key._direct_key = std::make_unique<key_left>();}
    else if (temp == esckey) {all_key._direct_key = std::make_unique<key_esc>();}
    else if (temp == f1key) {all_key._direct_key = std::make_unique<key_f1>();}
    else {all_key._direct_key = std::make_unique<key_error>();}

    return all_key;
}
//------------------------------------------------------------------------------
