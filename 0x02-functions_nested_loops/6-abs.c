#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to be compute
 *
 * Return:absolute value of a number
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n;
		return (1);
	}
	else if (n < 0)
	{
		n = -n;
		return (-1);
	}
	else
	{
		n = 0;
		return (0);
	}
}
