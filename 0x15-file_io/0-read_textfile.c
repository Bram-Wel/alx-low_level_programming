#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
  * read_textfile - Read a text file.
  * @filename: Name of text file.
  * @letters: No. of letters to read.
  *
  * Description: This function reads a given number of letters from
  * a text file and prints it to the std output.
  * Return: No. of letters read and printed. | 0 if file can't be
  * read/printed, filename = NULL and write fails/doesn't write the
  * amount of bytes expected.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff = malloc(letters * sizeof(char));
	size_t bytes, bytes_r;

	if (!filename)
		return (0);
	if (!buff)
	{
		free(buff);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_r = read(fd, buff, letters);
	if ((int)bytes_r < 0)
		return (0);
	close(fd);

	bytes = write(STDOUT_FILENO, buff, letters);
	if ( (int)bytes == -1 || bytes != letters)
		return (0);
	free(buff);

	return (bytes);
}
