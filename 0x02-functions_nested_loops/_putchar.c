#include <unistd.h>
/*
 * _putchar - writes the character c to stdout file provide by ALX
 * @c: The character to print to stdard output
 * Return: On success 1 when successful
 * On error, -1 is returned, and errno is set appropriately to -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
