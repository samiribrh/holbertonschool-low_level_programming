#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index - Searches for an integer.
*@array: Given array
*@size: Size of the given array
*@cmp: Comparing function
*
*Return: Index of the integer in array,
*	-1 if fails.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(arr[i]) > 0)
			return (i);
	}
}
