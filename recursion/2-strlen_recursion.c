#include "main.h"

/**
*_strlen_recursion - Finds the length of a string.
*@s: The given string
*
*Return: Length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return 0;
	return 1 + _strlen_recursion(s + 1);
}
