#include "main.h"
/**
 * get_endianness - check endianness
 * Return: 0 if big endian, 1 if little enidna
 */
int get_endianness(void)
{
	unsigned int i;
	char *g;

	i = 1;
	g = (char *) &i;

	return ((int)*g);
}
