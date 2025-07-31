#include <string>

namespace log_line {
std::string message(std::string line) {
  int a = line.find(":");
  return line.substr(a + 2);
}

std::string log_level(std::string line) {
  int b = line.find("]");
  return line.substr(1, b - 1);
}

std::string reformat(std::string line) {
  return message(line) + " (" + log_level(line) + ")";
}
} // namespace log_line
