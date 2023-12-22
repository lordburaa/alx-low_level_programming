#include "hash_tables.h"
/**
 * hash_table_create - create  hash table
 * @size: size to be c hekcd
 * Return: on succes the new node else null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new;

	if (new == NULL)
		return (NULL);
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
		return (NULL);
	return (new);
}
