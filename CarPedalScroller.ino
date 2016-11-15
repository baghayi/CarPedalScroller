#include "ScrollingMultiplier.h"
#include "Scroller.h"

Scroll setting;

void setup() {}


void loop() {
    setting = getScrollSetting(getBackwardMultiplier(), 1, setting);
    setting = getScrollSetting(getForwardMultiplier(), -1, setting);

    moveScrollBar(setting);
    controllScrollBarSpeed(setting);
}


