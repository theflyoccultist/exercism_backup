#include "pangram.h"
#include <algorithm>
#include <cctype>
#include <string>

namespace pangram {

bool is_pangram(std::string text) {
  text.erase(std::remove_if(text.begin(), text.end(),
                            [](unsigned char c) { return !std::isalpha(c); }),
             text.end());

  std::transform(text.begin(), text.end(), text.begin(),
                 [](unsigned char c) { return std::tolower(c); });

  for (char ch = 'a'; ch <= 'z'; ch++) {
    int count = std::count(text.begin(), text.end(), ch);
    if (count < 1)
      return false;
  }
  return true;
}

} // namespace pangram
