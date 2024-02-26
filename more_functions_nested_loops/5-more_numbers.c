#include "main.h"

/**
*more_numbers - Writes numbers from 0 to 14 10 times.
*
*Return: void
*/
void more_numbers(void)
{
	int i, n = 0;
	
	while (n < 10)
	{
		for (i = 0; i < 15; i++)
		{
			
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');

		}
		_putchar('\n');
		n++;
	}
}
