#include "main.h"

/**
 * _atoi - Searchs intiger from string.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int myValue = 0;
	int is_found = 0;
	int count = 0;
	int isMinus = 1;

	while (*s)
	{
		if (*s == '-' && (*(s + 1) >= '0' && *(s + 1) <= '9'))
			isMinus = -1;

		if (*s >= '0' && *s <= '9')
		{
			if (count == 0)
				myValue = (int)(*s - '0');
			else
				myValue = myValue * 10 + (*s - '0');

			is_found = 1;
		}

		if ((*s < '0' || *s > '9') && is_found == 1)
			break;

		s++;
		count++;
	}

	return (isMinus * myValue);
}
