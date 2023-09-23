#include "main.h"
/**
 * rev_string - printf reverse string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *k;

	while (s[i] != '\0')
		i++;
	i--;

	while (i >= 0)
	{
		k[j] = s[i];
	
		
		i--;
		j++;
	}
	i = 0;
	while (i < j)
	{
		s[i] = k[i];
		i++;
	}
}
