#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: number of memory bytes
 * @max: number of data type bits
 *
 * Return: ptr to initialized buffer
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
