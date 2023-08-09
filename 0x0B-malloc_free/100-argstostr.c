#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry
 * @ac: int to be checked
 * @av: char to be
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, r = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[r] = av[i][j];
			r++;
		}
		if (ptr[r] == '\0')
			ptr[r++] = '\n';
	}
	return (ptr);
}
