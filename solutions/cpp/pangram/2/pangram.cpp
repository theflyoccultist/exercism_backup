#include "pangram.h"
#include <cctype>
#include <string>
#include <unordered_set>

namespace pangram {

bool is_pangram(std::string text) {
  std::unordered_set<char> letters;

  for (char ch : text) {
    if (std::isalpha(static_cast<unsigned char>(ch))) {
      letters.insert(std::tolower(static_cast<unsigned char>(ch)));
    }
  }

  return letters.size() == 26;
}

} // namespace pangram
