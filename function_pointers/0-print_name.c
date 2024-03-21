#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - Writes the name.
*@name: Name that should be written
*@f: Function to print the name
*
*Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
