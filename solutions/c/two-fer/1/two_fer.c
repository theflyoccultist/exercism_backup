#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name) {
  if (!name)
    name = "you";
  sprintf(buffer, "%s %s, %s.", "One for", name, "one for me");
}
