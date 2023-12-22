#include "hash_tables.h"
/**
 * key_index - index key
 * @key: char or ahs code
 * @size: size of the array
 *
 * Return: index of the key/value pari
 */
unsigned long int key_index(const unsigned  char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
