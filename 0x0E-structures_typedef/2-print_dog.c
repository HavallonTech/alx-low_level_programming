#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the class dog
 * @d: the class dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		/** if there is no name to the dog */
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		/** If the dog does not have an owner */
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
