#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Alx Africa students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "aHello";
	char s2[] = "aWorld!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
