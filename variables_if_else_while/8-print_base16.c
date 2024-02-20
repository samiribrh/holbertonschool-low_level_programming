#include <stdio.h>

/**
*main - Writes all single digit hexadecimal numbers.
*
*Return: Always 0.
*/
int main(void)
{
	int digit = 0;

	while (digit < 16)
	{
		if (digit >= 0 && digit <= 9)
			putchar('0' + digit);
		else
			putchar('a' + digit - 10);
		digit++;
	}
	putchar('\n');
	return (0);
}
