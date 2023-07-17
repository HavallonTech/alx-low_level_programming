i#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of struct dog
 * @dg: pointer to struct dog initialized
 * @dgname: name of the dog initialize
 * @dgage: age of the dog initialize
 * @dgowner: owner of the dog initialize
 */
void init_dog(struct dog *dg, char *dgname, float dgage, char *dgowner)
{
	if (dg == NULL)
		dg = malloc(sizeof(struct dog));
	dg->dgname = dgname;
	dg->dgage = dgage;
	dg->dgowner = dgowner;
}
