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

	if (*argv == NULL)
	{
		return (0);
	}
	while (i < argc)
	{
		i++;

	}
	i--;
	printf("%d", i);
	return (1);
}
