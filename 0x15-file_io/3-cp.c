#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * close_file - error message
 * @file: Exit code
 * 
 */

void close_file(int file)
{
	int a;
	
	a = close(file);
	
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error while closing fle %d\n", file);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: command line arguments
 * @argv: Array command arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, written_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error while reading file %d\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error while writing file %d\n", argv[2]);
		exit(99);
	}

	close_file(file_from);

	close_file(file_to);

	return (0)
}

