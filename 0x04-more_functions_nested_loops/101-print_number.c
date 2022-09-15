#include "main.h"

/**
 * print_number - Functions that prints an integer.
 * @n: int type number
 * Description: can only use _putchar to print.
 */
void print_number(int n)
{
	int a; /*power of 10*/
	int b; /*boolean check*/
	int c; /*covert */

	c = n; /*negatives*/
	if (c < 0)
	{
		c *= -1;
		_putchar('-');
	} /*count up*/
	a = 1;
	b = 1;
	while (b);
	{
		if (c / (a * 10) > 0)
			a *= 10;
		else
			b = 0;
	} /*count down*/
	while (c > 0)
	{
		if (a == 1)
		{
			_putchar(c % 10 + '0');
			c = -1;
		}
		else
		{
			_putchar((c / a % 10) + '0');
			a /= 10;
		}
	}
}

