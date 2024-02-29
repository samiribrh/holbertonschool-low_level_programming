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
	int s = 0, i = 0;

	while (src[s] != 0)c
		s++;
	while ((src[i] != 0) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
