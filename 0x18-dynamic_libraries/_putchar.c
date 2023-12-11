#include <unistd.h>
#include "main.h"
/**
 * main - puthcar
 * Retuen: Always 0
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
