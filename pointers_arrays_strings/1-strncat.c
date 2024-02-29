#include "main.h"

/**
**_strncat -  Appends two strings.
*@dest: Destination string
*@src: String to be appended
*@n: Size of the part of src which should be appended
*
*Return: Appended string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, i = 0;

	while (dest[d] != 0)
		d++;
	while ((src[i] != 0) && (i < n))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = 0;
	return (dest);
}
