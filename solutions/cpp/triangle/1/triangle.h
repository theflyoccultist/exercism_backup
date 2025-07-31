#pragma once
#include <stdexcept>
namespace triangle {

enum class flavor { equilateral, isosceles, scalene };

template <typename T> triangle::flavor kind(T a, T b, T c) {
  if ((a + b < c) || (b + c < a) || (a + c < b) || (a + b + c == 0))
    throw std::domain_error("this is not a triangle");

  if ((a == b) && (b == c))
    return triangle::flavor::equilateral;
  else if ((a == b) || (b == c) || (a == c))
    return triangle::flavor::isosceles;
  else
    return triangle::flavor::scalene;
};

} // namespace triangle
