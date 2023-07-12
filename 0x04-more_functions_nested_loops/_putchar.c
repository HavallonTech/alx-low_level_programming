#include <unistd.h>

/**
 * _putchar - writes the character c to stdout as provided by ALX
 * @c: The character to print to stadard Output
 * Return: On success 1 is returned
 * On error, -1 is returned, and errno is set appropriately to -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
