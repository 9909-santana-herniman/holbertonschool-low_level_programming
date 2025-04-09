#include "main.h"
#include <stdio.h>

/**
 * error_file - Handles errors related to opening files.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 * @argv: Arguments vector (contains filenames).
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1) /* Error opening source file */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1) /* Error opening destination file */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments (contains filenames).
 * Return: Always 0 on success, otherwise exits with specific code.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int error_close;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3) /* Check if correct number of arguments is provided */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY); /* Open the source file in RDONLY */
	/* Open or create the destination file in write mode */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(fd_from, fd_to, argv); /* Handle errors related to opening */
	bytes_read = 1024;
	/* Copy data from src to dest in chunks of up to 1024 bytes */
	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
			error_file(-1, 0, argv);

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_file(0, -1, argv);
	}
	/* Close both files and handle errors during closing */
	error_close = close(fd_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	error_close = close(fd_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
