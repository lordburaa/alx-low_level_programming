#include "main.h"
/**
 * clear_bit -  clear  bit at a given index
 * @n: number to check
 * @index: index to set
 * Return: 1 if succes else 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index >= 50)
	{
		return (0);
	}
	a = ((1 << index));

	*n = (a ^ (*n));

	return (1);
}
