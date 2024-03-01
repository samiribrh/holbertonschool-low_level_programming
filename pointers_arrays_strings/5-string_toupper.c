#include "main.h"

/**
**string_toupper - Changes the lowercase letters of a string to upper.
*@s: String to be changed
*
*Return: Uppercased string.
*/
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (s);
}
