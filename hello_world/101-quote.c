#include<stdio.h>
#include<unistd.h>

/**
*main - Writes specified text by for loop. Printf and Puts is restricted.
*
*Returns: Always 1.
*/
int main(void){
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,text,58);
	return (1);
}
