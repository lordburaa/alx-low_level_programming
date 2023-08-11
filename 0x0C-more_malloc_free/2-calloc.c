#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with constant
 * @s: memory area to be fille
 * @b: char to be copy
 * @n: number of times to copy b
 * Return: poiiner to the memory
 */
char *_memset(char *s, char b, undigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * *_calloc - alllocate memory for an array
 * @nmemb: number of elemnts in the array
 * @size: size of elements
 * Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	chr *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
