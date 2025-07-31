#include "triangle.h"
#include <stdexcept>

namespace triangle {

bool positive_sides(double a, double b, double c) {
  return (a > 0) && (b > 0) && (c > 0);
}

bool valid_triangle(double a, double b, double c) {
  return (a + b >= c) && (b + c >= a) && (c + a >= b);
}

flavor kind(double a, double b, double c) {
  if (!positive_sides(a, b, c) || !valid_triangle(a, b, c))
    throw std::domain_error("not a triangle");

  if ((a == b) && (b == c))
    return triangle::flavor::equilateral;
  else if ((a == b) || (b == c) || (a == c))
    return triangle::flavor::isosceles;
  else
    return triangle::flavor::scalene;
};

} // namespace triangle
