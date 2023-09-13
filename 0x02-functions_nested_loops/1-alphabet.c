#include "main.h"

/**
 * print_alphabet - Print the lower case english alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
