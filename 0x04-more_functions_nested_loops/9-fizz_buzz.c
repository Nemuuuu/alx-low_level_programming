#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of 3 'Fizz' instead of the number
 * for multiples of 5 'Buzz' instead of the number
 * for the numbers multiples of both 3 and 5 print FizzBuzz
 * 
 * Return: always 0
*/
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0)
        printf("Fizz ");
        else if((i % 5) == 0)
        printf("Buzz ");
        else if (((i % 3) == 0) && ((i % 5) == 0))
        printf("FizzBuzz ");
        else
        {
            printf("%d ", i);
        }
    }
    return (0);
}