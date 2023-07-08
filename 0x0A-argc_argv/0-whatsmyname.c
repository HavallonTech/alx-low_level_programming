#include <stdio.h>
#include "main.h"

/**
 * main - a c program that prints the name of the program
 * @argc: is the number of arguments
 * @argv: is the array of arguments
 * Return: Always 0 once program is successful 
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
