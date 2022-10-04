#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strdup - returns a ptr to a newly allocated space in memory
 * @str: string
 *
 * Return: NULL if str = NULL,otherwise duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	_strcpy(ptr, str);
	return (ptr);
}

/**
 * _strlen - count length of array
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
 * _strcpy - copy arrays
 * @src: source
 * @dest: destination
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
