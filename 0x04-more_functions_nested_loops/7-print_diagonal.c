#include "main.h"

/**
 * print_diagonal - prints the \ character diagonally
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int line;
		int space;

		for (line = 1; line <= n; line++)
		{
			for (space = 1; space < line; space++)
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
