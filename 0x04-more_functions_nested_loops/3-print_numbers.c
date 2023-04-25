#include "main.h"

/*
 * File: 0-isupper.c
 * Auth: Jude Amahiri
 */

/**
 * print_numbers(void) - prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
