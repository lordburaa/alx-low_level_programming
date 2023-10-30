#include "main.h"


ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int fd;
	int rd;
	int wr;
	if (filename == NULL)
		return (0);
	 fd = open(filename, O_RDWR);
	 rd = read(fd, buffer, letters);
	 if (rd < 0)
		 return 0;
          wr = write(2, buffer, letters);


return (wr);	

}
