#include "PinConnections.h"

unsigned int getForwardMultiplier() {
    const int maximum_possible_multiplier = 6;
    
    unsigned int forward = analogRead(forward_pin);
    forward /=  100;
    forward -= 2;

    if(forward > maximum_possible_multiplier){
        return 0;
    }

    return forward;
}

unsigned int getBackwardMultiplier(){
    const int maximum_possible_multiplier = 4;

    unsigned int backward = analogRead(backward_pin);
    backward /= 100;
    backward -= 2;

    if(backward > maximum_possible_multiplier){
        return 0;
    }

    return backward;
}

