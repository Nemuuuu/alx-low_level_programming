#include "main.h"

/**
 * swap - swap between a and b
 * @a: a pointer to an int that will be updated
 * @b: b pointer ot an int that will be updated
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
