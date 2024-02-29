#include "main.h"

/**
**_strcat -  Appends two strings.
*@dest: Destination string
*@src: String to be appended
*
*Return: Appended string.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*src)
	{
		i++;
		src++;
	}
	while (j != i)
	{
		dest[i + j] = *src;
		src++;
		j++;
	}
	*(dest + j) = 0;
	return (dest);
}
