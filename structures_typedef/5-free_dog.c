#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*free_dog - Frees struct dog.
*@d: Structure
*
*Return: void.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
