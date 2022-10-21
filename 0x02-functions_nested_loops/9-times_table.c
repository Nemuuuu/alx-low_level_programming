#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		for (j = i; j <= 9; j++)
		{
			_putchar(i);
			_putchar(',');
		}
		for (k = 0; k <=9; k++)
		{
			_putchar('\n');
			_putchar(j);
		}
	}
}

