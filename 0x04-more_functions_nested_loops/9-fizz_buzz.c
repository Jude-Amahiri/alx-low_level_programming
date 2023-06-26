#include <stdio.h>

/**
  * main - prints 1 to 100, followed by a new line.
  * multiples of three print Fizz
  * multiples of five print Buzz.
  * multiples of both three and five print FizzBuzz
  * Return: (0)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3)
		{
			printf("Fizz");
		}
		else if (n % 5)
		{
			printf("Buzz");
		}
		else if ((n % 3) && (n & 5))
		{
			printf("FizzBuzz");
		}
		else
			printf("%i", n);
	}
	printf("\n");

	return (0);
}
