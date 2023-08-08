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
	k = 0;
	while (s1[j] != '\0')
	{
		concat[k] = s1[j];
		k++;

		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concat[k] = s2[j];
		k++;
		j++;
	}
	return (concat);
}
