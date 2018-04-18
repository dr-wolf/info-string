#include "../LedControl/LedControl.h"
#include "LedDisplay.h"

LedDisplay::LedDisplay() {
  for (int i = 0; i < BUFF_SIZE; i++)
    this->buff[i] = 0;
}

void LedDisplay::renderBlock(int block, LedControl *lc) {
  const int buffLen = 8;
  for (int n = 0; n < 8; n++) {
    byte col = 0;
    for (int i = 0; i < buffLen; i++)
      col |= (this->buff[(3 - block) * buffLen + i] >> (7 - n) & 1) << (7 - i);
    lc->setRow(block, n, col);
  }
}

void LedDisplay::clear() {
  for (int i = 0; i < BUFF_SIZE; i++)
    this->buff[i] = 0;
}

void LedDisplay::push(byte col) {
  for (int i = BUFF_SIZE; i > 0; i--)
    this->buff[i] = this->buff[i - 1];
  this->buff[0] = col;
}

void LedDisplay::render(LedControl *lc) {
  for (int i = 0; i < lc->getDeviceCount(); i++)
    this->renderBlock(i, lc);
}
