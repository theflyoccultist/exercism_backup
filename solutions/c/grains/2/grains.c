#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index) {
  double res = 1;
  if (index < 1 || index > 64) {
    return 0;
  }
  for (int i = 1; i < index; ++i)
    res *= 2;
  return res;
}

uint64_t total() {
  long long res = 0;
  for (int i = 1; i <= 64; ++i)
    res += square(i);
  return res;
}
