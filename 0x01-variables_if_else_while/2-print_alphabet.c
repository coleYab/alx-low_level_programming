#include <stdio.h>

/**
 * main - Entry point, displays the alphabet wtihout jump
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 97;

	for (; alphabet <= 123; alphabet++)
	{
		if (alphabet == 123)
		{
			putchar('\n');
			break;
		}
		putchar(alphabet);
	}

	return (0);
}
