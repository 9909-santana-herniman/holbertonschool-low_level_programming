#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The maximum number of letters (bytes) to read and print.
 * Return: The actual number of letters it could read and print,
 * or 0 if an error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor */
	/* Number of bytes: read from the file, and written to stdout */
	ssize_t bytes_read, bytes_written;
	char *buffer; /* Buffer to store file content */

	if (filename == NULL) /* Check if filename is NULL */
		return (0);

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* If opening file fails */
		return (0);

	/* Allocate memory for: the buffer, and 'letters' bytes */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* If memory allocation fails */
		return (0); /* If reading fails */

	bytes_read = read(fd, buffer, letters);
	bytes_written =  write(STDOUT_FILENO, buffer, bytes_read);

	close(fd);

	free(buffer);

	return (bytes_written);
}
