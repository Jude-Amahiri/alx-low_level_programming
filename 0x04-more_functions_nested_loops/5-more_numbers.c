#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	int row, digit;

	for (row = 0; row <= 9; row++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
			{
				_putchar((digit / 10) + '0');
			}
		_putchar((digit % 10) + '0');
		}
	_putchar('\n');
	}

}
