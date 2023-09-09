#include <stdio.h>

/**
 * main - printing the alphabets in esrever
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
