#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: fixed parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int result;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(ap, int);
		printf("%d", result);
		if (i < n - 1 && (separator != NULL))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
