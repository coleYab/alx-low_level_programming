#include "3-calc.h"
/**
 * op_add - the sum of the operation
 *
 * @a: The operator
 * @b: The function associated
 * Return: return the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the difference
 *
 * @a: the operator
 * @b: other operator
 * Return: int difference of number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the multiple
 *
 * @a: the operator
 * @b: other operator
 * Return: multiple of number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calucates the division
 *
 * @a: the operator
 * @b: other operator
 * Return: the dividend of a number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the mod of a number
 *
 * @a: the operator
 * @b: other operator
 * Return: integer to the calling system
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
