#ifndef MAIN_H_
#define MAIN_H_

/**
*struct dog - Defines a dog.
*@name: Name of the dog
*@age: Age of the dog
*@owner: Owner of the dog
*
*Description: Defines a dog with its name, age and owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;

#endif
