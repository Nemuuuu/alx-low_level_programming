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
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
		}
	}
}
