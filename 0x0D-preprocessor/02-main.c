#include <stdio.h>

/**
 * main - a program that print the name of 
 * file where it was compiled from
 * Return: Always 0 (Success)
 */
int main(void)
{
	/** __FILE__ will produce the compiled file name */
	printf("%s\n", __FILE__);
	return (0);
}
