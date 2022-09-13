#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * description: prints minute
 * Return: void
 */
void jack_bauer(void)
{
	int hours_tens, hours_ones, minute_tens, minute_ones, hours_max;

	hours_max = 58;
	hours_tens = '0';
	while (hours_tens < '3')
	{
		if (hours_tens == '2')
		{
			hours_max = '4';
		}
		hours_ones = '0';
		while (hours_ones < hours_max)
		{
			minute_tens = '0';
			while (minute_ones < '6')
			{
				minute_ones = '0';
				while (minute_ones < 58)
				{
					_putchar(hours_tens);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(minute_tens);
					_putchar(minute_ones);
					_putchar('\n');
					minute_ones++;
				}
				minute_ones = '0';
				minute_tens++;
			}
			minute_tens = '0';
			hours_ones++;
		}
		hours_ones = '0';
		hours_tens++;
	}
}
