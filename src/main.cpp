// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(20,20,31));
    

    while(true){
        if(bn::keypad::a_pressed()) {
            bn::backdrop::set_color(bn::color(31,21,22));
        }
        if(bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(25,26,2));
        }
        bn::core::update();
    }
}