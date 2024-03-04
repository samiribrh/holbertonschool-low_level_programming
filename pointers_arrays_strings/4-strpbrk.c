#include "main.h"
#include <stdio.h>
/**
**_strpbrk - Searches the string for any character from provided string.
*@s: The string to be searched
*@accept: Accepted characters
*
*Return: Location of the first occurence of the string.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
