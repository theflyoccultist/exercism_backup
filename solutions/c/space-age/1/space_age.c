#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
  const float earth_age = seconds / 365.25 / 24 / 60 / 60;

  switch (planet) {
  case EARTH:
    return earth_age;
  case MERCURY:
    return earth_age / 0.2408467;
  case VENUS:
    return earth_age / 0.61519726;
  case MARS:
    return earth_age / 1.8808158;
  case JUPITER:
    return earth_age / 11.862615;
  case SATURN:
    return earth_age / 29.447498;
  case URANUS:
    return earth_age / 84.016846;
  case NEPTUNE:
    return earth_age / 164.79132;
  default:
    return INVALID_PLANET;
  }
}
