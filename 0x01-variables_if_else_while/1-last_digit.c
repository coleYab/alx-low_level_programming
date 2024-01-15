#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entery point of the program.
 *
 * Return: 0 in success.
*/
int main(void)
{
  int n, temp;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  temp = n % 10;
  if (temp < 5)
    printf("Last digit of %d is %d and is greater than 5\n", n, temp);
  else if (temp == 0)
    printf("Last digit of %d is 0 and is 0\n", n);
  else
    printf("Last digit of %d is %d and is less than 6 not 0\n", n, temp);
  return (0);
}
