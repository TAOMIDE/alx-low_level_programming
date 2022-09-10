#include<stdio.h>
/**
 * main - prints the size of variouus data type
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int integer_type
	float float_type
	long longtype_integer
	long long longlongtype_integer
	char character_type
	printf("size of int : %lu byte(s)\n", sizeof(integer_type));
	printf("size of float : %lu byte(s)\n", sizeof(float_type));
	printf("size of long : %lu byte(s)\n", sizeof(longtype_integer));
	printf("size of long long : %lu byte(s)\n", sizeof(longlongtype_integer));
	printf("size of char : %lu byte(s)\n", sizeof(character_type));
	return (0);
}
