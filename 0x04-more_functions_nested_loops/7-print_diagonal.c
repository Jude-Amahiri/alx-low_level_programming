#include "main.h"

/**
 * print_diagonal - prints the \ character diagonally
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int row;
		int space;

		for (row = 1; row <= n; row++)
		{
			for (space = 1; space < row; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
