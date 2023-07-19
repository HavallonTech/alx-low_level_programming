#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that prints a name
 * @name: string name to be printed
 * @f: pointer to function (print_name)
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
/** return the name if function name is not null or empty */
	f(name);
}
