#include "main.h"

/**
 * main - prints the program name followed by new line
 * @argc: ARGument Count
 * @argv: ARGument list
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
