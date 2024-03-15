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

/**
*main - Main function.
*
*Return: 0.
*/
int main(void)
{
	void *ptr = malloc_checked(13);

	return (0);
}
