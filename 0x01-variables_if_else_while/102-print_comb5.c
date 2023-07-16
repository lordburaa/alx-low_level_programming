#include <stdio.h>
/**
 * main - pair of three digit without repetition
 * Return: Always 0
 */
int main(void)
{
int e, f;
	for (e = 0; e <= 99; e++)
	{
		for (f = 0; f <= 99; f++)
		{
			if (e < f && e != f)
			{
				putchar((e / 10) + '0');
				putchar((f % 10) + '0');
				putchar(' ');
				putchar((f / 10) + '0');
				putchar((f % 10) + '0');
				if (e != '98' || f != '99')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
