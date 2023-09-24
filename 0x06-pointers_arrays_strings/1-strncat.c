#include "main.h"
/**
 * _strncat - string concatenates
 * @dest:char to checke
 * @src: char to checked
 * @n: bytes to concatenate
 * Return: string 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
