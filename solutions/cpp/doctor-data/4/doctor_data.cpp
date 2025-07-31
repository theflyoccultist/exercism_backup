#include "doctor_data.h"
#include <string>

namespace heaven {
std::string get_older_bob(const Vessel &vessel, const Vessel &vessel2) {
  return (vessel.z <= vessel2.z) ? vessel.x : vessel2.x;
}
bool in_the_same_system(const Vessel &vessel, const Vessel &vessel2) {
  return vessel.z == vessel2.z;
}
} // namespace heaven
