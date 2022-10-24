#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: a string to be printed between numbers
 * @n: fixed parameter represents number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    int i;

    va_start(ap, n);
    for (i = 0; i < n; i++)
    printf("%d%s", va_arg(ap, int), separator);
    va_end(ap);
}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}