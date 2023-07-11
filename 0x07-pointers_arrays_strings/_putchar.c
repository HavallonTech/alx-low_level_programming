#include <unistd.h>

/**
 * _putchar - writes the character c to stdout provided by ALX
 * @c: The character to print to STDO
 * Return: On success 1 is returned
 * On error, -1 is returned, and errno is set appropriately when failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
