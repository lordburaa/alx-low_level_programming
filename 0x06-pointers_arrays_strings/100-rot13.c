#include "main.h"
#include <string.h>
/**
 * rot13 - encode
 * @str: string to be encoded
 *
 * Return: enocoded string
 */
char *rot13(char *str)
{
	char in[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ou[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		while (j < 54)
		{
			if (str[i] == in[j])
			{
				str[i] = ou[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
