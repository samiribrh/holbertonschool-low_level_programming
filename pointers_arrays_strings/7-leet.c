#include "main.h"

/**
**leet - Encodes string to 1337.
*@s: String to be changed
*
*Return: Encoded string.
*/
char *leet(char *s)
{
	int i = 0, j = 0;
	char numbers[] = "43071";
	char bigletters[] = "AEOTL";
	char smallletters[] = "aeotl";

	for (i = 0; s[i]; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if (s[i] == bigletters[j] || s[i] == smallletters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
