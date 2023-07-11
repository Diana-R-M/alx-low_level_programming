#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 * @filename: pointer
 * @text_content: pointer to write to file
 * Return: 1 (Success) or -1 (Fail)
 */

int create_file(const char *filename, char *text_content)
{
	int file, written_bytes = 0;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}

	while (text_content != NULL)
	{
		for (len = 0; text_content[len];)

			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	written_bytes = write(file, text_content, len);

	if (file == -1 || written_bytes == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
