#include "main.h"
/**
 * _strpbrk - entry
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; acccept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
