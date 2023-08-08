#include "main.h"
#include <stdlib.h>
/**
 * create_array - print to
 * @size: size to be checked
 * @c: char to be checked
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
