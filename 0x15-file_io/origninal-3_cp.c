#include "main.h"
#include <stdio.h>

/**
 * error_file - checks file opend
 * @file_from: file_from
 * @file_to: file to
 * @argv: argument vector
 * Return: no
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the cose
 * @argc: numebr of arguments
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_f, file_t, err_close;
	ssize_t nchar, nw;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_f file_t");
		exit(97);
	}
	file_f = open(argv[1], O_RDONLY);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_f, file_t, argv);
	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_f, buff, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nw = write(file_t, buff, nchar);
		if (nw == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_f);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	err_close = close(file_t);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}
