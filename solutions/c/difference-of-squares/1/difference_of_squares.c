#include "difference_of_squares.h"
#include <math.h>

unsigned int square_of_sum(unsigned int number) {
  int sum_of_int = 0;
  for (unsigned int i = 1; i <= number; ++i) {
    sum_of_int += i;
  }
  return pow(sum_of_int, 2);
}

unsigned int sum_of_squares(unsigned int number) {
  int squares = 0;
  for (unsigned int i = 1; i <= number; ++i) {
    squares += pow(i, 2);
  }
  return squares;
}

unsigned int difference_of_squares(unsigned int number) {
  return square_of_sum(number) - sum_of_squares(number);
}
