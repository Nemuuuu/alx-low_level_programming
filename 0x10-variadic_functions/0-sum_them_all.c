#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: fixed parameter
 * 
 * Return: 0 if n is equal to zero
*/
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    int add = 0;
    int i;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    add += va_arg(ap, int);
    va_end(ap);
    return (add);
}