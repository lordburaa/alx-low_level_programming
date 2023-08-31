#include "main.h"
/**
 * flip_bits - count ot number
 * @n: first number
 * @m: second num
 * Return: number of bits change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			cnt++;
	}
	return (cnt);
}
