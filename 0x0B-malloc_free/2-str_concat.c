#include "main.h"
/**
 * str_concat - string concatinate
 * @s1: string to be chcekd
 * @s2: string to be checked
 * Return: the conatinate string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * (i + j - 2));
	j = 0;
	while (s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ptr[j] = s2[i];
		j++;
		i++;
	}
	return (ptr);
}
