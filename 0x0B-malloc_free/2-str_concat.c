#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: on failure NULL, otherwise s1 by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = (_strlen(s1) + _strlen(s2) + 1);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	return (ptr);
}

/**
 * _strlen - count length of an array
 * @s: elements of array
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
