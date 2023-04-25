#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	int row, digit;

	for (row = 0; row <= 10; row++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 0)
			{
				_putchar((digit / 10) + '0');
			}
		}
		_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
