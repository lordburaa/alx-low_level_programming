#include <stddef.h>
#include "main.h"
/**
 * _strchr - string to pring from the first occurence
 * @s: string to be cheked
 * @c: character to be cheked
 *
 * Return: NULL if on character matched else string
 */

char *_strchr(char *s, char c)
{
	int i =	0;
	int k = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			k = k + 1;
			break;
		}
		i++;
	}
	if (k == 0)
		return (NULL);

	while (s[i] != '\0')
	{
		s[j] = s[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
