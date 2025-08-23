#include "difference_of_squares.h"
#include <cstdlib>

namespace difference_of_squares {

int square_of_sum(const int &input) {
  int sum = input * (input + 1) / 2;
  return sum * sum;
}

int sum_of_squares(const int &input) {
  int sum{0};
  for (int i = 0; i <= input; ++i) {
    sum += i * i;
  }
  return sum;
}

int difference(const int &input) {
  return std::abs(square_of_sum(input) - sum_of_squares(input));
}

} // namespace difference_of_squares
