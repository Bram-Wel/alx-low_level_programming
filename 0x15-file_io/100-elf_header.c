#include "main.h"
#include <stdio.h>
#include <elf.h>

/**
  * main - Program's starting point.
  * @argc: Argument Count.
  * @argv: Argument vactor.
  *
  * Description: This program reads the elf header of an elf
  * file and writes it to stdout.
  * Return: 0.
  */
int main(int argc, char **argv)
{
	int i = 1, fd, fd_c;
	char *buff = malloc(18 * sizeof(char));
	ssize_t bytes_r;

	if (argc < 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	while (argv[i] != 0)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			cant_open(argv[i]);
		bytes_r = read(fd, buff, 18);
		if (bytes_r == -1)
			cant_read(argv[i]);
		check_elf(argv[i], buff);
		printf("ELF Header:\n  Magic:   ");
		print_magic(buff);
		printf("  Class:");
		print_class(buff);
		printf("  Data:");
		print_data(buff);
		printf("  Version:");
		print_version(buff);
		printf("  OS/ABI:");
		print_os_abi(buff);
		printf("  ABI Version:");
		print_abi_v(buff);
		printf("  Type:");
		print_f_type(buff);
		printf("  Entry point address:");
		print_address(buff);
		printf("\n");
		fd_c = close(fd);
		if (fd_c != 0)
			cant_close(fd);
		i++;
	}
	free(buff);
	return (0);
}

/**
  * print_address - Prints Entry point address.
  * @buff: Stores file content.
  */
void print_address(char *buff)
{
	int arch, addr_len;

	if (*(buff + EI_CLASS) == ELFCLASS64)
	{
		arch = 64;
	}
	else if (*(buff + EI_CLASS) == ELFCLASS32)
	{
		arch = 32;
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Unknown Architecture.\n");
		return;
	}

	addr_len = arch / 8;

	if (*(buff + EI_DATA) == ELFDATA2MSB)
	{
		while (addr_len && !*(buff))
			--addr_len, ++buff;
		printf("%17x", *buff & 0xff);
		while (--addr_len > 0)
			printf("%02x", *(++buff) & 0xff);
	}
	else
	{
		buff += addr_len;
		while (addr_len && !*(--buff))
			--addr_len;
		printf("%17x", *buff & 0xff);
		while (--addr_len > 0)
			printf("%02x", *(--buff) & 0xff);
	}
}

/**
  * print_f_type - Prints the file type.
  * @buff: Store file content.
  */
void print_f_type(char *buff)
{
	int i;

	if (*(buff + EI_DATA) == ELFDATA2MSB)
		i = 0x100 * *(buff + 16) + *(buff + 17);
	else
		i = 0x100 * *(buff + 17) + *(buff + 16);

	if (i == ET_NONE)
		printf("%54s\n", "NONE ( No file type)");
	else if (i == ET_REL)
		printf("%54s\n", "REL (Relocatable file)");
	else if (i == ET_EXEC)
		printf("%54s\n", "EXEC (Executable file)");
	else if (i == ET_DYN)
		printf("%54s\n", "DYN (Shared object file)");
	else if (i == ET_CORE)
		printf("%54s\n", "CORE (Core file)");
	else
		printf("%54s\n", "Unknown File type.");
}

/**
  * print_abi_v - Prints ABI Version.
  * @buff: File content.
  */
void print_abi_v(char *buff)
{
	printf("%24u\n", buff[EI_ABIVERSION]);
}

/**
  * print_os_abi - Prints the OS / Application Binary
  * Interface (ABI).
  * @buff: File Content buffer.
  */
void print_os_abi(char *buff)
{
	if (*(buff + EI_OSABI) == ELFOSABI_NONE ||
			*(buff + EI_OSABI) == ELFOSABI_SYSV)
		printf("%43s\n", "UNIX - System V");
	else if (*(buff + EI_OSABI) == ELFOSABI_HPUX)
		printf("%38s\n", "HP-UX");
	else if (*(buff + EI_OSABI) == ELFOSABI_NETBSD)
		printf("%39s\n", "NetBSD");
	else if (*(buff + EI_OSABI) == ELFOSABI_LINUX)
		printf("%38s\n", "Linux");
	else if (*(buff + EI_OSABI) == ELFOSABI_SOLARIS)
		printf("%40s\n", "Solaris");
	else if (*(buff + EI_OSABI) == ELFOSABI_IRIX)
		printf("%37s\n", "IRIX");
	else if (*(buff + EI_OSABI) == ELFOSABI_FREEBSD)
		printf("%40s\n", "FreeBSD");
	else if (*(buff + EI_OSABI) == ELFOSABI_TRU64)
		printf("%41s\n", "TRU64 UNIX");
	else if (*(buff + EI_OSABI) == ELFOSABI_ARM)
		printf("%44s\n", "ARM architecture");
	else
		printf("%50s\n", "Stand-alone (embedded)");
}

/**
  * print_data - Prints data field of ELF file.
  * @buff: Stores file content.
  */
void print_data(char *buff)
{
	if (*(buff + EI_DATA) == ELFDATA2LSB)
		printf("%59s\n", "2's complement, little endian");
	else if (*(buff + EI_DATA) == ELFDATA2MSB)
		printf("%59s\n", "2's complement, big endian");
	else
		dprintf(STDERR_FILENO, "Unknown Data Format.\n");
}

/**
  * print_version - Prints the version no. of the elf.
  * @buff: Stores file content.
  */
void print_version(char *buff)
{
	if (*(buff + EI_VERSION) == EV_CURRENT)
		printf("%38s\n", "1 (current)");
	else
		dprintf(STDERR_FILENO, "Error: Invalid Version.\n");
}

/**
  * print_magic - Print Magic to the stdout.
  * @buff: Buffer storing file content.
  */
void print_magic(char *buff)
{
	int i = 0;

	while (i < 16)
	{
		printf("%02x ", *(buff + i));
		i++;
	}
	printf("\b\n");
}

/**
  * print_class - Prints the class field of an elf file.
  * @buff: Buffer storing file content.
  */
void print_class(char *buff)
{
	char *b32 = "ELF32", *b64 = "ELF64";

	if (*(buff + 4) == 1)
		printf("%34s\n", b32);
	else if (*(buff + 4) == 2)
		printf("%34s\n", b64);
	else
		dprintf(STDERR_FILENO, "Error: Architecture not recorgnised.\n");
}

/**
  * check_elf - Check that file is an elf file.
  * @file: file / Path to file.
  * @buff: Buffer storing file data.
  */
void check_elf(char *file, char *buff)
{
	if (*(buff + 1) != 'E' || *(buff + 2) != 'L' || *(buff + 3) != 'F')
	{
		dprintf(STDERR_FILENO, "Error: %s is not an elf file\n", file);
		exit(98);
	}
}

/**
  * cant_open - Can't open file.
  * @filename: Name of file.
  */
void cant_open(char *filename)
{
	dprintf(STDERR_FILENO, "Can't open file %s\n", filename);
	exit(98);
}

/**
  * cant_read - Can't read from file.
  * @filename: Name of file.
  */
void cant_read(char *filename)
{
	dprintf(STDERR_FILENO, "Can't read file %s\n", filename);
	exit(98);
}

/**
  * cant_close - Can't close file descriptor.
  * @fd: File descriptor.
  */
void cant_close(int fd)
{
	dprintf(STDERR_FILENO, "Can't close file descriptor %d\n", fd);
	exit(98);
}
