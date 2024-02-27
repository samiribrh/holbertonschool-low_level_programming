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

	while (s[i] != '\0')
		i++;
	if (!*s)
		return;
	while (i != 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
