#include <stdio.h>

/**
 * main -Entry point
 * Author: Taofeek
 * Date: 12-09-2022
 * Details: c program that print +ve, zero and -ve value of a random number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
