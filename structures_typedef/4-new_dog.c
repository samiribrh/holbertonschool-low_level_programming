#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*new_dog - Creates a struct dog.
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
*
*Return: The structed variable,
*	NULL if fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenName = 0, lenOwner = 0, i;

	while (*(name + lenName))
		lenName++;

	while (*(owner + lenOwner))
		lenOwner++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenName + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (lenOwner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < lenName; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;
	for (i = 0; i < lenOwner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
