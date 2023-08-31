#include "main.h"
/**
 * print_binary - equivalent of decimal
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, cnt = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;
		if (current & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
