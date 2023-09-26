#include "main.h"
/**
 * leet - encoded character
 * @str: charachter to be checked
 * Return: character
 */
char *leet(char *str)
{
	char c[] = "AaEeoOtTlL";
	char f[8] = "4433007711";
	int i, k;

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (c[k] == str[i])
				str[i] = f[k];
		}
	}
	return (str);
}
