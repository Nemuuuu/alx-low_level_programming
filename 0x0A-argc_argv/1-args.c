#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: ARGument Count
 * @argv: ARGument list
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
