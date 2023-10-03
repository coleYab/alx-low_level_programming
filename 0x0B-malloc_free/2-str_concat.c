#include "main.h"

/**
 * str_concat - is the function to do sth
 * @s1: the first string parameter
 * @s2: the second string parameter
 * Return: the memeory location of the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len = 0, i, j;
	char *copy;

	if (s1 == NULL && s2 == NULL)
	{
		char *empty = malloc(1);

		if (empty == NULL)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;

	copy = malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[i]; i++, j++)
		copy[i] = s1[i];
	for (i = 0; s2[i]; i++, j++)
		copy[j] = s2[i];

	copy[j] = '\0';

	return (copy);
}
