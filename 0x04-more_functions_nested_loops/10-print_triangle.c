#include "main.h"

/**
  * print_triangle - use the character # to print the triangle
  * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int tri;
		int space;
		int hash;

		for (tri = 1; tri <= size; tri++)
		{
			for (space = 1; space <= (size - tri); space++)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= tri; hash++)
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
