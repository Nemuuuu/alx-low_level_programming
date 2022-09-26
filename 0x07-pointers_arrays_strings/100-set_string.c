#include "main.h"

/**
 * set_string - set the value of pointer to char
 * @s: pointer to pointer
 * @to: pointer
 */
void set_string(char **s, char *to)
{
	int i = 0;

	while (&s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	int j = 0;

	while (to[j] != '\0')
	{
		_putchar(to[j]);
		j++;
	}
	_putchar('\n');
}
