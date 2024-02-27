#include "main.h"

/**
*print_rev - Writes the string in reverse.
*@s: the string that should be written.
*
*Return: void.
*/
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
