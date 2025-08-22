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
    char ch = 'G';
    char ch2 = 'A';
    char ch3 = 'C';
    char ch4 = 'T';
    
    mymap[ch] = std::count(in.begin(), in.end(), ch);
    mymap[ch2] = std::count(in.begin(), in.end(), ch2);
    mymap[ch3] = std::count(in.begin(), in.end(), ch3);
    mymap[ch4] = std::count(in.begin(), in.end(), ch4);    
    return mymap;
}
}  // namespace nucleotide_count
