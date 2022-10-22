#include "main.h"

/**
 * jac_kbauer - prints every minutes of the day of jack bauer
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 60; i++)
	{
		for ( j = 0; j < 24; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
