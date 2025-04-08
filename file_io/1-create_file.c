#include "main.h"

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd; /* File descriptor */
	ssize_t bytes_written; /* Number of bytes written */
	size_t len = 0; /* Length of text_content */

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file with appropriate flags and permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Handle text_content (write if not NULL) */
	if (text_content != NULL)
	{
		/* Calculate the length of text_context */
		while (text_content[len] != '\0')
			len++;

		/* Write text_content to the file */
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd); /* Close the FD before returning */
			return (-1);
		}
	}
	/* Close the FD */
	close(fd);
	return (1); /*  Return 1 on success */
}
