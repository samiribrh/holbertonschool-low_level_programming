#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
*malloc_checked - Allocates memory.
*@b: Size of the allocation
*
*Return: Pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
