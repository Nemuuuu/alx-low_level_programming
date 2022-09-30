#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: count the argument
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
