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
	char scopy[100];

	while (s[i] != '\0')
	{
		scopy[i] = s[i];
		i++;
	}
	scopy[i] = '\0';
	while (i != 0)
	{
		i--;
		s[j] = scopy[i];
		j++;
	}
}
