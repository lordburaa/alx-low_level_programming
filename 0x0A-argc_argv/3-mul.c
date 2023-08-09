#include <stdio.h>
#include <stdlib.h>
/**
 *
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
