#include "main.h"
/**
 * char *_strcpy - copies the string pointed
 * @dest: to
 * @src: from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
