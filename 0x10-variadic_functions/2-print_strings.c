#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h
"

/**
 * printf_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: fixed parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
		{
			printf("%s", str);
			if (i != (n -1) && separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
		va_end(ap);
		printf("\n");
}

