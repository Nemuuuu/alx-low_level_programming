#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * 
 * Return: always 0
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is %d ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("and is 0\n");
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("and is less than 6 and not zero\n");
	}
	return (0);
}
