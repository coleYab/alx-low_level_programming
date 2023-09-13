#include <stdio.h>
#include "main.h"

/**
 *
 * main - print the sum of natural numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int a;

	for (a = 1; a < 1028; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		sum += a;
	}
	printf("%d\n", sum);

	return (0);
}
