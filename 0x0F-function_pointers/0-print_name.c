#include "function_pointers.h"

/**
 * print_name - prints the name that is passed as argument
 * @name: the first parameter
 * @f: the functiopn pointer to a char
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
