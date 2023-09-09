#include <stdio.h>

/**
 * main - Entry point, displays numbers and a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comma = 44;
	int number = 48;

	for ( ; number <= 58; number++)
	{
		if (number == 57)
			comma = 36;
		if (number == 58)
			putchar('\n');
		else
		{
			putchar(number);
			putchar(comma);
			putchar(' ');
		}
	}

	return (0);
}
