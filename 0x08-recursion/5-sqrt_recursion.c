#include "main.h"

/**
 * _sqrt_recursion - gives the pefect square of number
 *
 * @n: the parameter
 *
 * Return: teh square root
 */
int _sqrt_recursion(int n)
{
	return (is_sqr(n, 1));
}

/**
 * is_sqr - checks for the square root value
 *
 * @x: parameter one
 * @y: parameter two
 *
 * Return: the square root
 */
int is_sqr(int x, int y)
{
	if (y * y == x)
		return (y);
	else if ((x == y && y * y != x) || x <= 0)
		return (0);
	else
		return (is_sqr(x, y + 1));
}
