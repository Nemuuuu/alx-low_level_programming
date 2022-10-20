#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar ('\n');
	return (0);
}
