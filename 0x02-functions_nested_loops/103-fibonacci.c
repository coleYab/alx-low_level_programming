#include <stdio.h>

/**
 * main - finds the sum of even number in fibonnachi
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		b = c + a;
		c = a;
		a = b;
	}
	printf("%d\n", sum);

	return (0);
}
