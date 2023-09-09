#include <stdio.h>

/**
 * main - displAYS alpHABET
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 65; alphabet <= 91; alphabet++)
	{
		if (alphabet == 91)
			putchar('\n');
		else
			putchar(alphabet);
	}

	return (0);
}
