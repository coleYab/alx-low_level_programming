#include "variadic_functions.h"

/**
 * print_strings - prints a number separating by a string literal
 * @separator: separates two numbers
 * @n: the total nmber of the integers passed
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	char *s;

	if (n == 0)
	{
		_putchar('\n');
		return;
	}
	va_list(print_it);
	va_start(print_it, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(print_it, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL)
		printf("%s", separator);
	}
	s = va_arg(print_it, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s\n", s);

	va_end(print_it);
}
