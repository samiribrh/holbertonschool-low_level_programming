#include "main.h"
#include <stdio.h>

/**
*print_array - Writes the first n elements of an array.
*@a: the array that should be written
*@n: the size of elements
*
*Return: void.
*/
void print_array(int *a, int n);
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	_putchar('\n');
}
