#include "main.h"

/**
**_strncpy -  Compares two strings.
*@s1: String number 1
*@s2: String number 2
*
*Return: 1 if strings are equal
*	0 if strings are not equal.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
