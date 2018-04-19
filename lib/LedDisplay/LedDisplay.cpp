#include "../LedControl/LedControl.h"
#include "LedDisplay.h"

LedDisplay::LedDisplay(LedControl *lc) {
  this->lc = lc;
  this->inversed = false;
  for (int i = 0; i < BUFF_SIZE; i++)
    this->buff[i] = 0;
}

void LedDisplay::renderBlock(int block) {
  const int buffLen = 8;
  for (int n = 0; n < 8; n++) {
    byte col = 0;
    for (int i = 0; i < buffLen; i++)
      col |= (this->buff[(3 - block) * buffLen + i] >> (7 - n) & 1) << (7 - i);
    if (inversed)
      col = ~col;
    this->lc->setRow(block, n, col);
  }
}

void LedDisplay::clear() {
  for (int i = 0; i < BUFF_SIZE; i++)
    this->buff[i] = 0;
}

void LedDisplay::inverse(bool inversed) {
  this->inversed = inversed;
}

void LedDisplay::push(byte col) {
  for (int i = BUFF_SIZE - 1; i > 0; i--)
    this->buff[i] = this->buff[i - 1];
  this->buff[0] = col;
}

void LedDisplay::render() {
  for (int i = 0; i < lc->getDeviceCount(); i++)
    this->renderBlock(i);
}
