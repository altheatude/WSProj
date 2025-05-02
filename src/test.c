#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* x, *y, *z, *a, *b, *c;

int main() {
  long i = 0;
  while (true) {
    x = (int*)malloc( (10000000000000*i) * sizeof(int));
    y = (int*)malloc( (10000000000*i) * sizeof(int));
    z = (int*)malloc( (100000000000*i) * sizeof(int));
    a = (int*)malloc( (100000000000*i) * sizeof(int));
    ++i;
  }
  return 0;
}
