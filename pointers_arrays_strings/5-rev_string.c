#include "main.h"

/**
*rev_string - Reverses the string.
*@s: the string that should be reversed.
*
*Return: void.
*/
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		s[i] = s[j]
		i--;
		j++;
	}
}
