#include <stdio.h>
#include <stdlib.h>

int main() {
  int dividend = 20;
  int divisor = 5;
  int quotient;

  if (divisor == 0) {
    fprintf(stderr, "Division by zero! Exiting...\n");
    exit(EXIT_FAILURE); // EXIT_FAILURE defined as -1
  }

  quotient = dividend / divisor;
  fprintf(stderr, "Value of quotient : %d\n", quotient);
  
  // EXIT_SUCCESS indicate program coming out after a successfull operation
  exit(EXIT_SUCCESS);
}