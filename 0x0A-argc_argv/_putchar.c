#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout provide by ALX
 * @c:Ther character to print to stadard output
 * Return: On success 1 and 0 if not
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}


