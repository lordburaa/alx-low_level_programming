#include "main.h"
/**
 * _puts - pring string
 * @str: char to be checked
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
