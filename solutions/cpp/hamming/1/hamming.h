#pragma once

#include <string>
#include <stdexcept>
#include <algorithm>
#include <numeric>
#include <iterator>

namespace hamming {
    int compute(const std::string &a, const std::string &b);

}  // namespace hamming
