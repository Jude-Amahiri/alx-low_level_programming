#include <stdio.h>

/**
 * main - print sum of even Fibonacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_of_evens = 0;
	int prev;
	int next;
	int sum = 1;

	prev = 1;
	next = 1;

<<<<<<< HEAD
	while (next < 4000000)
=======
	while (next <= 4000000)
>>>>>>> 3c797cbff59ac2e16eb41a464f57581da12ffe8a
	{
		sum = prev + next;
		prev = next;
		next = sum;
		if (sum % 2 == 0)
			sum_of_evens += sum;
	}
	printf("%d\n", sum_of_evens);

	return (0);
}
