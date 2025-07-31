#include "raindrops.h"
#include <string>

namespace raindrops {

std::string convert(short n) {
  if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
    return std::to_string(n);
  std::string sound = "";
  if (n % 3 == 0)
    sound += "Pling";
  if (n % 5 == 0)
    sound += "Plang";
  if (n % 7 == 0)
    sound += "Plong";
  return sound;
}

} // namespace raindrops
