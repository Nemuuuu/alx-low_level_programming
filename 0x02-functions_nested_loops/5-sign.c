#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number
 *
 * Return: 1 if n > 0, 0 if n is zero, -1 if n  < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


