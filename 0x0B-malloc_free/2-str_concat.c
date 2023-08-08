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
	int i, j, k;

	char *concat;


	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		i++;
	}
	concat = malloc(sizeof(char) * i);
	if (concat == NULL)
		return (NULL);
	k = -1;
	while (s1[j] != '\0')
	{
		++k;
		concat[k] = s1[j];
		

		j++;
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
	return (concat);
}
