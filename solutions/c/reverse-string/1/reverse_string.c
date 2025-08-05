#include "reverse_string.h"
#include <stdlib.h>
#include <string.h>

char *reverse(const char *value) {
  int len = strlen(value);

  char *t = (char *)malloc(len + 1);

  for (int i = 0; i < len; i++) {
    t[i] = value[len - i - 1];
  }
  t[len] = '\0';

  return t;
}
