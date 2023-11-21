#include "my_lib.h"
#include "stdio.h"

int main() {
  int first = 3;
  int second = 1;

  int value = first + second;
  printf("The sum of %d and %d is %d\n", first, second, value);

  if (value <= 3) {
    printf("The sum is less than or equal to 3\n");
  } else {
    printf("The sum is greater than 3\n");
  }
  greet();
  return 0;
}

void greet() { printf("Hello World!\n"); }