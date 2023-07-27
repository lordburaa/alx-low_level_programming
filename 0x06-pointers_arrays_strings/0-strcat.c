#include "main.h"
/**
 * _strcat -concatenates string
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest,char *src)
{
	int k, m;
       
	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}
