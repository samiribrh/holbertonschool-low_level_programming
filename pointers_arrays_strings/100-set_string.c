#include "main.h"

/**
*set_string - Assigns the value of a pointer to a char.
*@s: Given pointer
*@to: Given char
*
*Return: void.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
