#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments Vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
