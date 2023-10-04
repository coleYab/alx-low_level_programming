#include "main.h"

/**
 * argstostr - this concatinates all the command line argments
 * @ac: counter to cl arguments
 * @av: it is simply argument vector
 * Return: the memoty adress of the thing
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int total_len = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}
	total_len++;

	arg_concat = malloc(total_len * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			arg_concat[k] = av[i][j];
		}
		arg_concat[k] = '\n';
		k++;
	}
	return (arg_concat);
}

