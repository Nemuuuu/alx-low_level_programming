#include "main.h"

/**
 * *_strcat - concatinate to strings
 * @dest: a pointer to a char that will be updated
 * @src: a pointer to a char that will be updated
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
