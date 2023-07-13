#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function to check memory allocation
 *@b : function Parameter passed to be check
 *Return: type is void
 *
 */
void *malloc_checked(unsigned int b)
{
	void *checker;

	checker = malloc(b);

	if (checker == NULL)
		exit (98);
	return (checker);
}
