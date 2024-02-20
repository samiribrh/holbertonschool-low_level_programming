#include <stdio.h>

/**
*main - Writes alphabet in lowercase then in uppercase.
*
*Return: Always 0.
*/
int main(void)
{
	char n = 'a';

	while (n != '{')
	{
		putchar(n);
		n++;
	}
	n = 'A';
	while ( n != '[')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
