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
	int i = 0;

	while ((s1[i] != 0) && (s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return 0;
		i++;
	}
	if ((s1[i] == 0) ^ (s2[i] == 0))
		return 0;
	return 1;
}
