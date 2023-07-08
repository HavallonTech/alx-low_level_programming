#include <stdio.h>
#include "main.h"

/**
 * main - a c programme that print the number of arguments received
 * @argc: number of arguments received
 * @argv: array of arguments recieved
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
