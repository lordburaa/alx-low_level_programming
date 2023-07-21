#include "main.h"
/**
 * more_numbers - print 10 times from  0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for ( x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y / 10) + '0');
		}
		_putchar((y % 10) + '0');
	}
	_putchar('\n');
}
