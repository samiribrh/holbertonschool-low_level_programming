#include "main.h"

/**
*_puts - Writes the string.
*@str: the string that should be written.
*
*Return: void.
*/
void _puts(char *str);
{
	int l = _strlen(&str);
	int i;

	for (i = 0; i < l + 1; i++)
		_putchar(str[i]);
}
