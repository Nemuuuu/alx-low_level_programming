#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 */
void print_alphabet(void)
{
	int i = 97;
	int j;

	for (j = 0; j < 10; j++)
	{
		while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
