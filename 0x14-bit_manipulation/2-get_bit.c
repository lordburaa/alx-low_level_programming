#include "main.h"
/**
 * get_bit - returns the value of bit at an index
 * @n: number
 * @index: index bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_var;

	if (index > 63)
		return (-1);
	bit_var = (n >> index) & 1;

	return (bit_var);
}
