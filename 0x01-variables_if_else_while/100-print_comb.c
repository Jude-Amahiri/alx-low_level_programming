#include <stdio.h>

/* Main: print 0-99
 * Return: Sucess
*/

int main(void)
{
	int tens = '0', ones;

	while (tens <= '9')
	{
		ones = tens + 1;
		while (ones <= '9')
		{
			putchar(tens);
			putchar(ones);
			
			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
			
			ones++;
		}

		tens++;
	}

	putchar('\n');

	return (0);
}
