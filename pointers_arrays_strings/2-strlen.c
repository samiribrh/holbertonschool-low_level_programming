#include "main.h"

/**
*_strlen - Calculates the length of string.
*@s: the string that should be calculated
*
*Return: Length of the string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
