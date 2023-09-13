#include "main.h"

/**
 * jack_bauer - prints all the hours of hte day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hour_1;
	int hour_2;
	int minute_1;
	int minute_2;
	int hour_limit = 9;

	for (hour_1 = 0; hour_1 <= 2; hour_1++)
	{
		if (hour_1 == 2)
			hour_limit = 3;
		for (hour_2 = 0; hour_2 <= hour_limit; hour_2++)
			for (minute_1 = 0; minute_1 <= 5; minute_1++)
				for (minute_2 = 0; minute_2 <= 9; minute_2++)
				{
					_putchar(hour_1 + '0');
					_putchar(hour_2 + '0');
					_putchar(':');
					_putchar(minute_1 + '0');
					_putchar(minute_2 + '0');
					_putchar('\n');
				}
	}
}
