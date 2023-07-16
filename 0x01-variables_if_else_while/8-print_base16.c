#include<stdio.h>
/**
 * main - base 16
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + 48);
}
for (i = 0; i <= 5; i++)
{
putchar(i + 97);
}
putchar('\n');
return (0);
}
