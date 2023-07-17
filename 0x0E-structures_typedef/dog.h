#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a program to initializes a variable of type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: name to of the dog to initialize
 * @age: age of dog to initialize
 * @owner: owner of dog to initialize
 */
void init_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg == NULL)
		dg = malloc(sizeof(struct dog));
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}
