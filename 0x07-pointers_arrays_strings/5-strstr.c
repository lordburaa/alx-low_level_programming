#include "main.h"



int _strlen(char *str );
/**
 * _strstr - finds the firsst occurene of needle in th haystack
 * @haystack:  string to be chekced
 * @needle: the string to check
 * Return: pointer of the beginning of the located substring  if its found,
 *        else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, c, r, k;

	if (needle == NULL)
		return (haystack);
	while (haystack[i] != '\0')
	{
		c = i;
		k = 0;
		r = i;

		if (haystack[i] == needle[0])
		{
			for (j = 0; j < _strlen(needle); j++)
			{
				if (haystack[c] != needle[j])
					break;
				k = k + 1;
				c++;

			}
			if (k == _strlen(needle))
				return (&haystack[r]);
		}
		i++;
	}
	return (NULL);
}

int _strlen(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
