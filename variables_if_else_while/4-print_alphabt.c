#include <stdio.h>

/**
*main - Writes alphabet in lowercase except letters 'q' and 'e'.
*
*Return: Always 0.
*/
int main(void)
{
	char n = 'a';
	
	while (n != '{')
	{
		if (n != 'q' || n != 'e')
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
