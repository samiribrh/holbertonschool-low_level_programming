#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to be checked
 *
 * Return: The absolute value of the number.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
