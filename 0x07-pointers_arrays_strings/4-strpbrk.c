#include "main.h"
/**
 *_strpbrk - find the fist char matched
 * @s: char to be cheked
 * @accepr: char to be checked
 * Return: the  if the char matched found  return string the until its null 
 *           else NULLL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] !='\0';j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}

		i++;
	}
	return (NULL);
}
