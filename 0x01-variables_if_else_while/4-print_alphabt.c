#include <stdio.h>

/**
 * main - Entry point, displays the alphabt
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 97;

	for (; alphabet <= 123; alphabet++)
	{
		if (alphabet == 101 || alphabet == 113)
			continue;
		if (alphabet == 123)
		{
			putchar('\n');
			break;
		}
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
