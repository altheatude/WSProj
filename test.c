#include <stdio.h>

int* x, y, z, a, b, c;

int main() {
  for (int i = 0; i < 10000000; ++i) {
    x = (int*)malloc( (10000*i) * sizeof(int));
    y = (int*)malloc( (100*i) * sizeof(int));
    z = (int*)malloc( (100*i) * sizeof(int));
    a = (int*)malloc( (100*i) * sizeof(int));
  }
  return 0;
}
