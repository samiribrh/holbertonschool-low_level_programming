#include "main.h"

/**
*wildcmp - Compares two strings.
*@s1: The first string
*@s2: The second string
*
*Return: 1 if strings are identical
*	0 if strings are not identical.
*/
int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
