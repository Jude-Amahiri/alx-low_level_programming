#include <stdio.h>

/**
 * main - print all combination of three different digits
 * Return: Always 0 (Success)
*/

int main(void)
{
	int tens, ones, tt, oo;

	tens = '0';
	while (tens <= '9')
	{
		ones = '0';
		while (ones <= '9')
		{
			tt = tens;
			while (tt <= '9')
			{
				oo = ones + 1;
				while (oo <= '9')
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(tt);
					putchar(oo);

					if (!((tens == '9' && ones == '8') && (tt == '9' && oo == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				oo++;
				}

			oo == '0';
			tt++;
			}

		ones++;
		}

	tens++;
	}

	putchar('\n');

	return (0);
}
