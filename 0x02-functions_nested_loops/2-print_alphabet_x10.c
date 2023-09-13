#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i;
	int alphabet;

	for (int i = 1; i <= 10; i++)
	{
		for (alphabet = 97; alphabet <= 122; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
