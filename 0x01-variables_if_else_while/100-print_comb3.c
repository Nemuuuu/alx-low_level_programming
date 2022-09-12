#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int left;
int right;
for(left=0;left<9;left++)
{
for(right=left+1;left<=9;left++)
{
putchar('0'+left);
putchar('0'+right);
if(left<8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
