#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integer
 * @a:array to display
 * @n: the size of the array
 * Return: 0 in successful compilation
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
		if (num != n - 1)
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);
	printf("\n");
}
