#include "main.h"
#include <stdio.h>

/**
  * main - Program's starting point.
  * @argc: Argument Count.
  * @argv: Argument Vector.
  *
  * Return: 0
  */
int main(int argc, char **argv)
{
	int fd_r, fd_w, fd_c;
	size_t bytes_r, bytes_w;
	char *buff = malloc(1024 * sizeof(char));

	if (!buff)
		return (0);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
		error98(argv[1]);
	bytes_r = read(fd_r, buff, 1024);
	if ((int)bytes_r < 0)
		error98(argv[1]);

	fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_w < 0)
		error99(argv[2]);
	bytes_w = write(fd_w, buff, bytes_r);
	if ((int)bytes_w < 0)
		error99(argv[2]);
	fd_c = close(fd_w);
	if (fd_c != 0)
		error100(fd_w);

	while (bytes_w == 1024)
		bytes_w = subs_read_write(fd_r, buff, argv[1], argv[2]);

	fd_c = close(fd_r);
	if (fd_c != 0)
		error100(fd_r);
	free(buff);

	return (0);
}

/**
  * subs_read_write - Reads and writes subsequently
  * from and to a file.
  * @fd_r: FD_VALUE for read.
  * @buff: Pointer to buffer.
  * @filename1: From file.
  * @filename2: To file.
  *
  * Return: Bytes written to file2.
  */
size_t subs_read_write(int fd_r, char *buff, char *filename1, char *filename2)
{
	size_t bytes_r, bytes_w;
	int fd_w, fd_c;

	bytes_r = read(fd_r, buff, 1024);
	if ((int)bytes_r < 0)
		error98(filename1);

	fd_w = open(filename2, O_WRONLY | O_APPEND);
	if (fd_w < 0)
		error99(filename2);

	bytes_w = write(fd_w, buff, bytes_r);
	if ((int)bytes_w < 0)
		error99(filename2);

	fd_c = close(fd_w);
	if (fd_c != 0)
		error100(fd_w);

	return (bytes_w);
}

/**
  * error98 - Prints error message exiting with status
  * 98.
  * @filename: Name of file.
  */
void error98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
  * error99 - Prints error message exiting with status
  * 99.
  * @filename: Name of file.
  */
void error99(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
  * error100 - Prints error msg and exits with status
  * 100.
  * @fd: File descriptor value/FD_VALUE.
  */
void error100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
