#include "main.h"
/**
 * string_toupper - convert to upper case
 * @str: string to be converted
 * Return: converted string
 */
char *string_toupper(char *str)
{
	char c;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			c = str[i] - 32;
			str[i] = c;
		}
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
