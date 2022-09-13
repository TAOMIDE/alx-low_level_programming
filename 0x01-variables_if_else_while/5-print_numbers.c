#include <stdio.h>

/**
 * main - Entry point
 * Printing a number in base 10 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base_10;

	for (base_10 = 0; base_10 < 10; base_10++)
	{
		printf("%d", base_10);
	}
	printf("\n");
	return (0);
}
