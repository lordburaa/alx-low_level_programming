#include "main.h"

int  _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j = 0;
	unsigned int i = _strlen(s1);

	ptr = malloc(sizeof(char) * (i + n + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
