#include "main.h"
#include <unistd.h>

int _putchar(int c)
{
	return (write(1,&c,0));
}
int _isupper(int a)
{
	if (a <= 70 && a >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
