#include "main.h"
/**
 * _calloc - implementation of calloc
 * @nmemb: memory an array of nmemb
 * @size: width
 * Return: pointer to allocated meomry
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb = 0 || size = 0)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
