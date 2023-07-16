#include<stdio.h>
/**
 * main -print low and capital letter
 * Return: Always 0
 */
int main(void)
{
int lw;
for (lw = 'a'; lw <= 'z'; lw++)
{
putchar(lw);
}
for (lw = 'A'; lw <= 'Z'; lw++)
{
	putchar(lw);
}
putchar('\n');
return (0);
}
