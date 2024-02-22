#include <stdio.h>

/**
*main - Writess all possible combinations of two two-digit numbers.
*
*Return: Always 0.
*/
int main(void)
{
	int f = 48;
	int s = 0, t = 0, fr = 1;

	while (f < 58)
	{
		while (s < 57)
		{
			while (t < 58)
			{
				fr = 48;
				while (fr < 58)
				{
					
					putchar(t);
					putchar(fr);
					fr++;
				}
				t++;
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
