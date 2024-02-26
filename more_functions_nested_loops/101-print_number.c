#include "main.h"

/**
*print_number - Writes the given integer.
*@n: the integer that should be printed.
*
*Return: void.
*/
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while ((n / i) / 10 != 0)
	{
		i *= 10;
	}
	for (; i != 1; i /= 10)
	{
		_putchar((n / i) + '0');
		n = n % i;
	}
	_putchar((n % 10) + '0');
}

