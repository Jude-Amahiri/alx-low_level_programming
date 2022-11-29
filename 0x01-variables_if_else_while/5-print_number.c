#include <stdio.h>

/**
  * main - print all single digits of base 10
  * Return: Always 0 Sucess
  */

int main(void)
{
	int dig = '1';

	while (dig < '10')
	{
		printf("%i\n", dig);
		dig++;
	}
	return (0);
}
