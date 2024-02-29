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
	int d = 0, i = 0;

	while (dest[d] != 0)
		d++;
	while (src[i] != 0)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = 0;
	return (dest);
}
