#include "rna_transcription.h"
#include <stdexcept>

namespace rna_transcription {

char to_rna(const char &ln){
    char otpt;
    switch(ln) {
        case 'G':
            otpt = 'C';
            break;
        case 'C':
            otpt = 'G';
            break;
        case 'T':
            otpt = 'A';
            break;
        case 'A':
            otpt = 'U';
            break;
        default:
            throw std::invalid_argument("Invalid DNA nucleotide");
        }
    return otpt;
}

std::string to_rna(const std::string &ln){
    std::string output;
    output.reserve(ln.size());
    for (char i : ln) {
        output += to_rna(i);
    }
    return output;
}

}  // namespace rna_transcription
