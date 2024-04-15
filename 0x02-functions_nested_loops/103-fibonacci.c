#include <stdio.h>

/**
 * main - print sum of even Fibonacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sumOfEvenFibonacci = 0;
	int previousNumber = 1;
	int currentNumber = 1;
	int nextNumber;

	while (currentNumber <= 4000000)
	{
		nextNumber = previousNumber + currentNumber;
		previousNumber = currentNumber;
		currentNumber = nextNumber;

		if (currentNumber % 2 == 0)
		{
			sumOfEvenFibonacci += currentNumber;
		}
	}
	printf("Sum of even Fibonacci numbers: %d\n", sumOfEvenFibonacci);

	return (0);
}
