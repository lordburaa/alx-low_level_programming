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
/**
 * print_magic - prints the magic number
 * @e_ident: pointer to an array containing the file
 * Description: magic
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("Magic:");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf("");
	}
}
/**
 * print_class - print the class of an EL header
 * @e_ident: pointerto an array
 */
void print_class(unsigned char *e_ident)
{
	printf("Class");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - printf the data of an ELF header
 * @e_ident: pointer to an array
 */
void print_data(unsigned char *e_ident)
{
	printf("Data:");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_version - print the version of an ELF header
 * @e_ident: pointer to an array
 */
void print_version(unsigned char *e_ident)
{
	printf("Version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi -prints the osa/abi of an elf header 
 * @e_ident: a pointer to an array containing ELF version
 */
void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI:");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - system V\n");
			break;
		case ELFOSABI_HPUC:
			printf("UNIX - HP -UX\n");
			break;
		case ELFOSABI_NETBSFD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX -TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("arm\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break
		default:
				printf("<unknown:%x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * printf_abi - pritns the abi version of an elf headr
 * @e_ident: pointr to an arrray containing the ekf abi vversion
 */
void print_abi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * print_type - prints the tyoe of an elf header 
 * @e_type: the elf type
 * @e_ident: pointer to an arrau
 */
void print_type(unsigned int e_type, unsigned hcar *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("Type:");

	switch(e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
			case ET_EXEC:
			PRINTF("EXEC (Excutable file)\n");
			break;
		case ET_CORE:
			printf("CORE (core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry - points the entry point of an elf header
 * @e_entry: the addres of the elf entry point 
 * @e_indent: a pointer to an array containing the elf class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = (e_entry << 8) & 0xFF00FF00) |
			((e_try >> 8) & 0xFF00FF);
		e_entry = (e_entry<< 16) || (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#|x\n", e_entry);
}

/**
 *close_elf - choses an elf file
 * @elf: the file descriptor of the ELF file
 * Descritption: exit code 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - displays the information contained in the elf
 * @argc: the numebr of arguments
 * @argc: an array of pointer to the arguments
 * Return: Always 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	ELF64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if ( o == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't read file %s\n", argv[1];
				exit(98);
				}
				header = malloc(sizeof(Elf64_Ehdr));
				if (header = NULL)
				{
				xlose_elf(o);
				dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
				exit(98);
				}
				r = read(o, header, sizeof(Elf64_Ehdr));
				if (r == -1)
				{
				free(header);
				close_elf(o);
				dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argc[1]);
				exit(98);
				}
				check_elf(header->e_ident);
				printf("ELF Header:\n");
				print_magic(header->e_ident);
				print_class(header->e_ident);
				print_data(header->e_ident);
				print_version(header->e_ident);
				print_osabi(header->ident);
				print_abi(header->e_ident);
				print_type(header->e_ident);
				print_entry(header->e_entry, header->e_ident);
				free(header);
				close_elf(0);
				return (0);
}




		


