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
	char scopy[] = "";

	while (*s)
	{
		scopy[i] = *s;
		i++;
	}
	i--;
	while (i != 0)
	{
		s[j] = scopy[i];
		i--;
		j++;
	}
}
