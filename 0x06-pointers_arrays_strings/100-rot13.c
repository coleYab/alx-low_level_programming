#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: string to encode
 *
 * Return: address of s
 */
char *rot13(char *str)
{
	int i, j;
	char source[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char destnation[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (source[j] == *(str + i))
			{
				*(str + i) = destnation[j];
				break;
			}
		}
	}
	return (str);
}
