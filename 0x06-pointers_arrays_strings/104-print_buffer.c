#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints string buffer
 * @b: the buffer
 * @size: size of buffer to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x = 0, i, j;

	if (size <= 0)
	{
		printf("\n");
	}
	while (x < size)
	{
		j = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + x + i));
			else
				printf(" ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + x + i);

			if (c < 32 || c > 132)
			{
				c = '.';
				printf("%c", c);
			}
		}
		printf("\n");
		x += 10;
	}
}


