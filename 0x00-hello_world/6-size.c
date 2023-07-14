#include<stdio.h>
/**
 * main - Entry point
 * print the size of
 * Return: Always 0 (Success)
 */
int main(void)
{
int sizeInt;
char sizeChar;
long int sizeLong;
long long int sizeLLong;
float sizeFloat;
printf("Size of a char: %ld byte(s)\n", sizeof(sizeChar));
printf("Size of an char: %ld byte(s)\n", sizeof(sizeInt));
printf("Size of a long int: %lu byte(s)\n", sizeof(sizeLong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(sizeLLong));
printf("Size of a float: %lu byte(s)\n", sizeof(sizeFloat));
return (0);
}
