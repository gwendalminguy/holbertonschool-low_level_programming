#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *source;
	char *destination;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = argv[1];
	destination = argv[2];

	cp(source, destination);

	return (0);
}

/**
 * cp - copies the content of a file to another file
 * @src: source file
 * @dest: destination file
 */
void cp(const char *src, const char *dest)
{
	int fd_src, fd_dest, fd;
	char buffer[1024];
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;

	/* HELP this is way too long :( */

	/* Opening source file */
	fd_src = open(src, O_RDONLY, 0444);

	/* Handling open failure */
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	/* Opening destination file */
	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	/* Handling open failure */
	if (fd_dest == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", dest);
		exit(98);
	}

	/* Reading from source file */
	bytes_read = read(fd_src, buffer, 1024);

	/* Handling read failure */
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	while (bytes_read > 0)
	{
		/* Writing to destination file */
		bytes_written = write(fd_dest, buffer, bytes_read);

		/* Handling write failure */
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}

		bytes_read = read(fd_src, buffer, 1024);

		/* Handling read failure */
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
	}

	fd = close(fd_src);
	fd = close(fd_dest);

	/* Handling close failure */
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
