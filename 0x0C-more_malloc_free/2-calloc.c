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

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
