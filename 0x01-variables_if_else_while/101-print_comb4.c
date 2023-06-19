#include <stdio.h>

/**
 * main - print all combination of three different digits
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;

		if (a != b && a != c && b != c && b > a && c > b)
		{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');

		if (i < 789)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		}

	putchar('\n');

	return (0);
}
