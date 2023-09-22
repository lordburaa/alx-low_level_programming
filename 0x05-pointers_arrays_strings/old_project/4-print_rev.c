#include "main.h"
/**
 * print_rev - reverse string
 * @s: char to be checked
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, m;
	char j, d, f;

	for (i = 0; i > -1; i++)
	{
		d = *(s + i);
		if (d == '\0')
			break;
		j = j + 1;
	}
	for (m = i; m > 0; m--)
	{
		i--;
		f = *(s + i);
		_putchar(f);
		if (i == 0)
		{
			break;
		}
	}
	_putchar('\n');
}
