#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int i, j;
i = '0';
j = '0';
for (i = '0'; i < '9'; i++) 
{
	for (j = '1'; j <= '9'; j++)
	{
		if( j <= '9')
		{
		
		
		putchar(i);
		putchar(j);
		putchar(',');
		putchar(' ');
		}
		else
			continue;
	}

}
putchar('\n');
return (0);}
