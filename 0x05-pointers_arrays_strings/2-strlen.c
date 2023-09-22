#include "main.h"
/**
 * _strlen - string length
 * @s: char length
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
