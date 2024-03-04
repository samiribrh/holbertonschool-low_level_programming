#include "main.h"

/**
**_memset - Fills the memory with a constant byte.
*@s: Pointer that points memory area
*@b: Constant byte
*@n: Part of the memory to be filled
*
*Return: A pointer to the memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
