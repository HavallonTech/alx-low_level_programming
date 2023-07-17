#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic information of the dog
 * @name: First member of the dog struct
 * @age: Second member of the dog struct
 * @owner: Third member of the dog struct
 * Description: Decriptionof the dog
 */
struct dog
{
	float age;
	char *owner;
	char *name;

};

/**
 * dog_t - typedef for struct the dog
 * including  Prototype definition
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
