#include "collatz_conjecture.h"

namespace collatz_conjecture {
int steps (int input){
    if (input <= 0)
        throw std::domain_error("Only works for positives");

    int i = 0;
    while (input != 1) {
        input % 2 == 1 ? input = input * 3 + 1 : input /= 2;
        i++;
    }
    
    return i;
}

}  // namespace collatz_conjecture