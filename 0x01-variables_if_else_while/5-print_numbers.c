#include <stdio.h>

/**
 * main - Printing numbers using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
		printf("%d", number++);
	printf("\n");

	return (0);
}
