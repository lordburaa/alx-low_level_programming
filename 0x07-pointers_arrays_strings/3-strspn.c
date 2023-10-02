#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int check;
	unsigned int sum = 0;

	while (s[i] != ',' && s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				check = 1;
				sum = sum + check;
			}
			if (check)
				continue;
			
		}
		i++;
	}
	return sum;
}
