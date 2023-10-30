#ifndef MAIN_FIO
#define MAIN_FIO

/** HEADER FILE **/
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t lettters);
int create_file(const char *filename, char *text_content);
int _putchar(char c);
#endif
