#include "main.h"
#include <string.h>
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
	size_t j, c, r, k;


	while (haystack[i] != '\0')
	{
		c = i;
		k = 0;
		r = i;

		if (haystack[i] == needle[0])
		{
			for (j = 0; j < strlen(needle); j++)
			{
				if (haystack[c] != needle[j])
					break;
				k = k + 1;
				c++;

			}
			if (k == strlen(needle))
				return (&haystack[r]);
		}
		i++;
	}
	return (NULL);
}
