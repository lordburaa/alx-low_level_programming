#include <stdio.h>
/**
 * main - print all argumeents passed
 * @argc: number of arguments
 * @argv: argument char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
