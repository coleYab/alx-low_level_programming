#include <stdio.h>

/**
 * main - printing combination
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int first_number;
	int second_number;

	for (first_number = 48; first_number <= 57; first_number++)
	{
		for (second_number = 48; second_number <= 57; second_number++)
		{
			if (second_number > first_number)
			{
				putchar(first_number);
				putchar(second_number);
				if ((first_number == 56) && (second_number == 57))
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar (' ');
			}
		}
	}
}
