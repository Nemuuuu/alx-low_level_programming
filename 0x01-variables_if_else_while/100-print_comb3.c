#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number_left; /*Decarling statement*/
	int number_right;
	

	for (number_left = 0;number_left <9; number_left++)
	{
		for (number_right = number_left+1; number_right <= 9; number_right++)
		{
			putchar(number_left); /*print  number*/
			putchar (number_right);
			/*break program if the condition is true (if is 89)*/
			if (number_left<8)
	{
			putchar(','); /*print (,)*/
			putchar (' '); /*print a space*/
			}
		}
	}
	putchar('\n'); /*new line*/
	return (0);
}
