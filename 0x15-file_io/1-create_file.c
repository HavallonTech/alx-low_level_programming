#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Pointer the the file to be created.
 * @text_content: A pointer to a string to write into the file
 * Return: If the function fails return -1mor retunr 1
 */

int create_file(const char *filename, char *text_content)
{
	int fild, filew, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fild = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	filew = write(fild, text_content, len);

	if (fild == -1 || filew == -1)
		return (-1);

	close(fild);

	return (1);
}
