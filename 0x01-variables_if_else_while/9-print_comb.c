#include<stdio.h>
/**
 * main - print number separated by comma and space
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9; i++)
{
putchar(i + 48);
if (i != 9)
{
putchar(44);
putchar(32);
}
}
putchar(36);
return (0);
}
