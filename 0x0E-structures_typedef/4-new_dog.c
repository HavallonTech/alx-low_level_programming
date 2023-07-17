#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: a pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int newdog;
	unsigned int olddog;
	unsigned int count;

	dog_t *dog;
	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (newdog = 0; name[newdog]; newdog++)
		;
	newdog++;
	dog->name = malloc(newdog * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (count = 0; count < newdog; count++)
		dog->name[count] = name[count];
	dog->age = age;
	for (olddog = 0; owner[olddog]; olddog++)
		;
	olddog++;
	dog->owner = malloc(olddog * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (count = 0; count < olddog; count++)
		dog->owner[count] = owner[count];
	return (dog);
}
