#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatinate 2 string on allocated memory
  * @s1: char to be checked
  * @s2: char to be checked
  * Return: Always succes
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;

	char *concat;

	i = 0;
	j = 0;
	l = 0;

	while (s1[i] != '\0')
	{
		i += 1;
	}
	while (s2[l] != '\0')
	{
		l++;
	}
	concat = malloc(sizeof(char) * (i + l));
	if (concat == NULL)
		return (NULL);
	k = -1;
	if (s1 != NULL)
	{
	while (s1[j] != '\0')
	{
		k += 1;
		concat[k] = s1[j];
		j += 1;
	}
	}
	j = 0;
	if (s2 == NULL)
		return (NULL);
	while (s2[j] != '\0')
	{
		++k;
		concat[k] = s2[j];
		j++;
	}
	k++;
	concat[k] = '\0';
	return (concat);
}
