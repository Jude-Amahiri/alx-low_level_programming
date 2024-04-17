#include "main.h"

/**
  * print_triangle - use the character # to print the triangle
  * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int row;
		int space;
		int hash;

		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= (size - row); space++)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= row; hash++)
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
