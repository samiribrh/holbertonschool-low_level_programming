#include "main.h"

/**
*_print_rev_recursion - Prints a string in reverse.
*@s: The given string
*
*Return: void.
*/
void _print_rev_recursion(char *s);
{
	if (*s == '\0')
		return;
	else
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}