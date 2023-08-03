#include "main.h"
/**
 * _strlen_recursion - Returns the lenght of string
 * @s: the string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int lg = 0;

	if (*s)
	{
		lg++;
		lg += _strlen_recursion(s + 1);
	}
	return (lg);
}
