#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of struct dog
 * @d: pointer to struct dog initialized
 * @name: name of the dog initialize
 * @age: age of the dog initialize
 * @owner: owner of the dog initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
