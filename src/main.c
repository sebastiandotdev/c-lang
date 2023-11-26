#include "my_lib.h"
#include "stdio.h"

/**
  * This is a simple program that adds two numbers and prints the result.
  * It also prints a message depending on the result.

*/
int main() {
  // This is a comment
  int first = 3;
  int second = 1;
  int value = first + second;
  const int constant = 3;

  // array en C
  int array[3] = {1, 2, 3};

  // imprimir array
  printf("array: %d\n", array[0]);
  printf("The sum of %d and %d is %d\n", first, second, value);

  if (value <= 3) {
    printf("The sum is less than or equal to 3\n");
  } else {
    printf("The sum is greater than 3\n");
  }
  greet();

  printf("The sum of: %d", 3 + 3);
  return 0;
}

void greet() {
  // struct en C
  struct person {
    char name[50];
    int age;
    float salary;
  };

  // prin struct en C

  struct person p1;
  printf("Enter name: %s", p1.name);
  printf("Hello World!\n");
}