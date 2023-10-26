#include "main.h"
/**
 * get_bit - return bit index
 * @n: number to be checked
 * @index: index
 * Return: the value at that bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	
	if (index > 50)
		return (-1);
	i = ((n >> index) & 1);
	return (i);
}
