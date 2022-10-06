#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: positive integer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
