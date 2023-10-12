#include "variadic_functions.h"
/**
 * sum_them_all - tries to sum the inputs given
 * @n: the variabke argument number
 *
 * Return: the sum of the numbers given
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	if (n == 0)
		return (0);

	va_list(summation);
	va_start(summation, n);
	for (i = 0; i < n; i++)
		sum += va_arg(summation, int);
	va_end(summation);

	return (sum);
}

