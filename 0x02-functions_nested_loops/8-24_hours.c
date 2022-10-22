#include "main.h"

/**
 * jac_kbauer - prints every minutes of the day of jack bauer
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (j = 0; j < 60; j++)
	{
		for ( i = 0; i < 24; i++)
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
