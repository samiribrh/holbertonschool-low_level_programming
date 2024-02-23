#include <stdio.h>
#include "main.h"

/**
*print_sign - Writes the sign of a number.
*@n: The number to be checked
*
*Return: 1 if number is positive
*	0 if number is zero
*	-1 if number is negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
