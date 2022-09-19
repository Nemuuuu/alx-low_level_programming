#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer to an int that will be updated
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0') /*count character of string*/
	{
		i++;
	}
	return (i);
}
