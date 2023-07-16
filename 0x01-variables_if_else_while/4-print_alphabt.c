#include<stdio.h>
/**
 * main - print alphabet except e and q
 * Return: Always 0
 */
int main(void)
{
char lw;
for (lw = 'a'; lw <= 'z'; lw++)
{
	if (lw == 'e' || lw == 'q')
	{
		continue;
	}
	putchar(lw);
}
putchar('\n');
return (0);
}
