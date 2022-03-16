#include "main.h"

/**
 * jack_bauer - Print time.
 *
 * Description: Print hours & minutes in
 * 00:00 format from 00:00 - 23:59.
 */
void jack_bauer(void)
{
	int minutes;
	int hours = 0;

	while (hours <= 23)
	{
		minutes = 0;

		while (minutes <= 59)
		{
			_putchar(((hours / 10) % 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar(((minutes / 10) % 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
