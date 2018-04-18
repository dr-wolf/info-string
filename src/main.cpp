#include <Arduino.h>
#include "../lib/LedControl/LedControl.h"
//#include "../lib/LedDisplay/LedTextDisplay.h"
#include "../lib/LedDisplay/LedDisplay.h"

#define ALIGN_LEFT 1
#define ALIGN_MIDDLE 2
#define ALIGN_RIGHT 3

LedControl *lc;// = new LedControl(9, 5, 7, 4);
//LedTextDisplay* ltd = new LedTextDisplay(lc);
LedDisplay *ld;// = new LedDisplay(lc);

void initLC(LedControl *lc, int intensity) {
  for(int i = 0; i < lc->getDeviceCount(); i++) {
    lc->shutdown(i, false);
    lc->setIntensity(i, intensity);
    lc->clearDisplay(i);
  }
}

void setup() {
  Serial.begin(9600);
  lc = new LedControl(9, 5, 7, 4);
  ld = new LedDisplay(lc);
  initLC(lc, 1);
}

void loop() {
  Serial.println(Serial.readString());
  ld->push(0x0F);
  ld->render(lc);
  //lc->setRow(0, 0, 0x0F);
//  ltd->scrollText(Serial.readStringUntil(0xD), 40);
  /*switch (Serial.read()) {
    case -1:
      break;
    case 0:
      ltd->scrollText(Serial.readStringUntil(0xD), 40);
      break;
    case 1:
      ltd->printText(Serial.readStringUntil(0xD), true);
      break;
    case 2:
      ltd->printText(Serial.readStringUntil(0xD), false);
      break;
    case 3:
      ltd->printTextMiddle(Serial.readStringUntil(0xD));
      break;
    default:
      ltd->printTextMiddle("ERROR");
  }*/
  delay(1000);
}
