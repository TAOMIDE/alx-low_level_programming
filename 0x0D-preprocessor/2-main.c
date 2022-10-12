#include <stdio.h>
/**
 * main - Program compilation starts from the main
 * Description: this program prints the name of the file it was comipiled from
 * Author: Akinbami Taofeek Olamide
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
