#include<unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - char malloc to be used
 * @str: char to be checked
 * Return: always 0
 */

char *_strdup(char *str)
{
	int i;
	char *c;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		c[i] = *(str + i);
		i++;
	}
	return (c);
}

