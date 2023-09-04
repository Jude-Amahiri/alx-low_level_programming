#include "main.h"

/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hours++;
	}
}

/* void jack_bauer(void)
{
    int hours;
    int minutes;

    for (hours = 00; hours <= 23; hours++)
    {
        for (minutes = 00; minutes <= 59; minutes++)
        {
            putchar((hours / 10) + '0');
            putchar((hours % 10) + '0');
            putchar(':');
            putchar((minutes / 10) + '0');
            putchar((minutes % 10) + '0');
            putchar('\n');
        }
    }
} */
