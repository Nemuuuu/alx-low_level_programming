#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number ot another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * 8);
	int dest = 0;

	while (shift--)
		dest += (n >> shift & 1) != (m >> shift & 1);
		return (dest);
}
