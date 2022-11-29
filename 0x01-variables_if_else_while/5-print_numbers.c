#include <stdio.h>

/**
  * main - print all single digits of base 10
  * Return: Always 0 Sucess
  */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');
	return (0);
}
