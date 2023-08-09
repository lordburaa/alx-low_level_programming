#include <stdio.h>
#include <stdlib.h>
/**
 * main - mult of two arg
 * @argc: number of arg
 * @argv: to be checked
 * Return: Alwsys 0
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
	if (argv[1] && argv[2])
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	}
	else
		printf("Error\n");
	return (0);
}
