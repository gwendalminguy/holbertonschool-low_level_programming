#include "main.h"

/**
 * create_file - creates a file and write text
 * @filename: name of the file
 * @text_content: text to write to the file
 *
 * Return: 1 if successful ; -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, 0600);

	/* Handling open failure */
	if (fd == -1)
		return (-1);

	/* Counting bytes in text_content */
	while (text_content[bytes])
		bytes++;

	if (bytes != 0 && text_content != NULL)
	{
		/* Writing text_content to the file */
		bytes_written = write(fd, text_content, bytes);

		/* Handling write failure */
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
