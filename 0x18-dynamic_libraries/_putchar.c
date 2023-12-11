#include <unistd.h>
#include "main.h"
/**
 * _putchar - write buffer
 * @c: char to writed ot stdout
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
