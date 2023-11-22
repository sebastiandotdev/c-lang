#include "stdio.h"
#include "my_lib.h"

/**
  * This is a simple program that adds two numbers and prints the result.
  * It also prints a message depending on the result.
  
*/
int main() {
  // This is a comment
  int first = 3;
  int second = 1;
  float third = 3.0;
  double fourth = 3.0;
  int value = first + second;

  printf("The sum of %d and %d is %d\n", first, second, value);
  printf("float: %d", third + fourth);

  if (value <= 3) {
    printf("The sum is less than or equal to 3\n");
  } else {
    printf("The sum is greater than 3\n");
  }
  greet();

  printf("The sum of: %d", 3 + 3);
  return 0;
}

void greet() { printf("Hello World!\n"); }