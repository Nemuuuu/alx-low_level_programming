#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * 
 * Return: 1 if c is uppercase, otherwise 0.
*/
int _isupper(int c)
{
    return (c >= 65 && c <= 90);
}
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}