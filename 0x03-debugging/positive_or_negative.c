#include <main.h>

/**
 * positive_or_negative - Checks for direction
 * @i: Digit in question
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%i is positive\i", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\i", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\i", i);
	}
}
