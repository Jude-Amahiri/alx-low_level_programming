#include "main.h"

/**
  * print_line - Print's the _ character
  * @n: number of times to be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}


