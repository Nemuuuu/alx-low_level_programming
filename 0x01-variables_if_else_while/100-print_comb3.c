#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
   int main(void)
 {
      int left;/*declaration*/
      int right;

      for(left=0;left<9;left++)
      {
        	for (right=left+1;right<=9;right++)
	        {
		          putchar('0'+left); /*print  number*/   
	         	  putchar('0'+right);

	                  if(left<8)
		          {
			       putchar(','); /*print (,)*/   
			       putchar(' '); /*print a space*/   
	                  }
	        }
     }
      putchar('\n');/*new line*/ 

      return (0);
 }

