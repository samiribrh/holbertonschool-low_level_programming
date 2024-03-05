#include "main.h"

/**
*_pow_recursion - Calculates the power.
*@x: Value to be raised to power
*@y: The value in power
*
*Return: Result of the power.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
