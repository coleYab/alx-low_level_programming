#include <stdio.h>

/**
 * print_to_98 -  from n to 98, followed by a new line
 *
 * @n: the number to start from
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int a;

	if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
			{
				printf("%d\n", a);
				break;
			}
			printf("%d, ", a);
		}
	}
	else
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
			{
				printf("%d\n", a);
				break;
			}
			printf("%d, ", a);
		}
	}
}
