#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * ReturnL 0 if no char, otherwise converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int base = 1;
	int result = 0;
	int i;
	int len;

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result += base;
		}
		base *= 2;
	}
	return (result);
}
