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
	if (i == 0)
		break;
	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
