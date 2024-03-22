#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers - Writes numbers.
*@separator: String between numbers
*@n: Number of numbers
*
*Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
