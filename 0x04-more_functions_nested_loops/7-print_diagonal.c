#include "main.h"

/**
  * print_diagonal - prints the \ character diagonally
  * @n: character to be printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int line;
		int space;

		while (line <= n)
		{
			while (space < line)
			{
				_putchar(' ');
				_putchar('\\';
				_putchar('\n');

				space++;
			}

			line++;
		}
	}
	else
		_putchar('\n');
}
