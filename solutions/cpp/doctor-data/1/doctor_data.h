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
  std::string x{};
  int y{};
  const star_map::System *z = nullptr;

  Vessel(std::string name, int number) : x(name), y(number), z(nullptr) {}
  Vessel(std::string name, int number, const star_map::System &s)
      : x(name), y(number), z(&s) {}
  Vessel replicate(std::string name) const { return Vessel(name, y); }
  int generation{2};
  star_map::System current_system{generation};

  int busters{0};
  void make_buster() { busters++; }
  bool shoot_buster() {
    if (busters > 0) {
      return busters--;
    } else {
      return busters;
    }
  }
};

std::string get_older_bob(const Vessel &vessel, const Vessel &vessel2);
bool in_the_same_system(const Vessel &vessel, const Vessel &vessel2);
} // namespace heaven
