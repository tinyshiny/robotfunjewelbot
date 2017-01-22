#include "Arduino.h"

LED led;

void setup() {
  Buzzer buzz;
  buzz.short_buzz();
  Animation animation;
  animation.rainbows();
}

void loop() {
//  led.turn_on_single(SE, GREEN);
}
int i = 0;
void button_press(void){

  switch(i) {
    case 0:
      led.turn_on_single(NW, RED);
    break;
    case 1:
      led.turn_on_single(NW, GREEN);
    break;
    case 2:
      led.turn_on_single(NW, BLUE);
    break;
    case 3:
      led.turn_on_single(NW, YELLOW);
    break;
    case 4:
      Animation animation;
      animation.rainbows();
    break;
  }
  i++;
  if (i > 3) i=0;
}

void button_press_long(void) {
  // Define what happens when the Magic Button is held for 2 seconds
  // (when the Jewelbot is not plugged into power)
}
