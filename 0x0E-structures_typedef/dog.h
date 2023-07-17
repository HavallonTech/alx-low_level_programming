#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic information of the dog class
 * @name: First member of the dog class
 * @age: Second member of the dog class
 * @owner: Third member of the dog class
 * Description: Decriptionof the dog
*/
struct dog
{
	float age;
	char *owner;
	char *name;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
