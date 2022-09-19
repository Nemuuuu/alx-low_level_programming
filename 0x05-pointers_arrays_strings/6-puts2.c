#include "main.h"

/**
 * puts2 - prints every othe character of a string
 * @str: a pointer to an int that will be updated
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0);
		_putchar(str[i]);/*diplay contents*/
	}
	_putchar('\n');
}
