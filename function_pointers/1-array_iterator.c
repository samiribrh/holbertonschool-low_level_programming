#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - Executes given function with elements of given array.
*@array: Given array
*@size: Size of the array
*@action: Action for array
*
*Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
