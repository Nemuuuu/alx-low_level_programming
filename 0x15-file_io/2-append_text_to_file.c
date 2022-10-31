#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success, otherwise -1
 */
int appent_text_to_file(const char *filename, char *text_content)
{
	int x, write_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	x = open(filename, O_RDWR | O_APPEND);
	if (x == -1)
		return (-1);
	write_file = write(x, text_content, strlen(text_content));
	close(x);
	if (write_file == -1)
		return (-1);
	return (1);
}
	
