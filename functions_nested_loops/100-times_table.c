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
	int i, j, result;

	if (n <= 15 && n >= 0)
	{

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				print_result(j, n, result);
			}
			_putchar('\n');
		}
	}
}

/**
*print_result - Writes the numbers.
*@j: the number of column
*@n: the size of table
*@result: the number that should be printed.
*
*Return: void.
*/
void print_result(int j, int n, int result)
{
	if (result < 10)
	{
		if (j != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(result + '0');
	}
	else if (result < 100)
	{
		_putchar(' ');
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	else
	{
		_putchar((result / 100) + '0');
		_putchar((result / 10 % 10) + '0');
		_putchar((result % 10) + '0');
	}
	if (j < n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
