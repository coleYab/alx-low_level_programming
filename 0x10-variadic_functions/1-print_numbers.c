#include "variadic_functions.h"

/**
 * print_numbers - prints a number separating by a string literal
 * @separator: number separator
 * @n: the total nmber of ints
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(print_it);
	int i = 0;

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	va_start(print_it, n);
	for (i = 0; i < (int)n - 1; i++)
	{
		printf("%d", va_arg(print_it, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(print_it, int));
	va_end(print_it);
}
