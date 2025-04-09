#include "main.h"
#include <stdio.h>

/**
 * error_exit - Prints an error message to stderr and exits with a given code.
 * @code: The exit code.
 * @message: The error message format string.
 * @arg: The argument to include in the error message.
 */

void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: 0 on success, otherwise exit with error code on failure.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to; /* FD for source and destination files */
	ssize_t bytes_read, bytes_written; /* Bytes read and written */
	char buffer[1024]; /* Buffer for reading and writing */

	/* Check the number of arguments */
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	/* Open the source file (file_from) */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	/* Open or create the destination file (file_to) */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	/* Read from source and write to destination in chunks */
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	/* Close both files */
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[1]);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}
