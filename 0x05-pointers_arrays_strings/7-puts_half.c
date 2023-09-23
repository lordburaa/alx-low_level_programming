#include "main.h"
int _strlen(char *str);

void puts_half(char *str)
{
	
	int k = _strlen(str) / 2;

	if ((k % 2) != 0)
	{
		_putchar(str[k]);
		k++;
	}
	while (str[k] != '\0')
	{
		_putchar(str[k]);
			k++;
	}
	_putchar('\n');
}
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
