#include "main.h"

/**
 *
 */
void print_num(int n)
{
	if (n == 0)
		return;
	print_num(n / 2);
	printf("%d", n % 2);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number that should be converted
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	else
		print_num(n);
}
