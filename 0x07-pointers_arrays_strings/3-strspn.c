#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
		}
			else if (accept[r + 1] == '\0')
				return (i);
	}
		s++;
	}
	return (i);
}
