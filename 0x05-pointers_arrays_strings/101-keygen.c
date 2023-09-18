#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password.
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int position = 0, total = 0, diff_half1, diff_half2;

	srand(time(0));
	while (total < 2772)
	{
		password[position] = 33 + rand() % 94;
		total += password[position++];
	}
	password[position] = '\0';
	if (total != 2772)
	{
		diff_half1 = (total - 2772) / 2;
		diff_half2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
		{
			diff_half1++;
		}
		for (position = 0; password[position]; position++)
		{
			if (password[position] >= (33 + diff_half1))
			{
				password[position] -= diff_half1;
				break;
			}
		}
		for (position = 0; password[position]; position++)
		{
			if (password[position] >= (33 + diff_half2))
			{
				password[position] -= diff_half2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
