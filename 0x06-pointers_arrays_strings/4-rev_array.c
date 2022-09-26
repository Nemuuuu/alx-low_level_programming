#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		int temp;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j++;
	}
}