#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times in the charater '_' should be printed
*/
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        putchar('_');
    }
    putchar('\n');
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}