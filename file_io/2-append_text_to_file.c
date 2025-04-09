#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append text to.
 * @text_content: A NULL-terminatted string to add at the end of the file.
 * Return: 1 on success, otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* File descriptor */
	ssize_t bytes_written; /* Number of bytes written */
	size_t len = 0; /* Length of text_content */

	if (filename == NULL) /* Check if filename is NULL */
		return (-1);

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1) /* If opening file fails */
		return (-1);

	/* Handle text_content (write if not NULL) */
	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[len] != '\0')
			len++;

		/* Write text_content to the file */
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1) /* If writing fails */
		{
			close(fd); /* Close the FD before returning */
			return (-1);
		}
	}
	close(fd);

	return (1); /* Return 1 on success */
}
