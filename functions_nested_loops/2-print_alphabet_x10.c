#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - Writes alphabet in lowercase 10 times.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
