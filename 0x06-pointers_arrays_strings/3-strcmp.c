#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: a pointer to a char that will be compared
 * @s2: a pointer to a char that will be compared
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	return (*str_one - *str_two);
}
