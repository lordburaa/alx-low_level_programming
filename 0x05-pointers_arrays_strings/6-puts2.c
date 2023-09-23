#include "main.h"

int _strlen(char *str);
/**
 * puts2 - puts
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}


/**
 * _strlen - string lengt
 * @str: str to be checed
 * Return: string lengt
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
