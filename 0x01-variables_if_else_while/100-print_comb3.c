#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - comb of number
 * Return: Always 0
 */
int main(void)
{
int i, j;
i = '0';
j = '0';
for (i = '0'; i < '9'; i++)
{
	for (j = '1'; j <= '9'; j++)
	{
		if (j <= '9' && (i != j))
		{
			if (j > i)
			{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			}
		}
	}

}
putchar('\n');
return (0);
}
