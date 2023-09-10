#include <stdio.h>

/**
 * main - printing hexadecimal
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int number = 48;
	int alphabet = 97;

	for ( ; number <= 57; number++)
		putchar(number);
	for ( ; alphabet <= 102; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
