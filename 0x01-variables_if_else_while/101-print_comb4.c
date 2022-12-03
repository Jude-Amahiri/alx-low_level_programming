#include <stdio.h>

/**
 * main - print all combination of three different digits
 * Return: Always 0 (Success)
*/

int main(void)
{
	int hundreds = '0', tens, ones;

	while (hundreds <= '9')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
			putchar(hundreds);
			putchar(tens);
			putchar(ones);

			if (hundreds != '7')
			{
				putchar(',');
				putchar(' ');
			}

			ones++;
			}

		tens++;
		}

	hundreds++;
	}

	putchar('\n');

	return (0);
}
