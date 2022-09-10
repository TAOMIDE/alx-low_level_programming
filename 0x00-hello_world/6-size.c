#include<stdio.h>
/**
 * main - prints the size of variouus data type
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char character_type
	int integer_type
	long int longinteger_type
	long long int  big_longtype
	float fractional_type
	printf("size of char : %lu byte(s)\n", sizeof(char));
	printf("size of int : %lu byte(s)\n", sizeof(int));
	printf("size of long : %lu byte(s)\n", sizeof(long int));
	printf("size of long long : %lu byte(s)\n", sizeof(long long int));
	printf("size of float : %lu byte(s)\n", sizeof(float));
	return (0);
}
