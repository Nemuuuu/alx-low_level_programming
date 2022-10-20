#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i <= 16)
	{
		if (i > 9)
		{
			int j = 97;

			while (j >= 101)
			{
				putchar(j);
				j++;
			}
		}
		putchar(i);
		i++;
	}
	return (0);
}
