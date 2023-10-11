#include "main.h"

/**
 * malloc_checked - allocate memory dynamically
 * @b: size to be allocated
 * Return: if success retrun pointer else exit 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
