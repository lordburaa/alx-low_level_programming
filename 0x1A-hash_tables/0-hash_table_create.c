#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t* new = malloc(sizeof(hash_table_t));

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	if (new == NULL)
		return NULL;
	return new;
}
