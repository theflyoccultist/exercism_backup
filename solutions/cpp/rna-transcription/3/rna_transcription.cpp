#include "rna_transcription.h"
#include <stdexcept>

namespace rna_transcription {

char to_rna(const char &ln){
    switch(ln) {
        case 'G': return 'C';
        case 'C': return 'G';
        case 'T': return 'A';
        case 'A': return 'U';
        default:
            throw std::invalid_argument("Invalid DNA detected.");
        }
}

std::string to_rna(const std::string &ln){
    std::string output;
    output.reserve(ln.size());
    for (const char i : ln) {
        output += to_rna(i);
    }
    return output;
}

}  // namespace rna_transcription
