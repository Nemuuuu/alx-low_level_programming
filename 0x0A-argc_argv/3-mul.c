#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count argument
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;
	int num1;
	int num2;
	int result;

	(void) argc;
	count = 1;
	if (argv[count] != '\0')
	{
		if (argv[count] == NULL || argv[count + 1] == NULL)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num1 = atoi(argv[count]);
			num2 = atoi(argv[count + 1]);
			result = num1 * num2;
			printf("%d\n", result);
		}
	}
	return (0);
}
