#include "rna_transcription.h"

namespace rna_transcription {

char to_rna(char ln){
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
            break;
        }
    return otpt;
}

std::string to_rna(std::string ln){
    std::string output = "";
    for (char i : ln) {
        output += to_rna(i);
    }
    return output;
}

}  // namespace rna_transcription
