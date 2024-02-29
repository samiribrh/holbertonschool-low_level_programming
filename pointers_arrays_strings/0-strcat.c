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
	int s = 0, d = 0, i = 0;

	while (*src)
	{
		s++;
		src++;
	}
	while (*dest)
	{
		d++;
		dest++;
	}
	while (src[i] != 0)
	{
		dest[d + i] = src[i];
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
