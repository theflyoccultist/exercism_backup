#pragma once
#include <string>

namespace star_map {
enum class System {
  BetaHydri,
  EpsilonEridani,
  Sol,
  AlphaCentauri,
  DeltaEridani,
  Omicron2Eridani
};
}

namespace heaven {
struct Vessel {
  std::string name{};
  int generation{};
  star_map::System current_system{};

  Vessel(std::string name, int generation,
         star_map::System current_system = star_map::System::Sol);
  Vessel replicate(std::string new_name);

  int busters{0};
  void make_buster() { busters++; }
  bool shoot_buster() {
    if (busters) {
      busters--;
      return true;
    }
    return false;
  }
};

std::string get_older_bob(const Vessel &vessel, const Vessel &vessel2);
bool in_the_same_system(const Vessel &vessel, const Vessel &vessel2);
} // namespace heaven
