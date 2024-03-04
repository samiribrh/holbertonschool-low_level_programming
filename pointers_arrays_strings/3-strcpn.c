#include "main.h"

/**
*_strspn - Finds length of a prefix substring
*@s: The string to be searched
*@accept: Accepted characters
*
*Return: Number of bytes in the segment.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i, found;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				n++;
				s++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (n);
}
