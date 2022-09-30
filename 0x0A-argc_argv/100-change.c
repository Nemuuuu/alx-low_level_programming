#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for amount of money
 * @argc: count argument
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int pos, tot, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = tot = change = aux = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pos] != '\0')
	{
		if (tot >= coins[pos])
		{
			aux = (tot / coins[pos]);
			change += aux;
			tot -= coins[pos] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}
