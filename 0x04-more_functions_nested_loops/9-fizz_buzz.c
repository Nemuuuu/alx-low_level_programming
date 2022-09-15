#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
	int n = 100;
	int i;

	i = 1;
	while (i <= n)
	{
		if (i % 3 == 0 && i % 5 == 0) /* multiply of 3 and 5*/
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < n)
				printf("Buzz ");
				else
					printf("Buzz");
		}
		i++;
	}
	printf("\n");
	return (0);
}


