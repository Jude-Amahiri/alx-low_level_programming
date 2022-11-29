#include <stdio.h>

/**
  * main - print alphabets
  * Return: always 0 (sucess)
  */

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z') /* print lowercase a-z */
	{
		putchar(alpha);
		alpha++;

	}

	while (ALPHA <= 'Z') /* print uppercase A-Z */
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');

	return (0);
}
