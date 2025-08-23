#include "hamming.h"

namespace hamming {
    int compute(const std::string &a, const std::string &b) {
        if (a.length() != b.length())
            throw std::domain_error("Strands must be of same length");
        
        return std::inner_product(
            a.begin(), a.end(), b.begin(), 0, 
            std::plus<>(),
            [](char ac, char bc) { return ac != bc ? 1 : 0; }
            );
    }

}  // namespace hamming
