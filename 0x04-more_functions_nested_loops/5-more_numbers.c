#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int num1;
	int num2;
	int result;

	i = 0; /*coint*/
	result = 0;
	while (i < 10) /*Start first while*/
	{
		while (result <= 14) /*Start second while*/
		{
			if (result < 10) /*swap*/
			{
				num2 = result;
			}
			else
			{
				num1 = result / 10;
				num2 = result % 10;
				_putchar(num1 + '0');
			}
			_putchar(num2 + '0');
			result++;
		}
		i++;
		result = 0; /*reset count*/
		_putchar('\n'); /*New line*/
	}
}
