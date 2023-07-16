#include<stdio.h>
/**
 * main - print three combination of number
 * Return: Always 0
 */
int main(void)
{
int i, j, k;
i = '0';
j = '0';
k = '0';
for (i = '0'; i < '9'; i++)
{
	for (j = '1'; j < '9'; j++)
	{
		for (k = '0'; k <= '9' ; k++)
		{
			if (j > i && j < k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if ((k == '9' && j == '8') && i == '7')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
}
putchar('\n');
return (0);
}
