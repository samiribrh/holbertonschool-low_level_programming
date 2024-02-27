#include "main.h"

/**
**_strcpy - Copies one string to another by pointers.
*@dest: destination string
*@src: source string
*
*Return: The pointer to destination string.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
