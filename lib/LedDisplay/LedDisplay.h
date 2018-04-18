#include "../LedControl/LedControl.h"

#define BUFF_SIZE 32

class LedDisplay {
  private:
    byte buff[BUFF_SIZE];
    void renderBlock(int block, LedControl *lc);
  public:
    LedControl *lc;
  public:
    LedDisplay();
    void clear();
    void push(byte col);
    void render(LedControl *lc);
};
