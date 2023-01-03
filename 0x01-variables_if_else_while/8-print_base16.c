#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int hex = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (hex <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);
}
