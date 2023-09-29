#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	int i = 0;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
