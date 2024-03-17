#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_realloc - Reallocates memory.
*@ptr: Previous memory
*@old_size: Size of the previous memory
*@new_size: Desired new size
*
*Return: Pointer to the new memory,
*	NULL if fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newloc;
	int i = 0, our_size;

	if (new_size == old_size)
		return (ptr);
	else if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newloc = malloc(new_size);
	if (newloc == NULL)
		return (NULL);

	if (new_size >= old_size)
		our_size = old_size;
	else
		our_size = new_size;
	while (ptr != NULL && i < our_size)
	{
		*(newloc + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);

	return (newloc);
}
