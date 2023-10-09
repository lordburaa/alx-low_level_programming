#include "main.h"

/**
 * _strdup - duplicate the string
 * @str: char to be duplicate
 *
 * Return: NULL is str NULL ,
 * pointer ot the first string if tis succesful allocated
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i));
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	return (ptr);
}
