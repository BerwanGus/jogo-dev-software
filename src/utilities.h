#ifndef UTILITIES
#include "lib.h"

class Utilities {
    private:
      void get_screen_size();
      int min_screen_cols;
      int min_screen_lines;
      int max_screen_cols;
      int max_screen_lines;
    public:
      int screen_cols;
      int screen_lines;
      void getcenter_objw(WINDOW * screen, const double& obj_height, const double& obj_width, double * cast_start_y, double * cast_start_x);
      bool screen_verification();
      Utilities();
      // ~Utilities();
};

#endif