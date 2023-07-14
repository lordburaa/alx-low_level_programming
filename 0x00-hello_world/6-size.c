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
printf("Size of a char: %ld\n", sizeof(sizeChar));
printf("Size of an char: %ld\n", sizeof(sizeInt));
printf("Size of a long int: %ld\n", sizeof(sizeLong));
printf("Size of a long long int: %ld\n", sizeof(sizeLLong));
printf("Size of a float: %lu\n", sizeof(sizeFloat));
return (0);
}
