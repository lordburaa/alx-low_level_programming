#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		k = s1[i] - s2[i];

		if (k != 0)
			return (k);
	}
	return (0);
}
