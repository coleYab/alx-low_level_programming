#include "main.h"

/**
 * factorial - calculates the factorial of nmber
 *
 * @n: the number
 *
 * Return: -1 for negative input and other for valid input
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
