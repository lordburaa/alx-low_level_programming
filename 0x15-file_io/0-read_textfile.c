#include "main.h"
/**
 * read_textfile - read textfile
 * @filename: filename
 * @letters: leeter
 *
 * Return: number fo letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *b;
	size_t a, t;

	if (filename == NULL)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	a = read(fd, b, letters);
	t = write(STDOUT_FILENO, b, a);
	close(fd);

	free(fd);

	return (t);
}
