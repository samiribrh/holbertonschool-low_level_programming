#include <stdio.h>

/**
*main - Writes reverse alphabet in lowercase.
*
*Return: Always 0.
*/
int main(void)
{
	char n = 'z';

	while (n != '`')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
