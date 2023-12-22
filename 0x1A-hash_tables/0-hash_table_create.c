#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t* new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return NULL;
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
		return NULL;
	return new;
}
