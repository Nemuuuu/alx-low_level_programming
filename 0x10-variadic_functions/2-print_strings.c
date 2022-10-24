#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    int i;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    printf("%s%s", va_arg(ap, char*), separator);
    va_end(ap);
}
int main(void)
{
    print_strings(", ", 2, "jay", "django");
    return (0);
}
