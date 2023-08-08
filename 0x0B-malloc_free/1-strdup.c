#include<unistd.h>
#include "main.h"
#include <stdlib.h>

int _putchar(char c)
{
	return (write(1,&c,1));

}

char *_strdup(char *str)
{
	int i;
	char *ptr;
	char c;
	ptr = (char *)malloc(sizeof(str));
	for (i = 0; str[i] != '\0';i++)
	{
		c = *(str + i);
		_putchar(c);
	}
	return (ptr);
}

