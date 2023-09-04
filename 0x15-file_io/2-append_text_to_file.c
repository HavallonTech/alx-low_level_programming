#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: A pointer to the name of the file to work with
 * @text_content: The string to add at the end of the file
 * Return: If the function fails or filename is NULL - -1,
 * retunrn 1 when successful
 *
 * If the file does not exist the user lacks write permissions - -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileo, filew;

	int lent = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[lent];)
			lent++;
	}

	fileo = open(filename, O_WRONLY | O_APPEND);
	filew = write(fileo, text_content, lent);

	if (fileo == -1 || filew == -1)
		return (-1);
	close(fileo);

	return (1);
}
