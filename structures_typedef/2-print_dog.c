#include <stdio.h>
#include "dog.h"

/**
*print_dog - Prints a variable of type struct dog.
*@d: The structure
*
*Return: void.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: ");
		!d->age ? printf("%f\n", 0.) : printf("%f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
