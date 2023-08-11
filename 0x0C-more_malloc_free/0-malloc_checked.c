#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory uusing malloc
 * @b: number of bytes
 * Return: pointer allocater
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
