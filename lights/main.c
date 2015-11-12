#include <stdio.h>

#include "wit.h"

int main(int argc, char *argv[]) {
  struct wit_context *context = wit_init(NULL, 4);
  // ... your code here
  wit_close(context);
  return 0;
}
