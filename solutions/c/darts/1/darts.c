#include "darts.h"
#include <math.h>

uint8_t score(coordinate_t landing_position) {
  float radius =
      pow(landing_position.x_axis, 2) + pow(landing_position.y_axis, 2);

  if (radius > 100)
    return 0;
  if (radius > 25)
    return 1;
  if (radius > 1)
    return 5;

  return 10;
}
