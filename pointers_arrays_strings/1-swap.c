#include "main.h"

/**
*swap_int - Changes the values of two integers.
*@a: the first integer
*@b: the second integer
*
*Return: void.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
