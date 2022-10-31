#include "main.h"
#define BUFFERSIZE 1024

/**
 * main - copies the contents of one file to another
 * @ac: argument count
 * @av: argument list
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int x, x_dest, read_file, check;
	char buffer[BUFFERSIZE];

	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	x = open(av[1], O_RDONLY);
	if (x == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (x_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	read_file = check = 1;
	while (read_file)
	{
		read_file = read(x, buffer, BUFFERSIZE);
		if (read_file == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (read_file >0)
		{
			check = write(x_dest, buffer, read_file);
			if (check == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	check = close(x);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	check = close(x_dest);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);
	return (0);
}
