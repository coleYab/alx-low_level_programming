#include <unistd.h>

/**
 * _putchar - prints a character to the stdio
 *
 * @c: the char to print
 *
 * Return: the ascii value of teh number
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
