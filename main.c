#include <stdio.h>

int main(void) {
  int number, count, sum = 0;

  printf("Enter a positive number\n");
  scanf("%d", &number);

  printf("\nNatural Numbers from 1 to %d are:\n", number);

  for (count = 1; count <= number; count++) {
    printf("%d\n", count);
    sum = sum + count;
  }

  printf("\nSum of natural numbers from 1 to %d is: %d\n", number, sum);
  return 0;
}