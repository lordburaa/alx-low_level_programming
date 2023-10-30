#include "main.h"
/**
 * create_file - create file and write to it
 * @filename: file to be crated and wrien
 * @text_content: strign
 * Return: 1 on Succes else 0
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 00600);

	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	text_content[i] = '\n';
	i++;
	}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
