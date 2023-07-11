#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at a files.
 * @filename: Pointer
 * @text_content: string pointer to append
 * Return: 1 (Success) or -1 (Fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, written_bytes = 0;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])

			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	written_bytes = write(file, text_content, len);

	if (file == -1 || written_bytes == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
