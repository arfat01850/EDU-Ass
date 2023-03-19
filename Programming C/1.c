#include <stdio.h>

void swapVariables(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 10;
  int b = 15;
  printf("Before swapping: a = %d, b = %d\n", a, b);
  swapVariables(&a, &b);
  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
}
