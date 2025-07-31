#include "grains.h"
#include <cmath>
#include <cstdint>
#include <limits>

namespace grains {

uint64_t square(int n) { return 1ULL << (n - 1); };
uint64_t total() { return std::numeric_limits<uint64_t>::max(); }
} // namespace grains
