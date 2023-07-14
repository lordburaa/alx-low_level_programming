#include<stdio.h>
/**
 * main - Entry point
 * print the size of
 * Return: Always 0 (Success)
 */
int main(void)
{
int sI;
char sC;
long int sL;
long long int sLL;
float sF;
printf("Size of a char: %lu byte(s)\n", sizeof(sC));
printf("Size of an char: %lu byte(s)\n", sizeof(sI));
printf("Size of a long int: %lu byte(s)\n", sizeof(sL));
printf("Size of a long long int: %lu byte(s)\n", sizeof(sLL));
printf("Size of a float: %lu byte(s)\n", sizeof(sF));
return (0);
}
