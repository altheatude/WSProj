#include <stdio.h>
#include <stdlib.h>

int* x, *y, *z, *a, *b, *c;

int main() {
  long i = 0;
  while (true) {
    x = (int*)malloc( (10000*i) * sizeof(int));
    y = (int*)malloc( (10000*i) * sizeof(int));
    z = (int*)malloc( (10000*i) * sizeof(int));
    a = (int*)malloc( (10000*i) * sizeof(int));
    ++i;
  }
  return 0;
}
