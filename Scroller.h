//Scroller.h

#ifndef Scroller_H
#define Scroller_H

const int scrolling_steps = 2;
const int delay_time = 255; // in milliseconds

struct Scroll {
    unsigned int speed;
    signed char direction;
};

Scroll getScrollSetting(unsigned int multiplier, signed char direction, Scroll setting);
void moveScrollBar(Scroll &setting);
void controllScrollBarSpeed(Scroll &setting);


#endif
