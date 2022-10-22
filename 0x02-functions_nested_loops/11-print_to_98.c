#include "main.h"

/**
 * print_to_98 - prints all natural number n to 98
 * @n: input number
 */
void print_to_98(int n)
{
	int i, j, k;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				for (i = 10; i <= 98; i++)
				{
					j = i / 10;
					k = i % 10;
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
