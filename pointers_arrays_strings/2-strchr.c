#include "main.h"
#include <stdio.h>

/**
**_strchr - Locates first occurence of a characther in a string.
*@s: The string to be searched 
*@c: The character to be searched for
*
*Return: A pointer to the first occurence of character.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
		{
			s++;
		}
	}
	return (NULL);
}
