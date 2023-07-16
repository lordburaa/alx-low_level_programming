#include <stdio.h>
/**
 * main - print different combination
 * print
 * Return: Always 1
 */
int main(void)
{
int i, j;
i = '0';
j = '1';
           while(i <= '9')
	   {
		   j = '0';
          	while (j <= '9')
	      {
		      if (i < j)
		      {
			      putchar(i);
			      putchar(j);
		if (i !='8' || i == '8' && j != '9')
		      {
			      putchar(',');
			      putchar(' ');
		      }
		      }
	       }	  
	   }
	putchar('\n');
	return (1);
}
