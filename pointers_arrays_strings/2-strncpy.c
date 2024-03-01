#include "main.h"

/**
**_strncpy -  Copies two strings.
*@dest: Destination string
*@src: String to be copied
*@n: Size of the part of src which should be copied
*
*Return: Copied string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[d] != 0)
		d++;
	while ((src[i] != 0) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i != d)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
