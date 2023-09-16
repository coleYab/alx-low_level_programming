#include <stdio.h>

/**
 * main - fizz buzz challenge
 *
 * Return: void
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			if (n % 5 != 0)
			{
				printf("%s ", "Fizz");
				continue;
			}
			else if (n % 3 != 0)
			{
				if (n == 100)
					printf("%s\n", "Buzz");
				else
					printf("%s ", "Buzz");
			}
			else
				printf("%s ", "FizzBuzz");
		}
		else
			printf("%d ", n);
	}

	return (0);
}
