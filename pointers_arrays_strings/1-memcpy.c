#include "main.h"

/**
**_memcpy - Copies the memory area.
*@dest: Pointer that points destination memory area
*@src: Pointer that points source memory area
*@n: Part of the memory to be copied
*
*Return: A pointer to the memory area.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
