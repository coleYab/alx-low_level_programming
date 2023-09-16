#include <stdio.h>

/**
 * main - prints the prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int m;
	unsigned long int num = 612852475143;

	for (m = 3; m < 7828409; m + 2)
	{
		while ((num % m == 0) || (num != m))
			num = num / m;
	}
	printf("%lu\n", num);

	return (0);
}
