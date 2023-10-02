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
	int cents, tot_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		tot_coin += 1;
	}
	printf("%d\n", tot_coin);

	return (0);
}
