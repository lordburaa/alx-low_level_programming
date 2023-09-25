#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] != '\0')
			break;
		i++;
	}
	return (dest);
}
