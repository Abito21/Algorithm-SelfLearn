#include <stdio.h>

int main() {
  // Create variables
  int myNum = 5;
  float myFloatNum = 5.99;
  char myLetter = 'D';
  int a = 20;
  int b = 21;

  if (a > b){
    printf("a is greater than b\n");
  } else {
    printf("b is greater than a\n");
  }
  // Print variables
  printf("My favourite number is : %d\nMy favourite letter is : %c\n", myNum, myLetter);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  printf("Hello World!");
  return 0;
}