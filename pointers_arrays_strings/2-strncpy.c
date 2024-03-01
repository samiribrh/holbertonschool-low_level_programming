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
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
