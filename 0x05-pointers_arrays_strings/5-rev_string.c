#include "main.h"

/**
 * rev_string - prints string rev
 * @s: a pointer to an int that will be updated
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start_c, *end_c, c;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++) /*count character by character*/
	{
		length++;
	}
	count = length;/*count each character of string*/
	start_c = s;/*start_c and end_c are values of equal variables*/
	end_c = s;
	for (i = 0; i < count - 1; i++)/*move the end_c to last character*/
	{
		end_c++;
	}
	for (i = 0; i < count / 2; i++)/*swap char from start and end*/
	{
		c = *end_c;/*swap character*/
		*end_c = *start_c;
		*start_c = c;
		start_c++;/*update pointer positions*/
		end_c++;
	}
}
