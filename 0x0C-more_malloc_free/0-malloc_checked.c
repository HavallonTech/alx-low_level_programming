#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function to check memory allocation
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *checker;

	checker = malloc(b);

	if (checker == NULL)
		return (98);
	return (checker);
}
