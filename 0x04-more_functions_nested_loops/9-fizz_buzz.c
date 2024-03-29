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

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%i", n);

		if (n < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
