#include <stdio.h>
#include <stdlib.h>
/**
 * main - cont number of arguments
 * @argc: int to be counted
 * @argv: ar
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	if (argv == NULL)
		i = 1;

	while (i < argc)
	{
		i++;

	}
	i--;
	printf("%d\n", i);
	return (0);
}
