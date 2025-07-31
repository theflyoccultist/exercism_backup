#include "binary.h"
#include <string.h>

int convert(const char *input) {
  int len = strlen(input);

  int converted = 0;
  for (int i = 0; i < len; i++) {
    if (input[i] != '1' && input[i] != '0')
      return INVALID;

    int digit = input[i] - '0';
    converted = (converted << 1) | digit;
  }
  return converted;
}
