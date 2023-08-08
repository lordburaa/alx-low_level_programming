#include<unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * _putchar - retun char
 * @c: char to be checked
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strdup - char malloc to be used
 * @str: char to be checked
 * Return: always 0
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;
	char c;

	ptr = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
	{
		c = *(str + i);
		_putchar(c);
	}
	return (ptr);
}

