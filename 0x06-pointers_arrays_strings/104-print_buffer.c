#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print number
 * @b: bufferr
 * @size: sizee
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int k, i, j;

	k = 0;
	i = 0;

	if (size <= 0)
	{
		printf("\n");
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + k + i));
			else
				printf("  ");

			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + k + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}
