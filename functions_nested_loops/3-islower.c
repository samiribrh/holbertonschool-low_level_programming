#include <stdio.h>
#include "main.h"

/**
*_islower - Checks if the characther is lowercase.
*@c: The letter to be checked.
*
*Return: 1 if characther is lowercase.
*	0 if characther is not lowercase.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
