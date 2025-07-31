#include "space_age.h"

static const double orbital_period[] = {0.2408467, 0.61519726, 1,
                                        1.8808158, 11.862615,  29.447498,
                                        84.016846, 164.79132};

float age(planet_t planet, int64_t seconds) {
  const int earth_year = 31557600;

  if (planet > NEPTUNE)
    return INVALID_PLANET;
  return seconds / (earth_year * orbital_period[planet]);
}
