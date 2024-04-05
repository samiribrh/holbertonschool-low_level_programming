#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number that should be converted
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int buffer[32];
	int i = 0, j;
	if (n == 0)
	{
		printf("0");
		return;
	}
	while (n > 0)
	{
		buffer[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d", buffer[j]);
}
