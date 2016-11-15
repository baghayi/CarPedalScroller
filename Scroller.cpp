#include "PinConnections.h"
#include "Scroller.h"
#include "Mouse.h"

static inline void beginScrolling(){
    configurePinConnections();
    Mouse.begin();    
}


void moveScrollBar(Scroll &setting){
    Mouse.move(0, 0, setting.direction);
    setting.direction = 0;
}

void controllScrollBarSpeed(Scroll &setting){
    if(setting.speed == 0)
        return;
        
    delay(delay_time / setting.speed);
    setting.speed = 0;
}

Scroll getScrollSetting(unsigned int multiplier, signed char direction, Scroll setting) {
    if(multiplier == 0){
        return setting;
    }

    setting.speed = (scrolling_steps  * multiplier);
    setting.direction = direction;
    return setting;
}
