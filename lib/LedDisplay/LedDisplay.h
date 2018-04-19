#include "../LedControl/LedControl.h"

#define BUFF_SIZE 32

class LedDisplay {
  private:
    bool inversed;
    LedControl *lc;
    byte buff[BUFF_SIZE];
    void renderBlock(int block);
  public:
    LedDisplay(LedControl *lc);
    void clear();
    void inverse(bool inversed);
    void push(byte col);
    void render();
};
