#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int row = 0;

	while (row <= 9)
	{
		int column = 0;

		while (column <= 9)
		{
			int product = column * row;

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}

			column++;
		}
		_putchar('\n');

		row++;
	}
}
