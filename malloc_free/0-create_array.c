#include <stdio.h>
#include "main.h"

/**
*create_array - Creates an array of char.
*@size: Size of the array should be created
*@c: Elements of array
*
*Return: 0 if size equals to 0,
*	a pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	return (ptr);
}
