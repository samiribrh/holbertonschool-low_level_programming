#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
*get_op_func - Selects the correct operation.
*@s: Operater passed as an argument
*
*Return: Pointer to the corresponding function.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};
    	int i;
	
	while (i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
