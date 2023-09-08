/*
 * File: 100-elf_header.c
 * Auth: B
 */
#include <elf.h>
#include <sys/types.h>
#include <sys/start.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_magic(int elf);
/**
 * check_elf -  check if it file
 * @e_ident: pointer to an array
 * Description: if not file exit code 98
 */

void check_elf(unsigned char *e_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 && e_ident[idx] != 'E' && e_ident[idx] != 'L'
				&& e_indent[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
