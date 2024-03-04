#include "main.h"
#include <stdio.h>

/**
*print_diagsums - Prints the sum of the two diagonals of a square matrix
*@a: Given matrix
*@size: Size of the given matrix
*
*Return: void.
*/
void print_diagsums(int *a, int size)
{
	int i = 0, l = 0, r = 0;

	while (i < size)
	{
		l += a[i * size + i];
		r += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", l, r);
}
