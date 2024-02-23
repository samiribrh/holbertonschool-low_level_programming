#include <stdio.h>
#include "main.h"

/**
*times_table - Writes the n times table.
*@n: size of the table
*
*Return: void.
*/
void print_times_table(int n)
{
	int i, j, r, d1, d2, d3;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				r = i * j;
				d1 = r % 10 + '0';
				d2 = (r / 10) % 10 + '0';
				d3 = (r / 100) + '0';

				if (j != 0) 
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((r < 10) ? ' ' : (r < 100) ? ' ' : d3);
				_putchar((r < 10) ? ' ' : (r < 100) ? d2 : d2);
				_putchar(d1);
			}
			_putchar('\n');
		}
	}
}
