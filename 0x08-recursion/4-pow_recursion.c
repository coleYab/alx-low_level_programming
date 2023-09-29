#include "main.h"

/**
 * _pow_recursion - is the function same as pow
 *
 * @x: parameter one
 * @y: paramter two
 *
 * Return: the power of he number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
