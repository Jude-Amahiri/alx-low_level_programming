#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer r
 *
 * Return: Pointer to the result if successful, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum, carry = 0;

	/* Calculate the lengths of n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Ensure that there is enough space in the buffer */
	if (len1 + len2 + 1 > size_r)
		return (0);

	/* Perform addition from right to left */
	r[len1 + len2] = '\0';
	len1--;
	len2--;
	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';
		r[len1 + len2 + 1] = (sum % 10) + '0';
		carry = sum / 10;
		len1--;
		len2--;
	}

	/* Check for any remaining carry */
	if (carry != 0)
	{
		/* Check if there is enough space for the carry */
		if (len1 + len2 + 2 > size_r)
			return (0);
		r[0] = carry + '0';
		return (r);
	}

	/* Return a pointer to the result */
	return (r + 1);
}

