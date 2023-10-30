#include "main.h"
/**
 * append_text_to_file - append adn write to the file
 * @filename: fie
 * @text_content: string 
 * Retrun: 1 on Succes else 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i =0;
	int fd;
	int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
