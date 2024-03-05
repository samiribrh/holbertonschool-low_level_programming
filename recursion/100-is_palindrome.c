#include "main.h"

int checker(char *s, char *d)
{
	if (*d != *s)
		return (0);
	if (*s == 0 && *d == 0)
		return 1;
	return (checker(s + 1, d - 1));
}

/**
*is_palindrome - Checks the string if it is palindrome.
*@s: The given string
*
*Return: 1 if the string is a palindrome
*	0 is the string is not a palindrome.
*/
int is_palindrome(char *s)
{
	int i, j;
	char *d = s;

	if (*s == 0)
		return 1;
	for (i = 0; s[i] != 0; i++)
		;
	return (checker(s, d + i - 1));
}
