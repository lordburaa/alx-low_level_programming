#include "main.h"
/**
 * clear_bit - given bit to 0
 * @n: pointer num to change
 * @index: index to bit clear
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (-(1UL << index) & *n);
	return (1);
}
