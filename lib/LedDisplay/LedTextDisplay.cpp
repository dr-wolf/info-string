#include "LedTextDisplay.h"

LedTextDisplay::LedTextDisplay(): LedDisplay() {}

int LedTextDisplay::textWidth(String text) {
  int text_len = 0;
  for (unsigned int i = 0; i < text.length(); i++)
    text_len += charmap[text.charAt(i) - 1].len;
  return text_len + text.length() - 1;
}

void LedTextDisplay::scrollText(LedControl *lc, String text, int timeout) {
  this->clear();
  for (unsigned int i = 0; i < text.length(); i++) {
    int code = text.charAt(i) - 1; Serial.println(code);
    for (int n = 0; n < charmap[code].len; n++) {
      this->push(font[charmap[code].pos + n]); Serial.println(font[charmap[code].pos + n]);
      this->render(lc);
      delay(timeout);
    }
    this->push(0);
    this->render(lc);
    delay(timeout);
  }
  for (int i = 0; i < 31; i++) {
    this->push(0);
    this->render(lc);
    delay(timeout);
  }
}

void LedTextDisplay::printText(LedControl *lc, String text, bool alignLeft) {
  this->clear();
  int p = 0;
  for (unsigned int i = 0; i < text.length(); i++) {
    int code = text.charAt(i) - 1;
    for (int n = 0; n < charmap[code].len; n++) {
      if (alignLeft && p++ >= 32)
        break;
      this->push(font[charmap[code].pos + n]);
    }
    if (i < text.length() - 1 && (!alignLeft || p++ < 32))
      this->push(0);
  }
  if (alignLeft) {
    while (p++ < 32)
      this->push(0);
  }
  this->render(lc);
}

void LedTextDisplay::printTextMiddle(LedControl *lc, String text) {
  int text_width = textWidth(text);
  if (text_width > 32) {
    printText(lc, text, false);
    return;
  }
  this->clear();
  for (unsigned int i = 0; i < text.length(); i++) {
    int code = text.charAt(i) - 1;
    for (int n = 0; n < charmap[code].len; n++)
      this->push(font[charmap[code].pos + n]);
    if (i < text.length() - 1)
      this->push(0);
  }
  for (int i = 0; i < (32 - text_width) / 2; i++)
    this->push(0);
  this->render(lc);
}
