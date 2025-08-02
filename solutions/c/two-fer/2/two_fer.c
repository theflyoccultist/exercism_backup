#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name) {
  sprintf(buffer, "%s %s, %s.", "One for", name ? name : "you", "one for me");
}
