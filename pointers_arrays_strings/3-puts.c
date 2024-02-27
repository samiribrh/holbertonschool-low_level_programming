#include "main.h"

/**
*_puts - Writes the string.
*@str: the string that should be written.
*
*Return: void.
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i]);
	_putchar('\n');
}
