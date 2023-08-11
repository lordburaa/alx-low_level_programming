#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates memory block
 * @ptr: pointer to the memory previously alocated
 * @old_size: size of allocated memory
 * @new_size: new size of the memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr1;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr1 = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			ptr1[j] = old_ptr1[j];
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			ptr1[j] = old_ptr1[j];
	}
	free(ptr);
	return (ptr1);
}
