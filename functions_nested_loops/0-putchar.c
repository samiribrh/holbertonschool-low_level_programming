#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*main - Writes specified string.
*
*Return: Always 0.
*/
int main(void)
{
	char string[] = "_putchar";
	int l = strlen(s);
	int i;

	for (i = 0; i < l; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
