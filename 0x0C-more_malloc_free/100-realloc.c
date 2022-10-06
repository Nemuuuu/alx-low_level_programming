#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: pointer with allocated size
 * @old_size: current allocated size
 * @new_size: new size to reallocate
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *ptrs;
	unsigned int i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			return (NULL);
		}
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == 0)
	{
		return (NULL);
	}
	ptrs = ptr;
	while (i < old_size)
	{
		str[i] = ptrs[i];
		i++;
	}
	free(ptr);
	return (str);
}
