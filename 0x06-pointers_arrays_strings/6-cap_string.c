#include "main.h"
/**
 * cap_string - capitalize the first word
 * @str: string to be chaecked
 * Return: character
 */

char *cap_string(char *str)
{
	char c;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == ' '
				|| str[i] == '\n' || str[i] == '!' || str[i] == '?'
				|| str[i] == '\t' || str[i] == '\"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				c = str[i] - 32;
				str[i] = c;
				continue;
			}
		
		}
		str[i] = str[i];
		i++;
	}
	return (str);
}
