#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: fixed parameter
 * 
 * Return: 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start(ap, n);
	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
