#include "main.h"

int _strlen(char *s)
{
	int i;
	int j = 0;
	char d;

	for (i = 0; i > -1; i++)
	{
		d = *(s + i);
		if ( d == '\0')
			break;
		j = j + 1;
	}
	return (j);
}
