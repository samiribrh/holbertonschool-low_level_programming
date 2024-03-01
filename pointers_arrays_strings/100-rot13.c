#include <stdio.h>

/**
**rot13 - Applies rot13 cipher to the text.
*@s: The string to be changed
*
*Return: Substituted text.
*/
char *rot13(char *s)
{
	int i, key = 13;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] + key > 122)
		{
			s[i] -= 13;
		}
		else
		{
			s[i] += key;
		}
	}
	return (s);
}
