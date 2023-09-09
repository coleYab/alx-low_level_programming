#include <stdio.h>

/**
 * main - Entry point printing the combination of three numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fir_num;
	int seco_num;
	int thir_num;

	for (fir_num = 48; fir_num <= 57; fir_num++)
	{
		for (seco_num = 48; seco_num <= 57; seco_num++)
		{
			for (thir_num = 48; thir_num <= 57; thir_num++)
			{
				if ((thir_num > fir_num) && (thir_num > seco_num) && (seco_num > fir_num))
				{
					putchar(fir_num);
					putchar(seco_num);
					putchar(thir_num);
					if ((fir_num == 55) && (seco_num == 56) && (thir_num == 57))
					{
						putchar('\n');
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
