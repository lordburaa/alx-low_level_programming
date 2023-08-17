#include <unstid.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: om success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
