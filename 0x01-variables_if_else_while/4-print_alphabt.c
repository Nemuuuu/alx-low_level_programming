#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 114 || i == 102)
		{
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

