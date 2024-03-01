#include <stdio.h>

/**
**rot13 - Applies rot13 cipher to the text.
*@s: The string to be changed
*
*Return: Substituted text.
*/
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
			{
				s[i] = s[i] + 13;
				break;
			}
			s[i] = s[i] - 13;
			break;
		}
	}
	return (s);
}
