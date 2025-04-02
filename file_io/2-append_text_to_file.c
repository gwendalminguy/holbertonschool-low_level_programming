#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 if successful ; -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	/* Handling open failure */
	if (fd == -1)
		return (-1);

	while (text_content[bytes])
		bytes++;

	if (bytes != 0)
	{
		bytes_written = write(fd, text_content, bytes);

		/* Handling write failure */
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
