#include <stdio.h>
#include "main.h"

/**
*main - Writes specified string.
*
*Return: Always 0.
*/
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
