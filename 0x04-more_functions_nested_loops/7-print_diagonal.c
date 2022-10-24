#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed 
*/
void print_diagonal(int n)
{
       int i, j, k;

       for (i = 0; i < n; i++)
       {
        for (j = i; j < n; j++)
        {
            for (k = 0; k < n; k++)
            putchar(92);
        }
        putchar('\n');
       }
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
