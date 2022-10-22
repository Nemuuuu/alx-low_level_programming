#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: ARGument Count
 * @argv: ARGument list
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count, x, mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (count = 1; count < argc; count++)
	{
		x = atoi(argv[count]);
		mul *= x;
	}
	printf("%d\n", mul);
	}
	return (0);
}
