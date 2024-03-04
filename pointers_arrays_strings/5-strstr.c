#include "main.h"
#include <stdio.h>
/**
**_strstr - Searches the string for provided string.
*@haystack: The string to be searched
*@needle: Accepted string
*
*Return: Beginning location of the first occurence of the string.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*(haystack + i) == needle[i])
			{
				if (needle[i + 1] != '\0')
					continue;
				else
					return (haystack);
			}
			else
			{
				break;
			}
		}
		haystack++;
	}
	return (NULL);
}
