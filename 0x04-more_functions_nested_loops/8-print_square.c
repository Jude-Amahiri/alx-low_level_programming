#include "main.h"

/**
  * print_square - Prints the character #
  * @size: character to be printed
 */

void print_square(int size)
{
	if (size > 0)
	{
		int row;
		int column;

		for (column = 0; column < size; column++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
