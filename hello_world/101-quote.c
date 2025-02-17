#include <stdio.h>
#include <unistd.h>

/**
 * main - print a string without printf or puts 
 *
 * Return: Should return 1.
 */

int main(void)
{
	const char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = sizeof(message) - 1;
	ssize_t bytes_written = write(2, message, len);

	if (bytes_written == -1 || (size_t)bytes_written != len)
	{
	return(1);
	}
	return(1);
}
