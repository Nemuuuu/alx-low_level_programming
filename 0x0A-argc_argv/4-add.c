#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: ARGument Count
 * @argv: ARGument list
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int x, count;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			x = atoi(argv[count]);
			_isdigit(x);
			if (x > 0)
			{
				add += x;
			}
		}
		printf ("%d\n", add);
	}
	return (0);
}

/**
 * _isdigit - check if x is digit or not
 * @x: parameter to be checked
 * Return: 1
 */
int  _isdigit(int x)
{
	if (!isdigit(x))
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
