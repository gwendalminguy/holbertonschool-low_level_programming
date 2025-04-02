#include "main.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: name of the file
 * @letters: numbers of letters to read and print
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[letters];
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	ssize_t total_written = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 400);

	/* Handling open failure */
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);

	/* Handling read failure */
	if (bytes_read == -1)
		return (0);

	/* Writing content of buffer to STDOUT */
	bytes_written = write(1, buffer, bytes_read);

	/* Handling write failure */
	if (bytes_written == -1)
		return (0);

	/* Updating number of bytes written */
	total_written += bytes_written;


	close(fd);

	return (total_written);
}
