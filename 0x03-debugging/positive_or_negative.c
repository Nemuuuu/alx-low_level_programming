#include <stdio.h>

/**
 * positive_or_negative - print 0
 * Return: Nothing 
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else
	{
		printf("%i is positive\n", i);
	}
}



