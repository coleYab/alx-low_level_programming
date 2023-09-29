#include "main.h"

/**
 * is_prime_number - checks for prime number
 *
 * @n: the number to check
 *
 * Return: the numbers as a bool
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - to check the number
 *
 * @a: parameter one
 * @b: paramter two
 *
 * Return: the result
 */
int is_prime(int a, int b)
{
	if (b == 1)
		return (1);
	else if (a % b == 0)
		return (0);
	return (is_prime(a, b - 1));
}
