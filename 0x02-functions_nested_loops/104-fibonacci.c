#include <stdio.h>

#define LARGEST 10000000000

/**
 * main - main block
 *
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 *
 * Numbers should be coma and space separated.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int x = 0, y = 1, z = 0, a = 2;
	unsigned long int b, c, k;
	int count;
	
	printf("%lu, %lu, ",y, a);
	for (count = 2; count < 98; count++)
	{
		if (y + a > LARGEST || z > 0 || x > 0)
		{
			b = (y + a) / LARGEST;
			c = (y + a) % LARGEST;
			k = x + z + b;
			x = z, z = k;
			y = a, a = c;
			printf("%lu%010lu", z, a);
		}
		else
		{
			c = y + a;
			y = a, a = c;
			printf("%lu", a);
		}
		if (count != 97)
			printf(", ");
		}
		printf("\n");
		return (0);
}

