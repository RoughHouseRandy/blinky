// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(20,20,31));
    
    int redValue = 0;
    int blueValue = 0;
    int greenValue = 0;


    while(true){
        if(bn::keypad::a_pressed()) {
            bn::backdrop::set_color(bn::color(31,21,22));
        }
        
        if(bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(25,26,2));
        }
        
        if(bn::keypad::start_pressed()) {
            bn::backdrop::set_color(bn::color(20,20,31));
        }
        
        if(bn::keypad::up_held()){
            bn::backdrop::set_color(bn::color(redValue,blueValue,greenValue));
            redValue++;;
            if(redValue > 30 || blueValue > 30 || greenValue > 30){
                break; 
            }
        }
        
        if (bn::keypad::right_held())
        {
            bn::backdrop::set_color(bn::color(redValue, blueValue, greenValue));
            blueValue++;
            ;
            if (redValue > 30 || blueValue > 30 || greenValue > 30)
            {
                break;
            }
        }
        
        if (bn::keypad::down_held())
        {
            bn::backdrop::set_color(bn::color(redValue, blueValue, greenValue));
            greenValue++;
            ;
            if (redValue > 30 || blueValue > 30 || greenValue > 30)
            {
                break;
            }
        }

        bn::core::update();
    }
}