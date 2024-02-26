#include "main.h"

/**
*_isupper - Checks the characther for uppercase.
*@c: Characther to be checked
*
*Return: 1 if c is uppercase
*	0 otherwise
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
