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
	int lenName, lenOwner;

	lenName = strlen(name) + 1;
	lenOwner = strlen(owner) + 1;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(lenName);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(lenOwner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);
	return (dog);
}
