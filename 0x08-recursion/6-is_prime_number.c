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
	if (n < 2)
		return (0);
	else
		return (check_prime(n, n - 1));
}

/**
 * check_prime - to check the number
 *
 * @n: parameter one
 * @x: paramter two
 *
 * Return: the result
 */
int check_prime(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (check_prime(n, x - 1));
}
