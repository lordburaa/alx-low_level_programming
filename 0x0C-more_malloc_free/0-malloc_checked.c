#include "main.h"
/**
 * malloc_checked - allocates memory uusing malloc
 * @b: number of bytes
 * Return: pointer allocater
 */
void *malloc_checked(unsigned int b)
{
	void *ptrr;

	ptrr = malloc(b);

	if (ptrr == NULL)
		exit(98);

	return (ptrr);
}
