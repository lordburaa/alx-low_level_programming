#include "main.h"
#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *old_ptr;
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (NULL);

	if (new_size == 0 && !(ptr == NULL))
	{
		free(ptr);
		return (NULL);
	}


	if (new_size >old_size)
	{
		new_ptr = malloc(new_size);
		old_ptr = malloc(old_size);
		old_ptr = ptr;
		for (i = 0; i < strlen(old_ptr);i++)
		{
			new_ptr[i] = old_ptr[i];
		}
		return (new_ptr);
		free(new_ptr);
	}

	return (ptr);
	
}
