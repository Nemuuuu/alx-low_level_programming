#include "main.h"

/**
 * leet - function that encodes a string in to 1337
 * @str: character to be checked
 *
 * Return: if separator return 1. otherwise return 0
 */
char *leet(char *str)
{
	int count = 0, i = 0;
	char *letters = "aeotlAEOTL";
	char *nums = "4307143071";

	while (str[count] != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (str[count] == letters[i])
				str[count] = nums[i];
			i++;
		}
		count++;
	}
	return (str);
}
