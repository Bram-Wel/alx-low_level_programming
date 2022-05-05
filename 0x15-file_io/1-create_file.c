#include "main.h"

/**
  * create_file - Creates a file.
  * @filename: Name of the file.
  * @text_content: String to write to file.
  *
  * Description: This function creates a new file with 600 permisions
  * and initialises it with text input. OR .Truncates already existing file.
  * OR . Creates emptyfile if @text_content = NULL.
  * Return: 1 on success | -1 on failure / filename = NULL.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	while (*(text_content + count) != 0)
		count++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, count);

	close(fd);

	return (1);
}
