#include <unistd.h>
#include "main.h"
/**
 * jkputchar - writes the character c to stdout
 * @a: the charactar to print t to stndard output
 * Return: on success 1
 * On error, -1 is returned, a dn erro no is set appropriately
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
