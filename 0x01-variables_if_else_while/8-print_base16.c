#include <stdio.h>

/**
 * main - Entry point
 * Printing a number in base 16 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base_10;
	char letter;

	for (base_10 = 0; base_10 < 10; base_10++)
		putchar((base_10 % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
