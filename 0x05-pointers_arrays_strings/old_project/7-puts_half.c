#include "main.h"
/**
 * puts_half - a function prins half of st
 * @str: input
 * Return: half
 */
void puts_half(char *str)
{
	int i, n, log;

	log = 0;
	for (i = 0; str[i] != '\0'; i++)
		log++;
	n = (log / 2);
	if ((log % 2) == 1)
		n = ((log + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
