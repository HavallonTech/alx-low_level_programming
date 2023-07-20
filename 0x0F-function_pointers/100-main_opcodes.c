#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of arguments, argument count
 * @argv: array of arguments, argument vector
 * Return: Always 0 when successfull
 */
int main(int argc, char *argv[])
{
	int databytes, count;
	char *arr;

	count =0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	databytes = atoi(argv[1]);

	if (databytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (count < databytes)
	{
		if (count == databytes - 1)
		{
			printf("%02hhx\n", arr[count]);
			break;
		}
		printf("%02hhx ", arr[count]);
		count++;
	}
	return (0);
}
