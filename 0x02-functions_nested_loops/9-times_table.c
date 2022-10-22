#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 */
void times_table(void)
{
	int i, j;
	int time1, time2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) > 9)
			{
				time1 = (i * j) / 10;
				time2 = (i * j) % 10;
				_putchar(time1 + '0');
				_putchar(time2 + '0');
			}
			else
				_putchar((i * j) + '0');
			if (j == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
