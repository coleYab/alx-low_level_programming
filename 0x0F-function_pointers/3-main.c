#include <string.h>
#include "3-calc.h"

/**
 * main - entery point
 * @argc: counts the argument
 * @argv: the argument vector
 *
 * Return: int to the calling system
 */
int main(int argc, char *argv[])
{
	int inta, intb;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
		argv[2][0] != '*' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

		inta = atoi(argv[1]);
		intb = atoi(argv[3]);

		printf("%d\n", (*get_op_func(argv[2]))(inta, intb));

		return (0);
}
