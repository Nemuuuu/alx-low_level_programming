#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - count length of an array
 * @s: array elements
 *
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: dest
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, count, j, size, size_1, size_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	if (n >= size_2)
	{
		count = size_2;
	}
	else
	{
		count = n;
	}
	size = size_1 + count + 1;
	dest = (char *) malloc(size * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			*(dest + i) = *(s1 + i);
		}
		for (j = 0; j < count; j++)
		{
			*(dest + i) = *(s2 + j);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (dest);
}
