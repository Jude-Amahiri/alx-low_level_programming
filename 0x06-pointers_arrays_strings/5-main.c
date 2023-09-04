#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Alx Africa students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Alx Africa!\n";
	char *p;

	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
