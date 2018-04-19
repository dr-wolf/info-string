#include <Arduino.h>
#include "../lib/LedControl/LedControl.h"
#include "../lib/LedDisplay/LedTextDisplay.h"

LedControl *lc;
LedTextDisplay* ltd;

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
  ltd = new LedTextDisplay(lc);
  initLC(lc, 1);
}

void loop() {
  int cmd = Serial.read();
  switch (cmd) {
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
    case 4:
      ltd->inverse(true);
      ltd->render();
      break;
    case 5:
      ltd->inverse(false);
      ltd->render();
      break;
    case 6:
      ltd->clear();
      ltd->render();
      break;
    default:
      ltd->scrollText("ERROR! Unknown command " + String(cmd));
  }
  delay(1000);
}
