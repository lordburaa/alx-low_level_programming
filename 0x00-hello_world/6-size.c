#include<stdio.h>
/**
 * main - Entry point
 * P
 * Return: Always 0 (Success)
 */
int main(void)
{
int sI;
char sC;
long sL;
long long sLL;
float sF;
printf("Size of a char: %lu byte(s)\n", sizeof(sC));
printf("Size of an char: %lu byte(s)\n", sizeof(sI));
printf("Size of a long int: %lu byte(s)\n", sizeof(sL));
printf("Size of a long long int: %lu byte(s)\n", sizeof(sLL));
printf("Size of a float: %lu byte(s)\n", sizeof(sF));
return (0);
}
