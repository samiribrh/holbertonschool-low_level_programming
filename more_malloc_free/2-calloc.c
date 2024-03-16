#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*_calloc - Allocates memory for an array.
*@nmemb: Element number of array.
*@size: Size of array element.
*
*Return: Pointer to the allocated memory,
*	NULL if fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalsize, i;
	char *array;

	totalsize = nmemb * size;
	if (totalsize == 0)
		return (NULL);

	array = malloc(totalsize);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < totalsize; i++)
		*(array + i) = 0;
	return (array);
}
