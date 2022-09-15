#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char j;

	while (count++ <= 9)
	{
		for (j = 'a'; j <= 'z', j++)
			_putchar(j);
		_putchar('\n');
	}
}
