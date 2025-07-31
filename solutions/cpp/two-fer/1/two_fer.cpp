#include "two_fer.h"
#include <sstream>

namespace two_fer {

const std::string two_fer(const std::string &name) {
  std::stringstream ss;
  ss << "One for " << name << ", one for me.";
  std::string output = ss.str();
  return output;
};
} // namespace two_fer
