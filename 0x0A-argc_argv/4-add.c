#include "main.h"

/**
 * main - is the main function
 * @argc: is the argument count
 * @argv: is the argument vector
 *
 * Return: always zero
*/
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
