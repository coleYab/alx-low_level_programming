#include <stdio.h>

/**
 * main - prints the fabonacchi series
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 1;
	unsigned long int c = 1;
	int d;

	for (d = 1; d <= 50; d++)
	{
		if (d == 50)
		{
			printf("%lu\n", a);
			break;
		}
		printf("%lu, ", a);
		b = c + a;
		c = a;
		a = b;
	}

	return (0);
}
