#include <stdlib.h>
#include "main.h"
/**
 * count_word - number of words in string
 * @s: string to evaluate
 * Return: number of wrds
 */
int count_word(char *s)
{
	int count, i, j;

	count = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			j++;
		}
	}
	return(j);
}
/**
 * **strtow - splits string
 * @str: string to be split
 * Return: pointer
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, d = 0, leng = 0, words, c = 0, start, end;

	start = 0;
	end = 0;

	while (*(str + leng))
		leng++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= leng; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[d] = tmp - c;
				d++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[d] = NULL;
	return (matrix);

}
