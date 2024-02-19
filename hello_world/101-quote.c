#include<stdio.h>

/**
*main - Outputs specified text by for loop. Printf and Puts is restricted.
*
*Returns: Always 1.
*/
int main(void){
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int l = strlen(string);
	for(int i=0;i<l;i++)
	{
		putchar(string[i]);
	}
	return (1);
}
