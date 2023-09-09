#include <stdio.h>

/**
 *
 * main - prints number by using putchar
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int number = 48;

	for ( ; number < 58; number++)
		putchar(number);
	putchar('\n');

	return (0);
}
