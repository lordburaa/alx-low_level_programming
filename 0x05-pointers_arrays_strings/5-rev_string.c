#include "main.h"
/**
 * rev_string - printf reverse string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char k;

	while (s[i] != '\0')
		i++;
	i--;

	while (i >= 0)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		i--;
		j++;
	}
}
