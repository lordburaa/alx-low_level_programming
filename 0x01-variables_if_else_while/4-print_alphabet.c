#include<stdio.h>
/**
 * main - print alphabet except e and q
 * Return: Always 0
 */
int main(void)
{
char e, lw, q;
for (lw = 'a'; lw <= 'z'; lw++)
{
	if (lw == 'e')
	{
		continue;
	}
	putchar(lw);
}
putchar('\n');
return (0);
}
