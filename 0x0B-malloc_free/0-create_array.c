#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes with specific char
 * @size: size
 * @c: character
 *
 * Return: NULL if size is 0, otherwise ptr to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(c));
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(ptr + position) = c;
			position++;
		}
		return (ptr);
	}
}
