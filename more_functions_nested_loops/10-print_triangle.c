#include "main.h"

/**
*print_triangle - Draws triangle.
*@size: size of the triangle
*
*Return: void.
*/
void print_triangle(int size)
{
	int s, n, h = 0;

	if (size > 0)
	{
		while (h < size)
		{
			for (s = 0; s < size - h - 1; s++)
				_putchar(' ');
			for (n = 0; n < h + 1; n++)
				_putchar('#');
			_putchar('\n');
			h++;
		}
	}
	else
		_putchar('\n');
}
