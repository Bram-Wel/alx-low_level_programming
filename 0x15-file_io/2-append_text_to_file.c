#include "main.h"

/**
  * append_text_to_file - Appends text at the end of a file.
  * @filename: Name of file.
  * @text_content: String appended to file.
  *
  * Description: Text is appended to file. The file is not created if it doen't
  * exist.
  * Return: 1 on success/file already exists | -1 on failure.OR
  * .filename = NULL. OR .file doesn't exist/lack of permissions.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (; *(text_content + count) != 0; count++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}

	write(fd, text_content, count);

	close(fd);

	return (1);
}
