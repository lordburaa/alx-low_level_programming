#include "main.h"

char *string_toupper(char *str)
{
	char c;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 98)
		{
			c = str[i] - 32;
			str[i] =c;
		}
		
		i++;
	}
	return (str);
}
