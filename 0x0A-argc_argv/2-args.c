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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
