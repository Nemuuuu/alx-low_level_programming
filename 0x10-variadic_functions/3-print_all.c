#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - prints all kind of argument
 * @format: parameter format i.e) s, c, i, f or...
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, sep;
	va_list ap;
	char *str;
	char c_args[] = "cifs"; /*c-char, i-int, f-float and s-string*/

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (c_args[j])
		{
			if (format[i] == c_args[j] && sep)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), sep = 1;
				break;
			case 's':
			       str = va_arg(ap, char *), sep = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
