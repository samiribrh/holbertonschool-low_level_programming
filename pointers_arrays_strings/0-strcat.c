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
	int i = 0;

	while (*dest)
	{
		i++;
		dest++;
	}
	while (*src)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
