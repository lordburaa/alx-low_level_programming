#include "main.h"
/**
 * flip_bits - number of bits
 * @n: num one
 * @m: num two
 * Retrun: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_s;

	for(bit_s = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit_s++;
	}
	return (bit_s);
}
