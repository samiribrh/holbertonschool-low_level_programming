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

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
