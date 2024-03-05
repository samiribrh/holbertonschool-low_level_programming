#include "main.h"

/**
*strlength - Calculates the size of a string
*@s: Given string
*
*Return: Length of the string
*/
int strlength(char *s)
{
	if (*s == 0)
		return 0;
	return (1 + strlength*(*(s + 1));
}

/**
*checker - Checks the string if it is palindrome.
*@s: The given string
*@d: Reversed string
*
*Return: 1 if the string is a palindrome
*       0 is the string is not a palindrome.
*/
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
	int i;
	char *d = s;

	if (*s == 0)
		return 1;
	i = strlength(s);
	return (checker(s, d + i - 1));
}
