#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 57)
		{
			putchar(i);
			break;
		}
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}

