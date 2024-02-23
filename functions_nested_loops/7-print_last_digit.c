#include <stdio.h>
#include "main.h"

/**
*print_last_digit - Writes the last digit of a number.
*@n: The number to be checked
*
*Return: The last digit of the number.
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		int minusn = n % 10;
		int digit = minusn * -1;

		_putchar(digit + 48);
		return (digit);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
