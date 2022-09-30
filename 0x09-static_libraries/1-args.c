#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed in to it
 * @argc: count the program
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
