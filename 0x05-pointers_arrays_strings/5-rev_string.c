
#include "main.h"
/**
 * rev_string - gves the reverse of the output of the string
 * @s: the array given
 *
 * Return: 0 in success
 */

void rev_string(char *s)
{
	int length = 0, m, n;
	char d;

	while (s[length] != '\0')
	{
		length++;
	}
	n = length - 1;
	for (m = 0; n >= 0 && m < n; n--, m++)
	{
		d = s[m];
		s[m] = s[n];
		s[n] = d;
	}
}
