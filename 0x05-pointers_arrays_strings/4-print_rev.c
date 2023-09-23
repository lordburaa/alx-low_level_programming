#include "main.h"
/**
 * print_rev - reverse string
 * @s: char to be reversed
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
		i++;
	while (i > j)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
