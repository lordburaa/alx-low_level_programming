#include "main.h"
/**
 * _strcmp - string compare
 * @s1: character to be checked
 * @s2: character to be checked
 * Return: 0 if s1 and s2 are equal
 *         negative if s1 less than s2
 *         positive if s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
