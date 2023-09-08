#include "main.h"

/**
 * append_text_to_file - append text at eh end of file
 * @filename: filename
 * @text_content: added content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nL;
	int rw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);


	if (text_content)
	{
		for (nL = 0; text_content[nL]; nL++)
			;
		rw = write(fd, text_content, nL);

		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
