#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile- Reads text file and prints to STDOUT.
 * @filename: text file
 * @letters: letters to read
 * Return: actual number of letters read/printed(Success)
 *         0 - NULL or fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t file;
	ssize_t written_bytes;
	ssize_t read_bytes;
	char *buffer;

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file);

		return (0);
	}

	read_bytes = read(file, buffer, letters);

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);

	close(file);

	return (written_bytes);
}
