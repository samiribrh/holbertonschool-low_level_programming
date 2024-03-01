#include "main.h"

/**
**string_toupper - Changes the lowercase letters of a string to upper.
*@s: String to be changed
*
*Return: Uppercased string.
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (*s)
	{
		if ((*s >= 'a') && (*s <= 'z'))
			*s -= 32;
		s++;
		i++;
	}
	return (s - i);
}
