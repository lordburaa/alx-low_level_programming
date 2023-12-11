#include "main.h"
/**
 * _memcpy - a function copies
 * @dest: memory stored
 * @src: memory copied
 * @n: number of bytes
 * Return: copied memor
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
