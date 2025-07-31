#include "doctor_data.h"
#include <string>

namespace heaven {
Vessel::Vessel(std::string name, int generation,
               star_map::System current_system)
    : name(name), generation(generation), current_system(current_system) {}

Vessel Vessel::replicate(std::string new_name) {
  Vessel clone{new_name, generation + 1, current_system};
  return clone;
}

std::string get_older_bob(const Vessel &vessel, const Vessel &vessel2) {
  return (vessel.current_system <= vessel2.current_system) ? vessel.name
                                                           : vessel2.name;
}
bool in_the_same_system(const Vessel &vessel, const Vessel &vessel2) {
  return vessel.current_system == vessel2.current_system;
}
} // namespace heaven
