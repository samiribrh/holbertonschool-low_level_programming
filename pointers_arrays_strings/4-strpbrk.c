#include "main.h"
#include <stdio.h>
/**
*_strspn - Searches the string for any character from provided string.
*@s: The string to be searched
*@accept: Accepted characters
*
*Return: Number of bytes in the segment.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\n')
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
