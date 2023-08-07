#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters: number of letters to be readfrom the file
 * Return: w- actual number of bytes read and sent to standard output
 * 0 when function fails or if the  filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fild;
	ssize_t w;
	ssize_t treat;

	fild = open(filename, O_RDONLY);
	if (fild == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	treat = read(fild, buf, letters);
	w = write(STDOUT_FILENO, buf, treat);

	free(buf);
	close(fild);
	return (w);
}
