#include <stdio.h>

/**
*main - Writes all single digit numbers of base 10.
*
*Return: Always 0.
*/
int main(void)
{
	char n = '0';

	while (n != ':')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
