#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char tfk;

	for (tfk = 'a'; tfk <= 'z'; tfk++)
	{
		putchar(tfk);
	}
	for (tfk = 'A'; tfk <= 'Z'; tfk++)
	{
		putchar(tfk);
	}
	putchar('\n');
	return (0);
}
