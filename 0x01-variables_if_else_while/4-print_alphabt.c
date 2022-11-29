#include <stdio.h>

/**
  * main - print all lowercase leters except q & e
  * Return: Always 0 (sucess)
  */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if ((letters != 'q') && (letters != 'e'))
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');

	return (0);
}
