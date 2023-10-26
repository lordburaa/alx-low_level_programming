#include "main.h"
/**
 * set_bit - set bit at index
 * @n: number to be chekced
 * @index: index
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g;

	if (index > 53)
		return (-1);
	g = 1 << index;
	*n = (g | (*n));
	return (1);
}
