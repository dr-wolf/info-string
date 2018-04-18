#include "LedDisplay.h"
#include "font.h"

class LedTextDisplay : public LedDisplay {
  private:
    int textWidth(String text);
  public:
    LedTextDisplay();
    void scrollText(LedControl *lc, String text, int timeout = 10);
    void printText(LedControl *lc, String text, bool alignLeft);
    void printTextMiddle(LedControl *lc, String text);
};
