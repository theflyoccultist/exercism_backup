#include "nucleotide_count.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

namespace nucleotide_count {
std::map<char, int> count(const std::string &in) {
    if (in.find_first_not_of("ACGT") != std::string::npos) {
        throw std::invalid_argument("invalid input");
    }

    std::map<char, int> mymap = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

    for (char nucl : in) {
        mymap[nucl]++;
    }
    
    return mymap;
}
}  // namespace nucleotide_count
