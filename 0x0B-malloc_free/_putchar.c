#include <unstid.h>
/**
 * _putchar - print string
 * @c: char to be checked
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
