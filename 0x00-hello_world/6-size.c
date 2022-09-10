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
	printf("size of char : %lu byte(s)\n", sizeof(character_type));
	printf("size of int : %lu byte(s)\n", sizeof(integer_type));
	printf("size of long : %lu byte(s)\n", sizeof(longinteger_type));
	printf("size of long long : %lu byte(s)\n", sizeof(big_longtype));
	printf("size of float : %lu byte(s)\n", sizeof(fractional_type));
	return (0);
}
