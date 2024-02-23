#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The letter to be checked
 *
 * Return: 1 if the characther is alphabetic.
 *	0 if the characther is not alphabetic.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
