#include "main.h"

/**
*puts_half - Writes the second half of the string.
*@str: the string that should be written.
*
*Return: void.
*/
void puts_half(char *str)
{
	int i = 0;
	int  l;

	while (str[i] != '\0')
	{
		i++;
	}
	l = i;
	if (l % 2 == 1)
	{
		l++;	
	}
	i /= 2;
	while(i != l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
