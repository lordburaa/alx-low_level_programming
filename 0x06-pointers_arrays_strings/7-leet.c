#include "main.h"

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '0' + 4;
		        continue;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
                       str[i] = '0' + 3;
		       continue;
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0' + 0;
			continue;
		}

		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '0' + 7;
			continue;
		}

		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '0' + 1;
			continue;
		}
		i++;
	}
	return (str);
}
