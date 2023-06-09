#ifndef H_PLAYER
#define H_PLAYER

#include <ncurses.h>
#include "bomb.h"

class Bomb;

class Player {
  public:
    Player(WINDOW * win, int y, int x, char c);
    void mvup();
    void mvdown();
    void mvleft();
    void mvright();
    int getmv();
    void display();
  private:
    int xLoc, yLoc, xMax, yMax;
    char character;
    WINDOW * curwin;
    Bomb * bomb;
};

#endif