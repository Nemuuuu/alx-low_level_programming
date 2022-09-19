#include "main.h"

/**
 * _puts - prints a strin
 * @str: a pointer to an int that will be updated
 *
 * Retur: void
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
