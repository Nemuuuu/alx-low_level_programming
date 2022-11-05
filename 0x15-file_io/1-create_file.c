#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int x, write_file;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (x == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	write_file = write(x, text_content, strlen(text_content));
	close(x);
	if (write_file == -1)
	{
		close(x);
		return (-1);
	}
	return (1);
}
