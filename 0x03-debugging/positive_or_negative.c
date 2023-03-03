#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - checks for the direction of a number
 * @i: digit in question
 * Returns (0) always sucess
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
