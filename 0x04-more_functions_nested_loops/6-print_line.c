#include "main.h"
/**
 * prinr_line - Draws straight line according to parameter
 * @n: The nmber of lines
 * Return: empty
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
