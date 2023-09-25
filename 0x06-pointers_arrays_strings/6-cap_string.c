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

	while (str[i])
	{
		if (str[i] == 11 ||str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == ' '
				|| str[i] == 10 || str[i] == '\n' || str[i] == '!' || str[i] == '?'
				|| str[i] == 9 || str[i] == 34 || str[i] == '('
				|| str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			str[i] = str[i];
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
