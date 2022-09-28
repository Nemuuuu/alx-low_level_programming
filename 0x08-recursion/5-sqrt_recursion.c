#include "main.h"
#include <stdio.h>

/**
 * _evaluate - evaluate function square root
 * @i: integer
 * @n: integer
 *
 * Return: evaluate sqrt
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_evaluate(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}

