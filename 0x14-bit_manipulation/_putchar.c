#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c
 * @c: char to print
 * Return: succces
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
