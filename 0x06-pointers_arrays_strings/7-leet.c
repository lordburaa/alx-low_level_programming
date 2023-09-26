#include "main.h"
/**
 * leet - encoded character
 * @str: charachter to be checked
 * Return: character 
 */
char *leet(char *str)
{
	char c[] = "AaEeoOtTlL";
	char f[] = "44330077";
	int i, k;

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (c[k] != '\0')
		{
			if (c[k] == str[i])
				str[i] = f[k];
			k++;
		}
		k = 0;
	}
	putchar('\n');
	return (str);
}
