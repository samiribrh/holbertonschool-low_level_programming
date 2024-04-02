#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*premain: Writes the given string before main function starts.
*
*Return: void.
*/
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
