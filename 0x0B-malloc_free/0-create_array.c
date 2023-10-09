#include "main.h"

char *create_array(unsigned int size, __attribute__((unused)) char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size  == 0 || ptr == NULL)
	{
		return NULL;
	}
	return (ptr);
}
